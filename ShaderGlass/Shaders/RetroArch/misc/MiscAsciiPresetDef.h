/*
ShaderGlass preset misc / ascii imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/ascii.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersAsciiShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
