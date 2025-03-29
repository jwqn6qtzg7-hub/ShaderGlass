/*
ShaderGlass preset sharpen / cheap-sharpen imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/sharpen/cheap-sharpen.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class SharpenCheapSharpenPresetDef : public PresetDef
{
public:
	SharpenCheapSharpenPresetDef() : PresetDef{}
	{
		Name = "cheap-sharpen";
		Category = "sharpen";
	}

	virtual void Build() {
         	ShaderDefs.push_back(SharpenShadersCheapSharpenShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
