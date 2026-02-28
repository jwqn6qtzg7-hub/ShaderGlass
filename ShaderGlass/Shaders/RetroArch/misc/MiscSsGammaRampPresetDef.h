/*
ShaderGlass preset misc / ss-gamma-ramp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/ss-gamma-ramp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscSsGammaRampPresetDef : public PresetDef
{
public:
	MiscSsGammaRampPresetDef() : PresetDef{}
	{
		Name = "ss-gamma-ramp";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersSsGammaRampShaderDef()
.Param("scale_type", "source"));
	}
};
}
