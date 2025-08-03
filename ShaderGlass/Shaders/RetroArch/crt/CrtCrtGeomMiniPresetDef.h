/*
ShaderGlass preset crt / crt-geom-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-geom-mini.slangp
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
