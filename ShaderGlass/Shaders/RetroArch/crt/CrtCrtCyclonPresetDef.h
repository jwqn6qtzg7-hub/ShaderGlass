/*
ShaderGlass preset crt / crt-Cyclon imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-Cyclon.slangp
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

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearizeShaderDef()
.Param("alias", "stock")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtConsumerReflect_blurShaderDef()
.Param("alias", "blur")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtCyclonShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(CrtShadersCrtConsumerBezelTextureDef()
.Param("linear", "true")
.Param("name", "bezel")
.Param("wrap_mode", "clamp_to_border"));
	}
};
}
