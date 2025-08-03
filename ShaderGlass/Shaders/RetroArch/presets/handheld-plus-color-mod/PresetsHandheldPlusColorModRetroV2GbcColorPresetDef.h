/*
ShaderGlass preset presets/handheld-plus-color-mod / retro-v2+gbc-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/presets/handheld-plus-color-mod/retro-v2+gbc-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModRetroV2GbcColorPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModRetroV2GbcColorPresetDef() : PresetDef{}
	{
		Name = "retro-v2+gbc-color";
		Category = "presets/handheld-plus-color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbcColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersRetroV2ShaderDef()
.Param("filter_linear", "false"));
            OverrideParam("RETRO_PIXEL_SIZE", (float)0.840000);
            OverrideParam("lighten_screen", (float)0.500000);
	}
};
}
