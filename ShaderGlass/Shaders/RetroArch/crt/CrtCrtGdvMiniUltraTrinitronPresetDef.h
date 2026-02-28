/*
ShaderGlass preset crt / crt-gdv-mini-ultra-trinitron imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-gdv-mini-ultra-trinitron.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtGdvMiniUltraTrinitronPresetDef : public PresetDef
{
public:
	CrtCrtGdvMiniUltraTrinitronPresetDef() : PresetDef{}
	{
		Name = "crt-gdv-mini-ultra-trinitron";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtGdvMiniUltraShaderDef()
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
