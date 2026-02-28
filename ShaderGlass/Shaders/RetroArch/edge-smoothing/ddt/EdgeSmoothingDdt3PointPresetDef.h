/*
ShaderGlass preset edge-smoothing/ddt / 3-point imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/ddt/3-point.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdt3PointPresetDef : public PresetDef
{
public:
	EdgeSmoothingDdt3PointPresetDef() : PresetDef{}
	{
		Name = "3-point";
		Category = "edge-smoothing/ddt";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShaders3PointShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
