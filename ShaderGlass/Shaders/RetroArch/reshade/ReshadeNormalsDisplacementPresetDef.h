/*
ShaderGlass preset reshade / NormalsDisplacement imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/NormalsDisplacement.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeNormalsDisplacementPresetDef : public PresetDef
{
public:
	ReshadeNormalsDisplacementPresetDef() : PresetDef{}
	{
		Name = "NormalsDisplacement";
		Category = "reshade";
	}

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersNormalsDisplacementNormalsDisplacementShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(ReshadeShadersNormalsDisplacementCurveNormalsTextureDef()
.Param("name", "displacementMap"));
	}
};
}
