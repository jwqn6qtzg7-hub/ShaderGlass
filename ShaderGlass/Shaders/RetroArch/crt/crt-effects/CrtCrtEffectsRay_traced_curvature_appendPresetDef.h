/*
ShaderGlass preset crt/crt-effects / ray_traced_curvature_append imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/ray_traced_curvature_append.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsRay_traced_curvature_appendPresetDef : public PresetDef
{
public:
	CrtCrtEffectsRay_traced_curvature_appendPresetDef() : PresetDef{}
	{
		Name = "ray_traced_curvature_append";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtCrtEffectsShadersRt_curvatureRt_curvatureShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport"));
            OverrideParam("RT_CURV_APPEND", (float)1.000000);
	}
};
}
