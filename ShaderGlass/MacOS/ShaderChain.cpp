#include "ShaderChain.h"

#include "PreprocessShader.h"
#include "PassthroughShader.h"

#include <algorithm>
#include <cstring>
#include <iostream>
#include <sstream>

ShaderChain::ShaderChain(VulkanCore& vk) : m_vk(vk)
{
    // Create preprocess render pass (renders to intermediate texture,
    // final layout = SHADER_READ_ONLY so next passes can sample it)
    VkAttachmentDescription attach {};
    attach.format         = VK_FORMAT_B8G8R8A8_UNORM;
    attach.samples        = VK_SAMPLE_COUNT_1_BIT;
    attach.loadOp         = VK_ATTACHMENT_LOAD_OP_CLEAR;
    attach.storeOp        = VK_ATTACHMENT_STORE_OP_STORE;
    attach.stencilLoadOp  = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    attach.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    attach.initialLayout  = VK_IMAGE_LAYOUT_UNDEFINED;
    attach.finalLayout    = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;

    VkAttachmentReference ref {};
    ref.attachment = 0;
    ref.layout     = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

    VkSubpassDescription sub {};
    sub.pipelineBindPoint    = VK_PIPELINE_BIND_POINT_GRAPHICS;
    sub.colorAttachmentCount = 1;
    sub.pColorAttachments    = &ref;

    VkSubpassDependency dep {};
    dep.srcSubpass    = VK_SUBPASS_EXTERNAL;
    dep.dstSubpass    = 0;
    dep.srcStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dep.srcAccessMask = 0;
    dep.dstStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
    dep.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

    VkRenderPassCreateInfo rpCI {};
    rpCI.sType           = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    rpCI.attachmentCount = 1;
    rpCI.pAttachments    = &attach;
    rpCI.subpassCount    = 1;
    rpCI.pSubpasses      = &sub;
    rpCI.dependencyCount = 1;
    rpCI.pDependencies   = &dep;
    vkCreateRenderPass(m_vk.device, &rpCI, nullptr, &m_preprocessRP);
}

ShaderChain::~ShaderChain()
{
    destroyPasses(m_vk);
    destroyTargets(m_vk);
    if(m_preprocessRP) vkDestroyRenderPass(m_vk.device, m_preprocessRP, nullptr);
}

void ShaderChain::setPreset(PresetDef* preset)
{
    m_preset = preset;
    m_rebuildNeeded = true;

    // Build texture settings
    m_texSettings.clear();
    if(preset)
    {
        // TODO: populate from preset texture definitions when Texture class is ported
    }
}

void ShaderChain::rebuild(VulkanCore& vk)
{
    destroyPasses(vk);
    destroyTargets(vk);
    m_rebuildNeeded = false;

    // Preprocess pass
    PreprocessShaderDef preDef;
    m_preprocessPass = std::make_unique<VulkanPass>(preDef, m_texSettings, true);
    m_preprocessPass->init(vk, m_preprocessRP, 0);

    // User shader passes from preset
    m_passes.clear();
    if(m_preset)
    {
        for(auto& sd : m_preset->ShaderDefs)
        {
            auto pass = std::make_unique<VulkanPass>(sd, m_texSettings, false);
            // Create a render pass for this pass
            VkRenderPass rp;
            VkAttachmentDescription attach {};
            attach.format         = VK_FORMAT_B8G8R8A8_UNORM;
            attach.samples        = VK_SAMPLE_COUNT_1_BIT;
            attach.loadOp         = VK_ATTACHMENT_LOAD_OP_CLEAR;
            attach.storeOp        = VK_ATTACHMENT_STORE_OP_STORE;
            attach.stencilLoadOp  = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
            attach.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
            attach.initialLayout  = VK_IMAGE_LAYOUT_UNDEFINED;
            attach.finalLayout    = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;

            VkAttachmentReference ref {};
            ref.attachment = 0;
            ref.layout     = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;

            VkSubpassDescription sub {};
            sub.pipelineBindPoint    = VK_PIPELINE_BIND_POINT_GRAPHICS;
            sub.colorAttachmentCount = 1;
            sub.pColorAttachments    = &ref;

            VkSubpassDependency dep {};
            dep.srcSubpass    = VK_SUBPASS_EXTERNAL;
            dep.dstSubpass    = 0;
            dep.srcStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
            dep.srcAccessMask = 0;
            dep.dstStageMask  = VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT;
            dep.dstAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;

            VkRenderPassCreateInfo rpCI {};
            rpCI.sType           = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
            rpCI.attachmentCount = 1;
            rpCI.pAttachments    = &attach;
            rpCI.subpassCount    = 1;
            rpCI.pSubpasses      = &sub;
            rpCI.dependencyCount = 1;
            rpCI.pDependencies   = &dep;
            vkCreateRenderPass(vk.device, &rpCI, nullptr, &rp);

            pass->init(vk, rp, 0);
            m_passRPs.push_back(rp);
            m_passes.push_back(std::move(pass));
        }
    }

    // Rebuild intermediate textures if dimensions are known
    if(m_viewportW > 0 && m_viewportH > 0)
        rebuildPasses(vk);
}

