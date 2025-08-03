/*
ShaderGlass preset crt / crt-gdv-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-gdv-mini.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtGdvMiniShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
