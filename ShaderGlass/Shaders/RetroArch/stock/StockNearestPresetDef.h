/*
ShaderGlass preset stock / nearest imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/nearest.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class StockNearestPresetDef : public PresetDef
{
public:
	StockNearestPresetDef() : PresetDef{}
	{
		Name = "nearest";
		Category = "stock";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "false"));
	}
};
}
