/*
ShaderGlass preset crt / crt-mattias imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-mattias.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtMattiasPresetDef : public PresetDef
{
public:
	CrtCrtMattiasPresetDef() : PresetDef{}
	{
		Name = "crt-mattias";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtMattiasShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
