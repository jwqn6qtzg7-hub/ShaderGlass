/*
ShaderGlass preset scanlines / scanlines-rere imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/scanlines-rere.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesScanlinesRerePresetDef : public PresetDef
{
public:
	ScanlinesScanlinesRerePresetDef() : PresetDef{}
	{
		Name = "scanlines-rere";
		Category = "scanlines";
	}

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersScanlinesRereShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
	}
};
}
