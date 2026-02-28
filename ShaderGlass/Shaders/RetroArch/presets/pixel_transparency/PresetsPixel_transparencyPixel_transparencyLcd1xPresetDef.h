/*
ShaderGlass preset presets/pixel_transparency / pixel_transparency-lcd1x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/pixel_transparency/pixel_transparency-lcd1x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsPixel_transparencyPixel_transparencyLcd1xPresetDef : public PresetDef
{
public:
	PresetsPixel_transparencyPixel_transparencyLcd1xPresetDef() : PresetDef{}
	{
		Name = "pixel_transparency-lcd1x";
		Category = "presets/pixel_transparency";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersLcd1xShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type", "viewport")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(HandheldShadersPixel_transparencyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
