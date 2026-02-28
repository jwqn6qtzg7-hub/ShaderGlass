/*
ShaderGlass preset handheld / bevel imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/bevel.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldBevelPresetDef : public PresetDef
{
public:
	HandheldBevelPresetDef() : PresetDef{}
	{
		Name = "bevel";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersBevelShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
