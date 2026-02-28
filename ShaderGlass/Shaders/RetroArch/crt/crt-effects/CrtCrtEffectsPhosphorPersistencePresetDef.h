/*
ShaderGlass preset crt/crt-effects / phosphor-persistence imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/phosphor-persistence.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsPhosphorPersistencePresetDef : public PresetDef
{
public:
	CrtCrtEffectsPhosphorPersistencePresetDef() : PresetDef{}
	{
		Name = "phosphor-persistence";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorPersistencePhosphorApplyShaderDef()
.Param("alias", "internal1")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorPersistencePhosphorUpdateShaderDef()
.Param("alias", "phosphor")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersPhosphorPersistencePassthroughShaderDef()
.Param("alias", "internal2")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            OverrideParam("phosphor_amplitude", (float)0.040000);
            OverrideParam("phosphor_power", (float)1.800000);
	}
};
}
