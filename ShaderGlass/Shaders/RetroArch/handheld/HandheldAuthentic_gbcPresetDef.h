/*
ShaderGlass preset handheld / authentic_gbc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/handheld/authentic_gbc.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldAuthentic_gbcPresetDef : public PresetDef
{
public:
	HandheldAuthentic_gbcPresetDef() : PresetDef{}
	{
		Name = "authentic_gbc";
		Category = "handheld";
	}

	virtual void Build() {
         	ShaderDefs.push_back(HandheldShadersAuthentic_gbcTo_linShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersAuthentic_gbcAuthentic_gbcShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
