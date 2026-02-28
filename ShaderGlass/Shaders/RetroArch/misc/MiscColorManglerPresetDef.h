/*
ShaderGlass preset misc / color-mangler imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/color-mangler.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscColorManglerPresetDef : public PresetDef
{
public:
	MiscColorManglerPresetDef() : PresetDef{}
	{
		Name = "color-mangler";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersColorManglerShaderDef()
.Param("scale_type", "source"));
	}
};
}
