#include "MetalPass.h"

#import <Metal/Metal.h>

#include <spirv_cross_c.h>

#include <cstring>
#include <iostream>
#include <sstream>
#include <stdexcept>

static std::string spirvToMSL(const std::vector<uint32_t>& spirv,
                               bool fragment)
{
    spvc_context ctx = nullptr;
    spvc_context_create(&ctx);

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
    spvc_context_create_compiler(ctx, SPVC_BACKEND_MSL, ir,
                                  SPVC_CAPTURE_MODE_TAKE_OWNERSHIP, &compiler);

    spvc_compiler_options opts = nullptr;
    spvc_compiler_create_compiler_options(compiler, &opts);

    spvc_compiler_options_set_uint(opts, SPVC_COMPILER_OPTION_MSL_VERSION,
                                   SPVC_MAKE_MSL_VERSION(2, 4, 0));
    spvc_compiler_options_set_uint(opts, SPVC_COMPILER_OPTION_MSL_PLATFORM,
                                   SPVC_MSL_PLATFORM_MACOS);
    spvc_compiler_options_set_bool(opts,
        SPVC_COMPILER_OPTION_MSL_ENABLE_DECORATION_BINDING, SPVC_TRUE);

    if(fragment)
        spvc_compiler_options_set_bool(opts,
            SPVC_COMPILER_OPTION_MSL_CAPTURE_OUTPUT_TO_BUFFER, SPVC_FALSE);

    spvc_compiler_install_compiler_options(compiler, opts);

    const char* source = nullptr;
    spvc_compiler_compile(compiler, &source);

    std::string msl(source ? source : "");

    spvc_context_destroy(ctx);
    return msl;
}

MetalPass::MetalPass(MetalCore& mc, ShaderDef& shaderDef,
                     const std::map<std::string, TextureSamplerSettings>& texSettings,
                     bool preprocess)
    : m_shaderDef(shaderDef)
    , m_texSettings(texSettings)
    , m_preprocess(preprocess)
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

    if(m_preprocess)
    {
        memcpy(&m_cursorMVP, &m_mvp, sizeof(m_cursorMVP));
        for(auto& s : m_shaderDef.Samplers)
            if(s.name == "Source") { m_srcBinding = s.binding; break; }
    }

    compileShaders(mc);
    createBuffers(mc);
}

MetalPass::~MetalPass() = default;

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

    if(!vFunc || !fFunc)
        throw std::runtime_error("[MetalPass] Missing main0 entry point");

    MTLRenderPipelineDescriptor* pd = [MTLRenderPipelineDescriptor new];
    pd.vertexFunction   = vFunc;
    pd.fragmentFunction = fFunc;
    pd.colorAttachments[0].pixelFormat = MTLPixelFormatBGRA8Unorm;
    pd.colorAttachments[0].blendingEnabled = NO;

    MTLVertexDescriptor* vd = [MTLVertexDescriptor vertexDescriptor];
    vd.attributes[0].format      = MTLVertexFormatFloat4;
    vd.attributes[0].offset      = 0;
    vd.attributes[0].bufferIndex = 0;
    vd.attributes[1].format      = MTLVertexFormatFloat2;
    vd.attributes[1].offset      = 16;
    vd.attributes[1].bufferIndex = 0;
    vd.layouts[0].stride         = 24;
    vd.layouts[0].stepFunction   = MTLVertexStepFunctionPerVertex;
    pd.vertexDescriptor = vd;

    id<MTLRenderPipelineState> ps =
        [device newRenderPipelineStateWithDescriptor:pd error:&err];
    if(!ps)
        throw std::runtime_error(
            std::string("Pipeline state failed: ") +
            (err ? err.localizedDescription.UTF8String : "unknown"));

    m_pipelineState = (__bridge void*)ps;
}

