/*
ShaderGlass preset denoisers / fast-bilateral imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/denoisers/fast-bilateral.slangp
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
