/*
ShaderGlass preset edge-smoothing/eagle / supereagle imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/eagle/supereagle.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingEagleShadersSupereagleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
