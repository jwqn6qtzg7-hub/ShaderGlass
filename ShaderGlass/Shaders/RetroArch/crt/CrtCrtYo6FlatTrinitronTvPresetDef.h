/*
ShaderGlass preset crt / crt-yo6-flat-trinitron-tv imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-yo6-flat-trinitron-tv.slangp
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
