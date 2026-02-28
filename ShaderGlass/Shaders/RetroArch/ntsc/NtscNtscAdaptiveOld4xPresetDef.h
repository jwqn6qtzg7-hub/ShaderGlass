/*
ShaderGlass preset ntsc / ntsc-adaptive-old-4x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/ntsc-adaptive-old-4x.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtscAdaptiveOld4xPresetDef : public PresetDef
{
public:
	NtscNtscAdaptiveOld4xPresetDef() : PresetDef{}
	{
		Name = "ntsc-adaptive-old-4x";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(NtscShadersNtscAdaptiveNtscPass1ShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale_type", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "0.25"));
         	ShaderDefs.push_back(NtscShadersNtscAdaptiveNtscPass2ShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "source")
.Param("scale_x", "0.5")
.Param("scale_y", "4.0"));
	}
};
}
