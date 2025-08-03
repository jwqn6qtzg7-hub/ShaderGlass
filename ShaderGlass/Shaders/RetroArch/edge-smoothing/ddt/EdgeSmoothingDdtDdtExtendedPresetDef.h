/*
ShaderGlass preset edge-smoothing/ddt / ddt-extended imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/ddt/ddt-extended.slangp
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
