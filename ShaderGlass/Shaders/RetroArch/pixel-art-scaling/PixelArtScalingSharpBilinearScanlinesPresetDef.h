/*
ShaderGlass preset pixel-art-scaling / sharp-bilinear-scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/sharp-bilinear-scanlines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSharpBilinearScanlinesPresetDef : public PresetDef
{
public:
	PixelArtScalingSharpBilinearScanlinesPresetDef() : PresetDef{}
	{
		Name = "sharp-bilinear-scanlines";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSharpBilinearScanlinesShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
