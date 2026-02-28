/*
ShaderGlass preset ntsc / ntsc-xot imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/ntsc-xot.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtscXotPresetDef : public PresetDef
{
public:
	NtscNtscXotPresetDef() : PresetDef{}
	{
		Name = "ntsc-xot";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("scale_type_x", "absolute")
.Param("scale_x", "640.0"));
         	ShaderDefs.push_back(NtscShadersNtscXotShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
