/*
ShaderGlass preset edge-smoothing/omniscale / omniscale-legacy imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/omniscale/omniscale-legacy.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingOmniscaleOmniscaleLegacyPresetDef : public PresetDef
{
public:
	EdgeSmoothingOmniscaleOmniscaleLegacyPresetDef() : PresetDef{}
	{
		Name = "omniscale-legacy";
		Category = "edge-smoothing/omniscale";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
