/*
ShaderGlass preset edge-smoothing/scalenx / epx imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/scalenx/epx.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalenxEpxPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalenxEpxPresetDef() : PresetDef{}
	{
		Name = "epx";
		Category = "edge-smoothing/scalenx";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalenxShadersEpxShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(InterpolationShadersBicubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
