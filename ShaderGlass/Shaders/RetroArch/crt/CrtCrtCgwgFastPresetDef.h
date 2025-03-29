/*
ShaderGlass preset crt / crt-cgwg-fast imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-cgwg-fast.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtCgwgFastPresetDef : public PresetDef
{
public:
	CrtCrtCgwgFastPresetDef() : PresetDef{}
	{
		Name = "crt-cgwg-fast";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtCgwgFastShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
