/*
ShaderGlass preset edge-smoothing/scalenx / mmpx-ex imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/scalenx/mmpx-ex.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingScalenxMmpxExPresetDef : public PresetDef
{
public:
	EdgeSmoothingScalenxMmpxExPresetDef() : PresetDef{}
	{
		Name = "mmpx-ex";
		Category = "edge-smoothing/scalenx";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingScalenxShadersMmpxExShaderDef()
.Param("filter_linear", "false")
.Param("scale", "2.0")
.Param("scale_type", "source"));
	}
};
}
