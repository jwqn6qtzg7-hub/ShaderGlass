/*
ShaderGlass preset interpolation / b-spline-4-taps-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/b-spline-4-taps-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationBSpline4TapsFastPresetDef : public PresetDef
{
public:
	InterpolationBSpline4TapsFastPresetDef() : PresetDef{}
	{
		Name = "b-spline-4-taps-fast";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersBicubicBSpline2TapsYShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type_x", "source")
.Param("scale_type_y", "viewport")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBSpline2TapsXShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
