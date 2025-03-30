/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#include "pch.h"

#include "ShaderCache.h"
#include "sha256.h"

std::vector<uint32_t> ShaderCache::CalculateHash(const std::string& source)
{
    auto* data = (const uint8_t*)source.data();
    auto  size = source.size();

    std::vector<uint32_t> buffer;
    buffer.resize(HASH_LEN);
    static_assert(HASH_LEN == SHA256_BLOCK_SIZE / 4);
    SHA256_CTX ctx;
    sha256_init(&ctx);
    sha256_update(&ctx, data, size);
    sha256_final(&ctx, (BYTE*)buffer.data());
    return buffer;
}

const CachedShader* ShaderCache::FindCachedShader(const std::string& source) const
{
    auto hash = CalculateHash(source);

    for(const auto& cs : m_cachedShaders)
    {
        if(cs.hash != nullptr && cs.hash[0] == hash[0] && cs.hash[1] == hash[1] && cs.hash[2] == hash[2] && cs.hash[3] == hash[3] && cs.hash[4] == hash[4] &&
           cs.hash[5] == hash[5] && cs.hash[6] == hash[6] && cs.hash[7] == hash[7])
            return &cs;
    }
    return nullptr;
}
