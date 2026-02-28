/*
ShaderGlass preset crt / crt-CreativeForce-Arcade imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-CreativeForce-Arcade.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtCreativeForceArcadePresetDef : public PresetDef
{
public:
	CrtCrtCreativeForceArcadePresetDef() : PresetDef{}
	{
		Name = "crt-CreativeForce-Arcade";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(InterpolationShadersLanczos16ARShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCreativeForceCrtCreativeForceArcadeShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("AR_STRENGTH", (float)0.300000);
	}
};
}
