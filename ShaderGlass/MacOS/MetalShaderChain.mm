#include "MetalShaderChain.h"

#include "PreprocessShader.h"
#include "PassthroughShader.h"
#include "ImageIO.h"

#import <Metal/Metal.h>

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <sstream>

MetalShaderChain::MetalShaderChain(MetalCore& mc) : m_mc(mc) {}

MetalShaderChain::~MetalShaderChain()
{
    destroyPasses(m_mc);
    destroyTargets(m_mc);
    destroyExternalTextures();
    m_fallbackTex.destroy();
}

void MetalShaderChain::setPreset(PresetDef* preset)
{
    m_preset = preset;
    m_rebuildNeeded = true;
    m_texSettings.clear();
}

float MetalShaderChain::presetFloat(const std::map<std::string, std::string>& pp,
                                     const char* key, float fallback)
{
    auto it = pp.find(key);
    if(it == pp.end() || it->second.empty()) return fallback;
    try { return std::stof(it->second); }
    catch(...) { return fallback; }
}

std::string MetalShaderChain::passPresetParam(const ShaderDef& sd, const char* base)
{
    auto it = sd.PresetParams.find(base);
    if(it == sd.PresetParams.end()) return {};
    return it->second;
}

MetalShaderChain::PassMeta MetalShaderChain::buildPassMeta(const ShaderDef& sd)
{
    PassMeta m;
    const auto& pp = sd.PresetParams;

    // scale_x / scale_y, falling back to scale.
    auto scaleXStr = passPresetParam(sd, "scale_x");
    auto scaleYStr = passPresetParam(sd, "scale_y");
    auto scaleStr  = passPresetParam(sd, "scale");
    if(!scaleXStr.empty()) m.scaleX = std::stof(scaleXStr);
    else if(!scaleStr.empty()) m.scaleX = std::stof(scaleStr);
    if(!scaleYStr.empty()) m.scaleY = std::stof(scaleYStr);
    else if(!scaleStr.empty()) m.scaleY = std::stof(scaleStr);

    // scale_type_x / scale_type_y, falling back to scale_type.
    auto stx = passPresetParam(sd, "scale_type_x");
    auto sty = passPresetParam(sd, "scale_type_y");
    auto st  = passPresetParam(sd, "scale_type");
    if(stx == "viewport") m.scaleViewportX = true;
    else if(stx == "absolute") m.scaleAbsoluteX = true;
    if(sty == "viewport") m.scaleViewportY = true;
    else if(sty == "absolute") m.scaleAbsoluteY = true;
    if(st == "viewport")
    {
        m.scaleViewportX = true;
        m.scaleViewportY = true;
    }
    else if(st == "absolute")
    {
        m.scaleAbsoluteX = true;
        m.scaleAbsoluteY = true;
    }

    m.alias = passPresetParam(sd, "alias");

    auto fcm = passPresetParam(sd, "framecount_mod");
    if(!fcm.empty())
    {
        try { m.frameCountMod = static_cast<int>(std::stof(fcm)); }
        catch(...) { m.frameCountMod = 0; }
    }

    return m;
}

const TextureDef* MetalShaderChain::findExternalTexture(const PresetDef& preset,
                                                          const std::string& name)
{
    for(const auto& td : preset.TextureDefs)
    {
        auto it = td.PresetParams.find("name");
        if(it != td.PresetParams.end() && it->second == name)
            return &td;
        if(td.Name == name)
            return &td;
    }
    return nullptr;
}

bool MetalShaderChain::uploadExternalTexture(MetalCore& mc,
                                              const TextureDef& td,
                                              MetalTexture& outTex) const
{
    if(!td.Data || td.DataLength <= 0)
    {
        std::cerr << "[MetalShaderChain] External texture has no data: "
                  << td.Name << std::endl;
        return false;
    }

    ImageData img = ImageIO::loadFromMemory(td.Data, td.DataLength);
    if(!img.valid())
    {
        std::cerr << "[MetalShaderChain] Failed to decode external texture: "
                  << td.Name << std::endl;
        return false;
    }

    TextureSamplerSettings s;
    for(const auto& kv : td.PresetParams)
        s.applyPreset(kv.first.c_str(), kv.second.c_str());

    outTex.create(mc, (uint32_t)img.width, (uint32_t)img.height, false, s);
    if(!outTex.isValid())
        return false;

    outTex.upload(mc, img.pixels.data(), (uint32_t)img.width,
                  (uint32_t)img.height, (uint32_t)img.width * 4);
    return true;
}

