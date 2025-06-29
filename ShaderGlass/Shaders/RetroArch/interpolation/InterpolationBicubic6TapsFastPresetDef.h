/*
ShaderGlass preset interpolation / bicubic-6-taps-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/bicubic-6-taps-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationBicubic6TapsFastPresetDef : public PresetDef
{
public:
	InterpolationBicubic6TapsFastPresetDef() : PresetDef{}
	{
		Name = "bicubic-6-taps-fast";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersBicubicBicubic3TapsYShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBicubic3TapsXShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