void MetalPass::createBuffers(MetalCore& mc)
{
    id<MTLDevice> device = mc.device;

    const size_t vertSize = sizeof(VD);
    id<MTLBuffer> vb = [device newBufferWithBytes:VD length:vertSize
                                           options:MTLResourceStorageModeManaged];
    m_vertBuf = (__bridge void*)vb;

    if(m_hasConst)
    {
        size_t sz = m_shaderDef.ParamsSize(0);
        id<MTLBuffer> cb = [device newBufferWithLength:sz
                                                options:MTLResourceStorageModeManaged];
        m_constBuf = (__bridge void*)cb;
    }

    if(m_hasPush)
    {
        size_t sz = m_shaderDef.ParamsSize(-1);
        id<MTLBuffer> pb = [device newBufferWithLength:sz
                                                options:MTLResourceStorageModeManaged];
        m_pushBuf = (__bridge void*)pb;
    }

    id<MTLBuffer> mb = [device newBufferWithLength:sizeof(float4x4)
                                            options:MTLResourceStorageModeManaged];
    m_mvpBuf = (__bridge void*)mb;
}

void MetalPass::render(MetalCore& mc,
                        void* sourceTexture, void* sourceSampler,
                        const std::map<std::string, void*>& resources,
                        const std::map<std::string, void*>& resourceSamplers,
                        int frameCount, int boxX, int boxY, int destW, int destH,
                        void* rpDesc)
{
    (void)frameCount; (void)boxX; (void)boxY; (void)destW; (void)destH;

    id<MTLCommandBuffer> cmdBuf = mc.currentCommandBuffer;
    MTLRenderPassDescriptor* passDesc = (__bridge MTLRenderPassDescriptor*)rpDesc;
    id<MTLRenderPipelineState> ps = (__bridge id<MTLRenderPipelineState>)m_pipelineState;
    id<MTLBuffer> vertBuf = (__bridge id<MTLBuffer>)m_vertBuf;
    id<MTLBuffer> mvpBuf  = (__bridge id<MTLBuffer>)m_mvpBuf;
    id<MTLBuffer> constBuf = (__bridge id<MTLBuffer>)m_constBuf;
    id<MTLBuffer> pushBuf  = (__bridge id<MTLBuffer>)m_pushBuf;

    id<MTLRenderCommandEncoder> enc =
        [cmdBuf renderCommandEncoderWithDescriptor:passDesc];

    [enc setRenderPipelineState:ps];

    MTLViewport vp = { 0, 0,
        (double)passDesc.colorAttachments[0].texture.width,
        (double)passDesc.colorAttachments[0].texture.height,
        0.0, 1.0 };
    [enc setViewport:vp];

    [enc setVertexBuffer:vertBuf offset:0 atIndex:0];

    float* dst = (float*)[mvpBuf contents];
    memcpy(dst, &m_mvp, sizeof(float4x4));
    [mvpBuf didModifyRange:NSMakeRange(0, sizeof(float4x4))];
    [enc setVertexBuffer:mvpBuf offset:0 atIndex:1];

    if(m_hasConst)
    {
        fillParams(0, m_uboData.data());
        float* cbuf = (float*)[constBuf contents];
        memcpy(cbuf, m_uboData.data(), m_uboData.size());
        [constBuf didModifyRange:NSMakeRange(0, m_uboData.size())];
        [enc setFragmentBuffer:constBuf offset:0 atIndex:0];
    }

    if(m_hasPush)
    {
        fillParams(-1, m_uboData.data());
        float* pbuf = (float*)[pushBuf contents];
        memcpy(pbuf, m_uboData.data(), m_uboData.size());
        [pushBuf didModifyRange:NSMakeRange(0, m_uboData.size())];
        [enc setFragmentBuffer:pushBuf offset:0 atIndex:1];
    }

    if(sourceTexture)
        [enc setFragmentTexture:(__bridge id<MTLTexture>)sourceTexture
                        atIndex:m_srcBinding];

    if(sourceSampler)
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
            vertexStart:0 vertexCount:4];
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

bool MetalPass::requiresFeedback() const
{
    for(auto& s : m_shaderDef.Samplers)
        if(s.name.find("PassFeedback") == 0)
            return true;
    return false;
}

int MetalPass::requiresHistory() const
{
    int maxH = 0;
    for(auto& s : m_shaderDef.Samplers)
    {
        if(s.name.find("OriginalHistory") == 0)
        {
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
