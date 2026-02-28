/*
ShaderGlass preset edge-smoothing/cleanEdge / cleanEdge-scale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/edge-smoothing/cleanEdge/cleanEdge-scale.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class EdgeSmoothingCleanEdgeCleanEdgeScalePresetDef : public PresetDef
{
public:
	EdgeSmoothingCleanEdgeCleanEdgeScalePresetDef() : PresetDef{}
	{
		Name = "cleanEdge-scale";
		Category = "edge-smoothing/cleanEdge";
	}

	void Build() {
         	ShaderDefs.push_back(EdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
