#include "MetalShaderChain.h"

#include "PreprocessShader.h"
#include "PassthroughShader.h"

#import <Metal/Metal.h>

#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>

MetalShaderChain::MetalShaderChain(MetalCore& mc) : m_mc(mc) {}

MetalShaderChain::~MetalShaderChain()
{
    destroyPasses(m_mc);
    destroyTargets(m_mc);
}

void MetalShaderChain::setPreset(PresetDef* preset)
{
    m_preset = preset;
    m_rebuildNeeded = true;
    m_texSettings.clear();
}

void MetalShaderChain::rebuild(MetalCore& mc)
{
    destroyPasses(mc);
    destroyTargets(mc);
    m_rebuildNeeded = false;

    PreprocessShaderDef preDef;
    m_preprocessPass = std::make_unique<MetalPass>(mc, preDef, m_texSettings, true);

    m_passes.clear();
    if(m_preset)
    {
        for(auto& sd : m_preset->ShaderDefs)
        {
            auto pass = std::make_unique<MetalPass>(mc, sd, m_texSettings, false);
            m_passes.push_back(std::move(pass));
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
}

void MetalShaderChain::resize(MetalCore& mc, int captureW, int captureH,
                               int viewportW, int viewportH)
{
    (void)mc;
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
            dstW = m_viewportW;
            dstH = m_viewportH;
        }
        else
        {
            dstW = srcW;
            dstH = srcH;
        }

        m_passSizes.push_back({srcW, srcH, dstW, dstH});

        std::string name = "PassOutput" + std::to_string(p);
        m_texSizes[name] = {(float)dstW, (float)dstH, 1.0f/dstW, 1.0f/dstH};

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

    destroyTargets(mc);
    m_preprocessTex.create(mc, (uint32_t)m_originalW, (uint32_t)m_originalH, true);
    m_resources["Original"] = m_preprocessTex.texture();
    m_samplers["Original"]  = m_preprocessTex.sampler();

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

        if(!isLast)
        {
            MetalTexture tex;
            tex.create(mc, dstW, dstH, true);
            m_passTexs.push_back(std::move(tex));

            std::string name = "PassOutput" + std::to_string(p);
            m_resources[name] = m_passTexs.back().texture();
            m_samplers[name]  = m_passTexs.back().sampler();
        }

        if(m_requiresFeedback)
        {
            MetalTexture fb;
            fb.create(mc, dstW, dstH, false);
            m_feedbackTexs.push_back(std::move(fb));

            std::string fbName = "PassFeedback" + std::to_string(p);
            m_resources[fbName] = m_feedbackTexs.back().texture();
            m_samplers[fbName]  = m_feedbackTexs.back().sampler();
        }
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

    m_preprocessPass->render(mc, inputTexture, inputSampler,
                              m_resources, m_samplers,
                              logicalFrameNo, 0, 0,
                              m_originalW, m_originalH,
                              (__bridge void*)rpDesc);

    int numPasses = (int)m_passes.size();

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

    for(int p = 0; p < numPasses; p++)
    {
        bool isLast = (p == numPasses - 1);
        int dstW = m_passSizes[p][2];
        int dstH = m_passSizes[p][3];

        MTLRenderPassDescriptor* pd = [MTLRenderPassDescriptor renderPassDescriptor];

        if(isLast)
        {
            pd.colorAttachments[0].texture = mc.drawableTexture;
        }
        else
        {
            pd.colorAttachments[0].texture = (__bridge id<MTLTexture>)m_passTexs[p].texture();
        }

        pd.colorAttachments[0].loadAction  = MTLLoadActionClear;
        pd.colorAttachments[0].clearColor  = MTLClearColorMake(0, 0, 0, 1);
        pd.colorAttachments[0].storeAction = MTLStoreActionStore;

        m_passes[p]->render(mc, curSrcTex, curSrcSamp,
                            m_resources, m_samplers,
                            logicalFrameNo, 0, 0, dstW, dstH,
                            (__bridge void*)pd);

        if(!isLast)
        {
            curSrcTex  = m_passTexs[p].texture();
            curSrcSamp = m_passTexs[p].sampler();
        }
    }

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
                    src = mc.drawableTexture;
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
