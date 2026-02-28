/*
ShaderGlass preset crt / crt-lottes-multipass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-lottes-multipass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtLottesMultipassPresetDef : public PresetDef
{
public:
	CrtCrtLottesMultipassPresetDef() : PresetDef{}
	{
		Name = "crt-lottes-multipass";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("alias", "Reference"));
         	ShaderDefs.push_back(CrtShadersCrtLottesMultipassBloompassShaderDef()
.Param("alias", "BloomPass")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtLottesMultipassScanpassShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
