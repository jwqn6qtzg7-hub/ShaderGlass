/*
ShaderGlass preset crt / crt-nobody imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-nobody.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtNobodyPresetDef : public PresetDef
{
public:
	CrtCrtNobodyPresetDef() : PresetDef{}
	{
		Name = "crt-nobody";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtNobodyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
