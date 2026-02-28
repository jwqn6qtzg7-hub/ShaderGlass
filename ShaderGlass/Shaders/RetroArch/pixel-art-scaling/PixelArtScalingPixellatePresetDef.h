/*
ShaderGlass preset pixel-art-scaling / pixellate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/pixellate.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingPixellatePresetDef : public PresetDef
{
public:
	PixelArtScalingPixellatePresetDef() : PresetDef{}
	{
		Name = "pixellate";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersPixellateShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
