// Standalone smoke test for the macos-metal port.
//
// Loads each smoke preset (in SLANGP), drives the chain's rebuild/resize/
// process path for a few frames against a synthesized 256x256 capture
// texture, and reports any Metal validation errors / shader compile
// failures to stderr. Exits 0 on success, non-zero on the first failure.
//
// Usage:
//   ShaderGlassSmoke                 # runs all built-in smoke presets
//   ShaderGlassSmoke path/a.slangp path/b.slangp ...
//
// The harness creates a small hidden GLFW window so MetalCore can wire
// up a CAMetalLayer; the actual rendering goes to that drawable.

#include "MetalCore.h"
#include "MetalPass.h"
#include "MetalTexture.h"
#include "MetalShaderChain.h"
#include "ShaderGC.h"

#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>
#define GLFW_EXPOSE_NATIVE_COCOA
#include <GLFW/glfw3native.h>

namespace fs = std::filesystem;

static int g_failures = 0;

static const char* kDefaultPresets[] = {
    "slang-shaders/crt/crt-lottes.slangp",
    "slang-shaders/test/feedback.slangp",
    "slang-shaders/test/history.slangp",
    "slang-shaders/test/pragma-name.slangp",
    "slang-shaders/border/average_fill.slangp",
    "slang-shaders/border/effect-border-iq.slangp",
    "slang-shaders/misc/grade.slangp",
};

static int runOne(MetalCore& mc, const fs::path& presetPath)
{
    std::cout << "[smoke] === " << presetPath << " ===" << std::endl;

    std::ostringstream log;
    bool warn = false;
    ShaderCache cache;
    std::unique_ptr<PresetDef> preset;
    try
    {
        preset.reset(ShaderGC::CompilePreset(presetPath, log, warn, cache));
    }
    catch(const std::exception& e)
    {
        std::cerr << "[smoke] FAIL compile: " << e.what() << std::endl;
        g_failures++;
        return 1;
    }
    if(!preset || preset->ShaderDefs.empty())
    {
        std::cerr << "[smoke] FAIL empty preset" << std::endl;
        g_failures++;
        return 1;
    }
    if(warn)
        std::cerr << "[smoke] shader warnings:\n" << log.str() << std::endl;

    MetalShaderChain chain(mc);
    chain.setPreset(preset.get());

    // Synthesize a 256x256 BGRA8 capture texture so the chain has input.
    constexpr int kCaptureW = 256, kCaptureH = 256;
    std::vector<uint8_t> bgra((size_t)kCaptureW * kCaptureH * 4, 0x80);
    for(int i = 0; i < kCaptureW * kCaptureH; i++)
    {
        bgra[i * 4 + 0] = 0x40; // B
        bgra[i * 4 + 1] = 0x80; // G
        bgra[i * 4 + 2] = 0xC0; // R
        bgra[i * 4 + 3] = 0xFF; // A
    }
    MetalTexture capTex;
    capTex.create(mc, kCaptureW, kCaptureH, false);
    capTex.upload(mc, bgra.data(), kCaptureW, kCaptureH, kCaptureW * 4);

    mc.beginFrame();
    if(mc.drawableWidth == 0 || mc.drawableHeight == 0)
    {
        mc.endFrame();
        std::cerr << "[smoke] FAIL: no drawable size" << std::endl;
        g_failures++;
        return 1;
    }

    chain.resize(mc, kCaptureW, kCaptureH,
                 (int)mc.drawableWidth, (int)mc.drawableHeight);
    try
    {
        for(int frame = 0; frame < 3; frame++)
        {
            chain.process(mc, capTex.texture(), capTex.sampler(),
                          frame, frame);
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "[smoke] FAIL process: " << e.what() << std::endl;
        mc.endFrame();
        g_failures++;
        return 1;
    }

    mc.endFrame();
    std::cout << "[smoke] OK" << std::endl;
    return 0;
}

int main(int argc, char** argv)
{
    try
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_VISIBLE, GLFW_FALSE);
        GLFWwindow* window = glfwCreateWindow(64, 64, "ShaderGlassSmoke",
                                              nullptr, nullptr);
        if(!window) { glfwTerminate(); std::cerr << "no window\n"; return 2; }

        MetalCore mc;
        mc.init(window);

        std::vector<std::string> presets;
        if(argc > 1)
        {
            for(int i = 1; i < argc; i++) presets.emplace_back(argv[i]);
        }
        else
        {
            for(const auto& p : kDefaultPresets) presets.emplace_back(p);
        }

        for(const auto& p : presets)
        {
            if(!fs::exists(p))
            {
                std::cerr << "[smoke] missing preset: " << p << std::endl;
                g_failures++;
                continue;
            }
            runOne(mc, p);
        }

        mc.cleanup();
        glfwDestroyWindow(window);
        glfwTerminate();
        return g_failures == 0 ? 0 : 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Fatal: " << e.what() << std::endl;
        return 2;
    }
}
