/*
ShaderGlass preset interpolation / spline144 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/interpolation/spline144.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationSpline144PresetDef : public PresetDef
{
public:
	InterpolationSpline144PresetDef() : PresetDef{}
	{
		Name = "spline144";
		Category = "interpolation";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersSplineSpline144XShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSplineSpline144YShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
