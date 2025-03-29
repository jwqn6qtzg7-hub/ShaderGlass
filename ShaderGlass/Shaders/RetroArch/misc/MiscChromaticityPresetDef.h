/*
ShaderGlass preset misc / chromaticity imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/chromaticity.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersChromaticityShaderDef()
.Param("filter_linear", "false"));
	}
};
}
