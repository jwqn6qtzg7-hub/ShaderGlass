/*
ShaderGlass preset pixel-art-scaling / uniform-nearest imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/uniform-nearest.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersUniformNearestShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("BGR_LCD_PATTERN", (float)0.000000);
	}
};
}