void MetalShaderChain::logUnsupportedOnce(const std::string& key, const std::string& msg)
{
    if(m_loggedUnsupported.insert(key).second)
        std::cerr << "[MetalShaderChain] " << msg << std::endl;
}

void MetalShaderChain::logMissingOnce(const std::string& name)
{
    if(m_loggedMissing.insert(name).second)
        std::cerr << "[MetalShaderChain] Missing resource bound to fallback: "
                  << name << std::endl;
}

void MetalShaderChain::rebuild(MetalCore& mc)
{
    destroyPasses(mc);
    destroyTargets(mc);
    destroyExternalTextures();
    m_rebuildNeeded = false;
    m_loggedMissing.clear();
    m_loggedUnsupported.clear();
    m_passMeta.clear();

    PreprocessShaderDef preDef;
    m_preprocessPass = std::make_unique<MetalPass>(mc, preDef, true);
    // The preprocess pass doubles as the final blit (sampling the
    // post-scale m_finalTex onto the drawable). Always force linear
    // filtering so the upscale looks smooth.
    m_preprocessPass->setForceLinear(true);

    m_passes.clear();
    m_passMeta.clear();
    if(m_preset)
    {
        for(auto& sd : m_preset->ShaderDefs)
        {
            // MetalPass copies its ShaderDef internally; the defs live
            // in the PresetDef (which is owned by the app and outlives
            // us), so passing a reference is safe.
            auto pass = std::make_unique<MetalPass>(mc, sd, false);
            m_passes.push_back(std::move(pass));
            m_passMeta.push_back(buildPassMeta(sd));
        }

        // Apply the global filter override to all user passes.
        for(auto& p : m_passes)
            p->setForceLinear(m_forceLinear);

        // Surface unsupported features once per preset.
        for(const auto& sd : m_preset->ShaderDefs)
        {
            for(const auto& kv : sd.PresetParams)
            {
                if(kv.first == "float_framebuffer" && (kv.second == "true" || kv.second == "1"))
                    logUnsupportedOnce("float_framebuffer",
                        "float_framebuffer is not supported; using BGRA8 intermediate textures");
                else if(kv.first == "srgb_framebuffer" && (kv.second == "true" || kv.second == "1"))
                    logUnsupportedOnce("srgb_framebuffer",
                        "srgb_framebuffer is not supported; intermediate textures are sRGB-unorm");
            }
        }
    }

    if(m_viewportW > 0 && m_viewportH > 0)
        rebuildPasses(mc);
}

void MetalShaderChain::destroyPasses(MetalCore& mc)
{
    (void)mc;
    m_preprocessPass.reset();
    m_passes.clear();
    m_passMeta.clear();

    m_resources.clear();
    m_samplers.clear();
    m_texSizes.clear();
    m_passSizes.clear();

    for(auto& t : m_passTexs) t.destroy();
    m_passTexs.clear();
    for(auto& t : m_feedbackTexs) t.destroy();
    m_feedbackTexs.clear();
    for(auto& t : m_historyTexs) t.destroy();
    m_historyTexs.clear();

    m_requiresFeedback = false;
    m_requiresHistory = 0;
}

void MetalShaderChain::destroyTargets(MetalCore& mc)
{
    (void)mc;
    m_preprocessTex.destroy();
    m_finalTex.destroy();
}

void MetalShaderChain::destroyExternalTextures()
{
    for(auto& kv : m_externalTexs)
        kv.second.destroy();
    m_externalTexs.clear();
}

void MetalShaderChain::resize(MetalCore& mc, int captureW, int captureH,
                               int viewportW, int viewportH)
{
    if(m_captureW == captureW && m_captureH == captureH &&
       m_viewportW == viewportW && m_viewportH == viewportH)
    {
        return;
    }

    m_captureW  = captureW;
    m_captureH  = captureH;
    m_viewportW = viewportW;
    m_viewportH = viewportH;
    m_rebuildNeeded = true;
}

void MetalShaderChain::updateMVP(float sx, float sy, float tx, float ty)
{
    m_mvpSX = sx; m_mvpSY = sy;
    m_mvpTX = tx; m_mvpTY = ty;
    if(m_preprocessPass)
        m_preprocessPass->updateMVP(sx, sy, tx, ty);
}

