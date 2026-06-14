/*
 * ShaderGlass macOS Port — Dear ImGui UI layer
 * Copyright (C) 2021-2025 mausimus (mausimus.net)
 * https://github.com/mausimus/ShaderGlass
 * GNU General Public License v3.0
 *
 * =========================================================================
 * CMake / FetchContent Integration (add to root CMakeLists.txt)
 * =========================================================================
 *
 * FetchContent_Declare(
 *     imgui
 *     GIT_REPOSITORY https://github.com/ocornut/imgui.git
 *     GIT_TAG        v1.91.6
 *     GIT_SHALLOW    TRUE
 * )
 * FetchContent_MakeAvailable(imgui)
 *
 * Then in ShaderGlass/MacOS/CMakeLists.txt, add an OBJECT library:
 *
 *   add_library(imgui-backends OBJECT
 *       ${imgui_SOURCE_DIR}/backends/imgui_impl_glfw.cpp
 *       ${imgui_SOURCE_DIR}/backends/imgui_impl_vulkan.cpp
 *   )
 *   target_include_directories(imgui-backends PUBLIC
 *       ${imgui_SOURCE_DIR}
 *       ${imgui_SOURCE_DIR}/backends
 *   )
 *   target_link_libraries(imgui-backends PUBLIC glfw Vulkan::Vulkan)
 *
 * And add to the executable:
 *
 *   target_sources(${APP_NAME} PRIVATE
 *       UI.cpp
 *       ${imgui_SOURCE_DIR}/imgui.cpp
 *       ${imgui_SOURCE_DIR}/imgui_draw.cpp
 *       ${imgui_SOURCE_DIR}/imgui_tables.cpp
 *       ${imgui_SOURCE_DIR}/imgui_widgets.cpp
 *       $<TARGET_OBJECTS:imgui-backends>
 *   )
 *   target_include_directories(${APP_NAME} PRIVATE
 *       ${imgui_SOURCE_DIR}
 *       ${imgui_SOURCE_DIR}/backends
 *   )
 *
 * =========================================================================
 * Main-Loop Integration (in main.cpp)
 * =========================================================================
 *
 * After VulkanCore init and render pass creation:
 *
 *   ShaderUI ui;
 *   ui.init(window, vk, vk.mainRenderPass);
 *
 * Inside the frame loop, after beginFrame but before the render pass:
 *
 *   ui.newFrame();
 *   ui.drawMainUI(vk);
 *
 * Inside the render pass, after vkCmdBeginRenderPass:
 *
 *   ui.render(cmd);
 *
 * Before cleanup:
 *
 *   ui.shutdown(vk);
 *
 * Optional: skip shader rendering when ImGui wants input:
 *
 *   if (!ui.wantsCapture()) { ... draw shader ... }
 *
 * =========================================================================
 * MoltenVK Notes
 * =========================================================================
 *
 * - Pipeline cache must be VK_NULL_HANDLE (MoltenVK does not expose
 *   VkPipelineCache in a way that is useful here).
 * - VK_KHR_portability_subset is already enabled on the device via
 *   VulkanCore; ImGui's Vulkan backend uses only core 1.0 features and
 *   requires no special handling.
 * - The loader function MUST use vkGetInstanceProcAddr (not a GLFW wrapper)
 *   because ImGui needs function pointers for Vulkan commands that GLFW
 *   does not expose.
 */

#include "UI.h"

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_vulkan.h"

#include <cstdio>
#include <algorithm>

// ---------------------------------------------------------------------------
// Constructor / Destructor
// ---------------------------------------------------------------------------

ShaderUI::ShaderUI()  = default;
ShaderUI::~ShaderUI() = default;

// ---------------------------------------------------------------------------
// init
// ---------------------------------------------------------------------------

static void checkVk(VkResult err)
{
    if (err != VK_SUCCESS)
        fprintf(stderr, "[ImGui Vulkan] VkResult = %d\n", static_cast<int>(err));
}

