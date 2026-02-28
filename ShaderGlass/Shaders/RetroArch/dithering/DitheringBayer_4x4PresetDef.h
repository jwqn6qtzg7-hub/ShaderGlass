/*
ShaderGlass preset dithering / bayer_4x4 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/bayer_4x4.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringBayer_4x4PresetDef : public PresetDef
{
public:
	DitheringBayer_4x4PresetDef() : PresetDef{}
	{
		Name = "bayer_4x4";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersBayer_4x4ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
            OverrideParam("COLOR_DEPTH", (float)2.000000);
            OverrideParam("DITHER_TUNE", (float)0.000000);
            OverrideParam("EGA_PALETTE", (float)0.000000);
	}
};
}
