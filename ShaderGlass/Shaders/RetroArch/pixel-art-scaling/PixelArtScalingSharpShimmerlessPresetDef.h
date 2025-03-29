/*
ShaderGlass preset pixel-art-scaling / sharp-shimmerless imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/sharp-shimmerless.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSharpShimmerlessShaderDef()
.Param("filter_linear", "true"));
	}
};
}
