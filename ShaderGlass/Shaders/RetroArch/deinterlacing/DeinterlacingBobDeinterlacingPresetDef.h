/*
ShaderGlass preset deinterlacing / bob-deinterlacing imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/deinterlacing/bob-deinterlacing.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DeinterlacingBobDeinterlacingPresetDef : public PresetDef
{
public:
	DeinterlacingBobDeinterlacingPresetDef() : PresetDef{}
	{
		Name = "bob-deinterlacing";
		Category = "deinterlacing";
	}

	void Build() {
         	ShaderDefs.push_back(DeinterlacingShadersBobDeinterlacingShaderDef()
.Param("scale_type", "source"));
	}
};
}
