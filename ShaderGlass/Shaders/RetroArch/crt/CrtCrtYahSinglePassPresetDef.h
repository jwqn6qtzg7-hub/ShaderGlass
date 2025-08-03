/*
ShaderGlass preset crt / crt-yah.single-pass imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/crt-yah.single-pass.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersCrtYahCrtYahSinglePassShaderDef()
.Param("filter_linear", "true"));
	}
};
}
