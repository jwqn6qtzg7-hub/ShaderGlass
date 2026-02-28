/*
ShaderGlass preset denoisers / median_5x5 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/denoisers/median_5x5.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DenoisersMedian_5x5PresetDef : public PresetDef
{
public:
	DenoisersMedian_5x5PresetDef() : PresetDef{}
	{
		Name = "median_5x5";
		Category = "denoisers";
	}

	void Build() {
         	ShaderDefs.push_back(DenoisersShadersMedian_5x5ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
