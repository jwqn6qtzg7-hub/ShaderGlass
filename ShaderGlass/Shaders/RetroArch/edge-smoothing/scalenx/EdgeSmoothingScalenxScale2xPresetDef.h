/*
ShaderGlass preset edge-smoothing/scalenx / scale2x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/scalenx/scale2x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalenxScale2xPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalenxScale2xPresetDef() : PresetDef{}
	{
		Name = "scale2x";
		Category = "edge-smoothing/scalenx";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalenxShadersScale2xShaderDef()
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
