/*
ShaderGlass preset crt / zfast-crt-composite imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/zfast-crt-composite.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtZfastCrtCompositePresetDef : public PresetDef
{
public:
	CrtZfastCrtCompositePresetDef() : PresetDef{}
	{
		Name = "zfast-crt-composite";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_compositeShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type", "viewport")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
