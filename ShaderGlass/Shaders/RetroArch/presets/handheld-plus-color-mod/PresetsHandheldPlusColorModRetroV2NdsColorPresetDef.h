/*
ShaderGlass preset presets/handheld-plus-color-mod / retro-v2+nds-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/handheld-plus-color-mod/retro-v2+nds-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModRetroV2NdsColorPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModRetroV2NdsColorPresetDef() : PresetDef{}
	{
		Name = "retro-v2+nds-color";
		Category = "presets/handheld-plus-color-mod";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersColorNdsColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.000000")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersRetroV2ShaderDef()
.Param("filter_linear", "false"));
            OverrideParam("RETRO_PIXEL_SIZE", (float)0.840000);
            OverrideParam("target_gamma", (float)2.000000);
	}
};
}
