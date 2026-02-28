/*
ShaderGlass preset misc / relief imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/relief.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscReliefPresetDef : public PresetDef
{
public:
	MiscReliefPresetDef() : PresetDef{}
	{
		Name = "relief";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersReliefShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
