/*
ShaderGlass preset crt / crt-nes-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-nes-mini.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtNesMiniPresetDef : public PresetDef
{
public:
	CrtCrtNesMiniPresetDef() : PresetDef{}
	{
		Name = "crt-nes-mini";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtNesMiniShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
