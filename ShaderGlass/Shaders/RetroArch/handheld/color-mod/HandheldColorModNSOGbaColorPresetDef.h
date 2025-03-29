/*
ShaderGlass preset handheld/color-mod / NSO-gba-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/color-mod/NSO-gba-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModNSOGbaColorPresetDef : public PresetDef
{
public:
	HandheldColorModNSOGbaColorPresetDef() : PresetDef{}
	{
		Name = "NSO-gba-color";
		Category = "handheld/color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorNSOGbaColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
