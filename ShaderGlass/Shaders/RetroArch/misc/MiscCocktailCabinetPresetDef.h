/*
ShaderGlass preset misc / cocktail-cabinet imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/cocktail-cabinet.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersCocktailCabinetShaderDef()
.Param("scale_type", "source"));
	}
};
}