void ShaderChain::destroyPasses(VulkanCore& vk)
{
    m_preprocessPass.reset();
    m_passes.clear();

    for(auto rp : m_passRPs)
        vkDestroyRenderPass(vk.device, rp, nullptr);
    m_passRPs.clear();

    m_resources.clear();
    m_samplers.clear();
    m_texSizes.clear();
    m_passSizes.clear();

    for(auto& t : m_passTexs) t.destroy(vk);
    m_passTexs.clear();
    for(auto& t : m_feedbackTexs) t.destroy(vk);
    m_feedbackTexs.clear();
    for(auto& t : m_historyTexs) t.destroy(vk);
    m_historyTexs.clear();

    m_requiresFeedback = false;
    m_requiresHistory = 0;
}

void ShaderChain::destroyTargets(VulkanCore& vk)
{
    m_preprocessTex.destroy(vk);
}

void ShaderChain::resize(VulkanCore& vk, int captureW, int captureH, int viewportW, int viewportH)
{
    m_captureW  = captureW;
    m_captureH  = captureH;
    m_viewportW = viewportW;
    m_viewportH = viewportH;
    m_rebuildNeeded = true;
}

void ShaderChain::updateMVP(float sx, float sy, float tx, float ty)
{
    m_mvpSX = sx; m_mvpSY = sy;
    m_mvpTX = tx; m_mvpTY = ty;
    if(m_preprocessPass)
        m_preprocessPass->updateMVP(sx, sy, tx, ty);
}

void ShaderChain::calculatePassSizes()
{
    m_passSizes.clear();

    // Preprocess: capture → original
    m_originalW = m_captureW;
    m_originalH = m_captureH;

    // Always register Original and FinalViewport
    m_texSizes["Original"] = {(float)m_originalW, (float)m_originalH,
                              1.0f/m_originalW, 1.0f/m_originalH};
    m_texSizes["FinalViewport"] = {(float)m_viewportW, (float)m_viewportH,
                                   1.0f/m_viewportW, 1.0f/m_viewportH};

    if(m_passes.empty()) return;

    // Resize preprocess pass
    if(m_preprocessPass)
        m_preprocessPass->resize(m_captureW, m_captureH, m_originalW, m_originalH, m_texSizes, {});

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
            // TODO: support scale_x, scale_y, scale_type from Shader/ShaderDef
            dstW = srcW;
            dstH = srcH;
        }

        m_passSizes.push_back({srcW, srcH, dstW, dstH});

        // Register pass output in sizes map
        std::string name = "PassOutput" + std::to_string(p);
        m_texSizes[name] = {(float)dstW, (float)dstH, 1.0f/dstW, 1.0f/dstH};

        srcW = dstW;
        srcH = dstH;
    }

    // Resize all passes
    uint32_t curSrcW = m_originalW;
    uint32_t curSrcH = m_originalH;
    for(size_t p = 0; p < m_passes.size(); p++)
    {
        m_passes[p]->resize(curSrcW, curSrcH, m_passSizes[p][2], m_passSizes[p][3],
                            m_texSizes, m_passSizes);
        curSrcW = m_passSizes[p][2];
        curSrcH = m_passSizes[p][3];
    }
}

