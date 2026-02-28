/*
ShaderGlass preset pixel-art-scaling / uniform-nearest imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/uniform-nearest.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingUniformNearestPresetDef : public PresetDef
{
public:
	PixelArtScalingUniformNearestPresetDef() : PresetDef{}
	{
		Name = "uniform-nearest";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersUniformNearestShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("BGR_LCD_PATTERN", (float)0.000000);
	}
};
}
