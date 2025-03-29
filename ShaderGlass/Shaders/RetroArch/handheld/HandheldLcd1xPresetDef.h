/*
ShaderGlass preset handheld / lcd1x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/lcd1x.slangp
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

	virtual void Build() {
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
