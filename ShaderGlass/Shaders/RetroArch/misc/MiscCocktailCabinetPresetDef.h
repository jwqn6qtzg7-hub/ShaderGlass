/*
ShaderGlass preset misc / cocktail-cabinet imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/cocktail-cabinet.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscCocktailCabinetPresetDef : public PresetDef
{
public:
	MiscCocktailCabinetPresetDef() : PresetDef{}
	{
		Name = "cocktail-cabinet";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersCocktailCabinetShaderDef()
.Param("scale_type", "source"));
	}
};
}
