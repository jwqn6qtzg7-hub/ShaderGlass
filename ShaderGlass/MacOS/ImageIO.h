#pragma once

#include <cstdint>
#include <vector>
#include <string>

// Image loading/saving using stb_image / stb_image_write.
// Loaded data is BGRA8.

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
    ImageData load(const std::string& filePath);
    ImageData loadFromMemory(const uint8_t* data, int length);

    bool savePNG(const std::string& filePath, int width, int height,
                 const uint8_t* bgraData);

    inline bool savePNG(const std::string& filePath, const ImageData& img)
    {
        return savePNG(filePath, img.width, img.height, img.pixels.data());
    }
}
