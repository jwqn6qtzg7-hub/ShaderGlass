/*
ShaderGlass preset edge-smoothing/xbrz / xbrz-freescale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/xbrz/xbrz-freescale.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingXbrzXbrzFreescalePresetDef : public PresetDef
{
public:
	EdgeSmoothingXbrzXbrzFreescalePresetDef() : PresetDef{}
	{
		Name = "xbrz-freescale";
		Category = "edge-smoothing/xbrz";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrzShadersXbrzFreescaleShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
