/*
 * ShaderGlass macOS Port — Dear ImGui UI layer
 * Copyright (C) 2021-2025 mausimus (mausimus.net)
 * https://github.com/mausimus/ShaderGlass
 * GNU General Public License v3.0
 *
 * ImGui Source Files Required (via FetchContent or vendored):
 *   imgui.h / imgui.cpp
 *   imgui_draw.cpp
 *   imgui_tables.cpp
 *   imgui_widgets.cpp
 *   backends/imgui_impl_glfw.h / imgui_impl_glfw.cpp
 *   backends/imgui_impl_vulkan.h / imgui_impl_vulkan.cpp
 *
 * See comment block in UI.cpp for the exact CMake FetchContent snippet
 * and source-file list.
 */

#pragma once

#include "VulkanCore.h"

#include <cstdint>
#include <string>

struct GLFWwindow;

class ShaderUI
{
public:
    ShaderUI();
    ~ShaderUI();

    // ------- lifecycle -------

    /// Call once after VulkanCore + main render pass are created.
    /// Creates descriptor pool, ImGui context, and backend state.
    void init(GLFWwindow* window, VulkanCore& vk, VkRenderPass renderPass);

    /// Call at start of each frame, *before* application builds widgets.
    /// Updates backend buffers, starts a new ImGui frame.
    void newFrame();

    /// Record ImGui draw data into the current command buffer.
    /// Must be called inside the active render pass (after vkCmdBeginRenderPass).
    void render(VkCommandBuffer cmd);

    /// Destroy all ImGui resources. Call before VulkanCore::cleanup().
    void shutdown(VulkanCore& vk);

    // ------- queries -------

    /// True when ImGui is currently capturing mouse / keyboard.
    /// Use this to decide whether the application should handle input.
    bool wantsCapture() const;

    /// Most recent shader path selected via the file-open dialog.
    /// Returns nullptr when no shader has been selected yet.
    const char* selectedShaderPath() const;

    // ------- UI widgets (call between newFrame / render) -------

    /// Draw the main application UI (menu bar, shader list, parameters, etc.).
    /// Called every frame after newFrame() before render().
    void drawMainUI(VulkanCore& vk);

private:
    void buildDescriptorPool(VulkanCore& vk);

    // Dear ImGui
    VkDescriptorPool m_descPool {VK_NULL_HANDLE};

    // Application UI state
    std::string m_selectedShaderPath;
    bool        m_captureStarted {false};
    float       m_fpsHistory[120] {};
    int         m_fpsHistoryIndex {0};
    bool        m_showDemoWindow {false};
};
