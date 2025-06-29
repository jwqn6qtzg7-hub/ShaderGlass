/*
ShaderGlass preset interpolation / spline64 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/spline64.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationSpline64PresetDef : public PresetDef
{
public:
	InterpolationSpline64PresetDef() : PresetDef{}
	{
		Name = "spline64";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersSplineSpline64XShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("srgb_framebuffer", "true")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSplineSpline64YShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
