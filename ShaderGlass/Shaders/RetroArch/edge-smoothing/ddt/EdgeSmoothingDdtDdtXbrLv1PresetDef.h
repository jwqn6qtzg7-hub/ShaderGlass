/*
ShaderGlass preset edge-smoothing/ddt / ddt-xbr-lv1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/ddt/ddt-xbr-lv1.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdtDdtXbrLv1PresetDef : public PresetDef
{
public:
	EdgeSmoothingDdtDdtXbrLv1PresetDef() : PresetDef{}
	{
		Name = "ddt-xbr-lv1";
		Category = "edge-smoothing/ddt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingDdtShadersDdtXbrLv1ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
