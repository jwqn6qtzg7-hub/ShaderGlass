/*
ShaderGlass preset dithering / blue_noise imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/dithering/blue_noise.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringBlue_noisePresetDef : public PresetDef
{
public:
	DitheringBlue_noisePresetDef() : PresetDef{}
	{
		Name = "blue_noise";
		Category = "dithering";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersBlue_noiseShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
            TextureDefs.push_back(DitheringShadersBlueNoiseLDR_RGB1_0TextureDef()
.Param("name", "BlueNoiseTexture"));
            OverrideParam("COLOR_DEPTH", (float)2.000000);
            OverrideParam("DITHER_TUNE", (float)0.000000);
            OverrideParam("EGA_PALETTE", (float)0.000000);
	}
};
}
