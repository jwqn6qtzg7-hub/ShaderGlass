/*
ShaderGlass preset crt / crt-hyllian-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-hyllian-fast.slangp
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

	void Build() {
         	ShaderDefs.push_back(CrtShadersHyllianCrtHyllianFastShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
