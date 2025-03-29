/*
ShaderGlass preset handheld/console-border / psp imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/console-border/psp.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldConsoleBorderPspPresetDef : public PresetDef
{
public:
	HandheldConsoleBorderPspPresetDef() : PresetDef{}
	{
		Name = "psp";
		Category = "handheld/console-border";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldConsoleBorderShaderFilesGbPass5ShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(HandheldConsoleBorderResourcesPspBorderTextureDef()
.Param("linear", "true")
.Param("mipmap", "true")
.Param("name", "BORDER")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("GRID_STRENGTH", (float)0.150000);
            OverrideParam("border_texture_scale", (float)2.400000);
            OverrideParam("video_scale", (float)4.000000);
	}
};
}
