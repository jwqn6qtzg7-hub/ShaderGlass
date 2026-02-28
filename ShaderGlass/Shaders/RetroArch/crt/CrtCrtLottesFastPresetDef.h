/*
ShaderGlass preset crt / crt-lottes-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-lottes-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtLottesFastPresetDef : public PresetDef
{
public:
	CrtCrtLottesFastPresetDef() : PresetDef{}
	{
		Name = "crt-lottes-fast";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtLottesFastShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
