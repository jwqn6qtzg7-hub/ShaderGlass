/*
ShaderGlass preset edge-smoothing/xbrz / 4xbrz-linear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/xbrz/4xbrz-linear.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingXbrz4xbrzLinearPresetDef : public PresetDef
{
public:
	EdgeSmoothingXbrz4xbrzLinearPresetDef() : PresetDef{}
	{
		Name = "4xbrz-linear";
		Category = "edge-smoothing/xbrz";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrzShaders4xbrzShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
