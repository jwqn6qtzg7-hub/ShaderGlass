/*
ShaderGlass preset edge-smoothing/sabr / sabr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/sabr/sabr.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingSabrSabrPresetDef : public PresetDef
{
public:
	EdgeSmoothingSabrSabrPresetDef() : PresetDef{}
	{
		Name = "sabr";
		Category = "edge-smoothing/sabr";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingSabrShadersSabrV30ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
