/*
ShaderGlass preset handheld / zfast-lcd imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/zfast-lcd.slangp
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

	void Build() {
         	ShaderDefs.push_back(HandheldShadersZfast_lcdShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
