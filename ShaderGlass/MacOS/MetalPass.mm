#include "MetalPass.h"

#include "GLSL.h"

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>

#include <spirv_cross_c.h>

#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>
#include <stdexcept>

static constexpr NSUInteger kVertexBufferIndex = 30;

static void releaseMetalObject(void*& obj)
{
    if(obj)
    {
        id released = (__bridge_transfer id)obj;
        (void)released;
        obj = nullptr;
    }
}

static std::string spirvToMSL(const std::vector<uint32_t>& spirv,
                               bool fragment)
{
    spvc_context ctx = nullptr;
    if(spvc_context_create(&ctx) != SPVC_SUCCESS)
        throw std::runtime_error("SPIRV-Cross context creation failed");

    spvc_parsed_ir ir = nullptr;
    spvc_result result = spvc_context_parse_spirv(
        ctx, spirv.data(), spirv.size(), &ir);

    if(result != SPVC_SUCCESS)
    {
        const char* err = spvc_context_get_last_error_string(ctx);
        spvc_context_destroy(ctx);
        throw std::runtime_error(
            std::string("SPIRV-Cross parse failed: ") + err);
    }

    spvc_compiler compiler = nullptr;
    result = spvc_context_create_compiler(ctx, SPVC_BACKEND_MSL, ir,
                                          SPVC_CAPTURE_MODE_TAKE_OWNERSHIP, &compiler);
    if(result != SPVC_SUCCESS)
    {
        const char* err = spvc_context_get_last_error_string(ctx);
        spvc_context_destroy(ctx);
        throw std::runtime_error(
            std::string("SPIRV-Cross compiler creation failed: ") + err);
    }

    spvc_compiler_options opts = nullptr;
    spvc_compiler_create_compiler_options(compiler, &opts);

    spvc_compiler_options_set_uint(opts, SPVC_COMPILER_OPTION_MSL_VERSION,
                                   SPVC_MAKE_MSL_VERSION(2, 4, 0));
    spvc_compiler_options_set_uint(opts, SPVC_COMPILER_OPTION_MSL_PLATFORM,
                                   SPVC_MSL_PLATFORM_MACOS);
    spvc_compiler_options_set_bool(opts,
        SPVC_COMPILER_OPTION_MSL_ENABLE_DECORATION_BINDING, SPVC_TRUE);

    spvc_msl_resource_binding_2 pushBinding;
    spvc_msl_resource_binding_init_2(&pushBinding);
    pushBinding.stage = fragment ? SpvExecutionModelFragment
                                 : SpvExecutionModelVertex;
    pushBinding.desc_set = SPVC_MSL_PUSH_CONSTANT_DESC_SET;
    pushBinding.binding = SPVC_MSL_PUSH_CONSTANT_BINDING;
    pushBinding.count = 1;
    pushBinding.msl_buffer = 1;
    pushBinding.msl_texture = 0;
    pushBinding.msl_sampler = 0;
    spvc_compiler_msl_add_resource_binding_2(compiler, &pushBinding);

    if(fragment)
        spvc_compiler_options_set_bool(opts,
            SPVC_COMPILER_OPTION_MSL_CAPTURE_OUTPUT_TO_BUFFER, SPVC_FALSE);

    spvc_compiler_install_compiler_options(compiler, opts);

    const char* source = nullptr;
    result = spvc_compiler_compile(compiler, &source);
    if(result != SPVC_SUCCESS)
    {
        const char* err = spvc_context_get_last_error_string(ctx);
        spvc_context_destroy(ctx);
        throw std::runtime_error(
            std::string("SPIRV-Cross MSL compile failed: ") + err);
    }

    std::string msl(source ? source : "");

    spvc_context_destroy(ctx);
    return msl;
}

std::string MetalPass::presetParam(const char* key) const
{
    auto it = m_shaderDef.PresetParams.find(key);
    if(it == m_shaderDef.PresetParams.end()) return {};
    return it->second;
}

