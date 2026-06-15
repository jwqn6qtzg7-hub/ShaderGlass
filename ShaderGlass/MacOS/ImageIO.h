#pragma once

#include "VulkanCore.h"

#include <cstdint>
#include <vector>
#include <string>

// Image loading/saving using stb_image / stb_image_write.
// Loaded data is BGRA8 (matching Vulkan VK_FORMAT_B8G8R8A8_UNORM).

struct ImageData
{
    int              width  = 0;
    int              height = 0;
    int              channels = 4;
    std::vector<uint8_t> pixels; // BGRA8
    bool valid() const { return !pixels.empty(); }
};

namespace ImageIO
{
    // Loads PNG, JPG, BMP, or TGA from file.
    // Returns BGRA8 pixel data. On failure, returns image with empty pixels.
    ImageData load(const std::string& filePath);

    // Saves BGRA8 pixel data as PNG.
    bool savePNG(const std::string& filePath, int width, int height,
                 const uint8_t* bgraData);

    // Saves BGRA8 pixel data as PNG (ImageData overload).
    inline bool savePNG(const std::string& filePath, const ImageData& img)
    {
        return savePNG(filePath, img.width, img.height, img.pixels.data());
    }

    // Read back pixels from a VkImage to CPU.
    // Image must be in VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL.
    ImageData readPixels(VulkanCore& vk, VkImage image, int width, int height);
}
