/*
ShaderGlass preset crt / crt-yo6-flat-trinitron-tv imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/crt-yo6-flat-trinitron-tv.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtYo6FlatTrinitronTvPresetDef : public PresetDef
{
public:
	CrtCrtYo6FlatTrinitronTvPresetDef() : PresetDef{}
	{
		Name = "crt-yo6-flat-trinitron-tv";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtYo6CrtYo6FlatTrinitronTvShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
            TextureDefs.push_back(CrtShadersCrtYo6PhosphorFlatTrinitronTvTextureDef()
.Param("linear", "false")
.Param("name", "TEX"));
	}
};
}
