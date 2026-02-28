/*
ShaderGlass preset crt / fakelottes imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/fakelottes.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtFakelottesPresetDef : public PresetDef
{
public:
	CrtFakelottesPresetDef() : PresetDef{}
	{
		Name = "fakelottes";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersFakelottesShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
