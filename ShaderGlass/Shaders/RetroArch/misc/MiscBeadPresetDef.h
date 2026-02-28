/*
ShaderGlass preset misc / bead imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/bead.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscBeadPresetDef : public PresetDef
{
public:
	MiscBeadPresetDef() : PresetDef{}
	{
		Name = "bead";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersBeadShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
