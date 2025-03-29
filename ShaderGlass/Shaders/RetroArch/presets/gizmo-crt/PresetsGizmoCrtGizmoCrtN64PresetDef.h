/*
ShaderGlass preset presets/gizmo-crt / gizmo-crt-n64 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/gizmo-crt/gizmo-crt-n64.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsGizmoCrtGizmoCrtN64PresetDef : public PresetDef
{
public:
	PresetsGizmoCrtGizmoCrtN64PresetDef() : PresetDef{}
	{
		Name = "gizmo-crt-n64";
		Category = "presets/gizmo-crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersGizmoCrtShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("BGR_LCD_PATTERN", (float)0.000000);
            OverrideParam("BLUR_OFFSET", (float)0.500000);
            OverrideParam("BRIGHTNESS", (float)0.500000);
            OverrideParam("CURVATURE_X", (float)0.000000);
            OverrideParam("CURVATURE_Y", (float)0.000000);
            OverrideParam("HORIZONTAL_BLUR", (float)1.000000);
            OverrideParam("SHRINK", (float)0.000000);
            OverrideParam("VERTICAL_BLUR", (float)1.000000);
	}
};
}
