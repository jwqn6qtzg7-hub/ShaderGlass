#pragma once

#include "VulkanCore.h"

#include <cstdint>
#include <vector>
#include <array>

// Single VkImage usable as both render target (color attachment) and
// shader input (sampled image).  Equivalent to ID3D11Texture2D +
// ID3D11RenderTargetView + ID3D11ShaderResourceView.

class VulkanTexture
{
public:
    VulkanTexture() = default;
    ~VulkanTexture();

    // Create with given dimensions and format.  If renderTarget is true,
    // allocate a framebuffer + render-target view as well.
    void create(VulkanCore& vk, uint32_t width, uint32_t height, VkFormat format,
                bool renderTarget, VkRenderPass renderPass);

    // Upload raw pixel data into the texture (staging buffer → image copy).
    void upload(VulkanCore& vk, const uint8_t* data, uint32_t width, uint32_t height,
                uint32_t bytesPerRow);

    // Resize to new dimensions (destroys old image and recreates).
    void resize(VulkanCore& vk, uint32_t width, uint32_t height);

    // Destroy all Vulkan resources.
    void destroy(VulkanCore& vk);

    // Accessors
    VkImage     image() const { return m_image; }
    VkImageView view() const { return m_view; }
    VkImageView rtView() const { return m_rtView ? m_rtView : m_view; }
    VkFramebuffer framebuffer() const { return m_framebuffer; }
    VkSampler sampler() const { return m_sampler; }
    VkFormat format() const { return m_format; }
    uint32_t width() const { return m_width; }
    uint32_t height() const { return m_height; }
    bool isValid() const { return m_image != VK_NULL_HANDLE; }

private:
    void createSampler(VulkanCore& vk);

    uint32_t m_width {0};
    uint32_t m_height {0};
    VkFormat m_format {VK_FORMAT_B8G8R8A8_UNORM};

    VkImage        m_image {VK_NULL_HANDLE};
    VkDeviceMemory m_memory {VK_NULL_HANDLE};
    VkImageView    m_view {VK_NULL_HANDLE};    // shader-read view
    VkImageView    m_rtView {VK_NULL_HANDLE};  // render-target view (optional)
    VkFramebuffer  m_framebuffer {VK_NULL_HANDLE};
    VkSampler      m_sampler {VK_NULL_HANDLE};

    VkRenderPass m_renderPass {VK_NULL_HANDLE}; // owned externally
};
