/*
ShaderGlass preset crt / crt-pocket imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-pocket.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtPocketPresetDef : public PresetDef
{
public:
	CrtCrtPocketPresetDef() : PresetDef{}
	{
		Name = "crt-pocket";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearShaderDef());
         	ShaderDefs.push_back(CrtShadersCrtPocketShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("u_gamma", (float)2.400000);
	}
};
}
