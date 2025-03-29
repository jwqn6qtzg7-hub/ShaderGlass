/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

class SPIRV
{
public:
    static std::pair<std::string, std::string> GenerateHLSL(const std::vector<uint32_t>& bin, bool fragment, std::ostream& log, bool& warn);
};