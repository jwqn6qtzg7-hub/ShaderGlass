/*
ShaderGlass preset crt / crt-1tap imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-1tap.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrt1tapPresetDef : public PresetDef
{
public:
	CrtCrt1tapPresetDef() : PresetDef{}
	{
		Name = "crt-1tap";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrt1tapShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "true")
.Param("scale_type", "viewport")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
	}
};
}
