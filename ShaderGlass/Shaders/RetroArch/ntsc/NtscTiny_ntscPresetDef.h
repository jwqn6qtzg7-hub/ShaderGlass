/*
ShaderGlass preset ntsc / tiny_ntsc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/ntsc/tiny_ntsc.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscSimpleTiny_ntscShaderDef());
         	ShaderDefs.push_back(NtscShadersNtscSimpleKaizerLpSmallShaderDef());
	}
};
}
