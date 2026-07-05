## ShaderGlass

Overlay for running GPU shaders on top of Windows desktop. This fork adds native macOS Metal support.

### macOS Port — AI Transparency

This macOS Metal port was developed with extensive assistance from AI coding tools (opencode, powered by DeepSeek v4 Pro and MiniMax M3). While the AI handled the majority of code generation — porting the DirectX 11 rendering pipeline to Metal, implementing ScreenCaptureKit capture, and building the Dear ImGui UI — my own coding contributions were minimal.

However, AI is not yet capable of replacing the human labor required to pressure-test, validate, and ship even small projects like this one. Evaluating architectural options (MoltenVK vs native Metal), tracking down subtle bugs (ARC bridging, frame-scope retention, recursion traps in glass-overlay mode), and verifying correctness across dozens of shader presets required sustained human judgment and debugging effort.

Every line of generated code was reviewed, and the full test suite (`ShaderGlassSmoke`) passes against 7 representative presets.

Original upstream: [mausimus/ShaderGlass](https://github.com/mausimus/ShaderGlass)

### Features

* applies shader effects on top of desktop, in a floating window or full-screen
* built-in [RetroArch](https://github.com/libretro/RetroArch) shader library (1200+ shaders) covering:
  * CRT monitor simulation
  * image upscaling
  * TV, VHS and handheld simulation
  * softening, denoising, blur, sharpen and many more
* glass-overlay mode using ScreenCaptureKit
* hideable Controls panel with shader parameter sliders
* settings persist across launches via JSON
* import of external .slangp/.slang shaders

<br/>

### Requirements (macOS)

* macOS 14 Sonoma or later
* Apple Silicon or Intel Mac with a Metal-capable GPU

### Requirements (upstream)

* **Windows 10, version 2004** (build 19041) or **Windows 11**
* DirectX 11-capable GPU
* **Linux**: running under Wine/Proton via ScreenCast/PipeWire

<br/>

### Build (macOS)

```bash
# Install dependencies
brew install glfw

# Configure
cmake -S . -B build-metal -DCMAKE_BUILD_TYPE=Debug

# Build
cmake --build build-metal --config Debug

# Run
./build-metal/ShaderGlass/MacOS/ShaderGlass.app/Contents/MacOS/ShaderGlass

# Run smoke test
./build-metal/ShaderGlass/MacOS/ShaderGlassSmoke
```

Dependencies fetched by CMake: glslang, SPIRV-Cross, Dear ImGui, stb.

### Code

Built using CMake and ISO C++ 20.

The macOS Metal port pipeline:
1. ScreenCaptureKit for desktop/window capture
2. GLSL shaders compiled to SPIR-V via glslang, then cross-compiled to Metal Shading Language at runtime via SPIRV-Cross
3. Dear ImGui + GLFW for the UI
4. Multi-pass Metal shader chain with glass-overlay feedback-loop prevention

Original Windows source uses Visual Studio 2022, Windows Capture API, and DirectX 11. See [upstream](https://github.com/mausimus/ShaderGlass) for Windows build instructions.

<br/>

### Notices

* ShaderGlass is provided under [GNU General Public License v3.0](LICENSE)

* Includes shaders from the [libretro/slang-shaders](https://github.com/libretro/slang-shaders) repository.
  Refer to copyright notices within shader code for individual shader license information.

* App icon courtesy of Icons-Land

* Kudos to the RetroArch team, emulator developers, and the retro community

* Original ShaderGlass by [@mausimus](https://github.com/mausimus)
