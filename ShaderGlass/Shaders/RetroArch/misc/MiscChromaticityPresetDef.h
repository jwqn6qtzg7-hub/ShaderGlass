/*
ShaderGlass preset misc / chromaticity imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/chromaticity.slangp
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
