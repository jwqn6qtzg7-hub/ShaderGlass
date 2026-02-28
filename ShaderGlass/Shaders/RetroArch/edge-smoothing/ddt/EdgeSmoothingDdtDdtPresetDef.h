/*
ShaderGlass preset edge-smoothing/ddt / ddt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/ddt/ddt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdtDdtPresetDef : public PresetDef
{
public:
	EdgeSmoothingDdtDdtPresetDef() : PresetDef{}
	{
		Name = "ddt";
		Category = "edge-smoothing/ddt";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShadersDdtShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
