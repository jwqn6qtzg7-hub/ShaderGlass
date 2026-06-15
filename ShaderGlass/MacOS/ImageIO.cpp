#include "ImageIO.h"

#include <iostream>
#include <cstring>

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"

namespace ImageIO
{
    static ImageData decodeToBGRA(unsigned char* data, int w, int h, const char* context)
    {
        ImageData result;
        if(!data || w <= 0 || h <= 0)
        {
            stbi_image_free(data);
            std::cerr << "[ImageIO] Decode failed (" << context << "): "
                      << stbi_failure_reason() << std::endl;
            return result;
        }

        result.width    = w;
        result.height   = h;
        result.channels = 4;
        result.pixels.assign(data, data + (size_t)w * h * 4);

        // stb_image returns RGBA when forcing 4 channels. Swap R and B for BGRA.
        for(size_t i = 0; i < result.pixels.size(); i += 4)
            std::swap(result.pixels[i], result.pixels[i + 2]);

        stbi_image_free(data);
        return result;
    }

    ImageData load(const std::string& filePath)
    {
        int w = 0, h = 0, c = 0;
        unsigned char* data = stbi_load(filePath.c_str(), &w, &h, &c, 4);
        if(!data)
        {
            std::cerr << "[ImageIO] Failed to load: " << filePath
                      << " (" << stbi_failure_reason() << ")" << std::endl;
            return ImageData {};
        }

        ImageData img = decodeToBGRA(data, w, h, filePath.c_str());
        if(img.valid())
            std::cout << "[ImageIO] Loaded " << filePath << " ("
                      << w << "x" << h << ")" << std::endl;
        return img;
    }

    ImageData loadFromMemory(const uint8_t* bytes, int length)
    {
        if(!bytes || length <= 0)
            return ImageData {};

        int w = 0, h = 0, c = 0;
        unsigned char* data = stbi_load_from_memory(bytes, length, &w, &h, &c, 4);
        return decodeToBGRA(data, w, h, "memory");
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
