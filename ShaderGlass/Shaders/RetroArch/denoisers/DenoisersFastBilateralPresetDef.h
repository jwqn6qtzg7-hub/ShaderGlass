/*
ShaderGlass preset denoisers / fast-bilateral imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/denoisers/fast-bilateral.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DenoisersFastBilateralPresetDef : public PresetDef
{
public:
	DenoisersFastBilateralPresetDef() : PresetDef{}
	{
		Name = "fast-bilateral";
		Category = "denoisers";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DenoisersShadersFastBilateralShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
