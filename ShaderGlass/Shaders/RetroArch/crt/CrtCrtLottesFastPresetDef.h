/*
ShaderGlass preset crt / crt-lottes-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-lottes-fast.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtLottesFastShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
