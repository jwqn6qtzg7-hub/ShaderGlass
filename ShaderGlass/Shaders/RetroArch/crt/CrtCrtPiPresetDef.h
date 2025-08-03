/*
ShaderGlass preset crt / crt-pi imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-pi.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtPiPresetDef : public PresetDef
{
public:
	CrtCrtPiPresetDef() : PresetDef{}
	{
		Name = "crt-pi";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtPiShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