void ShaderUI::init(GLFWwindow* window, VulkanCore& vk, VkRenderPass renderPass)
{
    // 1. Descriptor pool — must exist before ImGui_ImplVulkan_Init
    buildDescriptorPool(vk);

    // 2. Load Vulkan function pointers via the instance-level loader
    ImGui_ImplVulkan_LoadFunctions(
        [](const char* name, void* ud) -> PFN_vkVoidFunction {
            auto inst = static_cast<VkInstance>(ud);
            return vkGetInstanceProcAddr(inst, name);
        },
        reinterpret_cast<void*>(vk.instance));

    // 3. Create ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.IniFilename = nullptr;               // disable imgui.ini

    ImGui::StyleColorsDark();

    // 4. Init GLFW backend
    ImGui_ImplGlfw_InitForVulkan(window, true);

    // 5. Init Vulkan backend
    ImGui_ImplVulkan_InitInfo vi {};
    vi.Instance       = vk.instance;
    vi.PhysicalDevice = vk.physicalDevice;
    vi.Device         = vk.device;
    vi.QueueFamily    = vk.graphicsQueueFamily;
    vi.Queue          = vk.graphicsQueue;
    vi.PipelineCache  = VK_NULL_HANDLE;      // MoltenVK compatibility
    vi.DescriptorPool = m_descPool;
    vi.Subpass        = 0;
    vi.MinImageCount  = 2;
    vi.ImageCount     = static_cast<uint32_t>(vk.swapChainImages.size());
    vi.MSAASamples    = VK_SAMPLE_COUNT_1_BIT;
    vi.Allocator      = nullptr;
    vi.CheckVkResultFn = checkVk;

    vi.RenderPass = renderPass;
    if (!ImGui_ImplVulkan_Init(&vi))
        throw std::runtime_error("ImGui_ImplVulkan_Init failed");

    // 6. Upload font texture
    if (!ImGui_ImplVulkan_CreateFontsTexture())
        throw std::runtime_error("ImGui_ImplVulkan_CreateFontsTexture failed");

    printf("[UI] ImGui + Vulkan initialized\n");
}

// ---------------------------------------------------------------------------
// buildDescriptorPool
// ---------------------------------------------------------------------------

void ShaderUI::buildDescriptorPool(VulkanCore& vk)
{
    VkDescriptorPoolSize poolSizes[] = {
        { VK_DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER, 100 },
    };

    VkDescriptorPoolCreateInfo ci {};
    ci.sType         = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
    ci.flags         = VK_DESCRIPTOR_POOL_CREATE_FREE_DESCRIPTOR_SET_BIT;
    ci.maxSets       = 100;
    ci.poolSizeCount = 1;
    ci.pPoolSizes    = poolSizes;

    if (vkCreateDescriptorPool(vk.device, &ci, nullptr, &m_descPool) != VK_SUCCESS)
        throw std::runtime_error("Failed to create ImGui descriptor pool");
}

// ---------------------------------------------------------------------------
// newFrame
// ---------------------------------------------------------------------------

