/*
ShaderGlass preset pixel-art-scaling / box_filter_aa_xform imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/pixel-art-scaling/box_filter_aa_xform.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PixelArtScalingBox_filter_aa_xformPresetDef : public PresetDef
{
public:
	PixelArtScalingBox_filter_aa_xformPresetDef() : PresetDef{}
	{
		Name = "box_filter_aa_xform";
		Category = "pixel-art-scaling";
	}

	virtual void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
