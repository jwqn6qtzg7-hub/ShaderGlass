/*
ShaderGlass preset crt / crt-aperture imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-aperture.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtAperturePresetDef : public PresetDef
{
public:
	CrtCrtAperturePresetDef() : PresetDef{}
	{
		Name = "crt-aperture";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtApertureShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
