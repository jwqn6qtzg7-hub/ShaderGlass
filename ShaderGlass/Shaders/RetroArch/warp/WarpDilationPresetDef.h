/*
ShaderGlass preset warp / dilation imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/warp/dilation.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(WarpShadersDilationShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
