/*
ShaderGlass preset stock / bilinear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/bilinear.slangp
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

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true"));
	}
};
}
