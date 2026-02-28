/*
ShaderGlass preset edge-smoothing/scalenx / epx imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/scalenx/epx.slangp
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

	void Build() {
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
