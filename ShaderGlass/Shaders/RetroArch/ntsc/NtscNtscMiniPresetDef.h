/*
ShaderGlass preset ntsc / ntsc-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/ntsc/ntsc-mini.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtscMiniPresetDef : public PresetDef
{
public:
	NtscNtscMiniPresetDef() : PresetDef{}
	{
		Name = "ntsc-mini";
		Category = "ntsc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscSimpleNtscMiniShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.000000")
.Param("scale_y", "1.000000"));
            OverrideParam("feedback_pass", (float)0.000000);
	}
};
}
