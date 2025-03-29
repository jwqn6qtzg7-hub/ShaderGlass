/*
ShaderGlass preset edge-smoothing/fsr / fsr imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/fsr/fsr.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingFsrFsrPresetDef : public PresetDef
{
public:
	EdgeSmoothingFsrFsrPresetDef() : PresetDef{}
	{
		Name = "fsr";
		Category = "edge-smoothing/fsr";
	}

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass0ShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(EdgeSmoothingFsrShadersFsrPass1ShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_edge"));
            OverrideParam("FSR_FILMGRAIN", (float)0.300000);
            OverrideParam("FSR_GRAINCOLOR", (float)1.000000);
            OverrideParam("FSR_GRAINPDF", (float)0.300000);
            OverrideParam("FSR_SHARPENING", (float)0.300000);
	}
};
}
