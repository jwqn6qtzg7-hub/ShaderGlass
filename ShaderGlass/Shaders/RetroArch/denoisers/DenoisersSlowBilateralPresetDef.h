/*
ShaderGlass preset denoisers / slow-bilateral imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/denoisers/slow-bilateral.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(DenoisersShadersSlowBilateralShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
