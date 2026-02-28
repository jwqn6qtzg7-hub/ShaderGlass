/*
ShaderGlass preset edge-smoothing/eagle / supereagle imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/eagle/supereagle.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingEagleSupereaglePresetDef : public PresetDef
{
public:
	EdgeSmoothingEagleSupereaglePresetDef() : PresetDef{}
	{
		Name = "supereagle";
		Category = "edge-smoothing/eagle";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingEagleShadersSupereagleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
