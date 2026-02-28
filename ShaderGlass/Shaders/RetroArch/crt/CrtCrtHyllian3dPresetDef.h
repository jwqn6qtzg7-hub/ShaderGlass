/*
ShaderGlass preset crt / crt-hyllian-3d imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-hyllian-3d.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtHyllian3dPresetDef : public PresetDef
{
public:
	CrtCrtHyllian3dPresetDef() : PresetDef{}
	{
		Name = "crt-hyllian-3d";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersHyllianCrtHyllian3dShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
