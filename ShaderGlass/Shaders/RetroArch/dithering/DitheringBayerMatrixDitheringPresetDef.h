/*
ShaderGlass preset dithering / bayer-matrix-dithering imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/dithering/bayer-matrix-dithering.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersBayerMatrixDitheringShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
