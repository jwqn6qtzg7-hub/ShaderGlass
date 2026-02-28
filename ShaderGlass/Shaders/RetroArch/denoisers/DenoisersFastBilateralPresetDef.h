/*
ShaderGlass preset denoisers / fast-bilateral imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/denoisers/fast-bilateral.slangp
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

	void Build() {
         	ShaderDefs.push_back(DenoisersShadersFastBilateralShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
