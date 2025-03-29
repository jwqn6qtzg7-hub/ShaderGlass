/*
ShaderGlass preset edge-smoothing/cleanEdge / cleanEdge-scale imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/edge-smoothing/cleanEdge/cleanEdge-scale.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(EdgeSmoothingCleanEdgeShadersCleanEdgeScaleShaderDef()
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport"));
	}
};
}
