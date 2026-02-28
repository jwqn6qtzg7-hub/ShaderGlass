/*
ShaderGlass preset anti-aliasing / reverse-aa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/anti-aliasing/reverse-aa.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class AntiAliasingReverseAaPresetDef : public PresetDef
{
public:
	AntiAliasingReverseAaPresetDef() : PresetDef{}
	{
		Name = "reverse-aa";
		Category = "anti-aliasing";
	}

	void Build() {
         	ShaderDefs.push_back(AntiAliasingShadersReverseAaShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(InterpolationShadersBicubicShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
