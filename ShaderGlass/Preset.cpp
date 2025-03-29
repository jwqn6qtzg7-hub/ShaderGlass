/*
ShaderGlass: shader effect overlay
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#include "pch.h"

#include "Preset.h"

Preset::Preset(PresetDef& presetDef) : m_presetDef(presetDef), m_shaders {}
{
    if(presetDef.ShaderDefs.empty())
        presetDef.Build();
}

void Preset::Create(winrt::com_ptr<ID3D11Device> d3dDevice)
{
    m_shaders.reserve(m_presetDef.ShaderDefs.size());
    for(auto& sd : m_presetDef.ShaderDefs)
    {
        m_shaders.emplace_back(sd);
    }
    for(auto& td : m_presetDef.TextureDefs)
    {
        m_textures.emplace(td.PresetParams["name"], td);
    }
    for(auto& s : m_shaders)
    {
        s.Create(d3dDevice);
    }
    for(auto& t : m_textures)
    {
        t.second.Create(d3dDevice);
    }
}

Preset::~Preset() { }
