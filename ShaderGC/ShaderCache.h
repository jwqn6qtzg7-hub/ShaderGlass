/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

#define HASH_LEN 8

struct CachedShader
{
    CachedShader(const uint32_t* hash, const uint8_t* data, size_t len) : hash {hash}, data {data}, len {len} { }
    const uint32_t* hash;
    const uint8_t*  data;
    size_t          len;
};

class ShaderCache
{
public:
    bool empty() const
    {
        return m_cachedShaders.empty();
    }

    static std::vector<uint32_t> CalculateHash(const std::string& source);

    const CachedShader* FindCachedShader(const std::string& source) const;

    std::vector<CachedShader> m_cachedShaders;
};