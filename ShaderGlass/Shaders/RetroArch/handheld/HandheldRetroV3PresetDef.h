/*
ShaderGlass preset handheld / retro-v3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/retro-v3.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersRetroV3ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
