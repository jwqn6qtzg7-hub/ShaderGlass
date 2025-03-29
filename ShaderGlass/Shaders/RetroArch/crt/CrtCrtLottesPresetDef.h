/*
ShaderGlass preset crt / crt-lottes imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-lottes.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtLottesPresetDef : public PresetDef
{
public:
	CrtCrtLottesPresetDef() : PresetDef{}
	{
		Name = "crt-lottes";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtLottesShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
