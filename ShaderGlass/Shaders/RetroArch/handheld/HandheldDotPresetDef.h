/*
ShaderGlass preset handheld / dot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/dot.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldDotPresetDef : public PresetDef
{
public:
	HandheldDotPresetDef() : PresetDef{}
	{
		Name = "dot";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersDotShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
