/*
ShaderGlass preset stock / bilinear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/bilinear.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class StockBilinearPresetDef : public PresetDef
{
public:
	StockBilinearPresetDef() : PresetDef{}
	{
		Name = "bilinear";
		Category = "stock";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true"));
	}
};
}
