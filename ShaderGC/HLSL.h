#pragma once

class HLSL
{
public:
    static std::vector<uint8_t> CompileHLSL(const char* source, size_t size, const char* profile, std::ostream& log, bool& warn);
};