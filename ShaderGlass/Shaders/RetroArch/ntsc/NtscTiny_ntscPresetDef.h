/*
ShaderGlass preset ntsc / tiny_ntsc imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/ntsc/tiny_ntsc.slangp
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
