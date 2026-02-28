/*
ShaderGlass preset misc / glass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/glass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscGlassPresetDef : public PresetDef
{
public:
	MiscGlassPresetDef() : PresetDef{}
	{
		Name = "glass";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersGlassShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
