/*
ShaderGlass preset crt / gizmo-crt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/gizmo-crt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtGizmoCrtPresetDef : public PresetDef
{
public:
	CrtGizmoCrtPresetDef() : PresetDef{}
	{
		Name = "gizmo-crt";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersGizmoCrtShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("BGR_LCD_PATTERN", (float)0.000000);
            OverrideParam("BLUR_OFFSET", (float)0.000000);
            OverrideParam("BRIGHTNESS", (float)0.500000);
            OverrideParam("CURVATURE_X", (float)0.000000);
            OverrideParam("CURVATURE_Y", (float)0.000000);
            OverrideParam("HORIZONTAL_BLUR", (float)0.000000);
            OverrideParam("SHRINK", (float)0.000000);
            OverrideParam("VERTICAL_BLUR", (float)0.000000);
	}
};
}
