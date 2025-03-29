/*
ShaderGlass preset pal / pal-singlepass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pal/pal-singlepass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PalPalSinglepassPresetDef : public PresetDef
{
public:
	PalPalSinglepassPresetDef() : PresetDef{}
	{
		Name = "pal-singlepass";
		Category = "pal";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PalShadersPalSinglepassShaderDef()
.Param("scale_type", "source"));
	}
};
}
