/*
ShaderGlass preset handheld/color-mod / gbc-gambatte-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/handheld/color-mod/gbc-gambatte-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModGbcGambatteColorPresetDef : public PresetDef
{
public:
	HandheldColorModGbcGambatteColorPresetDef() : PresetDef{}
	{
		Name = "gbc-gambatte-color";
		Category = "handheld/color-mod";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersColorGbcGambatteColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
