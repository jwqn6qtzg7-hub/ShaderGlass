/*
ShaderGlass preset edge-smoothing/xbrz / 5xbrz-linear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/xbrz/5xbrz-linear.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingXbrz5xbrzLinearPresetDef : public PresetDef
{
public:
	EdgeSmoothingXbrz5xbrzLinearPresetDef() : PresetDef{}
	{
		Name = "5xbrz-linear";
		Category = "edge-smoothing/xbrz";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrzShaders5xbrzShaderDef()
.Param("filter_linear", "false")
.Param("scale", "5.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
