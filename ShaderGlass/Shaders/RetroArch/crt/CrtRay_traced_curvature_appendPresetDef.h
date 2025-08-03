/*
ShaderGlass preset crt / ray_traced_curvature_append imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/ray_traced_curvature_append.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtRay_traced_curvature_appendPresetDef : public PresetDef
{
public:
	CrtRay_traced_curvature_appendPresetDef() : PresetDef{}
	{
		Name = "ray_traced_curvature_append";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersRt_curvatureRt_curvatureShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport"));
            OverrideParam("RT_CURV_APPEND", (float)1.000000);
	}
};
}
