/*
ShaderGlass preset crt / crt-Cyclon imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-Cyclon.slangp
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
