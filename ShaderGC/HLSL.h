/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

class HLSL
{
public:
    static std::vector<uint8_t> CompileHLSL(const char* source, size_t size, const char* profile, std::ostream& log, bool& warn);
};