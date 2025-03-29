/*
ShaderGlass preset denoisers / median_3x3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/denoisers/median_3x3.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DenoisersMedian_3x3PresetDef : public PresetDef
{
public:
	DenoisersMedian_3x3PresetDef() : PresetDef{}
	{
		Name = "median_3x3";
		Category = "denoisers";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DenoisersShadersMedian_3x3ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
