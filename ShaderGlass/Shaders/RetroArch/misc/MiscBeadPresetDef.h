/*
ShaderGlass preset misc / bead imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/bead.slangp
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
