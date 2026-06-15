/*
ShaderGlass macOS port: ScreenCaptureKit capture layer.
ARC-managed Objective-C++.
*/

#import <ScreenCaptureKit/ScreenCaptureKit.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>
#import <AppKit/AppKit.h>

#include "Capture.h"

#include <cmath>
#include <iostream>
#include <atomic>

// ---------------------------------------------------------------------------
// Objective-C delegate that conforms to SCStreamOutput / SCStreamDelegate
// ---------------------------------------------------------------------------
@interface CaptureDelegate : NSObject<SCStreamDelegate, SCStreamOutput>
{
@public
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
    dispatch_queue_t    queue    {nullptr};
    bool                active   {false};
};

// Helper: pump the main runloop while waiting on a background signal.
// Mirrors the behavior used in ScreenCapture::start() so callers on the
// main thread don't block SCK's completion-handler dispatch.
static void waitOnMainLoop(dispatch_semaphore_t sem)
{
    while(dispatch_semaphore_wait(sem, DISPATCH_TIME_NOW))
    {
        @autoreleasepool
        {
            [[NSRunLoop mainRunLoop] runMode:NSDefaultRunLoopMode
                                  beforeDate:[NSDate distantPast]];
        }
    }
}

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

bool ScreenCapture::start(FrameCallback callback, void* excludeWindow)
{
    if(!callback) return false;

    CaptureImpl* impl = static_cast<CaptureImpl*>(m_impl);
    if(impl->active) stop();

    dispatch_queue_t queue = dispatch_queue_create("net.mausimus.ShaderGlass.capture",
                                                    DISPATCH_QUEUE_SERIAL);
    if(!queue)
    {
        std::cerr << "[Capture] Failed to create dispatch queue" << std::endl;
        return false;
    }

    __block bool            success = false;
    __block SCDisplay*      target  = nil;
    __block SCShareableContent* content = nil;
    dispatch_semaphore_t sem    = dispatch_semaphore_create(0);

    void (^handler)(SCShareableContent*, NSError*) = ^(SCShareableContent* c, NSError* error) {
        @autoreleasepool {
            if(!error && c.displays.count > 0)
            {
                content = c;
                target  = c.displays.firstObject;
                success = true;
            }
            else
            {
                std::cerr << "[Capture] Permission needed: "
                          << (error ? error.localizedDescription.UTF8String
                                    : "no displays") << std::endl;
            }
            dispatch_semaphore_signal(sem);
        }
    };

    if([NSThread isMainThread])
    {
        [SCShareableContent getShareableContentWithCompletionHandler:handler];
        waitOnMainLoop(sem);
    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            [SCShareableContent getShareableContentWithCompletionHandler:handler];
        });
        dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);
    }

    if(!success || !target)
    {
        return false;
    }

    // Build filter and configuration
    NSArray* excluded = @[];
    if(excludeWindow != nullptr)
    {
        NSWindow* w = (__bridge NSWindow*)excludeWindow;
        if([w isKindOfClass:[NSWindow class]])
        {
            // Use the shareable content we already fetched (synchronously,
            // via the runloop pump above) to find the SCWindow matching
            // our NSWindow.
            SCWindow* match = nil;
            for(SCWindow* sw in content.windows)
            {
                if(sw.windowID == (uint32_t)w.windowNumber)
                {
                    match = sw;
                    break;
                }
            }
            if(match)
            {
                excluded = @[match];
                std::cerr << "[Capture] Excluding ShaderGlass window (id="
                          << match.windowID << ") from capture" << std::endl;
            }
            else
            {
                std::cerr << "[Capture] Could not find SCWindow for "
                             "NSWindow (windowNumber=" << w.windowNumber
                          << "); capture will include ShaderGlass window"
                          << std::endl;
            }
        }
    }
    SCContentFilter* filter = [[SCContentFilter alloc] initWithDisplay:target
                                                       excludingWindows:excluded];
    uint32_t displayID = target.displayID;

    // SCDisplay.width/height are in points. SCStreamConfiguration
    // expects pixels, so multiply by the display's backing scale.
    CGFloat scale = 1.0;
    for(NSScreen* screen in NSScreen.screens)
    {
        if(screen.deviceDescription[@"NSScreenNumber"] != nil &&
           [screen.deviceDescription[@"NSScreenNumber"] unsignedIntValue] == displayID)
        {
            scale = screen.backingScaleFactor;
            break;
        }
    }
    NSInteger pointW = target.width;
    NSInteger pointH = target.height;
    NSInteger pixelW = (NSInteger)std::lround((double)pointW * (double)scale);
    NSInteger pixelH = (NSInteger)std::lround((double)pointH * (double)scale);

    SCStreamConfiguration* config = [[SCStreamConfiguration alloc] init];
    config.pixelFormat           = kCVPixelFormatType_32BGRA;
    config.width                 = pixelW;
    config.height                = pixelH;
    config.minimumFrameInterval  = CMTimeMake(1, 60);
    config.queueDepth            = 3;
    config.showsCursor           = YES;

    // Delegate lifetime tied to the stream; stream retains it.
    CaptureDelegate* delegate = [[CaptureDelegate alloc] initWithCallback:callback];

    SCStream* stream = [[SCStream alloc] initWithFilter:filter
                                          configuration:config
                                               delegate:delegate];

    if(!stream)
    {
        std::cerr << "[Capture] Failed to create SCStream" << std::endl;
        return false;
    }

    NSError* outputError = nil;
    if(![stream addStreamOutput:delegate
                           type:SCStreamOutputTypeScreen
             sampleHandlerQueue:queue
                          error:&outputError])
    {
        std::cerr << "[Capture] Failed to add stream output: "
                  << (outputError ? outputError.localizedDescription.UTF8String
                                   : "unknown") << std::endl;
        return false;
    }

    // Begin capture
    __block bool started = false;
    dispatch_semaphore_t startSem = dispatch_semaphore_create(0);

    [stream startCaptureWithCompletionHandler:^(NSError* error) {
        @autoreleasepool {
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
                          << displayID << " ("
                          << pixelW << "x" << pixelH << ")" << std::endl;
            }
            dispatch_semaphore_signal(startSem);
        }
    }];

    waitOnMainLoop(startSem);

    if(!started)
    {
        return false;
    }

    impl->stream   = stream;
    impl->delegate = delegate;
    impl->queue    = queue;
    impl->active   = true;
    return true;
}

