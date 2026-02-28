/*
ShaderGlass preset dithering / bayer-matrix-dithering imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/bayer-matrix-dithering.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringBayerMatrixDitheringPresetDef : public PresetDef
{
public:
	DitheringBayerMatrixDitheringPresetDef() : PresetDef{}
	{
		Name = "bayer-matrix-dithering";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersBayerMatrixDitheringShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
