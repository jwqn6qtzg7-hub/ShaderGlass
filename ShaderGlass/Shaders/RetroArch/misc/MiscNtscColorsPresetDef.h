/*
ShaderGlass preset misc / ntsc-colors imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/ntsc-colors.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscNtscColorsPresetDef : public PresetDef
{
public:
	MiscNtscColorsPresetDef() : PresetDef{}
	{
		Name = "ntsc-colors";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersNtscColorsShaderDef()
.Param("scale_type", "source"));
	}
};
}
