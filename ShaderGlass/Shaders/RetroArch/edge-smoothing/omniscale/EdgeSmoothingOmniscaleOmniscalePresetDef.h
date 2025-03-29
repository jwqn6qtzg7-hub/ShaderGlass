/*
ShaderGlass preset edge-smoothing/omniscale / omniscale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/omniscale/omniscale.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingOmniscaleShadersOmniscaleShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
