/*
ShaderGlass preset edge-smoothing/ddt / ddt-jinc-linear imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/ddt/ddt-jinc-linear.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingDdtDdtJincLinearPresetDef : public PresetDef
{
public:
	EdgeSmoothingDdtDdtJincLinearPresetDef() : PresetDef{}
	{
		Name = "ddt-jinc-linear";
		Category = "edge-smoothing/ddt";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportLinearizeShaderDef()
.Param("alias", "XbrSource")
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(EdgeSmoothingDdtShadersDdtJincShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(EdgeSmoothingXbrShadersSupportDelinearizeShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
