/*
ShaderGlass preset handheld/color-mod / vba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/color-mod/vba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModVbaColorPresetDef : public PresetDef
{
public:
	HandheldColorModVbaColorPresetDef() : PresetDef{}
	{
		Name = "vba-color";
		Category = "handheld/color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorVbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(MiscShadersImageAdjustmentShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
            OverrideParam("ia_bright_boost", (float)0.150000);
            OverrideParam("ia_luminance", (float)0.750000);
	}
};
}
