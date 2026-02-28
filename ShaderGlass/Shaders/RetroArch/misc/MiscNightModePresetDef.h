/*
ShaderGlass preset misc / night-mode imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/night-mode.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscNightModePresetDef : public PresetDef
{
public:
	MiscNightModePresetDef() : PresetDef{}
	{
		Name = "night-mode";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersNight_modeShaderDef()
.Param("scale_type", "source"));
	}
};
}
