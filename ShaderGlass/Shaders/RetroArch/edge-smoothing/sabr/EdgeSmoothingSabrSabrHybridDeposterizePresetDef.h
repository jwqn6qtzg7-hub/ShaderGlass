/*
ShaderGlass preset edge-smoothing/sabr / sabr-hybrid-deposterize imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/sabr/sabr-hybrid-deposterize.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingSabrSabrHybridDeposterizePresetDef : public PresetDef
{
public:
	EdgeSmoothingSabrSabrHybridDeposterizePresetDef() : PresetDef{}
	{
		Name = "sabr-hybrid-deposterize";
		Category = "edge-smoothing/sabr";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingSabrShadersSabrHybridDeposterizeShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
