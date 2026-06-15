# ShaderGlass macOS Port — Capture & Glass-Overlay Skill

This document captures the operational knowledge required to work on the
`macos-metal` branch's screen-capture and glass-overlay subsystems. Read
it before touching `Capture.mm`, `main.mm`, or the capture-crop math.

## 1. Mode of Operation

The macOS port runs as a **glass overlay** by design: the user opens
ShaderGlass, clicks "Start Capture", and the chain renders the desktop
region behind the window through the loaded `.slangp` preset. Outside the
window, the desktop is unaltered. Inside the window, the shader is
applied to the previously-captured region (one-frame lag, no recursion).

There is no "clone the whole desktop into a small window" mode on macOS
in the current implementation. The full-desktop-rendered-back-to-the-
window behavior is a bug, not a feature.

## 2. ScreenCaptureKit Coordinate Conventions

- `SCDisplay.width` / `.height` are in **points** (logical pixels).
- `SCStreamConfiguration.width` / `.height` are in **pixels**.
- The captured `CMSampleBuffer` is in pixels, top-down (row 0 is the top
  of the display), BGRA8.
- `NSScreen.backingScaleFactor` is the multiplier to convert points to
  pixels (2.0 on Retina, 1.0 otherwise).
- `glfwGetWindowPos` / `glfwGetWindowSize` on macOS return the
  **content area's top-left** in points with Y growing downward —
  matching the SCK capture orientation. **No Y flip is needed.**
- `glfwGetWindowContentScale` returns the scale factor to convert
  window points to window framebuffer pixels.

To compute the window rect in capture pixels:

```cpp
int posX, posY, sizeW, sizeH;
glfwGetWindowPos(window, &posX, &posY);
glfwGetWindowSize(window, &sizeW, &sizeH);
float sx, sy;
glfwGetWindowContentScale(window, &sx, &sy);
int fbW, fbH;
glfwGetFramebufferSize(window, &fbW, &fbH);
int winPxX = (int)std::lroundf((float)posX * sx);
int winPxY = (int)std::lroundf((float)posY * sy);
int winPxW = fbW;
int winPxH = fbH;
```

## 3. Glass-Overlay Crop Pipeline

`main.mm` does the following each frame:

1. Compute `winPxX/Y/W/H` as above.
2. When a new capture frame arrives (`capNewFrame == true`), crop the
   full-display BGRA to the window's pixel rect:
   - `cropX = max(0, winPxX)`
   - `cropY = max(0, winPxY)`
   - `cropW = min(winPxW, capWidth  - cropX)`
   - `cropH = min(winPxH, capHeight - cropY)`
3. Copy the cropped region row-by-row into a tightly-packed buffer
   (each row of the crop is `cropW * 4` bytes).
4. Upload the crop into `captureTex` (sized `cropW x cropH`).
5. Call `chain.resize(mc, captureW=winPxW, captureH=winPxH,
   viewportW=drawableW, viewportH=drawableH)`.
6. Call `chain.process(mc, captureTex.texture(),
   captureTex.sampler(), frame, frame)`.

The chain sees an input already window-sized, so the last pass writes
to the drawable 1:1.

## 4. The Recursion Trap (and How to Avoid It)

If the SCK capture **includes the window's own pixels**, the chain
copies them, renders the result back to the window, the OS composites
the window on top of the desktop, the next capture sees the chain's
output inside the window, and so on. From the user's perspective this
looks like infinite self-similar nesting (Droste effect).

**Two complementary mitigations are required:**

1. **Exclude the window at the SCK level** (`SCContentFilter`'s
   `excludingWindows:` parameter). Pass the host `NSWindow*` to
   `capture.start(callback, nsWindow)` and look up the matching
   `SCWindow` by `windowID == nsWindow.windowNumber` in the shareable
   content fetched synchronously in the same call.
2. **Crop the captured frame to the window's screen rect** in
   `main.mm` before uploading. This is a defense-in-depth measure in
   case the SCK exclude ever fails (e.g. window ID not in the
   shareable content for some reason).

If the chain still shows recursion after both mitigations are in place,
check `~/Library/Logs/ShaderGlass.log` (see §6) and the system log
(`log show --predicate 'process == "ShaderGlass"' --last 5m`) for
confirmation that the exclude matched.

