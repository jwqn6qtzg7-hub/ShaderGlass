#pragma once

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#ifdef __OBJC__
@protocol MTLDevice;
@protocol MTLCommandQueue;
@protocol MTLCommandBuffer;
@protocol MTLTexture;
@class CAMetalLayer;
@protocol CAMetalDrawable;
#else
typedef void MTLDeviceRef;
typedef void MTLCommandQueueRef;
typedef void MTLCommandBufferRef;
typedef void MTLTextureRef;
typedef void CAMetalLayerRef;
typedef void CAMetalDrawableRef;
#endif

#include <dispatch/dispatch.h>
#include <cstdint>

struct MetalCore
{
#ifdef __OBJC__
    id<MTLDevice>        device;
    id<MTLCommandQueue>  commandQueue;
    CAMetalLayer*        metalLayer;

    id<CAMetalDrawable>  currentDrawable;
    id<MTLCommandBuffer> currentCommandBuffer;
    id<MTLTexture>       drawableTexture;
#else
    void* device;
    void* commandQueue;
    void* metalLayer;
    void* currentDrawable;
    void* currentCommandBuffer;
    void* drawableTexture;
#endif

    dispatch_semaphore_t frameSemaphore;
    int                  maxFramesInFlight {2};

    uint32_t drawableWidth  {0};
    uint32_t drawableHeight {0};

    void init(GLFWwindow* window);
    void beginFrame();
    void endFrame();
    void cleanup();
    void* layer() const;
};
