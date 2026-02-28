/*
ShaderGlass preset ntsc / tiny_ntsc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/ntsc/tiny_ntsc.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class NtscTiny_ntscPresetDef : public PresetDef
{
public:
	NtscTiny_ntscPresetDef() : PresetDef{}
	{
		Name = "tiny_ntsc";
		Category = "ntsc";
	}

	void Build() {
         	ShaderDefs.push_back(NtscShadersNtscSimpleTiny_ntscShaderDef());
	}
};
}
