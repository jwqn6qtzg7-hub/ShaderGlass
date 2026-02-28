/*
ShaderGlass preset denoisers / slow-bilateral imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/denoisers/slow-bilateral.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DenoisersSlowBilateralPresetDef : public PresetDef
{
public:
	DenoisersSlowBilateralPresetDef() : PresetDef{}
	{
		Name = "slow-bilateral";
		Category = "denoisers";
	}

	void Build() {
         	ShaderDefs.push_back(DenoisersShadersSlowBilateralShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