void ShaderChain::rebuildPasses(VulkanCore& vk)
{
    m_resources.clear();
    m_samplers.clear();

    int numPasses = (int)m_passes.size();
    if(numPasses == 0) return;

    calculatePassSizes();

    // Check for feedback/history requirements
    m_requiresFeedback = false;
    m_requiresHistory = 0;
    for(auto& p : m_passes)
    {
        if(p->requiresFeedback()) m_requiresFeedback = true;
        m_requiresHistory = std::max(m_requiresHistory, p->requiresHistory());
    }

    // Create preprocess intermediate texture
    destroyTargets(vk);
    m_preprocessTex.create(vk, (uint32_t)m_originalW, (uint32_t)m_originalH,
                           VK_FORMAT_B8G8R8A8_UNORM, true, m_preprocessRP);
    m_resources["Original"] = m_preprocessTex.view();
    m_samplers["Original"]  = m_preprocessTex.sampler();

    // Destroy old pass textures
    for(auto& t : m_passTexs) t.destroy(vk);
    m_passTexs.clear();
    for(auto& t : m_feedbackTexs) t.destroy(vk);
    m_feedbackTexs.clear();
    for(auto& t : m_historyTexs) t.destroy(vk);
    m_historyTexs.clear();

    // Create intermediate pass textures + feedback
    for(int p = 0; p < numPasses; p++)
    {
        uint32_t dstW = m_passSizes[p][2];
        uint32_t dstH = m_passSizes[p][3];
        bool isLast = (p == numPasses - 1);

        if(!isLast)
        {
            // Intermediate texture (render target + sampled)
            VulkanTexture tex;
            tex.create(vk, dstW, dstH, VK_FORMAT_B8G8R8A8_UNORM, true, m_passRPs[p]);
            m_passTexs.push_back(std::move(tex));

            std::string name = "PassOutput" + std::to_string(p);
            m_resources[name] = m_passTexs.back().view();
            m_samplers[name]  = m_passTexs.back().sampler();
        }

        // Feedback texture (previous frame's output, read-only)
        if(m_requiresFeedback)
        {
            VulkanTexture fb;
            fb.create(vk, dstW, dstH, VK_FORMAT_B8G8R8A8_UNORM, false, VK_NULL_HANDLE);
            m_feedbackTexs.push_back(std::move(fb));

            std::string fbName = "PassFeedback" + std::to_string(p);
            m_resources[fbName] = m_feedbackTexs.back().view();
            m_samplers[fbName]  = m_feedbackTexs.back().sampler();
        }
    }

    // History textures
    if(m_requiresHistory > 0)
    {
        for(int h = 1; h <= m_requiresHistory; h++)
        {
            VulkanTexture hist;
            hist.create(vk, (uint32_t)m_originalW, (uint32_t)m_originalH,
                        VK_FORMAT_B8G8R8A8_UNORM, false, VK_NULL_HANDLE);
            m_historyTexs.push_back(std::move(hist));

            std::string hName = "OriginalHistory" + std::to_string(h);
            m_resources[hName] = m_historyTexs.back().view();
            m_samplers[hName]  = m_historyTexs.back().sampler();
        }
        m_historyWriteIndex = m_requiresHistory - 1;
    }
}

void ShaderChain::transitionForRead(VulkanCore& vk, VkCommandBuffer cmd, VkImage image)
{
    VkImageMemoryBarrier barrier {};
    barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.oldLayout                       = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    barrier.newLayout                       = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    barrier.srcQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.image                           = image;
    barrier.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.baseMipLevel   = 0;
    barrier.subresourceRange.levelCount     = 1;
    barrier.subresourceRange.baseArrayLayer = 0;
    barrier.subresourceRange.layerCount     = 1;
    barrier.srcAccessMask = VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;

    vkCmdPipelineBarrier(cmd,
                         VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                         0, 0, nullptr, 0, nullptr, 1, &barrier);
}

