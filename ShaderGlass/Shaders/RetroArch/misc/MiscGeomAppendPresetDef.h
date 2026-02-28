/*
ShaderGlass preset misc / geom-append imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/geom-append.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscGeomAppendPresetDef : public PresetDef
{
public:
	MiscGeomAppendPresetDef() : PresetDef{}
	{
		Name = "geom-append";
		Category = "misc";
	}

	void Build() {
         	ShaderDefs.push_back(MiscShadersGeomShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("geom_lod_bias", (float)0.500000);
	}
};
}