void ShaderUI::newFrame()
{
    ImGui_ImplVulkan_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

// ---------------------------------------------------------------------------
// render
// ---------------------------------------------------------------------------

void ShaderUI::render(VkCommandBuffer cmd)
{
    ImGui::Render();
    ImDrawData* dd = ImGui::GetDrawData();
    if (dd)
        ImGui_ImplVulkan_RenderDrawData(dd, cmd);
}

// ---------------------------------------------------------------------------
// shutdown
// ---------------------------------------------------------------------------

void ShaderUI::shutdown(VulkanCore& vk)
{
    // Wait for the GPU to finish before tearing down ImGui resources
    vkDeviceWaitIdle(vk.device);

    ImGui_ImplVulkan_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    if (m_descPool != VK_NULL_HANDLE)
    {
        vkDestroyDescriptorPool(vk.device, m_descPool, nullptr);
        m_descPool = VK_NULL_HANDLE;
    }

    printf("[UI] Shutdown complete\n");
}

// ---------------------------------------------------------------------------
// wantsCapture
// ---------------------------------------------------------------------------

bool ShaderUI::wantsCapture() const
{
    const ImGuiIO& io = ImGui::GetIO();
    return io.WantCaptureMouse || io.WantCaptureKeyboard;
}

// ---------------------------------------------------------------------------
// selectedShaderPath
// ---------------------------------------------------------------------------

const char* ShaderUI::selectedShaderPath() const
{
    return m_selectedShaderPath.empty() ? nullptr : m_selectedShaderPath.c_str();
}

// ---------------------------------------------------------------------------
// drawMainUI  —  sample UI for testing (FPS counter + controls)
// ---------------------------------------------------------------------------

void ShaderUI::drawMainUI(VulkanCore& vk)
{
    (void)vk;

    // ---- FPS counter ----
    m_fpsHistory[m_fpsHistoryIndex % 120] = ImGui::GetIO().Framerate;
    m_fpsHistoryIndex++;

    // ---- Main menu bar ----
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("File"))
        {
            if (ImGui::MenuItem("Open Shader...", "Cmd+O"))
            {
                // TODO: platform-native file-open dialog via NSOpenPanel or
                // a cross-platform file-dialog library (e.g. NFD).
                // For now, set a placeholder.
                m_selectedShaderPath = "placeholder.glsl";
            }
            ImGui::Separator();
            if (ImGui::MenuItem("Quit", "Cmd+Q"))
            {
                // The application checks glfwWindowShouldClose; we can't
                // call it directly from here.  The caller (main.cpp) should
                // handle this by exposing a callback or checking a flag.
            }
            ImGui::EndMenu();
        }

        if (ImGui::BeginMenu("View"))
        {
            ImGui::MenuItem("Demo Window", nullptr, &m_showDemoWindow);
            ImGui::EndMenu();
        }

        ImGui::EndMainMenuBar();
    }

    // ---- Status bar / info overlay (bottom) ----
    ImGuiViewport* vp = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(ImVec2(vp->WorkPos.x, vp->WorkPos.y + vp->WorkSize.y - 28));
    ImGui::SetNextWindowSize(ImVec2(vp->WorkSize.x, 28));

    ImGuiWindowFlags flags = ImGuiWindowFlags_NoTitleBar
                           | ImGuiWindowFlags_NoResize
                           | ImGuiWindowFlags_NoMove
                           | ImGuiWindowFlags_NoScrollbar
                           | ImGuiWindowFlags_NoSavedSettings;

    if (ImGui::Begin("StatusBar", nullptr, flags))
    {
        ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
        ImGui::SameLine(140);
        ImGui::Text("GPU: %s", vk.physicalDevice ? "ready" : "none");

        if (!m_selectedShaderPath.empty())
        {
            ImGui::SameLine();
            ImGui::Text("Shader: %s", m_selectedShaderPath.c_str());
        }

        if (m_captureStarted)
        {
            ImGui::SameLine(ImGui::GetWindowWidth() - 130);
            ImGui::TextColored(ImVec4(1, 1, 0, 1), "Capturing...");
        }
    }
    ImGui::End();

    // ---- Control panel (left side) ----
    ImGui::SetNextWindowPos(ImVec2(vp->WorkPos.x + 8, vp->WorkPos.y + 32), ImGuiCond_Once);
    ImGui::SetNextWindowSize(ImVec2(260, vp->WorkSize.y - 68), ImGuiCond_Once);

    if (ImGui::Begin("Controls", nullptr, flags))
    {
        ImGui::Text("ShaderGlass");
        ImGui::Separator();

        // Shader section
        if (ImGui::CollapsingHeader("Shader", ImGuiTreeNodeFlags_DefaultOpen))
        {
            if (m_selectedShaderPath.empty())
            {
                ImGui::TextDisabled("No shader loaded");
            }
            else
            {
                ImGui::TextWrapped("%s", m_selectedShaderPath.c_str());
            }

            if (ImGui::Button("Open..."))
                m_selectedShaderPath = "placeholder.glsl";   // TODO: real dialog
        }

        // Capture section
        if (ImGui::CollapsingHeader("Capture", ImGuiTreeNodeFlags_DefaultOpen))
        {
            if (!m_captureStarted)
            {
                if (ImGui::Button("Start Capture", ImVec2(-1, 0)))
                    m_captureStarted = true;
            }
            else
            {
                if (ImGui::Button("Stop Capture", ImVec2(-1, 0)))
                    m_captureStarted = false;
            }
        }

        // Parameters section (placeholder)
        if (ImGui::CollapsingHeader("Parameters"))
        {
            static float dummyScale  = 1.0f;
            static int   dummyOption = 1;
            ImGui::SliderFloat("Scale", &dummyScale, 0.25f, 4.0f, "%.2f");
            ImGui::Combo("Filter", &dummyOption, "Nearest\0Bilinear\0Bicubic\0");
        }

        ImGui::Separator();

        // FPS mini plot
        {
            char label[32];
            snprintf(label, sizeof(label), "%.1f FPS", ImGui::GetIO().Framerate);
            float maxFps = 120.0f;
            float avgFps = 0.0f;
            int   count  = std::min(m_fpsHistoryIndex, 120);
            for (int i = 0; i < count; ++i)
                avgFps += m_fpsHistory[i];
            if (count > 0)
                avgFps /= static_cast<float>(count);

            ImGui::PlotLines("##fpsplot", m_fpsHistory, count,
                             m_fpsHistoryIndex % 120, label, 0.0f, maxFps,
                             ImVec2(-1, 40));
            ImGui::Text("Avg: %.1f  Max: %d", avgFps, count > 0
                        ? static_cast<int>(*std::max_element(m_fpsHistory, m_fpsHistory + count))
                        : 0);
        }
    }
    ImGui::End();

    // ---- Demo window (optional, needs imgui_demo.cpp) ----
    // if (m_showDemoWindow)
    //     ImGui::ShowDemoWindow(&m_showDemoWindow);
}
