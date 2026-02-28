/*
ShaderGlass preset crt / tvout-tweaks imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/tvout-tweaks.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtTvoutTweaksPresetDef : public PresetDef
{
public:
	CrtTvoutTweaksPresetDef() : PresetDef{}
	{
		Name = "tvout-tweaks";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersTvoutTweaksShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
