/*
ShaderGlass preset handheld / gbc-dev imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/gbc-dev.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbcDevShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0"));
	}
};
}
