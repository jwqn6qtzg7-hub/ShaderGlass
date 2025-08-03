/*
ShaderGlass preset handheld / gbc-dev imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/handheld/gbc-dev.slangp
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
