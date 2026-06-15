# ShaderGlass macOS Port — AGENTS.md

## Build Commands

```bash
# Configure (from repo root)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug

# Build
cmake --build build --config Debug

# Run
./build/ShaderGlass/MacOS/ShaderGlass.app/Contents/MacOS/ShaderGlass
```

## Dependencies

- **System** (Homebrew): `glfw`, `molten-vk`, `vulkan-headers`, `vulkan-loader`
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
  ├── main.cpp              — Entry point, wires all systems together
  ├── VulkanCore.h/cpp      — Device, swapchain, command buffers, sync
  ├── VulkanPass.h/cpp      — Single shader pass (Vulkan ShaderPass+Shader)
  ├── VulkanTexture.h/cpp   — VkImage wrapper (render target + shader input)
  ├── ShaderChain.h/cpp     — Multi-pass pipeline (preprocess→passes→swapchain)
  ├── Capture.h/mm          — ScreenCaptureKit layer (PIMPL, BGRA8 frames)
  ├── UI.h/cpp              — Dear ImGui UI (GLFW+Vulkan backend)
  ├── ImageIO.h/cpp         — Image load/save via stb_image (WIC replacement)
  ├── Settings.h/cpp        — Cross-platform settings via JSON file (Registry replacement)
  ├── PreprocessShader.h    — GLSL preprocess shader for Vulkan
  └── PassthroughShader.h   — GLSL passthrough shader for testing
```

## Branches

- `macos-moltenvk` — macOS port via MoltenVK (Vulkan on Metal) — **active**
- `macos-metal` — macOS port via native Metal — **future**
- `master` — Upstream Windows version (untouched)

## Porting Conventions

- Original Windows source in `ShaderGlass/` is left untouched
- Mac port code lives in `ShaderGlass/MacOS/`
- Platform shims go in `ShaderGC/MacCompat.h` (force-included via CMake)
- Shader compilation uses GLSL→SPIR-V path (no DXBC on macOS)
- No modifications to upstream source without good reason

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