## 5. Async-Block Pitfall in Capture.mm

`[SCShareableContent getShareableContentWithCompletionHandler:]` is
asynchronous. The completion block runs on the main queue, possibly
after the calling function has already returned.

The original `start()` and `startDisplay()` correctly use a semaphore +
runloop pump to wait for the result (see `waitOnMainLoop`). **Any code
that calls `getShareableContentWithCompletionHandler:` without waiting
will see a stale `nil` result and silently fail.**

Concretely: the SCK window-exclude logic must reuse the shareable
content fetched during display selection — fetching it again in a
second async call and reading the result before the block runs is a
bug. Always capture the shareable content in a `__block` variable from
the first call and read it after the runloop pump.

## 6. Diagnostics for Finder-Launched Apps

`std::cerr` and `NSLog` from a `.app` bundle launched from Finder are
not visible in a terminal. The current code does log key events to
stderr and NSLog, but those are not visible in the typical
double-click-to-launch workflow.

To view diagnostics when the app is launched from Finder:

```bash
# From Terminal
log show --predicate 'process == "ShaderGlass"' --last 5m
# (Console.app also works: filter by process "ShaderGlass")
```

If you need persistent diagnostics for a debugging session, temporarily
add a `std::ofstream` to `~/Library/Logs/ShaderGlass.log`. Do not leave
such logging in production code — it is intentionally absent from the
current build.

## 7. Capture-Side Lifetime Rules

- `ScreenCapture::start()` / `startDisplay()` return `false` if SCK
  permission is denied or no displays are available. The caller
  (`main.mm`) must reset the UI state on failure to avoid retry
  storms (already wired up; do not remove the `loggedStartFail`
  guard).
- `ScreenCapture::stop()` is safe to call when not capturing; it
  early-returns.
- The capture callback (`FrameCallback`) is invoked on a private
  serial dispatch queue owned by `ScreenCapture`. The callback must
  be cheap and thread-safe; `main.mm` uses a `std::mutex` + a
  copy-into-`std::vector` pattern.
- `SCStream` must have a registered stream output before
  `startCaptureWithCompletionHandler:` is called, otherwise the stream
  reports as active but never delivers frames. This is handled in
  `Capture.mm`; do not reorder those calls.

## 8. MetalCore Lifetime Rules

- `currentCommandBuffer` and `currentDrawable` returned by SCK
  and the CAMetalLayer are autoreleased. With the non-ARC `.mm`
  files in this port, you must `[obj retain]` them in `beginFrame()`
  and `[obj release]` them in `endFrame()`. Without explicit retain,
  the `@autoreleasepool` block in `beginFrame()` drains and the
  pointer becomes a dangling reference to reused memory. This was a
  real bug in the initial macos-metal port (crt-lottes.slangp would
  crash on the second frame).
- All `MetalPass` resources (`m_pipelineState`, `m_constBuf`,
  `m_pushBuf`, `m_vertBuf`, `m_sourceSampler`) are owned via
  `__bridge_retained void*` storage. The `releaseMetalObject` helper
  uses `__bridge_transfer` to release. **These `.mm` files must stay
  non-ARC** — converting them to ARC will cause double-release
  crashes (see CMakeLists.txt's `set_source_files_properties` block).
- Files that don't use the `__bridge_retained` storage pattern
  (`main.mm`, `UI.mm`, `Capture.mm`) can safely be ARC and are
  configured as such.

## 9. Manual Verification Checklist

After any change to the capture, chain, or main loop:

1. `rm -rf build-metal/ShaderGlass/MacOS/ShaderGlass.app` (per
   AGENTS.md, to clear stale signing).
2. `cmake --build build-metal --config Debug` — must compile clean.
3. `./build-metal/ShaderGlass/MacOS/ShaderGlassSmoke` — all 7 smoke
   presets must report `[smoke] OK` and exit 0.
4. Launch the app, click "Start Capture", confirm the window shows a
   CRT-shaded slice of the desktop behind it (move the window to
   verify the content follows).
5. **Move the window over a non-fractal area of the desktop.** If
   you still see a strong self-similar Droste pattern, the SCK
   exclude is broken — check the system log to confirm the
   `[Capture] Excluding ShaderGlass window` line.
