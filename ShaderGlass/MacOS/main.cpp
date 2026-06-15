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
#include "ShaderChain.h"
#include "Capture.h"
#include "UI.h"
#include "Settings.h"
#include "PassthroughShader.h"
#include "ShaderGC.h"

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

        // Restore window position
        auto& settings = Settings::instance();
        int wx = settings.getInt("window_x", 100);
        int wy = settings.getInt("window_y", 100);
        int ww = settings.getInt("window_w", (int)WIDTH);
        int wh = settings.getInt("window_h", (int)HEIGHT);
        glfwSetWindowPos(window, wx, wy);
        glfwSetWindowSize(window, ww, wh);
        settings.setInt("window_x", wx);
        settings.setInt("window_y", wy);
        settings.setInt("window_w", ww);
        settings.setInt("window_h", wh);
        settings.save();

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

        // ---- Capture texture (GPU) ----
        VulkanTexture captureTex;

        // ---- Shader chain ----
        PassthroughShaderDef passthroughDef;
        PresetDef testPreset;
        testPreset.Name = "Test";
        testPreset.ShaderDefs.push_back(passthroughDef);

        ShaderChain chain(vk);
        chain.setPreset(&testPreset);

        // Capture sampler
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
            si.minLod = 0.f; si.maxLod = 0.f;
            vkCreateSampler(vk.device, &si, nullptr, &capSampler);
        }

        std::cout << "[ShaderGlass] Rendering started." << std::endl;

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

            // --- Screen capture (auto-start once) ---
            static bool captureTried = false;
            if(!captureTried)
            {
                captureTried = true;
                capture.start([&](const uint8_t* data, int w, int h, int bpr) {
                    std::lock_guard<std::mutex> lock(capMutex);
                    size_t sz = (size_t)bpr * h;
                    if(capBuffer.size() != sz) capBuffer.resize(sz);
                    memcpy(capBuffer.data(), data, sz);
                    capWidth = w; capHeight = h;
                    capNewFrame = true;
                });
            }

            // --- Manual capture toggle (UI button) ---
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
            {
                // Only stop if the UI started it (auto-start runs continuously)
            }

            // --- Upload captured frame to GPU ---
            {
                std::lock_guard<std::mutex> lock(capMutex);
                if(capNewFrame && capWidth > 0 && capHeight > 0)
                {
                    if(!captureTex.isValid() || captureTex.width() != (uint32_t)capWidth
                                             || captureTex.height() != (uint32_t)capHeight)
                    {
                        captureTex.destroy(vk);
                        captureTex.create(vk, (uint32_t)capWidth, (uint32_t)capHeight,
                                          VK_FORMAT_B8G8R8A8_UNORM, false, VK_NULL_HANDLE);
                    }
                    captureTex.upload(vk, capBuffer.data(), (uint32_t)capWidth,
                                      (uint32_t)capHeight, (uint32_t)capWidth * 4);

                    // Update chain for new capture dimensions
                    chain.resize(vk, capWidth, capHeight,
                                 (int)vk.swapChainExtent.width,
                                 (int)vk.swapChainExtent.height);
                    capNewFrame = false;
                }
            }

            // ====== RENDERING ======
            auto cmd = vk.commandBuffers[vk.currentFrame];

            VkClearValue clearVal = {{{0.0f, 0.0f, 0.0f, 1.0f}}};
            VkRenderPassBeginInfo rpBI {};
            rpBI.sType             = VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO;
            rpBI.renderPass        = vk.mainRenderPass;
            rpBI.framebuffer       = vk.framebuffers[vk.imageIndex];
            rpBI.renderArea.extent = vk.swapChainExtent;
            rpBI.clearValueCount   = 1;
            rpBI.pClearValues      = &clearVal;
            vkCmdBeginRenderPass(cmd, &rpBI, VK_SUBPASS_CONTENTS_INLINE);

            // Run shader chain (preprocess → passthrough → swapchain)
            if(captureTex.isValid())
                chain.process(vk, cmd, captureTex.view(), capSampler, 0, 0);

            // ImGui overlay
            ui.render(cmd);

            vkCmdEndRenderPass(cmd);
            vk.endFrame();
        }

        vkDeviceWaitIdle(vk.device);

        // ---- Cleanup ----
        capture.stop();
        {
            int x, y, w, h;
            glfwGetWindowPos(window, &x, &y);
            glfwGetWindowSize(window, &w, &h);
            settings.setInt("window_x", x);
            settings.setInt("window_y", y);
            settings.setInt("window_w", w);
            settings.setInt("window_h", h);
        }
        settings.save(); // explicit save on exit
        captureTex.destroy(vk);
        vkDestroySampler(vk.device, capSampler, nullptr);
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
