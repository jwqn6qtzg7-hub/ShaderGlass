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

    bool start(FrameCallback callback);
    bool startDisplay(uint32_t displayID, FrameCallback callback);
    void stop();

    bool isCapturing() const;

private:
    void* m_impl;
};
