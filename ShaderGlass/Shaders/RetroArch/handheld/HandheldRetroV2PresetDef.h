/*
ShaderGlass preset handheld / retro-v2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/retro-v2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldRetroV2PresetDef : public PresetDef
{
public:
	HandheldRetroV2PresetDef() : PresetDef{}
	{
		Name = "retro-v2";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersRetroV2ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
