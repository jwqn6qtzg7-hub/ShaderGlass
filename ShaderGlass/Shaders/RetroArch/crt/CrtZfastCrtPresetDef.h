/*
ShaderGlass preset crt / zfast-crt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/zfast-crt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtZfastCrtPresetDef : public PresetDef
{
public:
	CrtZfastCrtPresetDef() : PresetDef{}
	{
		Name = "zfast-crt";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_finemaskShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
