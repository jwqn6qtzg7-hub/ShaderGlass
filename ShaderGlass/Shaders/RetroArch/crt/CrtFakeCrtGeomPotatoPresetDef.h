/*
ShaderGlass preset crt / fake-crt-geom-potato imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/fake-crt-geom-potato.slangp
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
