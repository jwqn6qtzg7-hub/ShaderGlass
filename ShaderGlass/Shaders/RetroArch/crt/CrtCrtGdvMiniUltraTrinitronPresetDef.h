/*
ShaderGlass preset crt / crt-gdv-mini-ultra-trinitron imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-gdv-mini-ultra-trinitron.slangp
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

	virtual void Build() {
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
