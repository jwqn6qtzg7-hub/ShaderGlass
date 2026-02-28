/*
ShaderGlass preset pal / pal-r57shell imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/pal/pal-r57shell.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PalPalR57shellPresetDef : public PresetDef
{
public:
	PalPalR57shellPresetDef() : PresetDef{}
	{
		Name = "pal-r57shell";
		Category = "pal";
	}

	void Build() {
         	ShaderDefs.push_back(PalShadersPalR57shellShaderDef()
.Param("alias", "ORIG_LINEARIZED")
.Param("filter_linear", "false")
.Param("float_framebuffer", "false")
.Param("mipmap_input", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000")
.Param("srgb_framebuffer", "false")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(PalResourcesNes_lutTextureDef()
.Param("linear", "false")
.Param("mipmap", "false")
.Param("name", "nes_lut")
.Param("wrap_mode", "repeat"));
	}
};
}
