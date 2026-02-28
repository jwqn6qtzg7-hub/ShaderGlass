/*
ShaderGlass preset handheld / retro-v3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/retro-v3.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldRetroV3PresetDef : public PresetDef
{
public:
	HandheldRetroV3PresetDef() : PresetDef{}
	{
		Name = "retro-v3";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersRetroV3ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
