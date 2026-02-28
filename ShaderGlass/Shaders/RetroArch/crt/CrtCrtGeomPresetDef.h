/*
ShaderGlass preset crt / crt-geom imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-geom.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtGeomPresetDef : public PresetDef
{
public:
	CrtCrtGeomPresetDef() : PresetDef{}
	{
		Name = "crt-geom";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtGeomShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
