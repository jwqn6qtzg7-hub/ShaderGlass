/*
ShaderGlass preset handheld / gbc-dev imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/gbc-dev.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldGbcDevPresetDef : public PresetDef
{
public:
	HandheldGbcDevPresetDef() : PresetDef{}
	{
		Name = "gbc-dev";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbcDevShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0"));
	}
};
}