void ShaderChain::process(VulkanCore& vk, VkCommandBuffer cmd,
                           VkImageView inputView, VkSampler inputSampler,
                           int frameNo, int logicalFrameNo)
{
    if(m_rebuildNeeded)
        rebuild(vk);

    if(!m_preprocessPass || m_passes.empty())
        return;

    // ---- Preprocess pass ----
    VkClearValue clearVal = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
    VkRenderPassBeginInfo rpBI {};
    rpBI.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
    rpBI.renderPass        = m_preprocessRP;
    rpBI.framebuffer       = m_preprocessTex.framebuffer();
    rpBI.renderArea.extent = {(uint32_t)m_originalW, (uint32_t)m_originalH};
    rpBI.clearValueCount   = 1;
    rpBI.pClearValues      = &clearVal;

    vkCmdBeginRenderPass(cmd, &rpBI, VK_SUBPASS_CONTENTS_INLINE);
    m_preprocessPass->render(vk, cmd, inputView, inputSampler,
                             m_resources, m_samplers,
                             logicalFrameNo, 0, 0,
                             m_originalW, m_originalH);
    vkCmdEndRenderPass(cmd);

    // Preprocess output is already SHADER_READ_ONLY (set by render pass finalLayout)
    // No barrier needed here — but we'll add one for safety on the first transition
    // from UNDEFINED→SHADER_READ_ONLY handled by the render pass initialLayout.

    int numPasses = (int)m_passes.size();

    // ---- Shader pass chain ----
    VkImageView  curSrcView = m_preprocessTex.view();
    VkSampler    curSrcSamp = m_preprocessTex.sampler();

    for(int p = 0; p < numPasses; p++)
    {
        bool isLast = (p == numPasses - 1);
        int dstW = m_passSizes[p][2];
        int dstH = m_passSizes[p][3];

        if(isLast)
        {
            // Last pass renders directly to swapchain (assumes cmd is inside
            // the swapchain render pass already).
            m_passes[p]->render(vk, cmd, curSrcView, curSrcSamp,
                                m_resources, m_samplers,
                                logicalFrameNo, 0, 0, dstW, dstH);
        }
        else
        {
            // Render to intermediate texture
            VkRenderPassBeginInfo rpBI2 {};
            rpBI2.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
            rpBI2.renderPass        = m_passRPs[p];
            rpBI2.framebuffer       = m_passTexs[p].framebuffer();
            rpBI2.renderArea.extent = {(uint32_t)dstW, (uint32_t)dstH};
            rpBI2.clearValueCount   = 1;
            rpBI2.pClearValues      = &clearVal;

            vkCmdBeginRenderPass(cmd, &rpBI2, VK_SUBPASS_CONTENTS_INLINE);
            m_passes[p]->render(vk, cmd, curSrcView, curSrcSamp,
                                m_resources, m_samplers,
                                logicalFrameNo, 0, 0, dstW, dstH);
            vkCmdEndRenderPass(cmd);

            // The render pass finalLayout = SHADER_READ_ONLY_OPTIMAL, so the
            // image is already ready for sampling. No additional barrier needed
            // since the render pass handles the layout transition.

            curSrcView = m_passTexs[p].view();
            curSrcSamp = m_passTexs[p].sampler();
        }
    }

    // ---- Feedback copy (copy current outputs to feedback textures) ----
    if(m_requiresFeedback && !m_feedbackTexs.empty())
    {
        for(int p = 0; p < numPasses; p++)
        {
            VkImage srcImage;
            uint32_t dw = m_passSizes[p][2], dh = m_passSizes[p][3];

            if(p < numPasses - 1)
                srcImage = m_passTexs[p].view() ? m_passTexs[p].width() ? VK_NULL_HANDLE : VK_NULL_HANDLE : VK_NULL_HANDLE;
            // TODO: get VkImage from VulkanTexture (need to expose it)
            // For now, skip feedback copy. Need to expose m_image from VulkanTexture.
        }
    }

    // ---- History rotation ----
    // TODO: implement history ring buffer rotation
}

std::vector<ShaderParam*> ShaderChain::params()
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
