/*
ShaderGlass preset pixel-art-scaling / uniform-nearest imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/pixel-art-scaling/uniform-nearest.slangp
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
