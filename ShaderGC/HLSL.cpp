/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#include "pch.h"

#include "HLSL.h"

#include <stdexcept>
#include <d3dcompiler.h>

#pragma comment(lib, "d3dcompiler.lib")

static inline void ltrim(std::string& s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) { return !std::isspace(ch) && ch != '\"'; }));
}

static inline void rtrim(std::string& s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) { return !std::isspace(ch) && ch != '\"'; }).base(), s.end());
}

static inline std::string trim(std::string s)
{
    ltrim(s);
    rtrim(s);
    return s;
}

std::vector<uint8_t> HLSL::CompileHLSL(const char* source, size_t size, const char* profile, bool unroll, std::ostream& log, bool& warn)
{
    //std::cout << "CompileHLSL...";

    ID3DBlob* shaderBlob = nullptr;
    ID3DBlob* errorBlob  = nullptr;
    UINT      flags      = D3DCOMPILE_OPTIMIZATION_LEVEL3;
    HRESULT   hr         = D3DCompile(source, size, NULL, NULL, NULL, "main", profile, flags, 0, &shaderBlob, &errorBlob);

    if(FAILED(hr))
    {
        std::ostringstream msg;
        msg << "FXC Compilation Error" << std::endl;
        if(errorBlob)
        {
            msg << (char*)errorBlob->GetBufferPointer() << std::endl;
            errorBlob->Release();
        }

        if(shaderBlob)
            shaderBlob->Release();

        const auto& msgString = msg.str();
        if(unroll && msgString.find("error X3511") != std::string::npos)
        {
            // try to fix up unroll errors...
            std::ostringstream newSource;
            std::istringstream oldSource(source);
            int                lineNo = 0;
            std::string        line;
            while(std::getline(oldSource, line))
            {
                bool loop     = false;
                auto trimLine = trim(line);
                loop |= (trimLine.find("for (") == 0);
                loop |= (trimLine.find("while (") == 0);
                loop |= (trimLine == "do");
                if(loop)
                    newSource << "[loop]" << std::endl;
                newSource << line << std::endl;
            }
            const auto& newSourceString = newSource.str();
            return CompileHLSL(newSourceString.c_str(), newSourceString.size(), profile, false, log, warn);
        }

        throw std::runtime_error(msgString);
    }

    auto data  = shaderBlob->GetBufferPointer();
    auto bsize = shaderBlob->GetBufferSize();

    std::vector<uint8_t> bin;
    bin.resize(bsize);
    memcpy(bin.data(), data, bsize);
    shaderBlob->Release();

    //std::cout << "OK" << std::endl;

    return bin;
}