MetalPass::MetalPass(MetalCore& mc, ShaderDef& shaderDef, bool preprocess,
                     bool floatBuffer)
    : m_shaderDef(shaderDef)
    , m_preprocess(preprocess)
    , m_floatBuffer(floatBuffer)
    , m_device(&mc)
{
    size_t cs = m_shaderDef.ParamsSize(0), ps = m_shaderDef.ParamsSize(-1);
    m_hasConst = (cs > 0); m_hasPush = (ps > 0);
    if(m_hasConst) m_uboData.resize(cs);
    if(m_hasPush) m_pushData.resize(ps);
    for(auto& p : m_shaderDef.Params) setParam(p.name, &p.defaultValue);

    memset(&m_mvp, 0, sizeof(m_mvp));
    m_mvp.m[0][0] = 2.0f; m_mvp.m[1][1] = 2.0f;
    m_mvp.m[2][2] = 1.0f;
    m_mvp.m[3][0] = -1.0f; m_mvp.m[3][1] = -1.0f; m_mvp.m[3][3] = 1.0f;

    for(auto& s : m_shaderDef.Samplers)
        if(s.name == "Source") { m_srcBinding = s.binding; break; }

    if(m_preprocess)
    {
        memcpy(&m_cursorMVP, &m_mvp, sizeof(m_cursorMVP));
    }

    compileShaders(mc);
    createBuffers(mc);
    buildSourceSampler(mc);
}

MetalPass::~MetalPass()
{
    releaseMetalObject(m_pipelineState);
    releaseMetalObject(m_constBuf);
    releaseMetalObject(m_pushBuf);
    releaseMetalObject(m_vertBuf);
    releaseMetalObject(m_sourceSampler);
}

void MetalPass::setForceLinear(bool force)
{
    if(m_forceLinear == force) return;
    m_forceLinear = force;
    // The source sampler is built once in the constructor. Rebuild it
    // here so the new filter setting actually takes effect.
    if(m_device)
        buildSourceSampler(*m_device);
}

void MetalPass::buildSourceSampler(MetalCore& mc)
{
    releaseMetalObject(m_sourceSampler);

    TextureSamplerSettings settings;
    // m_forceLinear overrides the per-pass filter_linear so the UI's
    // global Filter dropdown can force bilinear on every pass.
    if(m_forceLinear ||
       presetParam("filter_linear") == "true" || presetParam("filter_linear") == "1")
        settings.linear = true;
    if(presetParam("mipmap_input") == "true" || presetParam("mipmap_input") == "1")
        settings.mipmap = true;

    auto wrap = presetParam("wrap_mode");
    if(wrap == "repeat") settings.repeat = true;
    else if(wrap == "mirrored_repeat") settings.mirror = true;
    else if(wrap == "clamp_to_edge" || wrap == "clamp") settings.clamp = true;
    else if(wrap == "clamp_to_border")
    {
        // Metal has no clamp_to_border; fall back to clamp and log once.
        static bool logged = false;
        if(!logged)
        {
            std::cerr << "[MetalPass] wrap_mode=clamp_to_border not supported; "
                         "using clamp_to_edge" << std::endl;
            logged = true;
        }
        settings.clamp = true;
    }

    MTLSamplerDescriptor* sd = [MTLSamplerDescriptor new];
    MTLSamplerMinMagFilter filter = settings.linear
        ? MTLSamplerMinMagFilterLinear
        : MTLSamplerMinMagFilterNearest;
    sd.minFilter = filter;
    sd.magFilter = filter;
    if(settings.mipmap)
        sd.mipFilter = MTLSamplerMipFilterLinear;
    else
        sd.mipFilter = MTLSamplerMipFilterNotMipmapped;

    MTLSamplerAddressMode mode = MTLSamplerAddressModeClampToEdge;
    if(settings.repeat) mode = MTLSamplerAddressModeRepeat;
    else if(settings.mirror) mode = MTLSamplerAddressModeMirrorRepeat;
    sd.sAddressMode = mode;
    sd.tAddressMode = mode;

    id<MTLSamplerState> samp = [mc.device newSamplerStateWithDescriptor:sd];
    m_sourceSampler = (__bridge_retained void*)samp;
}

TextureSamplerSettings MetalPass::samplerSettingsFor(const std::string& name) const
{
    TextureSamplerSettings settings;

    // The "Source" sampler is the per-pass source; settings are derived
    // directly from the pass's PresetParams (filter_linear / wrap_mode).
    if(name == "Source")
    {
        if(presetParam("filter_linear") == "true" || presetParam("filter_linear") == "1")
            settings.linear = true;
        if(presetParam("mipmap_input") == "true" || presetParam("mipmap_input") == "1")
            settings.mipmap = true;
        auto wrap = presetParam("wrap_mode");
        if(wrap == "repeat") settings.repeat = true;
        else if(wrap == "mirrored_repeat") settings.mirror = true;
        else if(wrap == "clamp_to_edge" || wrap == "clamp") settings.clamp = true;
        else if(wrap == "clamp_to_border") settings.clamp = true;
        return settings;
    }

    // For other samplers the chain may have populated an entry keyed by
    // a TextureDef name. That map is held by the chain and the chain code
    // passes the appropriate sampler into the pass; this function is here
    // as a hook for future per-slot sampler overrides.
    return settings;
}

