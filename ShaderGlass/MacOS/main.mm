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

static const uint32_t OVERLAY_W  = 800;
static const uint32_t OVERLAY_H  = 600;
static const uint32_t CONTROLS_W = 340;
static const uint32_t CONTROLS_H = 500;

static void onOverlayWindowPosOrSizeChanged(GLFWwindow* w, int, int)
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

        // --- Overlay window (glass) ---
        GLFWwindow* overlayWin = glfwCreateWindow(OVERLAY_W, OVERLAY_H,
            "ShaderGlass", nullptr, nullptr);
        if(!overlayWin) { glfwTerminate(); return EXIT_FAILURE; }

        // --- Controls window ---
        glfwWindowHint(GLFW_VISIBLE, GLFW_TRUE);
        GLFWwindow* controlsWin = glfwCreateWindow(CONTROLS_W, CONTROLS_H,
            "ShaderGlass Controls", nullptr, nullptr);
        if(!controlsWin) { glfwDestroyWindow(overlayWin); glfwTerminate(); return EXIT_FAILURE; }

        auto& settings = Settings::instance();

        // Restore overlay window position/size.
        int owx = settings.getInt("window_x", 100);
        int owy = settings.getInt("window_y", 100);
        int oww = settings.getInt("window_w", (int)OVERLAY_W);
        int owh = settings.getInt("window_h", (int)OVERLAY_H);
        glfwSetWindowPos(overlayWin, owx, owy);
        glfwSetWindowSize(overlayWin, oww, owh);

        // Restore controls window position/size.
        int cwx = settings.getInt("controls_x", 940);
        int cwy = settings.getInt("controls_y", 100);
        int cww = settings.getInt("controls_w", (int)CONTROLS_W);
        int cwh = settings.getInt("controls_h", (int)CONTROLS_H);
        glfwSetWindowPos(controlsWin, cwx, cwy);
        glfwSetWindowSize(controlsWin, cww, cwh);

        // Restore UI state from last session.
        std::string lastShaderPath = settings.getString("lastShaderPath", "");
        bool lastCaptureRunning  = settings.getBool("lastCaptureRunning", false);
        bool lastControlsVisible = settings.getBool("lastControlsVisible", true);
        bool lastOverlayLocked   = settings.getBool("lastOverlayLocked", true);
        float lastScale           = settings.getFloat("lastScale", 1.0f);
        int   lastFilterMode      = settings.getInt("lastFilterMode", 1);

        settings.save();

        bool overlayChanged = true;
        glfwSetWindowUserPointer(overlayWin, &overlayChanged);
        glfwSetWindowPosCallback(overlayWin, onOverlayWindowPosOrSizeChanged);
        glfwSetWindowSizeCallback(overlayWin, onOverlayWindowPosOrSizeChanged);

        // Tracked copies of the last-saved UI state.
        bool lastSavedCaptureRunning  = lastCaptureRunning;
        bool lastSavedControlsVisible = lastControlsVisible;
        bool lastSavedOverlayLocked   = lastOverlayLocked;
        float lastSavedScale           = lastScale;
        int   lastSavedFilterMode      = lastFilterMode;

        // --- Configure overlay window always-on-top ---
        {
            NSWindow* nsOverlay = glfwGetCocoaWindow(overlayWin);
            nsOverlay.level = NSFloatingWindowLevel;
            nsOverlay.collectionBehavior = NSWindowCollectionBehaviorCanJoinAllSpaces
                                         | NSWindowCollectionBehaviorStationary
                                         | NSWindowCollectionBehaviorIgnoresCycle;
        }

        // --- Metal cores ---
        MetalCore overlayMc;
        overlayMc.init(overlayWin);
        MetalCore controlsMc;
        controlsMc.init(controlsWin);

        // --- UI bound to controls window ---
        ShaderUI ui;
        ui.init(controlsWin, controlsMc);

        if(!lastShaderPath.empty() && std::filesystem::exists(lastShaderPath))
            ui.setShaderPath(lastShaderPath);
        ui.setCaptureStarted(lastCaptureRunning);
        ui.setControlsVisible(lastControlsVisible);
        ui.setOverlayLocked(lastOverlayLocked);
        ui.setScale(lastScale);
        ui.setFilterMode(lastFilterMode);

        // --- Capture ---
        ScreenCapture capture;
        std::vector<uint8_t> capBuffer;
        std::vector<uint8_t> cropBuffer;
        int  capWidth  = 0, capHeight = 0;
        int  capBytesPerRow = 0;
        bool capNewFrame = false;
        std::mutex capMutex;
        int frameNo = 0;

        MetalTexture captureTex;

        // --- Shader chain ---
        PassthroughShaderDef passthroughDef;
        PresetDef testPreset;
        testPreset.Name = "Test";
        testPreset.ShaderDefs.push_back(passthroughDef);
        std::unique_ptr<PresetDef> loadedPreset;

        MetalShaderChain chain(overlayMc);
        chain.setPreset(&testPreset);
        chain.setScale(ui.scale());
        chain.setForceLinear(ui.filterMode() == 1);

        std::cout << "[ShaderGlass] Rendering started (Metal)." << std::endl;

        while(!glfwWindowShouldClose(overlayWin) &&
              !glfwWindowShouldClose(controlsWin))
        {
            glfwPollEvents();

            // Lock Overlay: when checked, the glass content area
            // passes clicks through to the desktop. Uncheck via
            // the Controls window to move/resize the overlay.
            {
                NSWindow* nsOverlay = glfwGetCocoaWindow(overlayWin);
                nsOverlay.ignoresMouseEvents = ui.overlayLocked() ? YES : NO;
            }

            if(glfwGetKey(overlayWin, GLFW_KEY_ESCAPE) == GLFW_PRESS)
                glfwSetWindowShouldClose(overlayWin, GLFW_TRUE);

            // Tab hotkey: works when controls window is focused.
            ui.pollControlsHotkey(controlsWin);

            // --- Render controls window ---
            controlsMc.beginFrame();
            if(controlsMc.drawableWidth > 0 && controlsMc.drawableHeight > 0)
            {
                ui.newFrame(controlsMc);
                ui.setShaderParams(chain.params());
                ui.drawMainUI(controlsMc);

                // --- Shader loading (from UI) ---
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
                            settings.setString("lastShaderPath", selectedShaderPath);
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

                // --- Capture start/stop (from UI) ---
                if(ui.wantsCapture() && !capture.isCapturing())
                {
                    NSWindow* excludeWin = glfwGetCocoaWindow(overlayWin);
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

                // --- Persist state changes ---
                bool wantCapture = ui.wantsCapture();
                if(wantCapture != lastSavedCaptureRunning)
                {
                    lastSavedCaptureRunning = wantCapture;
                    settings.setBool("lastCaptureRunning", wantCapture);
                }
                bool controlsVisible = ui.controlsVisible();
                if(controlsVisible != lastSavedControlsVisible)
                {
                    lastSavedControlsVisible = controlsVisible;
                    settings.setBool("lastControlsVisible", controlsVisible);
                }
                bool overlayLocked = ui.overlayLocked();
                if(overlayLocked != lastSavedOverlayLocked)
                {
                    lastSavedOverlayLocked = overlayLocked;
                    settings.setBool("lastOverlayLocked", overlayLocked);
                }

                float scale = ui.scale();
                if(scale != lastSavedScale)
                {
                    lastSavedScale = scale;
                    settings.setFloat("lastScale", scale);
                    chain.setScale(scale);
                    chain.invalidate();
                }
                int filterMode = ui.filterMode();
                if(filterMode != lastSavedFilterMode)
                {
                    lastSavedFilterMode = filterMode;
                    settings.setInt("lastFilterMode", filterMode);
                    chain.setForceLinear(filterMode == 1);
                }

                if(ui.consumeResetRequested())
                {
                    if(capture.isCapturing())
                        capture.stop();
                    loadedPreset.reset();
                    chain.setPreset(&testPreset);
                    chain.invalidate();
                }

                // --- Crop capture to overlay window ---
                int winPxX = 0, winPxY = 0, winPxW = 0, winPxH = 0;
                {
                    int posX = 0, posY = 0, sizeW = 0, sizeH = 0;
                    glfwGetWindowPos(overlayWin, &posX, &posY);
                    glfwGetWindowSize(overlayWin, &sizeW, &sizeH);
                    float sx = 1.0f, sy = 1.0f;
                    glfwGetWindowContentScale(overlayWin, &sx, &sy);
                    int fbW = 0, fbH = 0;
                    glfwGetFramebufferSize(overlayWin, &fbW, &fbH);
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
                            captureTex.create(overlayMc, (uint32_t)cropW,
                                              (uint32_t)cropH, false);
                        }
                        captureTex.upload(overlayMc, cropBuffer.data(),
                                          (uint32_t)cropW, (uint32_t)cropH,
                                          (uint32_t)rowBytes);
                        capNewFrame = false;
                    }
                }

                // --- Render overlay window (chain) ---
                overlayMc.beginFrame();
                if(overlayMc.drawableWidth > 0 && overlayMc.drawableHeight > 0)
                {
                    if(captureTex.isValid())
                    {
                        if(ui.rawCaptureBypass())
                        {
                            chain.renderCaptureToDrawable(overlayMc,
                                captureTex.texture(), captureTex.sampler());
                        }
                        else
                        {
                            chain.resize(overlayMc,
                                         (int)captureTex.width(),
                                         (int)captureTex.height(),
                                         (int)overlayMc.drawableWidth,
                                         (int)overlayMc.drawableHeight);
                            chain.process(overlayMc,
                                          captureTex.texture(),
                                          captureTex.sampler(),
                                          frameNo, frameNo);
                            frameNo++;
                        }
                    }

                    if(overlayChanged)
                    {
                        chain.invalidate();
                        overlayChanged = false;
                    }
                }
                overlayMc.endFrame();

                // --- Render controls UI ---
                ui.render(controlsMc);
            }
            controlsMc.endFrame();
        }

        capture.stop();

        // Save window positions.
        {
            int x, y, w, h;
            glfwGetWindowPos(overlayWin, &x, &y);
            glfwGetWindowSize(overlayWin, &w, &h);
            settings.setInt("window_x", x);
            settings.setInt("window_y", y);
            settings.setInt("window_w", w);
            settings.setInt("window_h", h);

            glfwGetWindowPos(controlsWin, &x, &y);
            glfwGetWindowSize(controlsWin, &w, &h);
            settings.setInt("controls_x", x);
            settings.setInt("controls_y", y);
            settings.setInt("controls_w", w);
            settings.setInt("controls_h", h);
        }

        settings.setBool("lastCaptureRunning",  ui.wantsCapture());
        settings.setBool("lastControlsVisible", ui.controlsVisible());
        settings.setBool("lastOverlayLocked",   ui.overlayLocked());
        settings.setFloat("lastScale",          ui.scale());
        settings.setInt("lastFilterMode",         ui.filterMode());
        settings.save();

        captureTex.destroy();
        ui.shutdown(controlsMc);
        controlsMc.cleanup();
        overlayMc.cleanup();
        glfwDestroyWindow(controlsWin);
        glfwDestroyWindow(overlayWin);
        glfwTerminate();
        return EXIT_SUCCESS;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Fatal: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }
}
