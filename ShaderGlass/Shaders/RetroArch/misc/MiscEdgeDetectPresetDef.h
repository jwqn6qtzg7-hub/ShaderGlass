/*
ShaderGlass preset misc / edge-detect imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/misc/edge-detect.slangp
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

	void Build() {
         	ShaderDefs.push_back(MiscShadersEdgeDetectShaderDef()
.Param("scale_type", "source"));
	}
};
}
