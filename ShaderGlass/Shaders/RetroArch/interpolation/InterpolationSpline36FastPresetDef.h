/*
ShaderGlass preset interpolation / spline36-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/interpolation/spline36-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class InterpolationSpline36FastPresetDef : public PresetDef
{
public:
	InterpolationSpline36FastPresetDef() : PresetDef{}
	{
		Name = "spline36-fast";
		Category = "interpolation";
	}

	virtual void Build() {
         	ShaderDefs.push_back(InterpolationShadersSpline36XShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(InterpolationShadersSpline36YShaderDef()
.Param("filter_linear", "false")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
