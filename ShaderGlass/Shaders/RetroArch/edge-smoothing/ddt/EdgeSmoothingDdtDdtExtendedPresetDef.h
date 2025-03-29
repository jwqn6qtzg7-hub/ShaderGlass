/*
ShaderGlass preset edge-smoothing/ddt / ddt-extended imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/ddt/ddt-extended.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdtDdtExtendedPresetDef : public PresetDef
{
public:
	EdgeSmoothingDdtDdtExtendedPresetDef() : PresetDef{}
	{
		Name = "ddt-extended";
		Category = "edge-smoothing/ddt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShadersDdtExtendedShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
