/*
ShaderGlass preset crt / crt-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-simple.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtSimplePresetDef : public PresetDef
{
public:
	CrtCrtSimplePresetDef() : PresetDef{}
	{
		Name = "crt-simple";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtSimpleShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
