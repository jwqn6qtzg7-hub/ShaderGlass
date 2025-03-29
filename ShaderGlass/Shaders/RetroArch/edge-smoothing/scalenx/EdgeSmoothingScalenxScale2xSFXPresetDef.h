/*
ShaderGlass preset edge-smoothing/scalenx / scale2xSFX imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/scalenx/scale2xSFX.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalenxScale2xSFXPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalenxScale2xSFXPresetDef() : PresetDef{}
	{
		Name = "scale2xSFX";
		Category = "edge-smoothing/scalenx";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalenxShadersScale2xSFXShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "2.0")
.Param("scale_y", "2.0"));
         	ShaderDefs.push_back(InterpolationShadersBicubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
