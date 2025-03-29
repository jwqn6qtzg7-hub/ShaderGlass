/*
ShaderGlass preset crt / fake-crt-geom-potato imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/fake-crt-geom-potato.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtFakeCrtGeomPotatoPresetDef : public PresetDef
{
public:
	CrtFakeCrtGeomPotatoPresetDef() : PresetDef{}
	{
		Name = "fake-crt-geom-potato";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersFakeCrtGeomPotatoShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