void MetalShaderChain::setForceLinear(bool force)
{
    if(m_forceLinear == force) return;
    m_forceLinear = force;
    // Apply to all current passes and force a rebuild so the per-pass
    // source samplers get rebuilt with the new filter setting.
    for(auto& p : m_passes)
        p->setForceLinear(force);
    m_rebuildNeeded = true;
}

void MetalShaderChain::calculatePassSizes()
{
    m_passSizes.clear();

    m_originalW = m_captureW;
    m_originalH = m_captureH;

    m_texSizes["Original"] = {(float)m_originalW, (float)m_originalH,
                               1.0f/m_originalW, 1.0f/m_originalH};
    m_texSizes["FinalViewport"] = {(float)m_viewportW, (float)m_viewportH,
                                    1.0f/m_viewportW, 1.0f/m_viewportH};

    if(m_passes.empty()) return;

    if(m_preprocessPass)
        m_preprocessPass->resize(m_captureW, m_captureH,
                                  m_originalW, m_originalH, m_texSizes, {});

    uint32_t srcW = m_originalW;
    uint32_t srcH = m_originalH;

    for(size_t p = 0; p < m_passes.size(); p++)
    {
        bool isLast = (p == m_passes.size() - 1);
        uint32_t dstW, dstH;

        if(isLast)
        {
            // Last pass: scale against viewport.
            const auto& meta = m_passMeta[p];
            if(meta.scaleViewportX) dstW = (uint32_t)(m_viewportW * meta.scaleX);
            else if(meta.scaleAbsoluteX) dstW = (uint32_t)meta.scaleX;
            else dstW = (uint32_t)(srcW * meta.scaleX);
            if(meta.scaleViewportY) dstH = (uint32_t)(m_viewportH * meta.scaleY);
            else if(meta.scaleAbsoluteY) dstH = (uint32_t)meta.scaleY;
            else dstH = (uint32_t)(srcH * meta.scaleY);

            if(dstW == 0) dstW = m_viewportW;
            if(dstH == 0) dstH = m_viewportH;
        }
        else
        {
            const auto& meta = m_passMeta[p];
            if(meta.scaleViewportX) dstW = (uint32_t)(m_viewportW * meta.scaleX);
            else if(meta.scaleAbsoluteX) dstW = (uint32_t)meta.scaleX;
            else dstW = (uint32_t)(srcW * meta.scaleX);
            if(meta.scaleViewportY) dstH = (uint32_t)(m_viewportH * meta.scaleY);
            else if(meta.scaleAbsoluteY) dstH = (uint32_t)meta.scaleY;
            else dstH = (uint32_t)(srcH * meta.scaleY);

            if(dstW == 0) dstW = srcW;
            if(dstH == 0) dstH = srcH;
        }

        m_passSizes.push_back({srcW, srcH, dstW, dstH});

        std::string name = "PassOutput" + std::to_string(p);
        m_texSizes[name] = {(float)dstW, (float)dstH, 1.0f/dstW, 1.0f/dstH};

        const auto& meta = m_passMeta[p];
        if(!meta.alias.empty())
        {
            m_texSizes[meta.alias] = {(float)dstW, (float)dstH,
                                       1.0f/dstW, 1.0f/dstH};
            m_texSizes[meta.alias + "Feedback"] = {(float)dstW, (float)dstH,
                                                     1.0f/dstW, 1.0f/dstH};
        }

        srcW = dstW;
        srcH = dstH;
    }

    uint32_t curSrcW = m_originalW;
    uint32_t curSrcH = m_originalH;
    for(size_t p = 0; p < m_passes.size(); p++)
    {
        m_passes[p]->resize(curSrcW, curSrcH,
                            m_passSizes[p][2], m_passSizes[p][3],
                            m_texSizes, m_passSizes);
        curSrcW = m_passSizes[p][2];
        curSrcH = m_passSizes[p][3];
    }
}

