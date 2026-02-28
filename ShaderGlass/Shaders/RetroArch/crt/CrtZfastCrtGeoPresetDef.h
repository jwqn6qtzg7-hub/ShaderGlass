/*
ShaderGlass preset crt / zfast-crt-geo imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/zfast-crt-geo.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtZfastCrtGeoPresetDef : public PresetDef
{
public:
	CrtZfastCrtGeoPresetDef() : PresetDef{}
	{
		Name = "zfast-crt-geo";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_geoShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
