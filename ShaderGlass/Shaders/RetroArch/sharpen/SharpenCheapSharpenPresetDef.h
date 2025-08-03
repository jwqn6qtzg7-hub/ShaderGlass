/*
ShaderGlass preset sharpen / cheap-sharpen imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/sharpen/cheap-sharpen.slangp
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
