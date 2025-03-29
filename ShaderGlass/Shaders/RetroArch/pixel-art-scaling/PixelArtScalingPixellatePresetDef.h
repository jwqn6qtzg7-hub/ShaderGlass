/*
ShaderGlass preset pixel-art-scaling / pixellate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/pixellate.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersPixellateShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
