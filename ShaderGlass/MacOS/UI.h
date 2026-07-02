#pragma once

#include "MetalCore.h"

#include <cstdint>
#include <string>
#include <vector>

struct GLFWwindow;
struct ShaderParam;

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

    // Set the shader path without opening a file dialog. Used by
    // main.mm at startup to auto-load the last shader that was
    // picked (loaded from settings). Does not load the shader
    // itself; main.mm must call compile-and-set-preset on the
    // chain. Triggers consumeSelectedShaderPath() to be picked up
    // by the main loop on the next frame.
    void setShaderPath(const std::string& path);

    // Returns true once if the user just confirmed a Reset Settings
    // action, then clears the flag. Main loop uses this to stop
    // capture and revert the chain to the default passthrough.
    bool consumeResetRequested();

    // The current "Scale" slider value. Read by the main loop to
    // push to the chain via setScale().
    float scale() const { return m_scale; }
    void  setScale(float s) { m_scale = s; }

    // Debug: when true, main.mm draws the cropped capture directly
    // to the drawable and skips the chain. Used to disambiguate
    // "is the chain broken" vs "is the capture broken" by
    // comparing the two paths visually.
    bool rawCaptureBypass() const        { return m_rawCaptureBypass; }
    void setRawCaptureBypass(bool b)    { m_rawCaptureBypass = b; }

    // When true, the overlay window ignores mouse events so clicks
    // pass through to the desktop. Uncheck to move or resize the
    // overlay via its title bar, then re-check to lock it in place.
    bool overlayLocked() const            { return m_overlayLocked; }
    void setOverlayLocked(bool v)        { m_overlayLocked = v; }

    // The current "Filter" combobox value. 0 = nearest (per-pass
    // filter_linear wins), 1 = linear (force every pass's Source
    // sampler to linear). Read by the main loop to push to the
    // chain via setForceLinear().
    int  filterMode() const { return m_filterMode; }
    void setFilterMode(int m) { m_filterMode = m; }

    void drawMainUI(MetalCore& mc);

    // Called each frame by main.mm to pass live shader parameters
    // for rendering sliders in the Parameters panel.
    void setShaderParams(const std::vector<ShaderParam*>& params);

private:
    std::string m_selectedShaderPath;
    std::string m_pendingShaderPath;
    bool        m_captureStarted {false};
    float       m_fpsHistory[120] {};
    int         m_fpsHistoryIndex {0};
    bool        m_showDemoWindow {false};
    bool        m_controlsVisible {true};
    bool        m_controlsHotkeyLatched {false};
    bool        m_resetConfirmOpen {false};
    bool        m_resetRequested {false};
    float       m_scale {1.0f};
    int         m_filterMode {1}; // default to Linear
    bool        m_rawCaptureBypass {false};
    bool        m_overlayLocked {true};
    std::vector<ShaderParam*> m_shaderParams;
};
