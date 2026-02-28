/*
ShaderGlass preset crt / crt-frutbunn imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-frutbunn.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtFrutbunnPresetDef : public PresetDef
{
public:
	CrtCrtFrutbunnPresetDef() : PresetDef{}
	{
		Name = "crt-frutbunn";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtFrutbunnShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
