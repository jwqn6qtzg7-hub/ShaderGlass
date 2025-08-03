/*
ShaderGlass preset crt / crt-lottes-multipass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-lottes-multipass.slangp
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
