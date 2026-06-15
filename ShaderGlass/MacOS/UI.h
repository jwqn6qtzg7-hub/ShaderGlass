#pragma once

#include "MetalCore.h"

#include <cstdint>
#include <string>

struct GLFWwindow;

class ShaderUI
{
public:
    ShaderUI();
    ~ShaderUI();

    void init(GLFWwindow* window, MetalCore& mc);
    void newFrame(MetalCore& mc);
    void render(MetalCore& mc);
    void shutdown(MetalCore& mc);

    bool wantsCapture() const;
    const char* selectedShaderPath() const;
    std::string consumeSelectedShaderPath();

    // Allow external code (e.g. main loop) to reset the capture flag
    // when ScreenCaptureKit start fails, so the user-visible state stays
    // in sync with the actual capture state.
    void setCaptureStarted(bool started);

    void drawMainUI(MetalCore& mc);

private:
    std::string m_selectedShaderPath;
    std::string m_pendingShaderPath;
    bool        m_captureStarted {false};
    float       m_fpsHistory[120] {};
    int         m_fpsHistoryIndex {0};
    bool        m_showDemoWindow {false};
};
