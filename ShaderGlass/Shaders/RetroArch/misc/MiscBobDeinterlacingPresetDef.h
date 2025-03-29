/*
ShaderGlass preset misc / bob-deinterlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/misc/bob-deinterlacing.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscBobDeinterlacingPresetDef : public PresetDef
{
public:
	MiscBobDeinterlacingPresetDef() : PresetDef{}
	{
		Name = "bob-deinterlacing";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersBobDeinterlacingShaderDef()
.Param("scale_type", "source"));
	}
};
}
