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

    // Poll the Tab key and toggle the left-hand Controls panel.
    // Suppressed while an ImGui text field is active so Tab still
    // inserts a tab character in inputs. Edge-triggered so holding
    // the key does not re-toggle every frame.
    bool pollControlsHotkey(GLFWwindow* window);

    // Controls panel (left-hand ImGui panel with Shader/Capture/
    // Parameters collapsibles) visibility. The status bar always
    // shows a toggle button so the user can re-show the panel
    // after hiding it.
    bool controlsVisible() const { return m_controlsVisible; }
    void setControlsVisible(bool visible) { m_controlsVisible = visible; }
    void toggleControls() { m_controlsVisible = !m_controlsVisible; }

    void drawMainUI(MetalCore& mc);

private:
    std::string m_selectedShaderPath;
    std::string m_pendingShaderPath;
    bool        m_captureStarted {false};
    float       m_fpsHistory[120] {};
    int         m_fpsHistoryIndex {0};
    bool        m_showDemoWindow {false};
    bool        m_controlsVisible {true};
    bool        m_controlsHotkeyLatched {false};
};
