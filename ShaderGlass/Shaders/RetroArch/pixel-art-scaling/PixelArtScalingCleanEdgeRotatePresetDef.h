/*
ShaderGlass preset pixel-art-scaling / cleanEdge-rotate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/cleanEdge-rotate.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingCleanEdgeRotatePresetDef : public PresetDef
{
public:
	PixelArtScalingCleanEdgeRotatePresetDef() : PresetDef{}
	{
		Name = "cleanEdge-rotate";
		Category = "pixel-art-scaling";
	}

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersCleanEdgeRotateShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
