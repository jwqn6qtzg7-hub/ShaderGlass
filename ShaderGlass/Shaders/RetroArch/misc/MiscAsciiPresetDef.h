/*
ShaderGlass preset misc / ascii imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/ascii.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscAsciiPresetDef : public PresetDef
{
public:
	MiscAsciiPresetDef() : PresetDef{}
	{
		Name = "ascii";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersAsciiShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
