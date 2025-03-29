/*
ShaderGlass preset misc / yiq-hue-adjustment imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/yiq-hue-adjustment.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersYiqHueAdjustmentShaderDef()
.Param("scale_type", "source"));
	}
};
}
