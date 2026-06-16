#pragma once

#include "MetalCore.h"

#include <cstdint>

#ifdef __OBJC__
@protocol MTLTexture, MTLSamplerState;
#else
typedef void MTLTextureRef;
typedef void MTLSamplerStateRef;
#endif

// Single Metal-facing sampler configuration object.
// Maps to MTLSamplerAddressMode / MTLSamplerMinMagFilter / mipmapped texture creation.
struct TextureSamplerSettings
{
    bool linear   = false;   // true -> linear filter, false -> nearest
    bool repeat   = false;   // true -> MTLSamplerAddressModeRepeat
    bool mirror   = false;   // true -> MTLSamplerAddressModeMirrorRepeat
    bool clamp    = false;   // true -> MTLSamplerAddressModeClampToEdge
    bool mipmap   = false;   // true -> allocate mipmapped texture & enable mip filter
    bool float_buffer = false; // true -> allocate as MTLPixelFormatRGBA16Float

    // Parse preset key/values (e.g. "linear", "wrap_mode", "mipmap").
    // Recognized: linear=true/false; wrap_mode=repeat|mirrored_repeat|clamp_to_edge|clamp|clamp_to_border;
    // mipmap=true/false.
    void applyPreset(const char* key, const char* value);
};

class MetalTexture
{
public:
    MetalTexture() = default;
    ~MetalTexture();

    MetalTexture(const MetalTexture&) = delete;
    MetalTexture& operator=(const MetalTexture&) = delete;

    MetalTexture(MetalTexture&& other) noexcept;
    MetalTexture& operator=(MetalTexture&& other) noexcept;

    // Existing compatibility wrapper: non-mipmapped, default sampler.
    void create(MetalCore& mc, uint32_t width, uint32_t height,
                bool renderTarget);

    // New creation path: explicit sampler settings + optional mipmapping.
    void create(MetalCore& mc, uint32_t width, uint32_t height,
                bool renderTarget, const TextureSamplerSettings& settings);

    // Upload BGRA8 pixels; if the texture was created mipmapped the
    // driver will generate the lower levels (best-effort).
    void upload(MetalCore& mc, const uint8_t* data, uint32_t width,
                uint32_t height, uint32_t bytesPerRow);

    // Recreate the texture at the new size, keeping the current settings.
    void resize(MetalCore& mc, uint32_t width, uint32_t height);
    void destroy();

    void* texture() const { return m_texture; }
    void* sampler() const { return m_sampler; }

    uint32_t width()   const { return m_width; }
    uint32_t height()  const { return m_height; }
    bool     isMipmapped() const { return m_mipmapped; }
    bool     isFloat() const    { return m_floatBuffer; }
    bool     isValid() const { return m_texture != nullptr; }

private:
    uint32_t m_width  {0};
    uint32_t m_height {0};
    bool     m_mipmapped   {false};
    bool     m_floatBuffer {false};

    void* m_texture {nullptr};
    void* m_sampler {nullptr};
};
