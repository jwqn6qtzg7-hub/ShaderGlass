/*
ShaderGlass preset misc / ss-gamma-ramp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/ss-gamma-ramp.slangp
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
