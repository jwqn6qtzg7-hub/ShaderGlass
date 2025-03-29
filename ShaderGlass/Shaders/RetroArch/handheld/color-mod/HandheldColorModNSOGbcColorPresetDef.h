/*
ShaderGlass preset handheld/color-mod / NSO-gbc-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/color-mod/NSO-gbc-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModNSOGbcColorPresetDef : public PresetDef
{
public:
	HandheldColorModNSOGbcColorPresetDef() : PresetDef{}
	{
		Name = "NSO-gbc-color";
		Category = "handheld/color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorNSOGbcColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
