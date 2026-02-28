/*
ShaderGlass preset edge-smoothing/omniscale / omniscale-legacy imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/omniscale/omniscale-legacy.slangp
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

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingOmniscaleShadersOmniscaleLegacyShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
