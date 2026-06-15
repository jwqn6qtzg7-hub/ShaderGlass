#include "MetalTexture.h"

#import <Foundation/Foundation.h>
#import <Metal/Metal.h>

#include <algorithm>
#include <cstring>
#include <iostream>

void TextureSamplerSettings::applyPreset(const char* key, const char* value)
{
    if(!key || !value) return;
    std::string k(key);
    std::string v(value);
    if(k == "linear")
    {
        linear = (v == "true" || v == "1");
    }
    else if(k == "mipmap")
    {
        mipmap = (v == "true" || v == "1");
    }
    else if(k == "wrap_mode")
    {
        // Map all to one of the address modes; clear the others.
        repeat = false;
        mirror = false;
        clamp  = false;
        if(v == "repeat")
            repeat = true;
        else if(v == "mirrored_repeat")
            mirror = true;
        else if(v == "clamp_to_edge" || v == "clamp")
            clamp  = true;
        else if(v == "clamp_to_border")
        {
            // MTLSamplerAddressModeClampToBorder is not available on macOS.
            // Fall back to clamp_to_edge. Caller may log once.
            clamp = true;
        }
    }
}

static void releaseMetalObject(void*& obj)
{
    if(obj)
    {
        id released = (__bridge_transfer id)obj;
        (void)released;
        obj = nullptr;
    }
}

MetalTexture::~MetalTexture()
{
    destroy();
}

MetalTexture::MetalTexture(MetalTexture&& other) noexcept
{
    m_width     = other.m_width;
    m_height    = other.m_height;
    m_mipmapped = other.m_mipmapped;
    m_texture   = other.m_texture;
    m_sampler   = other.m_sampler;

    other.m_width     = 0;
    other.m_height    = 0;
    other.m_mipmapped = false;
    other.m_texture   = nullptr;
    other.m_sampler   = nullptr;
}

MetalTexture& MetalTexture::operator=(MetalTexture&& other) noexcept
{
    if(this == &other)
        return *this;

    destroy();

    m_width     = other.m_width;
    m_height    = other.m_height;
    m_mipmapped = other.m_mipmapped;
    m_texture   = other.m_texture;
    m_sampler   = other.m_sampler;

    other.m_width     = 0;
    other.m_height    = 0;
    other.m_mipmapped = false;
    other.m_texture   = nullptr;
    other.m_sampler   = nullptr;

    return *this;
}

void MetalTexture::create(MetalCore& mc, uint32_t width, uint32_t height,
                           bool renderTarget)
{
    TextureSamplerSettings defaults;
    create(mc, width, height, renderTarget, defaults);
}

void MetalTexture::create(MetalCore& mc, uint32_t width, uint32_t height,
                           bool renderTarget, const TextureSamplerSettings& settings)
{
    destroy();

    m_width     = width;
    m_height    = height;
    m_mipmapped = settings.mipmap;

    if(width == 0 || height == 0)
    {
        std::cerr << "[MetalTexture] Refusing to create zero-sized texture ("
                  << width << "x" << height << ")" << std::endl;
        return;
    }

    id<MTLDevice> device = mc.device;

    MTLTextureDescriptor* desc = [MTLTextureDescriptor
        texture2DDescriptorWithPixelFormat:MTLPixelFormatBGRA8Unorm
        width:width height:height mipmapped:settings.mipmap ? YES : NO];

    desc.usage = MTLTextureUsageShaderRead;
    if(renderTarget)
        desc.usage |= MTLTextureUsageRenderTarget;

    desc.storageMode = MTLStorageModeManaged;

    id<MTLTexture> tex = [device newTextureWithDescriptor:desc];
    if(!tex)
    {
        std::cerr << "[MetalTexture] Failed to allocate texture ("
                  << width << "x" << height << ")" << std::endl;
        return;
    }
    m_texture = (__bridge_retained void*)tex;

    MTLSamplerDescriptor* sd = [MTLSamplerDescriptor new];
    MTLSamplerMinMagFilter filter = settings.linear
        ? MTLSamplerMinMagFilterLinear
        : MTLSamplerMinMagFilterNearest;
    sd.minFilter = filter;
    sd.magFilter = filter;
    if(settings.mipmap)
    {
        sd.mipFilter       = MTLSamplerMipFilterLinear;
        sd.maxAnisotropy   = 1;
    }
    else
    {
        sd.mipFilter = MTLSamplerMipFilterNotMipmapped;
    }

    MTLSamplerAddressMode mode = MTLSamplerAddressModeClampToEdge;
    if(settings.repeat) mode = MTLSamplerAddressModeRepeat;
    else if(settings.mirror) mode = MTLSamplerAddressModeMirrorRepeat;
    // (clamp_to_border is not available on macOS Metal; handled by
    // TextureSamplerSettings::applyPreset which falls back to clamp.)

    sd.sAddressMode = mode;
    sd.tAddressMode = mode;
    id<MTLSamplerState> samp = [device newSamplerStateWithDescriptor:sd];
    m_sampler = (__bridge_retained void*)samp;
}

void MetalTexture::upload(MetalCore& mc, const uint8_t* data, uint32_t width,
                           uint32_t height, uint32_t bytesPerRow)
{
    (void)mc;
    if(!m_texture || !data) return;
    id<MTLTexture> tex = (__bridge id<MTLTexture>)m_texture;
    MTLRegion region = MTLRegionMake2D(0, 0,
        std::min(width, m_width),
        std::min(height, m_height));
    [tex replaceRegion:region mipmapLevel:0
             withBytes:data bytesPerRow:bytesPerRow];

    if(m_mipmapped)
    {
        // Best-effort mip generation; ignores failures (driver-side
        // generation requires BLITLOAEnabled and macOS 10.15+).
        id<MTLBlitCommandEncoder> blit = nil;
        id<MTLCommandBuffer> buf = mc.currentCommandBuffer;
        if(buf)
        {
            blit = [buf blitCommandEncoder];
            if(blit)
            {
                [blit generateMipmapsForTexture:tex];
                [blit endEncoding];
            }
        }
    }
}

void MetalTexture::resize(MetalCore& mc, uint32_t width, uint32_t height)
{
    TextureSamplerSettings settings;
    settings.mipmap = m_mipmapped;
    create(mc, width, height, true, settings);
}

void MetalTexture::destroy()
{
    releaseMetalObject(m_texture);
    releaseMetalObject(m_sampler);
    m_width     = 0;
    m_height    = 0;
    m_mipmapped = false;
}
