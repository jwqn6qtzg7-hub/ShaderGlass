/*
ShaderGlass preset misc / bob-deinterlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/bob-deinterlacing.slangp
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
