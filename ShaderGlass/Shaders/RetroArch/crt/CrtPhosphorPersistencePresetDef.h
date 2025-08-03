/*
ShaderGlass preset crt / phosphor-persistence imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/phosphor-persistence.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtPhosphorPersistencePresetDef : public PresetDef
{
public:
	CrtPhosphorPersistencePresetDef() : PresetDef{}
	{
		Name = "phosphor-persistence";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersPhosphorPersistencePhosphorApplyShaderDef()
.Param("alias", "internal1")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersPhosphorPersistencePhosphorUpdateShaderDef()
.Param("alias", "phosphor")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersPhosphorPersistencePassthroughShaderDef()
.Param("alias", "internal2")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            OverrideParam("phosphor_amplitude", (float)0.040000);
            OverrideParam("phosphor_power", (float)1.800000);
	}
};
}
