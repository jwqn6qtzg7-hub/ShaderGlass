/*
ShaderGlass preset scanlines / res-independent-scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/res-independent-scanlines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesResIndependentScanlinesPresetDef : public PresetDef
{
public:
	ScanlinesResIndependentScanlinesPresetDef() : PresetDef{}
	{
		Name = "res-independent-scanlines";
		Category = "scanlines";
	}

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersResIndependentScanlinesShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
