/*
ShaderGlass preset presets/pixel_transparency / pixel_transparency-zfast_lcd imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/pixel_transparency/pixel_transparency-zfast_lcd.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsPixel_transparencyPixel_transparencyZfast_lcdPresetDef : public PresetDef
{
public:
	PresetsPixel_transparencyPixel_transparencyZfast_lcdPresetDef() : PresetDef{}
	{
		Name = "pixel_transparency-zfast_lcd";
		Category = "presets/pixel_transparency";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersZfast_lcdShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldShadersPixel_transparencyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
