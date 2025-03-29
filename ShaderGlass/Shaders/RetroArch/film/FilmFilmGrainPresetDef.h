/*
ShaderGlass preset film / film-grain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/film/film-grain.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(FilmShadersFilmGrainShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