void MetalShaderChain::rebuildPasses(MetalCore& mc)
{
    m_resources.clear();
    m_samplers.clear();

    int numPasses = (int)m_passes.size();
    if(numPasses == 0) return;

    calculatePassSizes();

    m_requiresFeedback = false;
    m_requiresHistory = 0;
    for(auto& p : m_passes)
    {
        if(p->requiresFeedback()) m_requiresFeedback = true;
        m_requiresHistory = std::max(m_requiresHistory, p->requiresHistory());
    }

    // Build / rebuild external textures from PresetDef::TextureDefs.
    destroyExternalTextures();
    if(m_preset)
    {
        for(const auto& td : m_preset->TextureDefs)
        {
            // Pick the registration name: preset's "name" param, else
            // TextureDef::Name.
            std::string regName;
            auto it = td.PresetParams.find("name");
            if(it != td.PresetParams.end()) regName = it->second;
            else regName = td.Name;
            if(regName.empty()) continue;

            MetalTexture tex;
            if(uploadExternalTexture(mc, td, tex))
            {
                std::string r = regName;
                m_externalTexs.emplace(std::move(r), std::move(tex));
            }
        }
    }

    // Build 1x1 transparent black fallback (lazy).
    if(!m_fallbackTex.isValid())
    {
        uint8_t zero[4] = {0, 0, 0, 0};
        TextureSamplerSettings fs;
        fs.clamp = true;
        m_fallbackTex.create(mc, 1, 1, false, fs);
        m_fallbackTex.upload(mc, zero, 1, 1, 4);
    }

    destroyTargets(mc);
    m_preprocessTex.create(mc, (uint32_t)m_originalW, (uint32_t)m_originalH, true);
    m_resources["Original"] = m_preprocessTex.texture();
    m_samplers["Original"]  = m_preprocessTex.sampler();
    // OriginalHistory0 is an alias of Original (per plan).
    m_resources["OriginalHistory0"] = m_preprocessTex.texture();
    m_samplers["OriginalHistory0"]  = m_preprocessTex.sampler();

    // Final target for the chain's last pass: sized by the global
    // scale multiplier. The chain's blit step copies m_finalTex
    // onto the drawable with linear filtering.
    {
        uint32_t finalW = std::max(1u, (uint32_t)std::lroundf(
            (float)m_viewportW * m_scale));
        uint32_t finalH = std::max(1u, (uint32_t)std::lroundf(
            (float)m_viewportH * m_scale));
        m_finalTex.create(mc, finalW, finalH, true);
    }

    for(auto& t : m_passTexs) t.destroy();
    m_passTexs.clear();
    for(auto& t : m_feedbackTexs) t.destroy();
    m_feedbackTexs.clear();
    for(auto& t : m_historyTexs) t.destroy();
    m_historyTexs.clear();

    for(int p = 0; p < numPasses; p++)
    {
        uint32_t dstW = m_passSizes[p][2];
        uint32_t dstH = m_passSizes[p][3];
        bool isLast = (p == numPasses - 1);
        const auto& meta = m_passMeta[p];

        if(!isLast)
        {
            MetalTexture tex;
            tex.create(mc, dstW, dstH, true);
            m_passTexs.push_back(std::move(tex));

            std::string name = "PassOutput" + std::to_string(p);
            m_resources[name] = m_passTexs.back().texture();
            m_samplers[name]  = m_passTexs.back().sampler();
            if(!meta.alias.empty())
            {
                m_resources[meta.alias] = m_passTexs.back().texture();
                m_samplers[meta.alias]  = m_passTexs.back().sampler();
            }
        }

        if(m_requiresFeedback)
        {
            MetalTexture fb;
            fb.create(mc, dstW, dstH, false);
            m_feedbackTexs.push_back(std::move(fb));

            std::string fbName = "PassFeedback" + std::to_string(p);
            m_resources[fbName] = m_feedbackTexs.back().texture();
            m_samplers[fbName]  = m_feedbackTexs.back().sampler();
            if(!meta.alias.empty())
            {
                m_resources[meta.alias + "Feedback"] = m_feedbackTexs.back().texture();
                m_samplers[meta.alias + "Feedback"]  = m_feedbackTexs.back().sampler();
            }
        }
    }

    // External textures: register by preset name. Sampler is set per-name
    // by uploadExternalTexture (settings came from the TextureDef's
    // PresetParams).
    for(auto& kv : m_externalTexs)
    {
        m_resources[kv.first] = kv.second.texture();
        m_samplers[kv.first]  = kv.second.sampler();
    }

    if(m_requiresHistory > 0)
    {
        for(int h = 1; h <= m_requiresHistory; h++)
        {
            MetalTexture hist;
            hist.create(mc, (uint32_t)m_originalW, (uint32_t)m_originalH, false);
            m_historyTexs.push_back(std::move(hist));

            std::string hName = "OriginalHistory" + std::to_string(h);
            m_resources[hName] = m_historyTexs.back().texture();
            m_samplers[hName]  = m_historyTexs.back().sampler();
        }
        m_historyWriteIndex = m_requiresHistory - 1;
    }
}

