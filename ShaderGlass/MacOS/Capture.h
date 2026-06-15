#pragma once

#include <cstdint>
#include <functional>

class ScreenCapture
{
public:
    using FrameCallback = std::function<void(const uint8_t* data, int width, int height, int bytesPerRow)>;

    ScreenCapture();
    ~ScreenCapture();

    ScreenCapture(const ScreenCapture&)            = delete;
    ScreenCapture& operator=(const ScreenCapture&) = delete;
    ScreenCapture(ScreenCapture&&)                 = delete;
    ScreenCapture& operator=(ScreenCapture&&)      = delete;

    // Start capturing the primary display. If `excludeWindow` is non-null
    // it must be a Cocoa NSWindow*; that window will be excluded from
    // the capture so the chain never sees its own output (prevents
    // any chance of feedback even if the crop is wrong).
    bool start(FrameCallback callback, void* excludeWindow = nullptr);
    bool startDisplay(uint32_t displayID, FrameCallback callback,
                      void* excludeWindow = nullptr);
    void stop();

    bool isCapturing() const;

private:
    void* m_impl;
};
