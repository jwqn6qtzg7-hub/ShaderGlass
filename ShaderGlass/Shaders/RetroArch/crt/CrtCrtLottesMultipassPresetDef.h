/*
ShaderGlass preset crt / crt-lottes-multipass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-lottes-multipass.slangp
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

	virtual void Build() {
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
