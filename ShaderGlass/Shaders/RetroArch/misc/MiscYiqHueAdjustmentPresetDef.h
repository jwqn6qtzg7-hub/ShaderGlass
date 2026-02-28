/*
ShaderGlass preset misc / yiq-hue-adjustment imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/yiq-hue-adjustment.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscYiqHueAdjustmentPresetDef : public PresetDef
{
public:
	MiscYiqHueAdjustmentPresetDef() : PresetDef{}
	{
		Name = "yiq-hue-adjustment";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersYiqHueAdjustmentShaderDef()
.Param("scale_type", "source"));
	}
};
}
