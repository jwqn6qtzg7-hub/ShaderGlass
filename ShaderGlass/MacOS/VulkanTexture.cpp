#include "VulkanTexture.h"

VulkanTexture::~VulkanTexture()
{
    // Resources must be destroyed explicitly via destroy() before
    // the VulkanCore device is destroyed.  The destructor is a no-op
    // to avoid order-of-destruction issues.
}

void VulkanTexture::create(VulkanCore& vk, uint32_t width, uint32_t height,
                            VkFormat format, bool renderTarget,
                            VkRenderPass renderPass)
{
    m_width  = width;
    m_height = height;
    m_format = format;
    m_renderPass = renderPass;

    // Image with both render-target and sampled usage
    VkImageUsageFlags usage = VK_IMAGE_USAGE_SAMPLED_BIT | VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if(renderTarget)
        usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;

    vk.createImage(width, height, format, VK_IMAGE_TILING_OPTIMAL,
                   usage,
                   VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT,
                   m_image, m_memory);

    // Transition to shader-read layout (or attachment-optimal if render target)
    VkCommandBuffer cmd = vk.beginSingleTimeCommands();
    VkImageMemoryBarrier barrier {};
    barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.oldLayout                       = VK_IMAGE_LAYOUT_UNDEFINED;
    barrier.newLayout                       = renderTarget ? VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL
                                                           : VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    barrier.srcQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.image                           = m_image;
    barrier.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.baseMipLevel   = 0;
    barrier.subresourceRange.levelCount     = 1;
    barrier.subresourceRange.baseArrayLayer = 0;
    barrier.subresourceRange.layerCount     = 1;
    barrier.srcAccessMask = 0;
    barrier.dstAccessMask = renderTarget ? VK_ACCESS_COLOR_ATTACHMENT_WRITE_BIT
                                         : VK_ACCESS_SHADER_READ_BIT;

    vkCmdPipelineBarrier(cmd,
                         VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         renderTarget ? VK_PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT
                                      : VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT,
                         0, 0, nullptr, 0, nullptr, 1, &barrier);
    vk.endSingleTimeCommands(cmd);

    // Shader-read view
    m_view = vk.createImageView(m_image, format, VK_IMAGE_ASPECT_COLOR_BIT);

    // Render-target view + framebuffer
    if(renderTarget && renderPass)
    {
        m_rtView = vk.createImageView(m_image, format, VK_IMAGE_ASPECT_COLOR_BIT);
        VkFramebufferCreateInfo fbCI {};
        fbCI.sType           = VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO;
        fbCI.renderPass      = renderPass;
        fbCI.attachmentCount = 1;
        fbCI.pAttachments    = &m_rtView;
        fbCI.width           = width;
        fbCI.height          = height;
        fbCI.layers          = 1;
        vkCreateFramebuffer(vk.device, &fbCI, nullptr, &m_framebuffer);
    }

    createSampler(vk);
}

