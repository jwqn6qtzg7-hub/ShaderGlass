/*
ShaderGlass preset blurs / gaussian_blur-sharp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/blurs/gaussian_blur-sharp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursGaussian_blurSharpPresetDef : public PresetDef
{
public:
	BlursGaussian_blurSharpPresetDef() : PresetDef{}
	{
		Name = "gaussian_blur-sharp";
		Category = "blurs";
	}

	void Build() {
         	ShaderDefs.push_back(BlursShadersGaussian_blur_filteringGaussianSharpShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
	}
};
}
