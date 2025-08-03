/*
ShaderGlass preset edge-smoothing/sabr / sabr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/sabr/sabr.slangp
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
