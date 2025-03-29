/*
ShaderGlass preset crt / crt-geom-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-geom-mini.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtGeomMiniPresetDef : public PresetDef
{
public:
	CrtCrtGeomMiniPresetDef() : PresetDef{}
	{
		Name = "crt-geom-mini";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearizeShaderDef());
         	ShaderDefs.push_back(CrtShadersCrtGeomMiniShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
