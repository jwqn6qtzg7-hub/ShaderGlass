/*
ShaderGlass preset misc / grade-no-LUT imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/grade-no-LUT.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscGradeNoLUTPresetDef : public PresetDef
{
public:
	MiscGradeNoLUTPresetDef() : PresetDef{}
	{
		Name = "grade-no-LUT";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersGradeNoLUTShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
