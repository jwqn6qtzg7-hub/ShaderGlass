/*
ShaderGlass preset pixel-art-scaling / sharp-shimmerless imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/sharp-shimmerless.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSharpShimmerlessPresetDef : public PresetDef
{
public:
	PixelArtScalingSharpShimmerlessPresetDef() : PresetDef{}
	{
		Name = "sharp-shimmerless";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSharpShimmerlessShaderDef()
.Param("filter_linear", "true"));
	}
};
}
