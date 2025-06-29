/*
ShaderGlass preset interpolation / lanczos4 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/lanczos4.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationLanczos4PresetDef : public PresetDef
{
public:
	InterpolationLanczos4PresetDef() : PresetDef{}
	{
		Name = "lanczos4";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersLanczosLanczos4YShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersLanczosLanczos4XShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
