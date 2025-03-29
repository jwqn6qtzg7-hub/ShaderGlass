/*
ShaderGlass preset edge-smoothing/fsr / fsr-easu imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/fsr/fsr-easu.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingFsrFsrEasuPresetDef : public PresetDef
{
public:
	EdgeSmoothingFsrFsrEasuPresetDef() : PresetDef{}
	{
		Name = "fsr-easu";
		Category = "edge-smoothing/fsr";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass0ShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
