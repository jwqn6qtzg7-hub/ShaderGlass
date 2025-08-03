/*
ShaderGlass preset crt / crt-hyllian-3d imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-hyllian-3d.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersHyllianCrtHyllian3dShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
