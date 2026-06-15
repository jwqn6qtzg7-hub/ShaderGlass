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

    // Toggle whether the macOS native menu bar is visible. Polls
    // GLFW for the keyboard chord (Cmd+Shift+M by default) and
    // also flips state when the in-app "Hide/Show Menu Bar" menu
    // item is clicked. Returns true if the state changed this call.
    bool pollMenuBarHotkey(GLFWwindow* window);

    // Current menu bar visibility. Main loop reads this and pushes
    // it to AppKit each frame.
    bool menuBarVisible() const { return m_menuBarVisible; }
    void setMenuBarVisible(bool visible) { m_menuBarVisible = visible; }
    void toggleMenuBar() { m_menuBarVisible = !m_menuBarVisible; }

    void drawMainUI(MetalCore& mc);

private:
    std::string m_selectedShaderPath;
    std::string m_pendingShaderPath;
    bool        m_captureStarted {false};
    float       m_fpsHistory[120] {};
    int         m_fpsHistoryIndex {0};
    bool        m_showDemoWindow {false};
    bool        m_menuBarVisible {true};
    bool        m_menuBarHotkeyLatched {false};
};
