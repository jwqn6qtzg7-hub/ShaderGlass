/*
ShaderGlass preset vhs / mudlord-pal-vhs imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/vhs/mudlord-pal-vhs.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(VhsShadersMudlordPalVhsShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
