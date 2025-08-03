/*
ShaderGlass preset misc / ascii imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/ascii.slangp
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
