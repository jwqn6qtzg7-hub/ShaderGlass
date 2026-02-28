/*
ShaderGlass preset dithering / ps1-dedither-boxblur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/dithering/ps1-dedither-boxblur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringPs1DeditherBoxblurPresetDef : public PresetDef
{
public:
	DitheringPs1DeditherBoxblurPresetDef() : PresetDef{}
	{
		Name = "ps1-dedither-boxblur";
		Category = "dithering";
	}

	void Build() {
         	ShaderDefs.push_back(DitheringShadersPs1ditherPS1UnditherBoxBlurShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