void MetalShaderChain::process(MetalCore& mc,
                                void* inputTexture, void* inputSampler,
                                int frameNo, int logicalFrameNo)
{
    (void)inputSampler; // Source sampler is per-pass now; built from
                        // each pass's PresetParams by MetalPass.
    if(m_rebuildNeeded)
        rebuild(mc);

    if(!m_preprocessPass || m_passes.empty())
        return;

    id<MTLCommandBuffer> cmdBuf = mc.currentCommandBuffer;

    // Preprocess pass: render to intermediate texture
    MTLRenderPassDescriptor* rpDesc = [MTLRenderPassDescriptor renderPassDescriptor];
    rpDesc.colorAttachments[0].texture     = (__bridge id<MTLTexture>)m_preprocessTex.texture();
    rpDesc.colorAttachments[0].loadAction  = MTLLoadActionClear;
    rpDesc.colorAttachments[0].clearColor  = MTLClearColorMake(0, 0, 0, 1);
    rpDesc.colorAttachments[0].storeAction = MTLStoreActionStore;

    m_preprocessPass->render(mc, inputTexture, m_preprocessPass->sourceSampler(),
                              m_resources, m_samplers,
                              logicalFrameNo, 0, 0,
                              m_originalW, m_originalH,
                              (__bridge void*)rpDesc);

    int numPasses = (int)m_passes.size();

    // History rotation: rebind OriginalHistoryN textures so the
    // most-recent frame is N=1.
    if(m_requiresHistory > 0 && !m_historyTexs.empty())
    {
        int historyCount = (int)m_historyTexs.size();
        for(int h = 1; h <= m_requiresHistory; h++)
        {
            int idx = (m_historyWriteIndex - h + historyCount) % historyCount;
            std::string hName = "OriginalHistory" + std::to_string(h);
            m_resources[hName] = m_historyTexs[idx].texture();
            m_samplers[hName]  = m_historyTexs[idx].sampler();
        }
    }

    void* curSrcTex  = m_preprocessTex.texture();
    void* curSrcSamp = m_preprocessTex.sampler();

    // Build per-pass resources: any sampler not found in m_resources gets
    // the fallback texture. This handles shaders that declare e.g. an
    // OriginalHistoryN reference that no other pass needs.
    for(int p = 0; p < numPasses; p++)
    {
        bool isLast = (p == numPasses - 1);
        int dstW = m_passSizes[p][2];
        int dstH = m_passSizes[p][3];

        MTLRenderPassDescriptor* pd = [MTLRenderPassDescriptor renderPassDescriptor];

        if(isLast)
        {
            // The chain's last pass renders to m_finalTex (post-scale),
            // which is then blitted to the drawable below. This lets
            // the user get a higher-resolution CRT effect (clipped to
            // the drawable) without changing the window's pixel size.
            pd.colorAttachments[0].texture =
                (__bridge id<MTLTexture>)m_finalTex.texture();
        }
        else
        {
            pd.colorAttachments[0].texture = (__bridge id<MTLTexture>)m_passTexs[p].texture();
        }

        pd.colorAttachments[0].loadAction  = MTLLoadActionClear;
        pd.colorAttachments[0].clearColor  = MTLClearColorMake(0, 0, 0, 1);
        pd.colorAttachments[0].storeAction = MTLStoreActionStore;

        // Resolve any unresolved samplers to the fallback.
        std::map<std::string, void*> resources = m_resources;
        std::map<std::string, void*> samplers = m_samplers;
        for(const auto& s : m_passes[p]->shaderDef().Samplers)
        {
            if(s.name == "Source") continue;
            if(resources.find(s.name) == resources.end())
            {
                logMissingOnce(s.name);
                resources[s.name] = m_fallbackTex.texture();
                samplers[s.name]  = m_fallbackTex.sampler();
            }
        }

        m_passes[p]->render(mc, curSrcTex, m_passes[p]->sourceSampler(),
                            resources, samplers,
                            logicalFrameNo, 0, 0, dstW, dstH,
                            (__bridge void*)pd);

        if(!isLast)
        {
            curSrcTex  = m_passTexs[p].texture();
            curSrcSamp = m_passTexs[p].sampler();
        }
    }

    // Blit m_finalTex onto the drawable with linear filtering. We
    // reuse the preprocess MetalPass (which is a passthrough) for
    // this — it always has setForceLinear(true) so the upscale
    // looks smooth. When scale == 1.0 the two textures are the
    // same size and the blit is effectively a 1:1 copy.
    if(m_finalTex.isValid() && m_preprocessPass)
    {
        MTLRenderPassDescriptor* blitDesc = [MTLRenderPassDescriptor renderPassDescriptor];
        blitDesc.colorAttachments[0].texture     = mc.drawableTexture;
        blitDesc.colorAttachments[0].loadAction  = MTLLoadActionLoad;
        blitDesc.colorAttachments[0].storeAction = MTLStoreActionStore;

        m_preprocessPass->render(mc,
            m_finalTex.texture(), m_preprocessPass->sourceSampler(),
            std::map<std::string, void*>{},
            std::map<std::string, void*>{},
            logicalFrameNo, 0, 0,
            (int)mc.drawableWidth, (int)mc.drawableHeight,
            (__bridge void*)blitDesc);
    }

    // Feedback / history copy.
    if((m_requiresFeedback && !m_feedbackTexs.empty()) ||
       (m_requiresHistory > 0 && !m_historyTexs.empty()))
    {
        id<MTLBlitCommandEncoder> blit = [cmdBuf blitCommandEncoder];

        if(m_requiresFeedback && !m_feedbackTexs.empty())
        {
            for(int p = 0; p < numPasses && p < (int)m_feedbackTexs.size(); p++)
            {
                id<MTLTexture> src = nil;
                if(p == numPasses - 1)
                    // The chain's last pass wrote to m_finalTex, not
                    // the drawable.
                    src = (__bridge id<MTLTexture>)m_finalTex.texture();
                else
                    src = (__bridge id<MTLTexture>)m_passTexs[p].texture();

                id<MTLTexture> dst =
                    (__bridge id<MTLTexture>)m_feedbackTexs[p].texture();
                if(!src || !dst)
                    continue;

                NSUInteger w = std::min(src.width, dst.width);
                NSUInteger h = std::min(src.height, dst.height);
                [blit copyFromTexture:src
                           sourceSlice:0
                           sourceLevel:0
                          sourceOrigin:MTLOriginMake(0, 0, 0)
                            sourceSize:MTLSizeMake(w, h, 1)
                             toTexture:dst
                      destinationSlice:0
                      destinationLevel:0
                     destinationOrigin:MTLOriginMake(0, 0, 0)];
            }
        }

        if(m_requiresHistory > 0 && !m_historyTexs.empty())
        {
            id<MTLTexture> src =
                (__bridge id<MTLTexture>)m_preprocessTex.texture();
            id<MTLTexture> dst =
                (__bridge id<MTLTexture>)m_historyTexs[m_historyWriteIndex].texture();
            if(src && dst)
            {
                NSUInteger w = std::min(src.width, dst.width);
                NSUInteger h = std::min(src.height, dst.height);
                [blit copyFromTexture:src
                           sourceSlice:0
                           sourceLevel:0
                          sourceOrigin:MTLOriginMake(0, 0, 0)
                            sourceSize:MTLSizeMake(w, h, 1)
                             toTexture:dst
                      destinationSlice:0
                      destinationLevel:0
                     destinationOrigin:MTLOriginMake(0, 0, 0)];
                m_historyWriteIndex =
                    (m_historyWriteIndex + 1) % (int)m_historyTexs.size();
            }
        }

        [blit endEncoding];
    }

    (void)frameNo;
    m_frameCount++;
}

std::vector<ShaderParam*> MetalShaderChain::params()
{
    std::vector<ShaderParam*> p;
    if(m_preprocessPass)
        for(auto* pp : m_preprocessPass->params())
            p.push_back(pp);
    for(auto& pass : m_passes)
        for(auto* pp : pass->params())
            p.push_back(pp);
    return p;
}
