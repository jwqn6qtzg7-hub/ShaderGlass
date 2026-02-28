/*
ShaderGlass preset film / film-grain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/film/film-grain.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class FilmFilmGrainPresetDef : public PresetDef
{
public:
	FilmFilmGrainPresetDef() : PresetDef{}
	{
		Name = "film-grain";
		Category = "film";
	}

	void Build() {
         	ShaderDefs.push_back(FilmShadersFilmGrainShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
