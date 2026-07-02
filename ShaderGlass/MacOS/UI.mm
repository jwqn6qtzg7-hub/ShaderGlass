#include "UI.h"

#include "Settings.h"
#include "ShaderDef.h"

#import <AppKit/AppKit.h>
#import <Metal/Metal.h>
#import <UniformTypeIdentifiers/UniformTypeIdentifiers.h>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_metal.h"

#include <cstdio>
#include <algorithm>

namespace
{
    std::string openShaderPresetDialog()
    {
        __block NSString* selectedPath = nil;

        void (^showPanel)(void) = ^{
            NSOpenPanel* panel = [NSOpenPanel openPanel];
            panel.canChooseFiles = YES;
            panel.canChooseDirectories = NO;
            panel.allowsMultipleSelection = NO;
            panel.allowedContentTypes = @[
                [UTType typeWithFilenameExtension:@"slangp"],
                [UTType typeWithFilenameExtension:@"slang"]
            ];
            panel.title = @"Open Shader Preset";

            if([panel runModal] == NSModalResponseOK)
                selectedPath = panel.URL.path;
        };

        if([NSThread isMainThread])
            showPanel();
        else
            dispatch_sync(dispatch_get_main_queue(), showPanel);

        return selectedPath ? std::string(selectedPath.UTF8String) : std::string();
    }
}

ShaderUI::ShaderUI()  = default;
ShaderUI::~ShaderUI() = default;

void ShaderUI::init(GLFWwindow* window, MetalCore& mc)
{
    id<MTLDevice> device = mc.device;

    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
    io.IniFilename = nullptr;

    ImGui::StyleColorsDark();

    ImGui_ImplGlfw_InitForOther(window, true);

    if(!ImGui_ImplMetal_Init(device))
        throw std::runtime_error("ImGui_ImplMetal_Init failed");

    if(!ImGui_ImplMetal_CreateFontsTexture(device))
        throw std::runtime_error("ImGui_ImplMetal_CreateFontsTexture failed");

    printf("[UI] ImGui + Metal initialized\n");
}

void ShaderUI::newFrame(MetalCore& mc)
{
    (void)mc;

    MTLRenderPassDescriptor* rpDesc = [MTLRenderPassDescriptor renderPassDescriptor];
    rpDesc.colorAttachments[0].texture     = mc.drawableTexture;
    rpDesc.colorAttachments[0].loadAction  = MTLLoadActionClear;
    rpDesc.colorAttachments[0].clearColor  = MTLClearColorMake(0, 0, 0, 1);
    rpDesc.colorAttachments[0].storeAction = MTLStoreActionStore;

    ImGui_ImplMetal_NewFrame(rpDesc);
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
}

void ShaderUI::render(MetalCore& mc)
{
    ImGui::Render();
    ImDrawData* dd = ImGui::GetDrawData();
    if(dd)
    {
        MTLRenderPassDescriptor* rpDesc = [MTLRenderPassDescriptor renderPassDescriptor];
        rpDesc.colorAttachments[0].texture     = mc.drawableTexture;
        rpDesc.colorAttachments[0].loadAction  = MTLLoadActionLoad;
        rpDesc.colorAttachments[0].storeAction = MTLStoreActionStore;

        id<MTLCommandBuffer> cmdBuf = mc.currentCommandBuffer;
        id<MTLRenderCommandEncoder> enc =
            [cmdBuf renderCommandEncoderWithDescriptor:rpDesc];
        ImGui_ImplMetal_RenderDrawData(dd, cmdBuf, enc);
        [enc endEncoding];
    }
}

void ShaderUI::shutdown(MetalCore& mc)
{
    (void)mc;
    ImGui_ImplMetal_Shutdown();
    ImGui_ImplGlfw_Shutdown();
    ImGui::DestroyContext();

    printf("[UI] Shutdown complete\n");
}

bool ShaderUI::wantsCapture() const
{
    return m_captureStarted;
}

void ShaderUI::setCaptureStarted(bool started)
{
    m_captureStarted = started;
}

void ShaderUI::setShaderPath(const std::string& path)
{
    m_selectedShaderPath = path;
    m_pendingShaderPath = path;
}

bool ShaderUI::consumeResetRequested()
{
    bool r = m_resetRequested;
    m_resetRequested = false;
    return r;
}

bool ShaderUI::pollControlsHotkey(GLFWwindow* window)
{
    if(!window) return false;

    const bool tabDown = glfwGetKey(window, GLFW_KEY_TAB) == GLFW_PRESS;

    // Don't intercept Tab while the user is typing into an ImGui
    // input — Tab there should insert a tab character / move focus
    // as ImGui normally does.
    if(ImGui::IsAnyItemActive())
    {
        m_controlsHotkeyLatched = false;
        return false;
    }

    if(tabDown && !m_controlsHotkeyLatched)
    {
        m_controlsHotkeyLatched = true;
        toggleControls();
        return true;
    }
    if(!tabDown)
    {
        m_controlsHotkeyLatched = false;
    }
    return false;
}