void MetalPass::compileShaders(MetalCore& mc)
{
    auto& sd = m_shaderDef;

    id<MTLDevice> device = mc.device;

    std::vector<uint32_t> vSPIRV, fSPIRV;

    if(sd.FragmentByteCode && sd.FragmentLength > 0)
    {
        size_t words = sd.FragmentLength / sizeof(uint32_t);
        fSPIRV.assign(
            reinterpret_cast<const uint32_t*>(sd.FragmentByteCode),
            reinterpret_cast<const uint32_t*>(sd.FragmentByteCode) + words);
    }
    if(sd.VertexByteCode && sd.VertexLength > 0)
    {
        size_t words = sd.VertexLength / sizeof(uint32_t);
        vSPIRV.assign(
            reinterpret_cast<const uint32_t*>(sd.VertexByteCode),
            reinterpret_cast<const uint32_t*>(sd.VertexByteCode) + words);
    }

    if(vSPIRV.empty() && sd.VertexSource)
    {
        std::ostringstream log;
        bool warn = false;
        vSPIRV = GLSL::GenerateSPIRV(sd.VertexSource, false, log, warn);
        if(warn)
            std::cerr << "[MetalPass] Vertex GLSL warnings:\n" << log.str() << std::endl;
    }

    if(fSPIRV.empty() && sd.FragmentSource)
    {
        std::ostringstream log;
        bool warn = false;
        fSPIRV = GLSL::GenerateSPIRV(sd.FragmentSource, true, log, warn);
        if(warn)
            std::cerr << "[MetalPass] Fragment GLSL warnings:\n" << log.str() << std::endl;
    }

    if(vSPIRV.empty() || fSPIRV.empty())
        throw std::runtime_error("[MetalPass] No SPIR-V bytecode available");

    std::string vMSL = spirvToMSL(vSPIRV, false);
    std::string fMSL = spirvToMSL(fSPIRV, true);

    NSError* err = nil;

    NSString* vSrc = [NSString stringWithUTF8String:vMSL.c_str()];
    id<MTLLibrary> vLib = [device newLibraryWithSource:vSrc
                                                options:nil error:&err];
    if(!vLib)
    {
        std::cerr << "[MetalPass] Vertex MSL:\n" << vMSL << std::endl;
        throw std::runtime_error(
            std::string("Vertex library compile failed: ") +
            (err ? err.localizedDescription.UTF8String : "unknown"));
    }

    NSString* fSrc = [NSString stringWithUTF8String:fMSL.c_str()];
    id<MTLLibrary> fLib = [device newLibraryWithSource:fSrc
                                                options:nil error:&err];
    if(!fLib)
    {
        std::cerr << "[MetalPass] Fragment MSL:\n" << fMSL << std::endl;
        throw std::runtime_error(
            std::string("Fragment library compile failed: ") +
            (err ? err.localizedDescription.UTF8String : "unknown"));
    }

    id<MTLFunction> vFunc = [vLib newFunctionWithName:@"main0"];
    id<MTLFunction> fFunc = [fLib newFunctionWithName:@"main0"];
    if(!vFunc)
        vFunc = [vLib newFunctionWithName:@"main"];
    if(!fFunc)
        fFunc = [fLib newFunctionWithName:@"main"];

    if(!vFunc || !fFunc)
        throw std::runtime_error("[MetalPass] Missing Metal shader entry point");

    MTLRenderPipelineDescriptor* pd = [MTLRenderPipelineDescriptor new];
    pd.vertexFunction   = vFunc;
    pd.fragmentFunction = fFunc;
    pd.colorAttachments[0].pixelFormat = m_floatBuffer
        ? MTLPixelFormatRGBA16Float
        : MTLPixelFormatBGRA8Unorm;
    pd.colorAttachments[0].blendingEnabled = NO;

    MTLVertexDescriptor* vd = [MTLVertexDescriptor vertexDescriptor];
    vd.attributes[0].format      = MTLVertexFormatFloat4;
    vd.attributes[0].offset      = 0;
    vd.attributes[0].bufferIndex = kVertexBufferIndex;
    vd.attributes[1].format      = MTLVertexFormatFloat2;
    vd.attributes[1].offset      = 16;
    vd.attributes[1].bufferIndex = kVertexBufferIndex;
    vd.layouts[kVertexBufferIndex].stride       = 24;
    vd.layouts[kVertexBufferIndex].stepFunction = MTLVertexStepFunctionPerVertex;
    pd.vertexDescriptor = vd;

    id<MTLRenderPipelineState> ps =
        [device newRenderPipelineStateWithDescriptor:pd error:&err];
    if(!ps)
        throw std::runtime_error(
            std::string("Pipeline state failed: ") +
            (err ? err.localizedDescription.UTF8String : "unknown"));

    m_pipelineState = (__bridge_retained void*)ps;
}