void VulkanTexture::upload(VulkanCore& vk, const uint8_t* data,
                            uint32_t width, uint32_t height, uint32_t bytesPerRow)
{
    // Staging buffer
    VkDeviceSize imageSize = (VkDeviceSize)bytesPerRow * height;
    VkBuffer       stagingBuf;
    VkDeviceMemory stagingMem;
    vk.createBuffer(imageSize, VK_BUFFER_USAGE_TRANSFER_SRC_BIT,
                    VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT,
                    stagingBuf, stagingMem);

    void* p;
    vkMapMemory(vk.device, stagingMem, 0, imageSize, 0, &p);
    // Copy row-by-row in case bytesPerRow != width * 4
    if(bytesPerRow == width * 4)
        memcpy(p, data, imageSize);
    else
    {
        uint8_t* dst = (uint8_t*)p;
        for(uint32_t y = 0; y < height; y++)
            memcpy(dst + y * bytesPerRow, data + y * bytesPerRow, width * 4);
    }
    vkUnmapMemory(vk.device, stagingMem);

    // Transition to transfer-dst
    VkCommandBuffer cmd = vk.beginSingleTimeCommands();
    VkImageMemoryBarrier barrier {};
    barrier.sType                           = VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER;
    barrier.oldLayout                       = VK_IMAGE_LAYOUT_UNDEFINED;
    barrier.newLayout                       = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    barrier.srcQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.dstQueueFamilyIndex             = VK_QUEUE_FAMILY_IGNORED;
    barrier.image                           = m_image;
    barrier.subresourceRange.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
    barrier.subresourceRange.baseMipLevel   = 0;
    barrier.subresourceRange.levelCount     = 1;
    barrier.subresourceRange.baseArrayLayer = 0;
    barrier.subresourceRange.layerCount     = 1;
    barrier.srcAccessMask = 0;
    barrier.dstAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
                         VK_PIPELINE_STAGE_TRANSFER_BIT, 0,
                         0, nullptr, 0, nullptr, 1, &barrier);

    // Copy
    VkBufferImageCopy region {};
    region.bufferOffset                    = 0;
    region.bufferRowLength                 = bytesPerRow / 4; // pixels per row
    region.bufferImageHeight               = height;
    region.imageSubresource.aspectMask     = VK_IMAGE_ASPECT_COLOR_BIT;
    region.imageSubresource.mipLevel       = 0;
    region.imageSubresource.baseArrayLayer = 0;
    region.imageSubresource.layerCount     = 1;
    region.imageExtent = {width, height, 1};
    vkCmdCopyBufferToImage(cmd, stagingBuf, m_image,
                           VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL, 1, &region);

    // Transition to shader-read
    barrier.oldLayout     = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    barrier.newLayout     = VK_IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL;
    barrier.srcAccessMask = VK_ACCESS_TRANSFER_WRITE_BIT;
    barrier.dstAccessMask = VK_ACCESS_SHADER_READ_BIT;
    vkCmdPipelineBarrier(cmd, VK_PIPELINE_STAGE_TRANSFER_BIT,
                         VK_PIPELINE_STAGE_FRAGMENT_SHADER_BIT, 0,
                         0, nullptr, 0, nullptr, 1, &barrier);

    vk.endSingleTimeCommands(cmd);

    vkDestroyBuffer(vk.device, stagingBuf, nullptr);
    vkFreeMemory(vk.device, stagingMem, nullptr);

    m_width  = width;
    m_height = height;
}

void VulkanTexture::resize(VulkanCore& vk, uint32_t width, uint32_t height)
{
    if(width == m_width && height == m_height) return;
    destroy(vk);
    create(vk, width, height, m_format,
           m_framebuffer != VK_NULL_HANDLE, m_renderPass);
}

void VulkanTexture::destroy(VulkanCore& vk)
{
    if(m_sampler)     { vkDestroySampler(vk.device, m_sampler, nullptr); m_sampler = VK_NULL_HANDLE; }
    if(m_framebuffer) { vkDestroyFramebuffer(vk.device, m_framebuffer, nullptr); m_framebuffer = VK_NULL_HANDLE; }
    if(m_rtView)      { vkDestroyImageView(vk.device, m_rtView, nullptr); m_rtView = VK_NULL_HANDLE; }
    if(m_view)        { vkDestroyImageView(vk.device, m_view, nullptr); m_view = VK_NULL_HANDLE; }
    if(m_image)       { vkDestroyImage(vk.device, m_image, nullptr); m_image = VK_NULL_HANDLE; }
    if(m_memory)      { vkFreeMemory(vk.device, m_memory, nullptr); m_memory = VK_NULL_HANDLE; }
}

void VulkanTexture::createSampler(VulkanCore& vk)
{
    VkSamplerCreateInfo si {};
    si.sType        = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
    si.magFilter    = VK_FILTER_LINEAR;
    si.minFilter    = VK_FILTER_LINEAR;
    si.mipmapMode   = VK_SAMPLER_MIPMAP_MODE_NEAREST;
    si.addressModeU = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.addressModeV = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.addressModeW = VK_SAMPLER_ADDRESS_MODE_CLAMP_TO_EDGE;
    si.minLod       = 0.0f;
    si.maxLod       = 0.0f;
    vkCreateSampler(vk.device, &si, nullptr, &m_sampler);
}
