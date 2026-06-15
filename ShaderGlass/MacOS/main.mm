#include "MetalCore.h"
#include "MetalPass.h"
#include "MetalTexture.h"
#include "MetalShaderChain.h"
#include "Capture.h"
#include "UI.h"
#include "Settings.h"
#include "PassthroughShader.h"
#include "ShaderGC.h"

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_COCOA
#include <GLFW/glfw3native.h>
#import <AppKit/AppKit.h>

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <cstring>
#include <mutex>
#include <memory>
#include <sstream>

static const uint32_t WIDTH  = 800;
static const uint32_t HEIGHT = 600;

// Window position/size callback: invalidate chain when the window
// moves or resizes so the glass-mode capture crop stays in sync.
static void onWindowPosOrSizeChanged(GLFWwindow* w, int, int)
{
    auto* flag = static_cast<bool*>(glfwGetWindowUserPointer(w));
    if(flag) *flag = true;
}

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

        bool windowChanged = true;
        glfwSetWindowUserPointer(window, &windowChanged);
        glfwSetWindowPosCallback(window, onWindowPosOrSizeChanged);
        glfwSetWindowSizeCallback(window, onWindowPosOrSizeChanged);

        MetalCore mc;
        mc.init(window);

        ShaderUI ui;
        ui.init(window, mc);

        ScreenCapture capture;
        std::vector<uint8_t> capBuffer;
        std::vector<uint8_t> cropBuffer;
        int  capWidth  = 0, capHeight = 0;
        int  capBytesPerRow = 0;
        bool capNewFrame = false;
        std::mutex capMutex;
        int frameNo = 0;

        MetalTexture captureTex;

        PassthroughShaderDef passthroughDef;
        PresetDef testPreset;
        testPreset.Name = "Test";
        testPreset.ShaderDefs.push_back(passthroughDef);
        std::unique_ptr<PresetDef> loadedPreset;

        MetalShaderChain chain(mc);
        chain.setPreset(&testPreset);

        std::cout << "[ShaderGlass] Rendering started (Metal)." << std::endl;

        while(!glfwWindowShouldClose(window))
        {
            glfwPollEvents();
            if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                glfwSetWindowShouldClose(window, GLFW_TRUE);

            // Poll for the Tab hotkey that toggles the left-hand
            // Controls panel. Done before mc.beginFrame() so the
            // visibility state is up to date for the ImGui draw.
            ui.pollControlsHotkey(window);

            mc.beginFrame();

            if(mc.drawableWidth == 0 || mc.drawableHeight == 0)
            {
                mc.endFrame();
                continue;
            }

            ui.newFrame(mc);
            ui.drawMainUI(mc);

            std::string selectedShaderPath = ui.consumeSelectedShaderPath();
            if(!selectedShaderPath.empty())
            {
                try
                {
                    std::ostringstream log;
                    bool warn = false;
                    ShaderCache cache;
                    std::unique_ptr<PresetDef> preset(
                        ShaderGC::CompilePreset(std::filesystem::path(selectedShaderPath),
                                                log, warn, cache));
                    if(warn)
                        std::cerr << "[ShaderGlass] Shader warnings:\n"
                                  << log.str() << std::endl;
                    if(preset && !preset->ShaderDefs.empty())
                    {
                        std::cout << "[ShaderGlass] Loaded preset: "
                                  << preset->Name << std::endl;
                        chain.setPreset(preset.get());
                        loadedPreset = std::move(preset);
                    }
                    else
                    {
                        std::cerr << "[ShaderGlass] Preset has no shader passes: "
                                  << selectedShaderPath << std::endl;
                    }
                }
                catch(const std::exception& e)
                {
                    std::cerr << "[ShaderGlass] Failed to load preset "
                              << selectedShaderPath << ": "
                              << e.what() << std::endl;
                }
            }

            if(ui.wantsCapture() && !capture.isCapturing())
            {
                NSWindow* excludeWin = glfwGetCocoaWindow(window);
                bool ok = capture.start([&](const uint8_t* data, int w, int h, int bpr) {
                    std::lock_guard<std::mutex> lock(capMutex);
                    size_t sz = (size_t)bpr * h;
                    if(capBuffer.size() != sz) capBuffer.resize(sz);
                    memcpy(capBuffer.data(), data, sz);
                    capWidth = w; capHeight = h; capBytesPerRow = bpr;
                    capNewFrame = true;
                }, (__bridge void*)excludeWin);
                if(!ok)
                {
                    static bool loggedStartFail = false;
                    if(!loggedStartFail)
                    {
                        std::cerr << "[ShaderGlass] Capture start failed; "
                                     "check Screen Recording permission and try again."
                                  << std::endl;
                        loggedStartFail = true;
                    }
                    ui.setCaptureStarted(false);
                }
            }
            else if(!ui.wantsCapture() && capture.isCapturing())
            {
                capture.stop();
            }

            // The window is acting as a glass overlay: sample only the
            // region behind the window from the captured full-display
            // frame. This avoids self-reference (the window seeing
            // itself) and presents the chain with an input that is
            // already 1:1 with the drawable.
            int winPxX = 0, winPxY = 0, winPxW = 0, winPxH = 0;
            {
                int posX = 0, posY = 0, sizeW = 0, sizeH = 0;
                glfwGetWindowPos(window, &posX, &posY);
                glfwGetWindowSize(window, &sizeW, &sizeH);
                float sx = 1.0f, sy = 1.0f;
                glfwGetWindowContentScale(window, &sx, &sy);
                int fbW = 0, fbH = 0;
                glfwGetFramebufferSize(window, &fbW, &fbH);
                // glfwGetWindowPos returns the upper-left corner of the
                // content area in screen coordinates with Y growing
                // downward (top-down, matching ScreenCaptureKit's BGRA
                // frame layout). No Y flip needed.
                winPxX = (int)std::lroundf((float)posX * sx);
                winPxY = (int)std::lroundf((float)posY * sy);
                winPxW = fbW;
                winPxH = fbH;
            }

            {
                std::lock_guard<std::mutex> lock(capMutex);
                if(capNewFrame && capWidth > 0 && capHeight > 0)
                {
                    int cropX = std::max(0, winPxX);
                    int cropY = std::max(0, winPxY);
                    int cropW = std::min(winPxW, capWidth  - cropX);
                    int cropH = std::min(winPxH, capHeight - cropY);
                    if(cropW < 1) cropW = 1;
                    if(cropH < 1) cropH = 1;

                    // One-time log so we can see the numbers when
                    // diagnosing orientation/scaling. Goes to stderr
                    // and NSLog only; for diagnostic purposes when
                    // launched from Finder, see SKILL.md.
                    static bool loggedOnce = false;
                    if(!loggedOnce)
                    {
                        std::ostringstream ss;
                        ss << "[ShaderGlass] capture="
                           << capWidth << "x" << capHeight
                           << " bpr=" << capBytesPerRow
                           << " window_pos_px=(" << winPxX
                           << "," << winPxY
                           << ") window_size_px=" << winPxW
                           << "x" << winPxH
                           << " crop=(" << cropX << "," << cropY
                           << " " << cropW << "x" << cropH << ")";
                        std::string line = ss.str();
                        std::cerr << line << std::endl;
                        NSLog(@"[ShaderGlass] %s", line.c_str());
                        loggedOnce = true;
                    }

                    // Copy the cropped BGRA rows into a tightly-packed
                    // buffer. Each row of the capture is capBytesPerRow
                    // wide; we want cropW * 4 bytes per row.
                    size_t rowBytes = (size_t)cropW * 4;
                    cropBuffer.resize(rowBytes * cropH);
                    for(int row = 0; row < cropH; row++)
                    {
                        const uint8_t* src = capBuffer.data()
                            + (size_t)(cropY + row) * capBytesPerRow
                            + (size_t)cropX * 4;
                        uint8_t* dst = cropBuffer.data() + (size_t)row * rowBytes;
                        memcpy(dst, src, rowBytes);
                    }

                    if(!captureTex.isValid() ||
                       captureTex.width()  != (uint32_t)cropW ||
                       captureTex.height() != (uint32_t)cropH)
                    {
                        captureTex.destroy();
                        captureTex.create(mc, (uint32_t)cropW,
                                          (uint32_t)cropH, false);
                    }
                    captureTex.upload(mc, cropBuffer.data(),
                                      (uint32_t)cropW, (uint32_t)cropH,
                                      (uint32_t)rowBytes);

                    capNewFrame = false;
                }
            }

            if(captureTex.isValid())
            {
                // In glass mode the chain's input is already window-sized
                // (we cropped it). Pass captureW=cropped, viewportW=drawable
                // so the chain resizes the intermediate buffers and final
                // pass to the drawable. The preprocess pass then samples
                // the cropped capture 1:1 and the chain's last pass writes
                // to the drawable at the right size.
                chain.resize(mc,
                             (int)captureTex.width(),
                             (int)captureTex.height(),
                             (int)mc.drawableWidth,
                             (int)mc.drawableHeight);
                chain.process(mc,
                              captureTex.texture(),
                              captureTex.sampler(),
                              frameNo, frameNo);
                frameNo++;
            }

            if(windowChanged)
            {
                // Force a full resize on the next frame so the chain
                // recomputes sizes for the new drawable / window rect.
                chain.invalidate();
                windowChanged = false;
            }

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
