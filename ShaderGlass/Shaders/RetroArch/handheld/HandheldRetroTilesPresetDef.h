/*
ShaderGlass preset handheld / retro-tiles imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/handheld/retro-tiles.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldRetroTilesPresetDef : public PresetDef
{
public:
	HandheldRetroTilesPresetDef() : PresetDef{}
	{
		Name = "retro-tiles";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersRetroTilesShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
