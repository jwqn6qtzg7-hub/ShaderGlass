#include "MetalCore.h"
#include "MetalPass.h"
#include "MetalTexture.h"
#include "MetalShaderChain.h"
#include "Capture.h"
#include "UI.h"
#include "Settings.h"
#include "PassthroughShader.h"

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
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_TRUE);
        GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT,
            "ShaderGlass (Metal)", nullptr, nullptr);
        if(!window) { glfwTerminate(); return EXIT_FAILURE; }

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

        MetalCore mc;
        mc.init(window);

        ShaderUI ui;
        ui.init(window, mc);

        ScreenCapture capture;
        std::vector<uint8_t> capBuffer;
        int  capWidth  = 0, capHeight = 0;
        bool capNewFrame = false;
        std::mutex capMutex;

        MetalTexture captureTex;

        PassthroughShaderDef passthroughDef;
        PresetDef testPreset;
        testPreset.Name = "Test";
        testPreset.ShaderDefs.push_back(passthroughDef);

        MetalShaderChain chain(mc);
        chain.setPreset(&testPreset);

        std::cout << "[ShaderGlass] Rendering started (Metal)." << std::endl;

        while(!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
            if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                glfwSetWindowShouldClose(window, GLFW_TRUE);

            mc.beginFrame();

            if(mc.drawableWidth == 0 || mc.drawableHeight == 0)
            {
                mc.endFrame();
                continue;
            }

            ui.newFrame(mc);
            ui.drawMainUI(mc);

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

            {
                std::lock_guard<std::mutex> lock(capMutex);
                if(capNewFrame && capWidth > 0 && capHeight > 0)
                {
                    if(!captureTex.isValid() ||
                       captureTex.width() != (uint32_t)capWidth ||
                       captureTex.height() != (uint32_t)capHeight)
                    {
                        captureTex.destroy();
                        captureTex.create(mc, (uint32_t)capWidth,
                                          (uint32_t)capHeight, false);
                    }
                    captureTex.upload(mc, capBuffer.data(),
                                      (uint32_t)capWidth, (uint32_t)capHeight,
                                      (uint32_t)capWidth * 4);

                    chain.resize(mc, capWidth, capHeight,
                                 (int)mc.drawableWidth,
                                 (int)mc.drawableHeight);
                    capNewFrame = false;
                }
            }

            if(captureTex.isValid())
                chain.process(mc,
                              captureTex.texture(),
                              captureTex.sampler(),
                              0, 0);

            ui.render(mc);
            mc.endFrame();
        }

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
        settings.save();

        captureTex.destroy();
        ui.shutdown(mc);
        mc.cleanup();
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
