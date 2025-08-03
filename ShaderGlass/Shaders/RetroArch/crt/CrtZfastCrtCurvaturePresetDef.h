/*
ShaderGlass preset crt / zfast-crt-curvature imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/zfast-crt-curvature.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtZfastCrtCurvaturePresetDef : public PresetDef
{
public:
	CrtZfastCrtCurvaturePresetDef() : PresetDef{}
	{
		Name = "zfast-crt-curvature";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersZfast_crtZfast_crt_curvatureShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
