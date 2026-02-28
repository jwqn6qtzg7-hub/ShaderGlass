/*
ShaderGlass preset dithering / ps1-dedither-comparison imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/ps1-dedither-comparison.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringPs1DeditherComparisonPresetDef : public PresetDef
{
public:
	DitheringPs1DeditherComparisonPresetDef() : PresetDef{}
	{
		Name = "ps1-dedither-comparison";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersPs1ditherPS1UnditherAntiBayerShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(DitheringShadersPs1ditherPS1UnditherComparisonMkIIShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
