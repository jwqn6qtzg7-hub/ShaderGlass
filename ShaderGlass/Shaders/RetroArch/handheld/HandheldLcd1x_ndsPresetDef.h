/*
ShaderGlass preset handheld / lcd1x_nds imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/lcd1x_nds.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldLcd1x_ndsPresetDef : public PresetDef
{
public:
	HandheldLcd1x_ndsPresetDef() : PresetDef{}
	{
		Name = "lcd1x_nds";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersLcd1x_ndsShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type", "viewport")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