const char* ShaderUI::selectedShaderPath() const
{
    return m_selectedShaderPath.empty() ? nullptr : m_selectedShaderPath.c_str();
}

std::string ShaderUI::consumeSelectedShaderPath()
{
    std::string path = m_pendingShaderPath;
    m_pendingShaderPath.clear();
    return path;
}

void ShaderUI::drawMainUI(MetalCore& mc)
{
    (void)mc;

    m_fpsHistory[m_fpsHistoryIndex % 120] = ImGui::GetIO().Framerate;
    m_fpsHistoryIndex++;

    if(ImGui::BeginMainMenuBar())
    {
        if(ImGui::BeginMenu("File"))
        {
            if(ImGui::MenuItem("Open Shader...", "Cmd+O"))
            {
                std::string path = openShaderPresetDialog();
                if(!path.empty())
                {
                    m_selectedShaderPath = path;
                    m_pendingShaderPath = path;
                }
            }
            ImGui::Separator();
            if(ImGui::MenuItem("Quit", "Cmd+Q")) {}
            ImGui::EndMenu();
        }
        if(ImGui::BeginMenu("View"))
        {
            ImGui::MenuItem("Demo Window", nullptr, &m_showDemoWindow);
            ImGui::EndMenu();
        }
        ImGui::EndMainMenuBar();
    }

    ImGuiViewport* vp = ImGui::GetMainViewport();
    ImGui::SetNextWindowPos(ImVec2(vp->WorkPos.x, vp->WorkPos.y + vp->WorkSize.y - 28));
    ImGui::SetNextWindowSize(ImVec2(vp->WorkSize.x, 28));

    ImGuiWindowFlags flags = ImGuiWindowFlags_NoTitleBar
                           | ImGuiWindowFlags_NoResize
                           | ImGuiWindowFlags_NoMove
                           | ImGuiWindowFlags_NoScrollbar
                           | ImGuiWindowFlags_NoSavedSettings;

    if(ImGui::Begin("StatusBar", nullptr, flags))
    {
        ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
        ImGui::SameLine(140);
        ImGui::Text("GPU: Metal");
        if(!m_selectedShaderPath.empty())
        {
            ImGui::SameLine();
            ImGui::Text("Shader: %s", m_selectedShaderPath.c_str());
        }
        if(m_captureStarted)
        {
            ImGui::SameLine(ImGui::GetWindowWidth() - 130);
            ImGui::TextColored(ImVec4(1, 1, 0, 1), "Capturing...");
        }
        if(m_controlsVisible)
        {
            ImGui::SameLine(ImGui::GetWindowWidth() - 105);
            if(ImGui::Button("Hide Controls"))
            {
                toggleControls();
            }
        }
        else
        {
            ImGui::SameLine(ImGui::GetWindowWidth() - 220);
            ImGui::TextColored(ImVec4(0.7f, 0.7f, 0.7f, 1.0f),
                               "Press Tab to show controls");
            ImGui::SameLine(ImGui::GetWindowWidth() - 105);
            if(ImGui::Button("Show Controls"))
            {
                toggleControls();
            }
        }
    }
    ImGui::End();

    ImGui::SetNextWindowPos(ImVec2(vp->WorkPos.x + 8, vp->WorkPos.y + 32), ImGuiCond_Once);
    ImGui::SetNextWindowSize(ImVec2(260, vp->WorkSize.y - 68), ImGuiCond_Once);

    // Begin/End must be paired. Only call Begin when the panel is
    // visible; otherwise skip the whole block.
    if(m_controlsVisible)
    {
        if(ImGui::Begin("Controls", nullptr, flags))
        {
            ImGui::Text("ShaderGlass (Metal)");
            ImGui::Separator();

            if(ImGui::CollapsingHeader("Shader", ImGuiTreeNodeFlags_DefaultOpen))
            {
                if(m_selectedShaderPath.empty())
                    ImGui::TextDisabled("No shader loaded");
                else
                    ImGui::TextWrapped("%s", m_selectedShaderPath.c_str());
                if(ImGui::Button("Open..."))
                {
                    std::string path = openShaderPresetDialog();
                    if(!path.empty())
                    {
                        m_selectedShaderPath = path;
                        m_pendingShaderPath = path;
                    }
                }
            }

            if(ImGui::CollapsingHeader("Capture", ImGuiTreeNodeFlags_DefaultOpen))
            {
                if(!m_captureStarted)
                {
                    if(ImGui::Button("Start Capture", ImVec2(-1, 0)))
                        m_captureStarted = true;
                }
                else
                {
                    if(ImGui::Button("Stop Capture", ImVec2(-1, 0)))
                        m_captureStarted = false;
                }
                ImGui::Checkbox("Lock Overlay", &m_overlayLocked);
                ImGui::TextWrapped(
                    "When locked, clicks pass through the glass overlay "
                    "to the desktop. Unlock to move or resize the overlay "
                    "window via its title bar.");
            }

            if(ImGui::CollapsingHeader("Parameters"))
            {
                ImGui::SliderFloat("Scale", &m_scale, 0.0f, 4.0f, "%.2f");

                ImGui::Combo("Filter", &m_filterMode, "Nearest\0Linear\0");

                if(!m_shaderParams.empty())
                {
                    ImGui::Separator();
                    for(auto* p : m_shaderParams)
                    {
                        // Filter: float params with a non-degenerate
                        // range, excluding the system FrameCount param
                        // that is auto-filled every frame.
                        if(p->size != 4) continue;
                        if(p->name == "FrameCount") continue;
                        if(p->maxValue <= p->minValue) continue;

                        const char* label = p->description.empty()
                            ? p->name.c_str() : p->description.c_str();
                        float speed = (p->stepValue > 0.0f)
                            ? p->stepValue
                            : (p->maxValue - p->minValue) / 100.0f;
                        ImGui::DragFloat(p->name.c_str(), &p->currentValue,
                                         speed, p->minValue, p->maxValue,
                                         "%.4f");
                    }
                }
            }

            ImGui::Separator();

            if(ImGui::CollapsingHeader("Settings"))
            {
                if(ImGui::Button("Reset Settings..."))
                {
                    m_resetConfirmOpen = true;
                }
            }

            if(ImGui::CollapsingHeader("Debug"))
            {
                ImGui::Checkbox("Show raw capture (bypass chain)",
                                &m_rawCaptureBypass);
                ImGui::TextWrapped(
                    "When on, the cropped capture is drawn directly to "
                    "the window and the shader chain is skipped. Useful "
                    "for telling capture problems from chain problems.");
            }

            ImGui::Separator();

            {
                char label[32];
                snprintf(label, sizeof(label), "%.1f FPS", ImGui::GetIO().Framerate);
                float maxFps = 120.0f;
                float avgFps = 0.0f;
                int   count  = std::min(m_fpsHistoryIndex, 120);
                for(int i = 0; i < count; ++i)
                    avgFps += m_fpsHistory[i];
                if(count > 0) avgFps /= static_cast<float>(count);

                ImGui::PlotLines("##fpsplot", m_fpsHistory, count,
                                 m_fpsHistoryIndex % 120, label, 0.0f, maxFps,
                                 ImVec2(-1, 40));
                ImGui::Text("Avg: %.1f  Max: %d", avgFps, count > 0
                            ? static_cast<int>(*std::max_element(m_fpsHistory, m_fpsHistory + count))
                            : 0);
            }
        }
        ImGui::End();
    }

    // Reset Settings confirmation modal. The user has to confirm
    // before the JSON file is wiped. Modal is drawn outside the
    // m_controlsVisible block so it remains interactive even if
    // the panel were hidden while the modal was open.
    if(m_resetConfirmOpen)
    {
        ImGui::OpenPopup("Reset Settings");
        if(ImGui::BeginPopupModal("Reset Settings", &m_resetConfirmOpen,
                                  ImGuiWindowFlags_AlwaysAutoResize))
        {
            ImGui::Text("Reset all settings to defaults?");
            ImGui::Text("This will forget your last shader, capture state,");
            ImGui::Text("and window position. The settings file will be");
            ImGui::Text("rewritten as an empty JSON object.");
            ImGui::Separator();
            if(ImGui::Button("Reset", ImVec2(120, 0)))
            {
                Settings::instance().reset();
                m_selectedShaderPath.clear();
                m_pendingShaderPath.clear();
                m_captureStarted = false;
                m_controlsVisible = true;
                m_scale = 1.0f;
                m_filterMode = 1;
                m_resetRequested = true;
                m_resetConfirmOpen = false;
                ImGui::CloseCurrentPopup();
            }
            ImGui::SameLine();
            if(ImGui::Button("Cancel", ImVec2(120, 0)))
            {
                m_resetConfirmOpen = false;
                ImGui::CloseCurrentPopup();
            }
            ImGui::EndPopup();
        }
    }
}

void ShaderUI::setShaderParams(const std::vector<ShaderParam*>& params)
    {
        m_shaderParams = params;
    }
