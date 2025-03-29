/*
ShaderGlass preset crt / newpixie-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/crt/newpixie-mini.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersNewpixieMiniNewpixieMiniShaderDef());
	}
};
}
