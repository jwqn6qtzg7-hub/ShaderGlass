/*
ShaderGlass preset crt / crt-Cyclon imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-Cyclon.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtCyclonPresetDef : public PresetDef
{
public:
	CrtCrtCyclonPresetDef() : PresetDef{}
	{
		Name = "crt-Cyclon";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtCyclonShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            TextureDefs.push_back(CrtShadersCrtConsumerBezelTextureDef()
.Param("linear", "true")
.Param("name", "bezel")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
