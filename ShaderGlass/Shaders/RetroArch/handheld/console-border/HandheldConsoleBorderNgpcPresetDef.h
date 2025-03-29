/*
ShaderGlass preset handheld/console-border / ngpc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/console-border/ngpc.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldConsoleBorderNgpcPresetDef : public PresetDef
{
public:
	HandheldConsoleBorderNgpcPresetDef() : PresetDef{}
	{
		Name = "ngpc";
		Category = "handheld/console-border";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldConsoleBorderShaderFilesLcdCgwgLcdGridShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(HandheldConsoleBorderShaderFilesGbPass5ShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(HandheldConsoleBorderResourcesNgpcBorderSquare4xTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "BORDER")
.Param("wrap_mode", "clamp_to_border"));
            OverrideParam("video_scale", (float)4.000000);
	}
};
}
