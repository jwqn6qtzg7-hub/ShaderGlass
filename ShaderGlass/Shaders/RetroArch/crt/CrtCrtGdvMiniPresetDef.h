/*
ShaderGlass preset crt / crt-gdv-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-gdv-mini.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtGdvMiniPresetDef : public PresetDef
{
public:
	CrtCrtGdvMiniPresetDef() : PresetDef{}
	{
		Name = "crt-gdv-mini";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtGdvMiniShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
