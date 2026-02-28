/*
ShaderGlass preset crt / newpixie-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/newpixie-mini.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtNewpixieMiniPresetDef : public PresetDef
{
public:
	CrtNewpixieMiniPresetDef() : PresetDef{}
	{
		Name = "newpixie-mini";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersNewpixieMiniNewpixieMiniShaderDef());
	}
};
}