void MetalPass::createBuffers(MetalCore& mc)
{
    id<MTLDevice> device = mc.device;

    const size_t vertSize = sizeof(VD);
    id<MTLBuffer> vb = [device newBufferWithBytes:VD length:vertSize
                                           options:MTLResourceStorageModeManaged];
    m_vertBuf = (__bridge_retained void*)vb;

    if(m_hasConst)
    {
        size_t sz = m_shaderDef.ParamsSize(0);
        id<MTLBuffer> cb = [device newBufferWithLength:sz
                                                options:MTLResourceStorageModeManaged];
        m_constBuf = (__bridge_retained void*)cb;
    }

    if(m_hasPush)
    {
        size_t sz = m_shaderDef.ParamsSize(-1);
        id<MTLBuffer> pb = [device newBufferWithLength:sz
                                                options:MTLResourceStorageModeManaged];
        m_pushBuf = (__bridge_retained void*)pb;
    }
}

void MetalPass::render(MetalCore& mc,
                        void* sourceTexture, void* sourceSampler,
                        const std::map<std::string, void*>& resources,
                        const std::map<std::string, void*>& resourceSamplers,
                        int frameCount, int boxX, int boxY, int destW, int destH,
                        void* rpDesc)
{
    id<MTLCommandBuffer> cmdBuf = mc.currentCommandBuffer;
    MTLRenderPassDescriptor* passDesc = (__bridge MTLRenderPassDescriptor*)rpDesc;
    id<MTLRenderPipelineState> ps = (__bridge id<MTLRenderPipelineState>)m_pipelineState;
    id<MTLBuffer> vertBuf = (__bridge id<MTLBuffer>)m_vertBuf;
    id<MTLBuffer> constBuf = (__bridge id<MTLBuffer>)m_constBuf;
    id<MTLBuffer> pushBuf  = (__bridge id<MTLBuffer>)m_pushBuf;

    id<MTLRenderCommandEncoder> enc =
        [cmdBuf renderCommandEncoderWithDescriptor:passDesc];

    [enc setRenderPipelineState:ps];

    id<MTLTexture> target = passDesc.colorAttachments[0].texture;
    if(destW <= 0) destW = (int)target.width;
    if(destH <= 0) destH = (int)target.height;

    MTLViewport vp = { (double)boxX, (double)boxY,
        (double)destW, (double)destH, 0.0, 1.0 };
    [enc setViewport:vp];

    MTLScissorRect scissor = {
        (NSUInteger)std::max(0, boxX),
        (NSUInteger)std::max(0, boxY),
        (NSUInteger)std::max(0, destW),
        (NSUInteger)std::max(0, destH)
    };
    [enc setScissorRect:scissor];

    [enc setVertexBuffer:vertBuf offset:0 atIndex:kVertexBufferIndex];

    setParam("MVP", &m_mvp);
    setParam("FrameCount", &frameCount);

    if(m_hasConst)
    {
        float* cbuf = (float*)[constBuf contents];
        memcpy(cbuf, m_uboData.data(), m_uboData.size());
        [constBuf didModifyRange:NSMakeRange(0, m_uboData.size())];
        [enc setVertexBuffer:constBuf offset:0 atIndex:0];
        [enc setFragmentBuffer:constBuf offset:0 atIndex:0];
    }

    if(m_hasPush)
    {
        float* pbuf = (float*)[pushBuf contents];
        memcpy(pbuf, m_pushData.data(), m_pushData.size());
        [pushBuf didModifyRange:NSMakeRange(0, m_pushData.size())];
        [enc setVertexBuffer:pushBuf offset:0 atIndex:1];
        [enc setFragmentBuffer:pushBuf offset:0 atIndex:1];
    }

    // Source binding: chain passes a per-pass source sampler.
    if(sourceTexture && m_srcBinding >= 0)
        [enc setFragmentTexture:(__bridge id<MTLTexture>)sourceTexture
                        atIndex:m_srcBinding];

    if(sourceSampler && m_srcBinding >= 0)
        [enc setFragmentSamplerState:(__bridge id<MTLSamplerState>)sourceSampler
                             atIndex:m_srcBinding];

    for(auto& [name, tex] : resources)
    {
        int idx = -1;
        for(auto& s : m_shaderDef.Samplers)
            if(s.name == name) { idx = s.binding; break; }
        if(idx >= 0 && tex)
            [enc setFragmentTexture:(__bridge id<MTLTexture>)tex atIndex:idx];
    }

    for(auto& [name, samp] : resourceSamplers)
    {
        int idx = -1;
        for(auto& s : m_shaderDef.Samplers)
            if(s.name == name) { idx = s.binding; break; }
        if(idx >= 0 && samp)
            [enc setFragmentSamplerState:(__bridge id<MTLSamplerState>)samp
                                 atIndex:idx];
    }

    [enc drawPrimitives:MTLPrimitiveTypeTriangleStrip
            vertexStart:4 vertexCount:4];
    [enc endEncoding];
}

