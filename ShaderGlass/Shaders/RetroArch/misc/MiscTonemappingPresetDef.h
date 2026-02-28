/*
ShaderGlass preset misc / tonemapping imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/tonemapping.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscTonemappingPresetDef : public PresetDef
{
public:
	MiscTonemappingPresetDef() : PresetDef{}
	{
		Name = "tonemapping";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersTonemappingShaderDef()
.Param("scale_type", "source"));
	}
};
}
