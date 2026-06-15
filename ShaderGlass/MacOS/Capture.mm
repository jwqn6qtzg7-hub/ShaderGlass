#import <ScreenCaptureKit/ScreenCaptureKit.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>

#include "Capture.h"

#include <iostream>
#include <atomic>

// ---------------------------------------------------------------------------
// Objective-C delegate that conforms to SCStreamOutput / SCStreamDelegate
// ---------------------------------------------------------------------------
@interface CaptureDelegate : NSObject<SCStreamDelegate>
{
    ScreenCapture::FrameCallback _frameCallback;
    std::atomic<bool>            _active;
}
- (instancetype)initWithCallback:(ScreenCapture::FrameCallback)callback;
- (void)deactivate;
@end

@implementation CaptureDelegate

- (instancetype)initWithCallback:(ScreenCapture::FrameCallback)callback
{
    self = [super init];
    if(self)
    {
        _frameCallback = std::move(callback);
        _active.store(true, std::memory_order_release);
    }
    return self;
}

- (void)deactivate
{
    _active.store(false, std::memory_order_release);
}

- (void)stream:(SCStream *)stream didOutputSampleBuffer:(CMSampleBufferRef)sampleBuffer ofType:(SCStreamOutputType)type
{
    (void)stream;
    if(type != SCStreamOutputTypeScreen) return;
    if(!_active.load(std::memory_order_acquire)) return;
    if(!_frameCallback) return;

    CVPixelBufferRef pixelBuffer = CMSampleBufferGetImageBuffer(sampleBuffer);
    if(!pixelBuffer) return;

    CVPixelBufferLockBaseAddress(pixelBuffer, kCVPixelBufferLock_ReadOnly);

    size_t        width       = CVPixelBufferGetWidth(pixelBuffer);
    size_t        height      = CVPixelBufferGetHeight(pixelBuffer);
    size_t        bytesPerRow = CVPixelBufferGetBytesPerRow(pixelBuffer);
    const uint8_t* baseAddress = (const uint8_t*)CVPixelBufferGetBaseAddress(pixelBuffer);

    if(baseAddress)
        _frameCallback(baseAddress, (int)width, (int)height, (int)bytesPerRow);

    CVPixelBufferUnlockBaseAddress(pixelBuffer, kCVPixelBufferLock_ReadOnly);
}

@end

// ---------------------------------------------------------------------------
// Internal implementation struct (PIMPL)
// ---------------------------------------------------------------------------
struct CaptureImpl
{
    SCStream*           stream   {nil};
    CaptureDelegate*    delegate {nil};
    dispatch_queue_t    queue     {nullptr};
    bool                active   {false};
};

// ---------------------------------------------------------------------------
// ScreenCapture public API
// ---------------------------------------------------------------------------
ScreenCapture::ScreenCapture()
{
    m_impl = new CaptureImpl();
}

ScreenCapture::~ScreenCapture()
{
    stop();
    delete static_cast<CaptureImpl*>(m_impl);
    m_impl = nullptr;
}

bool ScreenCapture::start(FrameCallback callback)
{
    if(!callback) return false;

    CaptureImpl* impl = static_cast<CaptureImpl*>(m_impl);
    if(impl->active) stop();

    dispatch_queue_t queue = dispatch_queue_create("net.mausimus.ShaderGlass.capture", DISPATCH_QUEUE_SERIAL);
    if(!queue)
    {
        std::cerr << "[Capture] Failed to create dispatch queue" << std::endl;
        return false;
    }

    // Request shareable content. SCK requires main thread, but we may be
    // called from GLFW main loop. Use run-loop pumping to avoid deadlock.
    __block bool        success = false;
    __block SCDisplay*  target  = nil;
    dispatch_semaphore_t sem    = dispatch_semaphore_create(0);

    if([NSThread isMainThread])
    {
        [SCShareableContent getShareableContentWithCompletionHandler:^(SCShareableContent* content, NSError* error) {
            if(!error && content.displays.count > 0) { target = content.displays.firstObject; success = true; }
            else { std::cerr << "[Capture] Permission needed: " << (error ? error.localizedDescription.UTF8String : "no displays") << std::endl; }
            dispatch_semaphore_signal(sem);
        }];
        while(dispatch_semaphore_wait(sem, DISPATCH_TIME_NOW))
            [[NSRunLoop mainRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate distantPast]];
    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            [SCShareableContent getShareableContentWithCompletionHandler:^(SCShareableContent* content, NSError* error) {
                if(!error && content.displays.count > 0) { target = content.displays.firstObject; success = true; }
                else { std::cerr << "[Capture] Permission needed: " << (error ? error.localizedDescription.UTF8String : "no displays") << std::endl; }
                dispatch_semaphore_signal(sem);
            }];
        });
        dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
    }

    if(!success || !target)
    {
        dispatch_release(queue);
        return false;
    }

    // Build filter and configuration
    SCContentFilter* filter = [[SCContentFilter alloc] initWithDisplay:target excludingWindows:@[]];

    SCStreamConfiguration* config = [[SCStreamConfiguration alloc] init];
    config.pixelFormat           = kCVPixelFormatType_32BGRA;
    config.width                 = target.width;
    config.height                = target.height;
    config.minimumFrameInterval  = CMTimeMake(1, 60);
    config.queueDepth            = 3;
    config.showsCursor           = YES;

    // Delegate lifetime tied to the stream; stream retains it
    CaptureDelegate* delegate = [[CaptureDelegate alloc] initWithCallback:callback];

    SCStream* stream = [[SCStream alloc] initWithFilter:filter
                                          configuration:config
                                               delegate:delegate];

    if(!stream)
    {
        std::cerr << "[Capture] Failed to create SCStream" << std::endl;
        dispatch_release(queue);
        return false;
    }

    // Begin capture
    __block bool started = false;
    dispatch_semaphore_t startSem = dispatch_semaphore_create(0);

    [stream startCaptureWithCompletionHandler:^(NSError* error) {
        if(error)
        {
            std::cerr << "[Capture] SCStream start failed: "
                      << error.localizedDescription.UTF8String
                      << " (code " << error.code << ")" << std::endl;
        }
        else
        {
            started = true;
            std::cout << "[Capture] Capturing display "
                      << target.displayID << " ("
                      << target.width << "x" << target.height << ")" << std::endl;
        }
        dispatch_semaphore_signal(startSem);
    }];

    dispatch_semaphore_wait(startSem, DISPATCH_TIME_FOREVER);

    if(!started)
    {
        stream  = nil;
        delegate = nil;
        dispatch_release(queue);
        return false;
    }

    impl->stream   = stream;
    impl->delegate = delegate;
    impl->queue    = queue;
    impl->active   = true;
    return true;
}

