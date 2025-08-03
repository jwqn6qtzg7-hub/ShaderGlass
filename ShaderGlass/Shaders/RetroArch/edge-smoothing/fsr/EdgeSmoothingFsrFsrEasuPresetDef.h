/*
ShaderGlass preset edge-smoothing/fsr / fsr-easu imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/edge-smoothing/fsr/fsr-easu.slangp
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
.Param("alias", "FSR_EASU")
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
	}
};
}
