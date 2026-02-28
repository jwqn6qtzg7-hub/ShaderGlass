/*
ShaderGlass preset misc / chromaticity imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/chromaticity.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscChromaticityPresetDef : public PresetDef
{
public:
	MiscChromaticityPresetDef() : PresetDef{}
	{
		Name = "chromaticity";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersChromaticityShaderDef()
.Param("filter_linear", "false"));
	}
};
}
