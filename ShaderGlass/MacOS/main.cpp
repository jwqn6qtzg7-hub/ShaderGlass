/*
 * ShaderGlass macOS Port
 * Copyright (C) 2021-2025 mausimus (mausimus.net)
 * https://github.com/mausimus/ShaderGlass
 * GNU General Public License v3.0
 *
 * macOS port using GLFW + Vulkan (MoltenVK) + Dear ImGui + ScreenCaptureKit
 */

#include "VulkanCore.h"
#include "VulkanPass.h"
#include "VulkanTexture.h"
#include "Capture.h"
#include "UI.h"

#include "PreprocessShader.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <mutex>

static const uint32_t WIDTH  = 800;
static const uint32_t HEIGHT = 600;

int main()
{
    try
    {
        // ---- Init GLFW ----
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
        GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "ShaderGlass", nullptr, nullptr);
        if(!window) { glfwTerminate(); return EXIT_FAILURE; }

        // ---- Init Vulkan ----
        VulkanCore vk;
        vk.init(window);

        // ---- Init ImGui UI ----
        ShaderUI ui;
        ui.init(window, vk, vk.mainRenderPass);

        // ---- Capture state ----
        ScreenCapture capture;
        std::vector<uint8_t> capBuffer;
        int  capWidth  = 0, capHeight = 0;
        bool capNewFrame = false;
        std::mutex capMutex;

        // ---- Capture texture (GPU image for captured frames) ----
        VulkanTexture captureTex;

        // ---- Preprocess shader pass ----
        std::map<std::string, TextureSamplerSettings> texSettings;
        PreprocessShaderDef preprocessDef;
        VulkanPass preprocessPass(preprocessDef, texSettings, true);
        preprocessPass.init(vk, vk.mainRenderPass, 0);

        // ---- Offscreen render pass (for preprocess → intermediate texture) ----
        // For now we render directly to the swapchain via vk.mainRenderPass.
        // Multi-pass requires a separate VkRenderPass per intermediate texture.
        VkRenderPass offscreenRP = VK_NULL_HANDLE;
        {
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
            vkCreateRenderPass(vk.device, &rpCI, nullptr, &offscreenRP);
        }

        VulkanTexture preprocessTex;
        preprocessTex.create(vk, 1920, 1080, VK_FORMAT_B8G8R8A8_UNORM, true, offscreenRP);
        VulkanPass preprocessOffscreen(preprocessDef, texSettings, true);
        preprocessOffscreen.init(vk, offscreenRP, 0);

        // Set up a sampler for the capture texture (used as Source)
        VkSampler capSampler;
        {
            VkSamplerCreateInfo si {};
            si.sType        = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
            si.magFilter    = VK_FILTER_LINEAR;
            si.minFilter    = VK_FILTER_LINEAR;
            si.mipmapMode   = VK_SAMPLER_MIPMAP_MODE_NEAREST;
            si.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            si.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            si.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
            si.minLod       = 0.0f; si.maxLod = 0.0f;
            vkCreateSampler(vk.device, &si, nullptr, &capSampler);
        }

        std::cout << "[ShaderGlass] Rendering started. Press Escape to quit." << std::endl;

        // ---- Main loop ----
        while(!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
            if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                glfwSetWindowShouldClose(window, GLFW_TRUE);

            vk.beginFrame();

            // --- ImGui ---
            ui.newFrame();
            ui.drawMainUI(vk);

            // --- Start capture on UI request ---
            if(ui.wantsCapture() && !capture.isCapturing())
            {
                capture.start([&](const uint8_t* data, int w, int h, int bpr) {
                    std::lock_guard<std::mutex> lock(capMutex);
                    size_t sz = (size_t)bpr * h;
                    if(capBuffer.size() != sz) capBuffer.resize(sz);
                    memcpy(capBuffer.data(), data, sz);
                    capWidth = w; capHeight = h;
                    capNewFrame = true;
                });
            }
            if(!ui.wantsCapture() && capture.isCapturing())
                capture.stop();

            // --- Upload captured frame to GPU ---
            {
                std::lock_guard<std::mutex> lock(capMutex);
                if(capNewFrame && capWidth > 0 && capHeight > 0)
                {
                    if(!captureTex.isValid())
                    {
                        captureTex.create(vk, (uint32_t)capWidth, (uint32_t)capHeight,
                                          VK_FORMAT_B8G8R8A8_UNORM, false, VK_NULL_HANDLE);
                    }
                    captureTex.upload(vk, capBuffer.data(), (uint32_t)capWidth,
                                      (uint32_t)capHeight, (uint32_t)capWidth * 4);
                    capNewFrame = false;
                }
            }

            // ====== RENDERING ======
            auto cmd = vk.commandBuffers[vk.currentFrame];

            // Step 1: Preprocess pass to offscreen texture
            if(captureTex.isValid())
            {
                VkClearValue clearVal = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
                VkRenderPassBeginInfo rpBI {};
                rpBI.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
                rpBI.renderPass        = offscreenRP;
                rpBI.framebuffer       = preprocessTex.framebuffer();
                rpBI.renderArea.extent = {preprocessTex.width(), preprocessTex.height()};
                rpBI.clearValueCount   = 1;
                rpBI.pClearValues      = &clearVal;

                vkCmdBeginRenderPass(cmd, &rpBI, VK_SUBPASS_CONTENTS_INLINE);

                preprocessOffscreen.resize(captureTex.width(), captureTex.height(),
                                           preprocessTex.width(), preprocessTex.height(),
                                           {}, {});

                std::map<std::string, VkImageView> res;
                std::map<std::string, VkSampler>   samps;
                preprocessOffscreen.render(vk, cmd,
                                           captureTex.view(), capSampler,
                                           res, samps,
                                           0, 0, 0,
                                           preprocessTex.width(), preprocessTex.height());
                vkCmdEndRenderPass(cmd);
            }

            // Step 2: Draw preprocess output to swapchain (or just use main render pass)
            {
                VkClearValue clearVal = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
                VkRenderPassBeginInfo rpBI {};
                rpBI.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
                rpBI.renderPass        = vk.mainRenderPass;
                rpBI.framebuffer       = vk.framebuffers[vk.imageIndex];
                rpBI.renderArea.extent = vk.swapChainExtent;
                rpBI.clearValueCount   = 1;
                rpBI.pClearValues      = &clearVal;

                vkCmdBeginRenderPass(cmd, &rpBI, VK_SUBPASS_CONTENTS_INLINE);

                if(captureTex.isValid())
                {
                    preprocessPass.resize(preprocessTex.width(), preprocessTex.height(),
                                          vk.swapChainExtent.width, vk.swapChainExtent.height,
                                          {}, {});

                    std::map<std::string, VkImageView> res;
                    std::map<std::string, VkSampler>   samps;
                    preprocessPass.render(vk, cmd,
                                          preprocessTex.view(), preprocessTex.sampler(),
                                          res, samps,
                                          0, 0, 0,
                                          vk.swapChainExtent.width, vk.swapChainExtent.height);
                }

                // ImGui on top
                ui.render(cmd);

                vkCmdEndRenderPass(cmd);
            }

            vk.endFrame();
        }

        vkDeviceWaitIdle(vk.device);

        // ---- Cleanup ----
        capture.stop();
        preprocessTex.destroy(vk);
        captureTex.destroy(vk);
        vkDestroySampler(vk.device, capSampler, nullptr);
        vkDestroyRenderPass(vk.device, offscreenRP, nullptr);
        ui.shutdown(vk);
        vk.cleanup();

        glfwDestroyWindow(window);
        glfwTerminate();
        return EXIT_SUCCESS;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Fatal: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