bool ScreenCapture::startDisplay(uint32_t displayID, FrameCallback callback,
                                     void* excludeWindow)
{
    if(!callback) return false;

    CaptureImpl* impl = static_cast<CaptureImpl*>(m_impl);
    if(impl->active) stop();

    dispatch_queue_t queue = dispatch_queue_create("net.mausimus.ShaderGlass.capture",
                                                    DISPATCH_QUEUE_SERIAL);
    if(!queue)
    {
        std::cerr << "[Capture] Failed to create dispatch queue" << std::endl;
        return false;
    }

    __block bool            success = false;
    __block SCDisplay*      target  = nil;
    __block SCShareableContent* content = nil;
    dispatch_semaphore_t sem    = dispatch_semaphore_create(0);

    // SCK's getShareableContent must run on the main thread. Whether we
    // are already on the main thread or not, schedule the call there and
    // pump the main run loop while waiting (mirroring start() above).
    dispatch_async(dispatch_get_main_queue(), ^{
        [SCShareableContent getShareableContentWithCompletionHandler:^(SCShareableContent* c, NSError* error) {
            @autoreleasepool {
                if(error)
                {
                    std::cerr << "[Capture] Permission denied or system error: "
                              << error.localizedDescription.UTF8String << std::endl;
                    std::cerr << "[Capture] Grant screen recording permission in "
                                 "System Settings > Privacy & Security" << std::endl;
                }
                else
                {
                    content = c;
                    for(SCDisplay* d in c.displays)
                    {
                        if(d.displayID == displayID)
                        {
                            target  = d;
                            success = true;
                            break;
                        }
                    }
                    if(!target)
                        std::cerr << "[Capture] Display " << displayID
                                  << " not found" << std::endl;
                }
                dispatch_semaphore_signal(sem);
            }
        }];
    });

    if([NSThread isMainThread])
        waitOnMainLoop(sem);
    else
        dispatch_semaphore_wait(sem, DISPATCH_TIME_FOREVER);

    if(!success || !target)
    {
        return false;
    }

    NSArray* excluded = @[];
    if(excludeWindow != nullptr)
    {
        NSWindow* w = (__bridge NSWindow*)excludeWindow;
        if([w isKindOfClass:[NSWindow class]])
        {
            SCWindow* match = nil;
            for(SCWindow* sw in content.windows)
            {
                if(sw.windowID == (uint32_t)w.windowNumber)
                {
                    match = sw;
                    break;
                }
            }
            if(match)
            {
                excluded = @[match];
                std::cerr << "[Capture] Excluding ShaderGlass window (id="
                          << match.windowID << ") from capture" << std::endl;
            }
            else
            {
                std::cerr << "[Capture] Could not find SCWindow for "
                             "NSWindow (windowNumber=" << w.windowNumber
                          << "); capture will include ShaderGlass window"
                          << std::endl;
            }
        }
    }
    SCContentFilter* filter = [[SCContentFilter alloc] initWithDisplay:target
                                                       excludingWindows:excluded];
    uint32_t targetDisplayID = target.displayID;

    // Use NSScreen to get the matching display's backing scale; multiply
    // point size by scale to get the pixel size SCK expects.
    CGFloat scale = 1.0;
    for(NSScreen* screen in NSScreen.screens)
    {
        if(screen.deviceDescription[@"NSScreenNumber"] != nil &&
           [screen.deviceDescription[@"NSScreenNumber"] unsignedIntValue] == targetDisplayID)
        {
            scale = screen.backingScaleFactor;
            break;
        }
    }
    NSInteger pointW = target.width;
    NSInteger pointH = target.height;
    NSInteger targetWidth  = (NSInteger)std::lround((double)pointW * (double)scale);
    NSInteger targetHeight = (NSInteger)std::lround((double)pointH * (double)scale);

    SCStreamConfiguration* config = [[SCStreamConfiguration alloc] init];
    config.pixelFormat           = kCVPixelFormatType_32BGRA;
    config.width                 = targetWidth;
    config.height                = targetHeight;
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
        return false;
    }

    NSError* outputError = nil;
    if(![stream addStreamOutput:delegate
                           type:SCStreamOutputTypeScreen
             sampleHandlerQueue:queue
                          error:&outputError])
    {
        std::cerr << "[Capture] Failed to add stream output: "
                  << (outputError ? outputError.localizedDescription.UTF8String
                                   : "unknown") << std::endl;
        return false;
    }

    __block bool started = false;
    dispatch_semaphore_t startSem = dispatch_semaphore_create(0);

    [stream startCaptureWithCompletionHandler:^(NSError* error) {
        @autoreleasepool {
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
                          << targetDisplayID << " ("
                          << targetWidth << "x" << targetHeight << ")" << std::endl;
            }
            dispatch_semaphore_signal(startSem);
        }
    }];

    if([NSThread isMainThread])
        waitOnMainLoop(startSem);
    else
        dispatch_semaphore_wait(startSem, DISPATCH_TIME_FOREVER);

    if(!started)
    {
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
            (void)error;
            dispatch_semaphore_signal(sem);
        }];
        // 5s timeout is plenty for SCK; do not pump the main runloop
        // during stop, since this is called from the main loop.
        dispatch_semaphore_wait(sem, dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC));
    }

    impl->stream   = nil;
    impl->delegate = nil;
    impl->queue    = nullptr;

    std::cout << "[Capture] Stopped" << std::endl;
}

bool ScreenCapture::isCapturing() const
{
    return static_cast<const CaptureImpl*>(m_impl)->active;
}
