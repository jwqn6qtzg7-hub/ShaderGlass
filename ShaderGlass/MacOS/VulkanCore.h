#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <cstdint>
#include <vector>
#include <functional>
#include <stdexcept>

struct VulkanCore
{
    VkInstance               instance {VK_NULL_HANDLE};
    VkPhysicalDevice         physicalDevice {VK_NULL_HANDLE};
    VkDevice                 device {VK_NULL_HANDLE};
    VkQueue                  graphicsQueue {VK_NULL_HANDLE};
    VkSurfaceKHR             surface {VK_NULL_HANDLE};
    VkSwapchainKHR           swapChain {VK_NULL_HANDLE};
    VkExtent2D               swapChainExtent {};
    VkFormat                 swapChainFormat {VK_FORMAT_B8G8R8A8_UNORM};
    VkRenderPass             mainRenderPass {VK_NULL_HANDLE};
    std::vector<VkImage>     swapChainImages;
    std::vector<VkImageView> swapChainImageViews;
    std::vector<VkFramebuffer> framebuffers;

    VkCommandPool                commandPool {VK_NULL_HANDLE};
    std::vector<VkCommandBuffer> commandBuffers;
    std::vector<VkFence>         inFlightFences;
    std::vector<VkSemaphore>     imageAvailableSemaphores;
    std::vector<VkSemaphore>     renderFinishedSemaphores;
    uint32_t                     currentFrame {0};
    uint32_t                     imageIndex {0};
    int                          maxFramesInFlight {2};

    uint32_t graphicsQueueFamily {0};

    void init(GLFWwindow* window);
    void recreateSwapChain(GLFWwindow* window);
    void beginFrame();
    void endFrame();
    void cleanup();
    VkCommandBuffer beginSingleTimeCommands();
    void endSingleTimeCommands(VkCommandBuffer cmd);

    // Helpers
    uint32_t findMemoryType(uint32_t typeFilter, VkMemoryPropertyFlags properties);
    void createBuffer(VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties,
                      VkBuffer& buffer, VkDeviceMemory& memory);
    void createImage(uint32_t width, uint32_t height, VkFormat format, VkImageTiling tiling,
                     VkImageUsageFlags usage, VkMemoryPropertyFlags properties,
                     VkImage& image, VkDeviceMemory& memory);
    VkImageView createImageView(VkImage image, VkFormat format, VkImageAspectFlags aspectFlags);
    void transitionImageLayout(VkImage image, VkFormat format, VkImageLayout oldLayout,
                               VkImageLayout newLayout);
    void copyBufferToImage(VkBuffer buffer, VkImage image, uint32_t width, uint32_t height);
    VkFormat findSupportedFormat(const std::vector<VkFormat>& candidates, VkImageTiling tiling,
                                 VkFormatFeatureFlags features);

private:
    void createInstance();
    void createSurface(GLFWwindow* window);
    void pickPhysicalDevice();
    void createLogicalDevice();
    void createSwapChain(GLFWwindow* window);
    void createImageViews();
    void createRenderPass();
    void createFramebuffers();
    void createCommandPool();
    void createCommandBuffers();
    void createSyncObjects();
    void cleanupSwapChain();
};
