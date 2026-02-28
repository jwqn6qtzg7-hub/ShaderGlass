/*
ShaderGlass preset ntsc / ntsc-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/ntsc-simple.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtscSimplePresetDef : public PresetDef
{
public:
	NtscNtscSimplePresetDef() : PresetDef{}
	{
		Name = "ntsc-simple";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("scale_type_x", "source")
.Param("scale_x", "2.000000"));
         	ShaderDefs.push_back(NtscShadersNtscSimpleNtsc_simpleShaderDef());
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
