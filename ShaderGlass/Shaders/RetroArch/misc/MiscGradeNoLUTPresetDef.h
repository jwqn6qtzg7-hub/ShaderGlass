/*
ShaderGlass preset misc / grade-no-LUT imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/grade-no-LUT.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersGradeNoLUTShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
