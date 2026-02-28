/*
ShaderGlass preset crt / yee64 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/yee64.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtYee64PresetDef : public PresetDef
{
public:
	CrtYee64PresetDef() : PresetDef{}
	{
		Name = "yee64";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersYee64ShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
