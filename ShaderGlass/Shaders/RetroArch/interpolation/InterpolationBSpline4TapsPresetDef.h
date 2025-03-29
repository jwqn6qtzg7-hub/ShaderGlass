/*
ShaderGlass preset interpolation / b-spline-4-taps imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/b-spline-4-taps.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationBSpline4TapsPresetDef : public PresetDef
{
public:
	InterpolationBSpline4TapsPresetDef() : PresetDef{}
	{
		Name = "b-spline-4-taps";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersBSpline4TapsShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
