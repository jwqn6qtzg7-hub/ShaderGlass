#include "UI.h"

#import <Metal/Metal.h>

#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_metal.h"

#include <cstdio>
#include <algorithm>

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
    const ImGuiIO& io = ImGui::GetIO();
    return io.WantCaptureMouse || io.WantCaptureKeyboard;
}

const char* ShaderUI::selectedShaderPath() const
{
    return m_selectedShaderPath.empty() ? nullptr : m_selectedShaderPath.c_str();
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
                m_selectedShaderPath = "placeholder.glsl";
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
    }
    ImGui::End();

    ImGui::SetNextWindowPos(ImVec2(vp->WorkPos.x + 8, vp->WorkPos.y + 32), ImGuiCond_Once);
    ImGui::SetNextWindowSize(ImVec2(260, vp->WorkSize.y - 68), ImGuiCond_Once);

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
                m_selectedShaderPath = "placeholder.glsl";
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
        }

        if(ImGui::CollapsingHeader("Parameters"))
        {
            static float dummyScale  = 1.0f;
            static int   dummyOption = 1;
            ImGui::SliderFloat("Scale", &dummyScale, 0.25f, 4.0f, "%.2f");
            ImGui::Combo("Filter", &dummyOption, "Nearest\0Bilinear\0Bicubic\0");
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
