/*
ShaderGlass preset crt / gizmo-slotmask-crt imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/gizmo-slotmask-crt.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtGizmoSlotmaskCrtPresetDef : public PresetDef
{
public:
	CrtGizmoSlotmaskCrtPresetDef() : PresetDef{}
	{
		Name = "gizmo-slotmask-crt";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersGizmoSlotmaskCrtShaderDef()
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("BGR_LCD_PATTERN", (float)0.000000);
            OverrideParam("BLUR_OFFSET", (float)0.650000);
            OverrideParam("BRIGHTNESS", (float)0.500000);
            OverrideParam("COLOUR_BLEEDING", (float)0.150000);
            OverrideParam("CURVATURE_X", (float)0.150000);
            OverrideParam("CURVATURE_Y", (float)0.150000);
            OverrideParam("GRID", (float)0.300000);
            OverrideParam("HORIZONTAL_BLUR", (float)1.000000);
            OverrideParam("SHRINK", (float)0.000000);
            OverrideParam("SLOTMASK", (float)1.000000);
            OverrideParam("SNR", (float)2.600000);
            OverrideParam("VERTICAL_BLUR", (float)0.000000);
	}
};
}
