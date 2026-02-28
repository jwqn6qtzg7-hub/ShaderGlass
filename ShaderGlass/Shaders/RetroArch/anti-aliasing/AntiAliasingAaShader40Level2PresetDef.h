/*
ShaderGlass preset anti-aliasing / aa-shader-4.0-level2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/anti-aliasing/aa-shader-4.0-level2.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class AntiAliasingAaShader40Level2PresetDef : public PresetDef
{
public:
	AntiAliasingAaShader40Level2PresetDef() : PresetDef{}
	{
		Name = "aa-shader-4.0-level2";
		Category = "anti-aliasing";
	}

	void Build() {
         	ShaderDefs.push_back(AntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(AntiAliasingShadersAaShader40Level2AaShader40Level2Pass2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
	}
};
}
