/*
ShaderGlass preset edge-smoothing/ddt / 3-point imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/ddt/3-point.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShaders3PointShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
