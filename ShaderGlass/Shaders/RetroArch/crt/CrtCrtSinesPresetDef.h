/*
ShaderGlass preset crt / crt-sines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-sines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtSinesPresetDef : public PresetDef
{
public:
	CrtCrtSinesPresetDef() : PresetDef{}
	{
		Name = "crt-sines";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearizeShaderDef());
         	ShaderDefs.push_back(CrtShadersCrtSinesShaderDef()
.Param("filter_linear", "true"));
	}
};
}
