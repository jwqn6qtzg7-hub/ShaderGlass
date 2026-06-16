# ShaderGlass macOS Port — AGENTS.md

## Current Status

- Native Metal (`macos-metal`) is the active macOS port in this checkout.
- The port runs in **glass-overlay mode**: the captured desktop is cropped to the window's screen rect, the chain renders just that region, and the host window is excluded from the SCK capture to break the self-reference feedback loop. See `SKILL.md` for the full capture/glass-overlay lifecycle.
- As of June 15, 2026, the macOS Metal build has a working UI: file menu (Open Shader), hideable Controls panel (Tab or status-bar button), capture start/stop, and the Scale + Filter parameters in the Parameters panel. The shader, capture state, panel visibility, and parameter values all persist across launches via `Settings` (`~/Library/Application Support/ShaderGlass/settings.json`). A "Reset Settings" button in the Controls panel wipes the JSON file after a confirmation modal.
- The `ShaderGlassSmoke` test binary loads 7 representative presets (crt-lottes, feedback, history, pragma-name, average_fill, effect-border-iq, grade) and runs them through the chain for a few frames each. All 7 must report `[smoke] OK` and exit 0.
- Last known-good implementation checkpoint before this note: `ad92a5f4` (`Fix native Metal macOS port rendering`).

## Detailed Subsystem Documentation

- **`SKILL.md`** — capture / glass-overlay lifecycle, SCK conventions, recursion-trap mitigations, lifetime rules, and a manual verification checklist. Read this before touching `Capture.mm`, the capture-crop math in `main.mm`, or `MetalCore.mm`'s frame-scope retention.

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

# Run the smoke test (loads 7 presets, runs the chain)
./build-metal/ShaderGlass/MacOS/ShaderGlassSmoke
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
SKILL.md             — Capture / glass-overlay subsystem reference
ShaderGC/MacCompat.h — MSVC compatibility shims for non-Windows builds
ShaderGlass/MacOS/   — macOS port source
  ├── CMakeLists.txt
  ├── main.mm               — Metal entry point, wires all systems together;
  │                          capture crop, window-edge-case handling, and
  │                          the persisted-settings bootstrap.
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
  ├── PassthroughShader.h   — GLSL passthrough shader for testing
  └── SmokeTest.cpp         — Standalone harness that loads presets through
                             the chain; built as the `ShaderGlassSmoke`
                             target. Used in the verification checklist
                             below.
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
- `MetalCore.mm` is non-ARC and uses `__bridge_retained` / `__bridge_transfer` for `void*` storage of Metal resources; the SCK/CAMetalLayer objects (`currentDrawable`, `currentCommandBuffer`) are autoreleased and must be explicitly `retain`ed in `beginFrame()` and `release`d in `endFrame()`. Without explicit retention, the `@autoreleasepool` block in `beginFrame()` drains and the pointers become dangling references. **Files that use the `__bridge_retained` storage pattern must stay non-ARC**; converting them to ARC causes double-release crashes. `main.mm`, `UI.mm`, and `Capture.mm` use ARC; `MetalCore.mm`, `MetalPass.mm`, `MetalTexture.mm`, and `MetalShaderChain.mm` do not. See `CMakeLists.txt` for the exact split.
- The glass-overlay mode requires SCK capture to exclude the host window AND for `main.mm` to crop the captured frame to the window's screen rect. Both mitigations are necessary: the exclude prevents the chain from seeing its own output at the SCK level, and the crop is defense-in-depth. See `SKILL.md` §4.
- `float_framebuffer=true` is supported: the chain allocates RGBA16F intermediate textures and builds matching RGBA16F pipeline states for those passes. This fixes the yellow/white saturation that previously happened on HDR-heavy presets (Mega Bezel POTATO, NTSC composite, etc.) when they were forced onto BGRA8.
- `mipmap_input=true` is supported: the producer texture for that pass is allocated with mipmaps and `generateMipmaps` is called after each render so the consumer can sample lower LODs correctly.

### Chain Rendering Pipeline

The chain renders one frame in this order (`MetalShaderChain::process`):

1. **Preprocess pass** — samples `captureTex` (the cropped BGRA capture) into `m_preprocessTex` at the chain's `m_originalW × m_originalH` resolution. `m_preprocessTex` is RGBA16F when pass 0 has `float_framebuffer=true`.
2. **User passes** — render per-pass into `m_passTexs[p]` (intermediate) or, for the last pass, into `m_finalTex` (post-scale target). Per-pass metadata is parsed from `ShaderDef::PresetParams` (alias, scale_type_*, scale_*, filter_linear, wrap_mode, mipmap_input, framecount_mod). Pass outputs are RGBA16F when the pass has `float_framebuffer=true`, and mipmapped when the next pass has `mipmap_input=true`.
3. **Blit** — `m_finalTex` is bilinearly upscaled onto the drawable by a dedicated `m_blitPass` (always BGRA8). When `m_scale == 1.0` the blit is effectively a 1:1 copy.
4. **Feedback / history** — a blit encoder copies current pass outputs into `m_feedbackTexs[p]` (named `PassFeedbackN` / `<alias>Feedback`) and the preprocessed capture into the history ring (`OriginalHistory1` is most recent).

Chain state that can be changed at runtime:

- `chain.setScale(s)` — multiplier on the output blit target. Triggers a rebuild.
- `chain.setForceLinear(b)` — overrides the per-pass `filter_linear` PresetParam so every pass's Source sampler is bilinear (or not). Triggers a rebuild.

### UI / Keyboard Shortcuts

- `Tab` — toggles the left-hand "ShaderGlass (Metal)" Controls panel. Suppressed while an ImGui text field is focused so Tab still inserts a tab character.
- `Esc` — quits the application.
- The status bar at the bottom of the window always shows FPS, GPU, current shader path, capture state, and a "Hide/Show Controls" toggle button. (The macOS native menu bar is currently always visible; an earlier attempt to hide it was reverted because it was confused with the ImGui Controls panel.)

### Persisted Settings

`Settings` is the JSON-backed key/value store at `~/Library/Application Support/ShaderGlass/settings.json`. Used keys:

| Key                     | Type   | Default     | Notes                                          |
|-------------------------|--------|-------------|------------------------------------------------|
| `window_x/y/w/h`        | int    | 100/100/800/600 | Window geometry                              |
| `lastShaderPath`        | string | empty       | Auto-loaded at next startup if file exists    |
| `lastCaptureRunning`    | bool   | false       | Whether capture was active at shutdown        |
| `lastControlsVisible`   | bool   | true        | Whether the Controls panel was visible        |
| `lastScale`             | float  | 1.0         | `chain.setScale` value                         |
| `lastFilterMode`        | int    | 1 (Linear)  | 0 = Nearest, 1 = Linear (chain.setForceLinear) |

The "Reset Settings" button in the Controls panel calls `Settings::reset()`, which clears the in-memory map and persists the empty JSON. The UI's local state (selected shader, capture flag, panel visibility, parameter sliders) is reset to defaults; the main loop is signaled to stop capture and revert the chain to the default passthrough preset.

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
