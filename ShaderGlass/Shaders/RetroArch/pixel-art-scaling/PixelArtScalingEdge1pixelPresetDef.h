/*
ShaderGlass preset pixel-art-scaling / edge1pixel imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/edge1pixel.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingEdge1pixelPresetDef : public PresetDef
{
public:
	PixelArtScalingEdge1pixelPresetDef() : PresetDef{}
	{
		Name = "edge1pixel";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersEdge1pixelShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
