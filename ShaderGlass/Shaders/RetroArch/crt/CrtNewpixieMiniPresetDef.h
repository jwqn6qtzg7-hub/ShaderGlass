/*
ShaderGlass preset crt / newpixie-mini imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/newpixie-mini.slangp
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
