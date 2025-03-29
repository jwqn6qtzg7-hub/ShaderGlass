/*
ShaderGlass preset misc / interlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/interlacing.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscInterlacingPresetDef : public PresetDef
{
public:
	MiscInterlacingPresetDef() : PresetDef{}
	{
		Name = "interlacing";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersInterlacingShaderDef()
.Param("scale_type", "source"));
	}
};
}
