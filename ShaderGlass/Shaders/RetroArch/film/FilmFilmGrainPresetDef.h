/*
ShaderGlass preset film / film-grain imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/film/film-grain.slangp
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
