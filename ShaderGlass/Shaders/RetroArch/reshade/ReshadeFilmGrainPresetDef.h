/*
ShaderGlass preset reshade / FilmGrain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/FilmGrain.slangp
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

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersFilmGrainShaderDef());
	}
};
}
