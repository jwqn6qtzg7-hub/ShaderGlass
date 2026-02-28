/*
ShaderGlass preset warp / dilation imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/warp/dilation.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class WarpDilationPresetDef : public PresetDef
{
public:
	WarpDilationPresetDef() : PresetDef{}
	{
		Name = "dilation";
		Category = "warp";
	}

	void Build() {
         	ShaderDefs.push_back(WarpShadersDilationShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
