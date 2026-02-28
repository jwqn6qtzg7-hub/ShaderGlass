/*
ShaderGlass preset pal / pal-singlepass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pal/pal-singlepass.slangp
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

	void Build() {
         	ShaderDefs.push_back(PalShadersPalSinglepassShaderDef()
.Param("scale_type", "source"));
	}
};
}
