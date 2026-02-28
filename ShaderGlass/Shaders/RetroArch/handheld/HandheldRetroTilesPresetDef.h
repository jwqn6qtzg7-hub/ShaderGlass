/*
ShaderGlass preset handheld / retro-tiles imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/retro-tiles.slangp
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

	void Build() {
         	ShaderDefs.push_back(HandheldShadersRetroTilesShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
