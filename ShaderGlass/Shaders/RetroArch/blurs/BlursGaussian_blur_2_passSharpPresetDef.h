/*
ShaderGlass preset blurs / gaussian_blur_2_pass-sharp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/blurs/gaussian_blur_2_pass-sharp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursGaussian_blur_2_passSharpPresetDef : public PresetDef
{
public:
	BlursGaussian_blur_2_passSharpPresetDef() : PresetDef{}
	{
		Name = "gaussian_blur_2_pass-sharp";
		Category = "blurs";
	}

	void Build() {
         	ShaderDefs.push_back(BlursShadersGaussian_blur_filteringGaussian_horizontalSharpShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(BlursShadersGaussian_blur_filteringGaussian_verticalSharpShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
	}
};
}
