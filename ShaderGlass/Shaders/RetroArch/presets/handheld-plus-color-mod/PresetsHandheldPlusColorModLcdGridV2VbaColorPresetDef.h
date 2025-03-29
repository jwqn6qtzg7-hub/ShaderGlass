/*
ShaderGlass preset presets/handheld-plus-color-mod / lcd-grid-v2-vba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/handheld-plus-color-mod/lcd-grid-v2-vba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModLcdGridV2VbaColorPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModLcdGridV2VbaColorPresetDef() : PresetDef{}
	{
		Name = "lcd-grid-v2-vba-color";
		Category = "presets/handheld-plus-color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersLcdCgwgLcdGridV2ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldShadersColorVbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            OverrideParam("BGR", (float)0.000000);
            OverrideParam("BSUBPIX_B", (float)1.000000);
            OverrideParam("BSUBPIX_G", (float)0.000000);
            OverrideParam("BSUBPIX_R", (float)0.000000);
            OverrideParam("GSUBPIX_B", (float)0.000000);
            OverrideParam("GSUBPIX_G", (float)1.000000);
            OverrideParam("GSUBPIX_R", (float)0.000000);
            OverrideParam("RSUBPIX_B", (float)0.000000);
            OverrideParam("RSUBPIX_G", (float)0.000000);
            OverrideParam("RSUBPIX_R", (float)1.000000);
            OverrideParam("ambient", (float)0.020000);
            OverrideParam("blacklevel", (float)0.000000);
            OverrideParam("color_mode", (float)2.000000);
            OverrideParam("darken_screen", (float)0.000000);
            OverrideParam("gain", (float)1.000000);
            OverrideParam("gamma", (float)3.200000);
	}
};
}
