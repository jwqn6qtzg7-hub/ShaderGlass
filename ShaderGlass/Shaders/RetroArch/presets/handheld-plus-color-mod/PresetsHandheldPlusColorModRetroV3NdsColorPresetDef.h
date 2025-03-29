/*
ShaderGlass preset presets/handheld-plus-color-mod / retro-v3-nds-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/presets/handheld-plus-color-mod/retro-v3-nds-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsHandheldPlusColorModRetroV3NdsColorPresetDef : public PresetDef
{
public:
	PresetsHandheldPlusColorModRetroV3NdsColorPresetDef() : PresetDef{}
	{
		Name = "retro-v3-nds-color";
		Category = "presets/handheld-plus-color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorNdsColorShaderDef()
.Param("filter_linear", "false"));
         	ShaderDefs.push_back(HandheldShadersRetroV3ShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
