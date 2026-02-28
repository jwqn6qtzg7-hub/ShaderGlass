/*
ShaderGlass preset handheld / ags001 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/handheld/ags001.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class HandheldAgs001PresetDef : public PresetDef
{
public:
	HandheldAgs001PresetDef() : PresetDef{}
	{
		Name = "ags001";
		Category = "handheld";
	}

	void Build() {
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001ShaderDef()
.Param("filter_linear", "false")
.Param("scale", "4.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(HandheldShadersMgbaAgs001LightShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
