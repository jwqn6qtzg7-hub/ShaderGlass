/*
ShaderGlass preset edge-smoothing/xbrz / 5xbrz-linear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/xbrz/5xbrz-linear.slangp
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
