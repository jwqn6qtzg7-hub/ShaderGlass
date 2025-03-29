/*
ShaderGlass preset crt / crt-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-simple.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtSimpleShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
