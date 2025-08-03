/*
ShaderGlass preset misc / edge-detect imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/misc/edge-detect.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class MiscEdgeDetectPresetDef : public PresetDef
{
public:
	MiscEdgeDetectPresetDef() : PresetDef{}
	{
		Name = "edge-detect";
		Category = "misc";
	}

	virtual void Build() {
         	ShaderDefs.push_back(MiscShadersEdgeDetectShaderDef()
.Param("scale_type", "source"));
	}
};
}
