/*
ShaderGlass preset edge-smoothing/sabr / sabr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/sabr/sabr.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingSabrShadersSabrV30ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
