/*
ShaderGlass preset edge-smoothing/scalehq / 4xScaleHQ imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/scalehq/4xScaleHQ.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalehq4xScaleHQPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalehq4xScaleHQPresetDef() : PresetDef{}
	{
		Name = "4xScaleHQ";
		Category = "edge-smoothing/scalehq";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalehqShaders4xScaleHQShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "4.0")
.Param("scale_y", "4.0"));
         	ShaderDefs.push_back(InterpolationShadersBicubicXShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source"));
         	ShaderDefs.push_back(InterpolationShadersBicubicYShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
