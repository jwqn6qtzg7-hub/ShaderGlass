/*
ShaderGlass preset ntsc / ntsc-256px-svideo imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/ntsc-256px-svideo.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtsc256pxSvideoPresetDef : public PresetDef
{
public:
	NtscNtsc256pxSvideoPresetDef() : PresetDef{}
	{
		Name = "ntsc-256px-svideo";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(NtscShadersMaisterNtscPass1Svideo3phaseShaderDef()
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("frame_count_mod", "2")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "1024")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(NtscShadersMaisterNtscPass23phaseGammaShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source")
.Param("scale_x", "0.5")
.Param("scale_y", "1.0"));
	}
};
}
