/*
ShaderGlass preset presets/pixel_transparency / pixel_transparency-lcd3x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/pixel_transparency/pixel_transparency-lcd3x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsPixel_transparencyPixel_transparencyLcd3xPresetDef : public PresetDef
{
public:
	PresetsPixel_transparencyPixel_transparencyLcd3xPresetDef() : PresetDef{}
	{
		Name = "pixel_transparency-lcd3x";
		Category = "presets/pixel_transparency";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersLcd3xShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldShadersPixel_transparencyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
