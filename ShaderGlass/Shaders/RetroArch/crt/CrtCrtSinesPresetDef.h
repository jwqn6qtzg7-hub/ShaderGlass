/*
ShaderGlass preset crt / crt-sines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-sines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtSinesPresetDef : public PresetDef
{
public:
	CrtCrtSinesPresetDef() : PresetDef{}
	{
		Name = "crt-sines";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtSinesShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
