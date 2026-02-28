/*
ShaderGlass preset scanlines / integer-scaling-scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/scanlines/integer-scaling-scanlines.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ScanlinesIntegerScalingScanlinesPresetDef : public PresetDef
{
public:
	ScanlinesIntegerScalingScanlinesPresetDef() : PresetDef{}
	{
		Name = "integer-scaling-scanlines";
		Category = "scanlines";
	}

	void Build() {
         	ShaderDefs.push_back(ScanlinesShadersIntegerScalingScanlinesShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "viewport"));
	}
};
}
