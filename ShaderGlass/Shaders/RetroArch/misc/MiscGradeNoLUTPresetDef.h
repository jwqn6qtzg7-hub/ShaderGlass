/*
ShaderGlass preset misc / grade-no-LUT imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/grade-no-LUT.slangp
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
