/*
ShaderGlass preset edge-smoothing/eagle / supereagle imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/eagle/supereagle.slangp
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
