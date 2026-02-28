/*
ShaderGlass preset handheld / lcd1x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/lcd1x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldLcd1xPresetDef : public PresetDef
{
public:
	HandheldLcd1xPresetDef() : PresetDef{}
	{
		Name = "lcd1x";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersLcd1xShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type", "viewport")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
