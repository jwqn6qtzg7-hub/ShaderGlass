/*
ShaderGlass preset reshade / FilmGrain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/reshade/FilmGrain.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeFilmGrainPresetDef : public PresetDef
{
public:
	ReshadeFilmGrainPresetDef() : PresetDef{}
	{
		Name = "FilmGrain";
		Category = "reshade";
	}

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersFilmGrainShaderDef());
	}
};
}
