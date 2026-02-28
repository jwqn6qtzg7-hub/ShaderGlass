/*
ShaderGlass preset interpolation / spline100 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/spline100.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationSpline100PresetDef : public PresetDef
{
public:
	InterpolationSpline100PresetDef() : PresetDef{}
	{
		Name = "spline100";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersSplineSpline100XShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSplineSpline100YShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
