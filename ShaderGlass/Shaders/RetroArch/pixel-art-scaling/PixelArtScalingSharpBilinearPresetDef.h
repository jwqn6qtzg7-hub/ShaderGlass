/*
ShaderGlass preset pixel-art-scaling / sharp-bilinear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/sharp-bilinear.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSharpBilinearPresetDef : public PresetDef
{
public:
	PixelArtScalingSharpBilinearPresetDef() : PresetDef{}
	{
		Name = "sharp-bilinear";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSharpBilinearShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
