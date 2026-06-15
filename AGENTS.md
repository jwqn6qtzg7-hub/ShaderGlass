# ShaderGlass macOS Port — AGENTS.md

## Current Status

- Native Metal (`macos-metal`) is the active macOS port in this checkout.
- As of June 15, 2026, the Metal build has been manually verified working: the app launches, screen capture starts, and `slang-shaders/crt/crt-lottes.slangp` renders through the native Metal pipeline.
- Last known-good implementation checkpoint before this note: `ad92a5f4` (`Fix native Metal macOS port rendering`).

## Build Commands

```bash
# Configure MoltenVK branch (from repo root)
cmake -S . -B build-moltenvk -DCMAKE_BUILD_TYPE=Debug

# Build MoltenVK branch
cmake --build build-moltenvk --config Debug

# Run MoltenVK branch
./build-moltenvk/ShaderGlass/MacOS/ShaderGlass.app/Contents/MacOS/ShaderGlass

# Configure native Metal branch (from repo root)
cmake -S . -B build-metal -DCMAKE_BUILD_TYPE=Debug

# Build native Metal branch
cmake --build build-metal --config Debug

# Run native Metal branch
./build-metal/ShaderGlass/MacOS/ShaderGlass.app/Contents/MacOS/ShaderGlass
```

> Use `build-moltenvk` for the `macos-moltenvk` branch and `build-metal` for `macos-metal` to avoid build artifact conflicts.

## Dependencies

- **System** (Homebrew): `glfw`; MoltenVK branch also needs `molten-vk`, `vulkan-headers`, `vulkan-loader`
- **Fetched** (CMake FetchContent): `glslang` (vulkan-sdk-1.4.309.0), `SPIRV-Cross` (vulkan-sdk-1.4.309.0), `imgui` (v1.91.6), `stb` (master)

## Project Structure

```
ShaderGlass/         — Original Windows source (D3D11 + Win32, untouched)
ShaderGC/            — Shader compiler static lib (GLSL→SPIR-V→HLSL→DXBC)
ShaderGen/           — Offline shader generation tool (Windows-only, unchanged)
WineCap/             — Linux PipeWire capture (unchanged)
lib/                 — Windows prebuilt static libs (unused on macOS)
External/            — Prebuilt Windows tools (unused on macOS)
CMakeLists.txt       — Top-level CMake, deps via FetchContent
AGENTS.md            — This file
ShaderGC/MacCompat.h — MSVC compatibility shims for non-Windows builds
ShaderGlass/MacOS/   — macOS port source
  ├── CMakeLists.txt
  ├── main.mm               — Metal entry point, wires all systems together
  ├── MetalCore.h/mm        — Device, CAMetalLayer, command buffers, frame sync
  ├── MetalPass.h/mm        — Single shader pass (SPIR-V→MSL→Metal pipeline)
  ├── MetalTexture.h/mm     — MTLTexture wrapper (render target + shader input)
  ├── MetalShaderChain.h/mm — Multi-pass Metal pipeline
  ├── VulkanCore.h/cpp      — MoltenVK device, swapchain, command buffers, sync
  ├── VulkanPass.h/cpp      — MoltenVK shader pass
  ├── VulkanTexture.h/cpp   — MoltenVK image wrapper
  ├── ShaderChain.h/cpp     — MoltenVK multi-pass pipeline
  ├── Capture.h/mm          — ScreenCaptureKit layer (PIMPL, BGRA8 frames)
  ├── UI.h/mm               — Dear ImGui UI (GLFW+Metal backend)
  ├── ImageIO.h/cpp         — Image load/save via stb_image (WIC replacement)
  ├── Settings.h/cpp        — Cross-platform settings via JSON file (Registry replacement)
  ├── PreprocessShader.h    — GLSL preprocess shader for Vulkan
  └── PassthroughShader.h   — GLSL passthrough shader for testing
```

## Branches

- `macos-metal` — macOS port via native Metal — **active in this checkout**
- `macos-moltenvk` — macOS port via MoltenVK (Vulkan on Metal)
- `master` — Upstream Windows version (untouched)

## Porting Conventions

- Original Windows source in `ShaderGlass/` is left untouched
- Mac port code lives in `ShaderGlass/MacOS/`
- Platform shims go in `ShaderGC/MacCompat.h` (force-included via CMake)
- Shader compilation uses GLSL→SPIR-V path (no DXBC on macOS)
- Native Metal branch cross-compiles SPIR-V to MSL at runtime with SPIRV-Cross
- No modifications to upstream source without good reason

## Native Metal Notes

- Keep shader UBOs on Metal buffer slot 0 and push constants on slot 1. Fullscreen vertex data intentionally uses a high slot (`kVertexBufferIndex`) to avoid collisions; the Metal vertex descriptor attributes and layout must all use that same slot.
- `MetalPass` must own/copy its `ShaderDef`. Do not store a reference to shader defs passed into `MetalShaderChain::rebuild()`, because built-in preprocess definitions can be stack-local and become dangling before the next render call.
- Resize the Metal shader chain against the current CAMetalLayer drawable dimensions whenever a capture texture is valid. Do not tie pass resizing only to new ScreenCaptureKit frames, because window resizes can happen between capture frames.
- ScreenCaptureKit streams must register a screen output with `addStreamOutput:type:sampleHandlerQueue:error:` before `startCaptureWithCompletionHandler:`. Starting an `SCStream` without an output reports capture as active but never delivers frames.
- If experimenting with manual app signing in `build-metal`, delete the generated `ShaderGlass.app` bundle before retesting. Stale `_CodeSignature` artifacts in the build output can make LaunchServices behavior misleading.

## Key Differences: D3D11 → Vulkan

| D3D11 | Vulkan (MacOS) |
|---|---|
| ID3D11Device/Context | VulkanCore (VkDevice, VkQueue) |
| IDXGISwapChain | VkSwapchainKHR (via MoltenVK) |
| ID3D11Texture2D | VkImage + VkImageView |
| ID3D11RenderTargetView | VkImageView + VkFramebuffer |
| ID3D11ShaderResourceView | VkImageView (sampled) + VkSampler |
| ID3D11VertexShader/PixelShader | VkShaderModule (SPIR-V) |
| ID3D11Buffer (constant) | VkBuffer (UNIFORM_BUFFER) + VkDescriptorSet |
| ShaderPass | VulkanPass |
| D3D11 multi-pass chain | ShaderChain |
| Win32 HWND/menus | GLFW + Dear ImGui |
| Windows.Graphics.Capture | ScreenCaptureKit |
| WIC image I/O | ImageIO (stb_image) |
| Registry settings | Settings (JSON file) |
