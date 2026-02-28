/*
ShaderGlass preset cel / advcartoon imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/cel/advcartoon.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CelAdvcartoonPresetDef : public PresetDef
{
public:
	CelAdvcartoonPresetDef() : PresetDef{}
	{
		Name = "advcartoon";
		Category = "cel";
	}

	void Build() {
         	ShaderDefs.push_back(CelShadersAdvcartoonShaderDef()
.Param("filter_linear", "false"));
	}
};
}
