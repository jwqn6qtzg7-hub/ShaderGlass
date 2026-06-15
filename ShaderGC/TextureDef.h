/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

#include <cstdlib>
#include <cstring>
#include <map>
#include <string>
#include <utility>

class TextureDef
{
public:
    TextureDef() : Name {}, Data {}, DataLength {}, PresetParams {}, Dynamic {false} { }

    TextureDef(const TextureDef& other) :
        Name {other.Name},
        Data {nullptr},
        DataLength {other.DataLength},
        PresetParams {other.PresetParams},
        Dynamic {other.Dynamic}
    {
        if(Dynamic && other.Data && other.DataLength > 0)
        {
            Data = static_cast<const uint8_t*>(std::malloc(other.DataLength));
            if(Data)
                std::memcpy(const_cast<uint8_t*>(Data), other.Data, other.DataLength);
        }
        else
        {
            Data = other.Data;
        }
    }

    TextureDef(TextureDef&& other) noexcept :
        Name {std::move(other.Name)},
        Data {other.Data},
        DataLength {other.DataLength},
        PresetParams {std::move(other.PresetParams)},
        Dynamic {other.Dynamic}
    {
        other.Data       = nullptr;
        other.DataLength = 0;
        other.Dynamic    = false;
    }

    TextureDef& operator=(const TextureDef& other)
    {
        if(this == &other)
            return *this;

        ReleaseDynamic();

        Name        = other.Name;
        DataLength  = other.DataLength;
        PresetParams = other.PresetParams;
        Dynamic     = other.Dynamic;

        if(Dynamic && other.Data && other.DataLength > 0)
        {
            Data = static_cast<const uint8_t*>(std::malloc(other.DataLength));
            if(Data)
                std::memcpy(const_cast<uint8_t*>(Data), other.Data, other.DataLength);
        }
        else
        {
            Data = other.Data;
        }

        return *this;
    }

    TextureDef& operator=(TextureDef&& other) noexcept
    {
        if(this == &other)
            return *this;

        ReleaseDynamic();

        Name         = std::move(other.Name);
        Data         = other.Data;
        DataLength   = other.DataLength;
        PresetParams = std::move(other.PresetParams);
        Dynamic      = other.Dynamic;

        other.Data       = nullptr;
        other.DataLength = 0;
        other.Dynamic    = false;

        return *this;
    }

    ~TextureDef()
    {
        ReleaseDynamic();
    }

    TextureDef& Param(const char* presetKey, const char* presetValue)
    {
        PresetParams.insert(std::make_pair(std::string(presetKey), std::string(presetValue)));
        return *this;
    }

    std::string                        Name;
    const uint8_t*                     Data;
    int                                DataLength;
    bool                               Dynamic;
    std::map<std::string, std::string> PresetParams;

private:
    void ReleaseDynamic()
    {
        if(Dynamic && Data)
        {
            std::free(const_cast<uint8_t*>(Data));
        }
        Data       = nullptr;
        DataLength = 0;
        Dynamic    = false;
    }
};
