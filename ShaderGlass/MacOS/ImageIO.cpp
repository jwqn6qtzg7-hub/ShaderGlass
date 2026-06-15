#include "ImageIO.h"

#include <iostream>
#include <cstring>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

namespace ImageIO
{
    ImageData load(const std::string& filePath)
    {
        ImageData result;
        int w, h, c;
        unsigned char* data = stbi_load(filePath.c_str(), &w, &h, &c, 4);
        if(!data)
        {
            std::cerr << "[ImageIO] Failed to load: " << filePath
                      << " (" << stbi_failure_reason() << ")" << std::endl;
            return result;
        }

        result.width    = w;
        result.height   = h;
        result.channels = 4;
        result.pixels.assign(data, data + (size_t)w * h * 4);

        // stb_image returns RGBA by default (when requesting 4 channels).
        // Convert RGBA → BGRA for Vulkan compatibility.
        for(size_t i = 0; i < result.pixels.size(); i += 4)
            std::swap(result.pixels[i], result.pixels[i + 2]);

        stbi_image_free(data);
        std::cout << "[ImageIO] Loaded " << filePath << " ("
                  << w << "x" << h << ")" << std::endl;
        return result;
    }

    bool savePNG(const std::string& filePath, int width, int height,
                 const uint8_t* bgraData)
    {
        std::vector<uint8_t> rgba((size_t)width * height * 4);
        memcpy(rgba.data(), bgraData, rgba.size());
        for(size_t i = 0; i < rgba.size(); i += 4)
            std::swap(rgba[i], rgba[i + 2]);

        int result = stbi_write_png(filePath.c_str(), width, height, 4,
                                    rgba.data(), width * 4);
        if(!result)
        {
            std::cerr << "[ImageIO] Failed to save PNG: " << filePath << std::endl;
            return false;
        }
        std::cout << "[ImageIO] Saved " << filePath << " ("
                  << width << "x" << height << ")" << std::endl;
        return true;
    }

}
