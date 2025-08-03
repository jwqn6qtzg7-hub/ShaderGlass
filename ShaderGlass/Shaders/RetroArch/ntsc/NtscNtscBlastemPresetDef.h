/*
ShaderGlass preset ntsc / ntsc-blastem imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/ntsc/ntsc-blastem.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(NtscShadersNtscBlastemShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
