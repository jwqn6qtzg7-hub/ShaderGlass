/*
ShaderGlass preset pixel-art-scaling / box_filter_aa_xform imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pixel-art-scaling/box_filter_aa_xform.slangp
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

	void Build() {
         	ShaderDefs.push_back(PixelArtScalingShadersBox_filter_aaBox_filter_aa_xformShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