bool ScreenCapture::startDisplay(uint32_t displayID, FrameCallback callback)
{
    if(!callback) return false;

    CaptureImpl* impl = static_cast<CaptureImpl*>(m_impl);
    if(impl->active) stop();

    dispatch_queue_t queue = dispatch_queue_create("net.mausimus.ShaderGlass.capture", DISPATCH_QUEUE_SERIAL);
    if(!queue)
    {
        std::cerr << "[Capture] Failed to create dispatch queue" << std::endl;
        return false;
    }

    __block bool        success = false;
    __block SCDisplay*  target  = nil;
    dispatch_semaphore_t sem    = dispatch_semaphore_create(0);

    dispatch_async(dispatch_get_main_queue(), ^{
        [SCShareableContent getShareableContentWithCompletionHandler:^(SCShareableContent* content, NSError* error) {
            @autoreleasepool {
                if(error)
                {
                    std::cerr << "[Capture] Permission denied or system error: "
                              << error.localizedDescription.UTF8String << std::endl;
                    std::cerr << "[Capture] Grant screen recording permission in System Settings > Privacy & Security"
                              << std::endl;
                }
                else
                {
                    for(SCDisplay* d in content.displays)
                    {
                        if(d.displayID == displayID)
                        {
                            target  = d;
                            success = true;
                            break;
                        }
                    }
                    if(!target)
                        std::cerr << "[Capture] Display " << displayID << " not found" << std::endl;
                }
                dispatch_semaphore_signal(sem);
            }
        }];
    });

    dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);

    if(!success || !target)
    {
        dispatch_release(queue);
        return false;
    }

    SCContentFilter* filter = [[SCContentFilter alloc] initWithDisplay:target excludingWindows:@[]];

    SCStreamConfiguration* config = [[SCStreamConfiguration alloc] init];
    config.pixelFormat           = kCVPixelFormatType_32BGRA;
    config.width                 = target.width;
    config.height                = target.height;
    config.minimumFrameInterval  = CMTimeMake(1, 60);
    config.queueDepth            = 3;
    config.showsCursor           = YES;

    CaptureDelegate* delegate = [[CaptureDelegate alloc] initWithCallback:callback];

    SCStream* stream = [[SCStream alloc] initWithFilter:filter
                                          configuration:config
                                               delegate:delegate];

    if(!stream)
    {
        std::cerr << "[Capture] Failed to create SCStream" << std::endl;
        dispatch_release(queue);
        return false;
    }

    __block bool started = false;
    dispatch_semaphore_t startSem = dispatch_semaphore_create(0);

    [stream startCaptureWithCompletionHandler:^(NSError* error) {
        if(error)
        {
            std::cerr << "[Capture] SCStream start failed: "
                      << error.localizedDescription.UTF8String
                      << " (code " << error.code << ")" << std::endl;
        }
        else
        {
            started = true;
            std::cout << "[Capture] Capturing display "
                      << target.displayID << " ("
                      << target.width << "x" << target.height << ")" << std::endl;
        }
        dispatch_semaphore_signal(startSem);
    }];

    dispatch_semaphore_wait(startSem, DISPATCH_TIME_FOREVER);

    if(!started)
    {
        stream   = nil;
        delegate  = nil;
        dispatch_release(queue);
        return false;
    }

    impl->stream   = stream;
    impl->delegate = delegate;
    impl->queue    = queue;
    impl->active   = true;
    return true;
}

void ScreenCapture::stop()
{
    CaptureImpl* impl = static_cast<CaptureImpl*>(m_impl);
    if(!impl->active) return;

    impl->active = false;

    // Disable frame callbacks before tearing down the stream
    if(impl->delegate)
        [impl->delegate deactivate];

    if(impl->stream)
    {
        dispatch_semaphore_t sem = dispatch_semaphore_create(0);
        [impl->stream stopCaptureWithCompletionHandler:^(NSError* error) {
            if(error)
                std::cerr << "[Capture] Stop capture error: "
                          << error.localizedDescription.UTF8String << std::endl;
            dispatch_semaphore_signal(sem);
        }];
        dispatch_semaphore_wait(sem, dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC));
        impl->stream = nil;
    }

    impl->delegate = nil;
    if(impl->queue)
    {
        dispatch_release(impl->queue);
        impl->queue = nullptr;
    }

    std::cout << "[Capture] Stopped" << std::endl;
}

bool ScreenCapture::isCapturing() const
{
    return static_cast<const CaptureImpl*>(m_impl)->active;
}
