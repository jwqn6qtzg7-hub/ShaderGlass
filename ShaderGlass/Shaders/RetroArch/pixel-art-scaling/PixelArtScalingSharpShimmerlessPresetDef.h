/*
ShaderGlass preset pixel-art-scaling / sharp-shimmerless imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/pixel-art-scaling/sharp-shimmerless.slangp
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
