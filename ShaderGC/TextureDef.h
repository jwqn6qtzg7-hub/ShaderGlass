/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

class TextureDef
{
public:
    TextureDef() : Data {}, DataLength {}, PresetParams {}, Dynamic {false} { }

    std::string                        Name;
    const uint8_t*                     Data;
    int                                DataLength;
    bool                               Dynamic;
    std::map<std::string, std::string> PresetParams;

    TextureDef& Param(const char* presetKey, const char* presetValue)
    {
        PresetParams.insert(std::make_pair(std::string(presetKey), std::string(presetValue)));
        return *this;
    }

    virtual ~TextureDef()
    {
        if(Dynamic)
        {
            if(Data)
            {
                free((void*)Data);
            }
        }
    }
};