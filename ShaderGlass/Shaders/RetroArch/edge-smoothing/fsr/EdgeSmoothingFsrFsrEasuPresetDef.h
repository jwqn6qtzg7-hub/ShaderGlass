/*
ShaderGlass preset edge-smoothing/fsr / fsr-easu imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/fsr/fsr-easu.slangp
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

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass0ShaderDef()
.Param("alias", "FSR_EASU")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
