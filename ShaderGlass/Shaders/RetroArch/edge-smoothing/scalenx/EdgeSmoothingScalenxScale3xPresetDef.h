/*
ShaderGlass preset edge-smoothing/scalenx / scale3x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/scalenx/scale3x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalenxScale3xPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalenxScale3xPresetDef() : PresetDef{}
	{
		Name = "scale3x";
		Category = "edge-smoothing/scalenx";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalenxShadersScale3xShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "3.0")
.Param("scale_y", "3.0"));
         	ShaderDefs.push_back(InterpolationShadersBicubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
