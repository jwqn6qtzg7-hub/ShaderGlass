/*
ShaderGlass preset misc / cocktail-cabinet imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/cocktail-cabinet.slangp
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
