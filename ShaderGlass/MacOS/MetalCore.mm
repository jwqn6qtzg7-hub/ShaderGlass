#include "MetalCore.h"

#import <Metal/Metal.h>
#import <QuartzCore/CAMetalLayer.h>
#import <AppKit/AppKit.h>

#define GLFW_EXPOSE_NATIVE_COCOA
#include <GLFW/glfw3native.h>

#include <iostream>

void MetalCore::init(GLFWwindow* window)
{
    this->window = window;
    device = MTLCreateSystemDefaultDevice();
    if(!device)
        throw std::runtime_error("[Metal] No Metal-capable GPU found");

    commandQueue = [device newCommandQueue];
    frameSemaphore = dispatch_semaphore_create(maxFramesInFlight);

    NSWindow* nsWindow = glfwGetCocoaWindow(window);
    NSView*   contentView = nsWindow.contentView;
    contentView.wantsLayer = YES;

    nsWindow.level = NSFloatingWindowLevel;
    nsWindow.collectionBehavior = NSWindowCollectionBehaviorCanJoinAllSpaces
                                | NSWindowCollectionBehaviorStationary
                                | NSWindowCollectionBehaviorIgnoresCycle;

    metalLayer = [CAMetalLayer layer];
    metalLayer.device      = device;
    metalLayer.pixelFormat = MTLPixelFormatBGRA8Unorm;
    metalLayer.framebufferOnly = NO;
    metalLayer.contentsScale = nsWindow.backingScaleFactor;
    metalLayer.frame = contentView.bounds;
    metalLayer.drawableSize = CGSizeMake(contentView.bounds.size.width * metalLayer.contentsScale,
                                         contentView.bounds.size.height * metalLayer.contentsScale);

    contentView.layer = metalLayer;

    std::cout << "[Metal] Device: " << [device.name UTF8String] << std::endl;
}

void MetalCore::beginFrame()
{
    dispatch_semaphore_wait(frameSemaphore, DISPATCH_TIME_FOREVER);

    @autoreleasepool
    {
        NSWindow* nsWindow = glfwGetCocoaWindow(window);
        NSView* contentView = nsWindow.contentView;
        CGFloat scale = nsWindow.backingScaleFactor;
        int fbWidth = 0, fbHeight = 0;
        glfwGetFramebufferSize(window, &fbWidth, &fbHeight);

        metalLayer.contentsScale = scale;
        metalLayer.frame = contentView.bounds;
        if(fbWidth > 0 && fbHeight > 0)
            metalLayer.drawableSize = CGSizeMake(fbWidth, fbHeight);

        currentDrawable = [[metalLayer nextDrawable] retain];
        if(!currentDrawable)
            throw std::runtime_error("[Metal] Failed to acquire drawable");

        drawableTexture = currentDrawable.texture;
        drawableWidth   = (uint32_t)drawableTexture.width;
        drawableHeight  = (uint32_t)drawableTexture.height;

        currentCommandBuffer = [[commandQueue commandBuffer] retain];
    }
}

void MetalCore::endFrame()
{
    @autoreleasepool
    {
        __block dispatch_semaphore_t sem = frameSemaphore;
        [currentCommandBuffer addCompletedHandler:^(id<MTLCommandBuffer> buf) {
            (void)buf;
            dispatch_semaphore_signal(sem);
        }];

        [currentCommandBuffer presentDrawable:currentDrawable];
        [currentCommandBuffer commit];
    }

    [currentDrawable release];
    [currentCommandBuffer release];
    currentDrawable      = nil;
    currentCommandBuffer = nil;
    drawableTexture      = nil;
}

void MetalCore::cleanup()
{
    @autoreleasepool
    {
        dispatch_semaphore_wait(frameSemaphore, DISPATCH_TIME_FOREVER);

        commandQueue = nil;
        device       = nil;
        metalLayer   = nil;
    }
}

void* MetalCore::layer() const
{
    return (__bridge void*)metalLayer;
}
