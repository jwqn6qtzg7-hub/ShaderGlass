/*
ShaderGlass preset pixel-art-scaling / sharp-bilinear-2x-prescale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/sharp-bilinear-2x-prescale.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSharpBilinear2xPrescalePresetDef : public PresetDef
{
public:
	PixelArtScalingSharpBilinear2xPrescalePresetDef() : PresetDef{}
	{
		Name = "sharp-bilinear-2x-prescale";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
