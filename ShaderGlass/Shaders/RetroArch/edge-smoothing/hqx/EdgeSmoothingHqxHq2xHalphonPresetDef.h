/*
ShaderGlass preset edge-smoothing/hqx / hq2x-halphon imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/hqx/hq2x-halphon.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingHqxHq2xHalphonPresetDef : public PresetDef
{
public:
	EdgeSmoothingHqxHq2xHalphonPresetDef() : PresetDef{}
	{
		Name = "hq2x-halphon";
		Category = "edge-smoothing/hqx";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "hqx_refpass"));
         	ShaderDefs.push_back(EdgeSmoothingHqxShadersHq2xHalphonShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(StockStockShaderDef());
	}
};
}
