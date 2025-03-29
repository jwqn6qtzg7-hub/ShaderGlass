/*
ShaderGlass preset handheld / zfast-lcd imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/zfast-lcd.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldZfastLcdPresetDef : public PresetDef
{
public:
	HandheldZfastLcdPresetDef() : PresetDef{}
	{
		Name = "zfast-lcd";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersZfast_lcdShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
