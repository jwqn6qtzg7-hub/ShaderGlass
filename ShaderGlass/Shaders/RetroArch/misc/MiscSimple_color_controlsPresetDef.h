/*
ShaderGlass preset misc / simple_color_controls imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/simple_color_controls.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscSimple_color_controlsPresetDef : public PresetDef
{
public:
	MiscSimple_color_controlsPresetDef() : PresetDef{}
	{
		Name = "simple_color_controls";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersSimple_color_controlsShaderDef()
.Param("scale_type", "source"));
	}
};
}
