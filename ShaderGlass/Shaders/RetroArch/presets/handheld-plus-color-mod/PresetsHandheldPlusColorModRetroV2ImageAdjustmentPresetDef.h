/*
ShaderGlass preset presets/handheld-plus-color-mod / retro-v2+image-adjustment imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/handheld-plus-color-mod/retro-v2+image-adjustment.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModRetroV2ImageAdjustmentPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModRetroV2ImageAdjustmentPresetDef() : PresetDef{}
	{
		Name = "retro-v2+image-adjustment";
		Category = "presets/handheld-plus-color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersImageAdjustmentShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersRetroV2ShaderDef()
.Param("filter_linear", "false"));
            OverrideParam("B", (float)1.000000);
            OverrideParam("G", (float)1.000000);
            OverrideParam("R", (float)1.000000);
            OverrideParam("RETRO_PIXEL_SIZE", (float)0.840000);
            OverrideParam("bright_boost", (float)0.000000);
            OverrideParam("contrast", (float)1.000000);
            OverrideParam("luminance", (float)1.000000);
            OverrideParam("monitor_gamma", (float)2.200000);
            OverrideParam("overscan_percent_x", (float)0.000000);
            OverrideParam("overscan_percent_y", (float)0.000000);
            OverrideParam("saturation", (float)1.000000);
            OverrideParam("target_gamma", (float)2.200000);
	}
};
}
