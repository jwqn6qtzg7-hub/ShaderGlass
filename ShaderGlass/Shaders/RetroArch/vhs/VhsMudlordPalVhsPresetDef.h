/*
ShaderGlass preset vhs / mudlord-pal-vhs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/vhs/mudlord-pal-vhs.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class VhsMudlordPalVhsPresetDef : public PresetDef
{
public:
	VhsMudlordPalVhsPresetDef() : PresetDef{}
	{
		Name = "mudlord-pal-vhs";
		Category = "vhs";
	}

	void Build() {
         	ShaderDefs.push_back(VhsShadersMudlordPalVhsShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
