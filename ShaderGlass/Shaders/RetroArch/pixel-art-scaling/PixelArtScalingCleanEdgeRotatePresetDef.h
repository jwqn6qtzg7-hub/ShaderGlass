/*
ShaderGlass preset pixel-art-scaling / cleanEdge-rotate imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/cleanEdge-rotate.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersCleanEdgeRotateShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
