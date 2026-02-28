/*
ShaderGlass preset crt / crt-pi imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-pi.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtPiPresetDef : public PresetDef
{
public:
	CrtCrtPiPresetDef() : PresetDef{}
	{
		Name = "crt-pi";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtPiShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
