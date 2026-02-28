/*
ShaderGlass preset edge-smoothing/omniscale / omniscale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/omniscale/omniscale.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingOmniscaleOmniscalePresetDef : public PresetDef
{
public:
	EdgeSmoothingOmniscaleOmniscalePresetDef() : PresetDef{}
	{
		Name = "omniscale";
		Category = "edge-smoothing/omniscale";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingOmniscaleShadersOmniscaleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
