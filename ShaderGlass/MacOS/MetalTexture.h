#pragma once

#include "MetalCore.h"

#include <cstdint>

#ifdef __OBJC__
@protocol MTLTexture, MTLSamplerState;
#else
typedef void* MTLTextureRef;
typedef void* MTLSamplerStateRef;
#endif

class MetalTexture
{
public:
    MetalTexture() = default;
    ~MetalTexture();

    void create(MetalCore& mc, uint32_t width, uint32_t height,
                bool renderTarget);
    void upload(MetalCore& mc, const uint8_t* data, uint32_t width,
                uint32_t height, uint32_t bytesPerRow);
    void resize(MetalCore& mc, uint32_t width, uint32_t height);
    void destroy();

    void* texture() const { return m_texture; }
    void* sampler() const { return m_sampler; }

    uint32_t width()   const { return m_width; }
    uint32_t height()  const { return m_height; }
    bool     isValid() const { return m_texture != nullptr; }

private:
    uint32_t m_width  {0};
    uint32_t m_height {0};

    void* m_texture {nullptr};
    void* m_sampler {nullptr};
};
