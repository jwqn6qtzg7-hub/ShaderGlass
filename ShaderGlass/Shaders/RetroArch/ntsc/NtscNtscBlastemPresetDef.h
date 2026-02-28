/*
ShaderGlass preset ntsc / ntsc-blastem imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/ntsc-blastem.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscNtscBlastemPresetDef : public PresetDef
{
public:
	NtscNtscBlastemPresetDef() : PresetDef{}
	{
		Name = "ntsc-blastem";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(NtscShadersNtscBlastemShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
