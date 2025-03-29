/*
ShaderGlass preset misc / ss-gamma-ramp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/ss-gamma-ramp.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersSsGammaRampShaderDef()
.Param("scale_type", "source"));
	}
};
}