void MetalPass::resize(int srcW, int srcH, int dstW, int dstH,
                        const std::map<std::string, float4>& texSizes,
                        const std::vector<std::array<uint32_t, 4>>& passSizes)
{
    m_destW = dstW; m_destH = dstH;

    float s[4] = {(float)srcW, (float)srcH, 1.0f/srcW, 1.0f/srcH};
    float d[4] = {(float)dstW, (float)dstH, 1.0f/dstW, 1.0f/dstH};
    setParam("SourceSize", s); setParam("OutputSize", d);

    for(auto& t : texSizes) setParam(t.first + "Size", (void*)&t.second);
    for(size_t i = 0; i < passSizes.size(); i++)
    {
        float f[4] = {(float)passSizes[i][0], (float)passSizes[i][1],
                       (float)passSizes[i][2], (float)passSizes[i][3]};
        setParam("PassOutputSize" + std::to_string(i), f);
    }
}

void MetalPass::updateMVP(float sx, float sy, float tx, float ty)
{
    memset(&m_mvp, 0, sizeof(m_mvp));
    m_mvp.m[0][0] = sx;
    m_mvp.m[1][1] = sy;
    m_mvp.m[2][2] = 1.0f;
    m_mvp.m[3][0] = tx;
    m_mvp.m[3][1] = ty;
    m_mvp.m[3][3] = 1.0f;
}

void MetalPass::setParam(const std::string& name, const void* v)
{
    for(auto& p : m_shaderDef.Params)
    {
        if(p.name == name)
        {
            uint8_t* buf = (p.buffer == -1) ? m_pushData.data() : m_uboData.data();
            if(buf)
            {
                size_t maxSz = (p.buffer == -1) ? m_pushData.size() : m_uboData.size();
                if((size_t)(p.offset + p.size) <= maxSz)
                {
                    if(p.size == 4) p.currentValue = *(const float*)v;
                    memcpy(buf + p.offset, v, p.size);
                }
            }
        }
    }
}

void MetalPass::fillParams(int buffer, void* data)
{
    auto& src = (buffer == -1) ? m_pushData : m_uboData;
    if(!src.empty()) memcpy(data, src.data(), src.size());
}

void MetalPass::syncParams()
{
    for(auto& p : m_shaderDef.Params)
    {
        if(p.size != 4) continue;
        uint8_t* buf = (p.buffer == -1) ? m_pushData.data() : m_uboData.data();
        size_t   sz  = (p.buffer == -1) ? m_pushData.size() : m_uboData.size();
        if(buf && (size_t)(p.offset + p.size) <= sz)
            memcpy(buf + p.offset, &p.currentValue, p.size);
    }
}

bool MetalPass::requiresFeedback() const
{
    for(auto& s : m_shaderDef.Samplers)
    {
        if(s.name.find("PassFeedback") == 0)
            return true;
        if(s.name.size() >= 8 &&
           s.name.compare(s.name.size() - 8, 8, "Feedback") == 0)
            return true;
    }
    return false;
}

int MetalPass::requiresHistory() const
{
    int maxH = 0;
    for(auto& s : m_shaderDef.Samplers)
    {
        if(s.name.find("OriginalHistory") == 0)
        {
            // OriginalHistory0 maps to Original; never allocate.
            int h = atoi(s.name.c_str() + 15);
            if(h > maxH) maxH = h;
        }
    }
    return maxH;
}

std::vector<ShaderParam*> MetalPass::params()
{
    std::vector<ShaderParam*> r;
    for(auto& p : m_shaderDef.Params) r.push_back(&p);
    return r;
}
