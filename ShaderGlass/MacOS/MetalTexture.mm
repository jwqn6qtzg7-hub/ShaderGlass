#include "MetalTexture.h"

#import <Metal/Metal.h>

MetalTexture::~MetalTexture()
{
    destroy();
}

void MetalTexture::create(MetalCore& mc, uint32_t width, uint32_t height,
                           bool renderTarget)
{
    destroy();

    m_width  = width;
    m_height = height;

    id<MTLDevice> device = mc.device;

    MTLTextureDescriptor* desc = [MTLTextureDescriptor
        texture2DDescriptorWithPixelFormat:MTLPixelFormatBGRA8Unorm
        width:width height:height mipmapped:NO];

    desc.usage = MTLTextureUsageShaderRead;
    if(renderTarget)
        desc.usage |= MTLTextureUsageRenderTarget;

    desc.storageMode = MTLStorageModeManaged;

    id<MTLTexture> tex = [device newTextureWithDescriptor:desc];
    m_texture = (__bridge void*)tex;

    MTLSamplerDescriptor* sd = [MTLSamplerDescriptor new];
    sd.minFilter = MTLSamplerMinMagFilterLinear;
    sd.magFilter = MTLSamplerMinMagFilterLinear;
    sd.sAddressMode = MTLSamplerAddressModeClampToEdge;
    sd.tAddressMode = MTLSamplerAddressModeClampToEdge;
    id<MTLSamplerState> samp = [device newSamplerStateWithDescriptor:sd];
    m_sampler = (__bridge void*)samp;
}

void MetalTexture::upload(MetalCore& mc, const uint8_t* data, uint32_t width,
                           uint32_t height, uint32_t bytesPerRow)
{
    (void)mc;
    id<MTLTexture> tex = (__bridge id<MTLTexture>)m_texture;
    MTLRegion region = MTLRegionMake2D(0, 0, width, height);
    [tex replaceRegion:region mipmapLevel:0
             withBytes:data bytesPerRow:bytesPerRow];
}

void MetalTexture::resize(MetalCore& mc, uint32_t width, uint32_t height)
{
    create(mc, width, height, true);
}

void MetalTexture::destroy()
{
    m_texture = nil;
    m_sampler = nil;
    m_width  = 0;
    m_height = 0;
}
