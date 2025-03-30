/*
ShaderGlass: shader effect overlay
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

#include "ShaderDef.h"
#include "TextureDef.h"
#include "PresetDef.h"
#include "ShaderCache.h"

#include "shaders\PassthroughShaderDef.h"
#include "shaders\PreprocessShaderDef.h"

#include "shaders\PassthroughPresetDef.h"

extern std::vector<PresetDef*> RetroArchPresetList;
extern std::vector<CachedShader> RetroArchCachedShaders();