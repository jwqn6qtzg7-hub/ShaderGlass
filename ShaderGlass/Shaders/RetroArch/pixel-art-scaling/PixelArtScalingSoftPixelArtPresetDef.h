/*
ShaderGlass preset pixel-art-scaling / soft-pixel-art imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/soft-pixel-art.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingSoftPixelArtPresetDef : public PresetDef
{
public:
	PixelArtScalingSoftPixelArtPresetDef() : PresetDef{}
	{
		Name = "soft-pixel-art";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersSoftPixelArtShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBSplineXShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source"));
         	ShaderDefs.push_back(InterpolationShadersBicubicBSplineYShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
