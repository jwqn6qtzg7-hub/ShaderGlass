/*
ShaderGlass preset misc / bead imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/bead.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersBeadShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
