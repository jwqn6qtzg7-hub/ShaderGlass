/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

class GLSL
{
public:
    static std::vector<uint32_t> GenerateSPIRV(const char* source, bool fragment, std::ostream& log, bool& warn);
};