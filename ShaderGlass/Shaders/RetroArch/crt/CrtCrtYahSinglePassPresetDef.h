/*
ShaderGlass preset crt / crt-yah.single-pass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-yah.single-pass.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtYahSinglePassPresetDef : public PresetDef
{
public:
	CrtCrtYahSinglePassPresetDef() : PresetDef{}
	{
		Name = "crt-yah.single-pass";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtYahCrtYahSinglePassShaderDef()
.Param("filter_linear", "true"));
	}
};
}
