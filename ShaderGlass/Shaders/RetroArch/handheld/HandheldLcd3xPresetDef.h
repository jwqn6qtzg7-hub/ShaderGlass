/*
ShaderGlass preset handheld / lcd3x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/lcd3x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldLcd3xPresetDef : public PresetDef
{
public:
	HandheldLcd3xPresetDef() : PresetDef{}
	{
		Name = "lcd3x";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersLcd3xShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
