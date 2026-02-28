/*
ShaderGlass preset handheld/color-mod / palm-color imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/color-mod/palm-color.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldColorModPalmColorPresetDef : public PresetDef
{
public:
	HandheldColorModPalmColorPresetDef() : PresetDef{}
	{
		Name = "palm-color";
		Category = "handheld/color-mod";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersColorPalmColorShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
