/*
ShaderGlass preset ntsc / blargg imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/ntsc/blargg.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscBlarggPresetDef : public PresetDef
{
public:
	NtscBlarggPresetDef() : PresetDef{}
	{
		Name = "blargg";
		Category = "ntsc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "640.000000")
.Param("scale_y", "1.000000"));
         	ShaderDefs.push_back(NtscShadersBlarggBlargg0ShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(NtscShadersBlarggBlargg1ShaderDef()
.Param("filter_linear", "false"));
	}
};
}
