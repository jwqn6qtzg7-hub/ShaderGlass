/*
ShaderGlass preset crt / crt-hyllian-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-hyllian-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtHyllianFastPresetDef : public PresetDef
{
public:
	CrtCrtHyllianFastPresetDef() : PresetDef{}
	{
		Name = "crt-hyllian-fast";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersHyllianCrtHyllianFastShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
