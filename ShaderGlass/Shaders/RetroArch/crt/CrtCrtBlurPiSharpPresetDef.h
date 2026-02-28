/*
ShaderGlass preset crt / crt-blurPi-sharp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-blurPi-sharp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtBlurPiSharpPresetDef : public PresetDef
{
public:
	CrtCrtBlurPiSharpPresetDef() : PresetDef{}
	{
		Name = "crt-blurPi-sharp";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtBlurPiShaderDef()
.Param("alias", "crt-blurPi")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
            OverrideParam("blurGain", (float)0.500000);
            OverrideParam("blurRadius", (float)1.500000);
	}
};
}
