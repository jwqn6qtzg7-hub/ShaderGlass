/*
ShaderGlass preset edge-smoothing/ddt / ddt-jinc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/ddt/ddt-jinc.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdtDdtJincPresetDef : public PresetDef
{
public:
	EdgeSmoothingDdtDdtJincPresetDef() : PresetDef{}
	{
		Name = "ddt-jinc";
		Category = "edge-smoothing/ddt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShadersDdtJincShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
