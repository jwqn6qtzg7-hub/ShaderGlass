/*
ShaderGlass preset reshade / NormalsDisplacement imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/reshade/NormalsDisplacement.slangp
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

	virtual void Build() {
         	ShaderDefs.push_back(ReshadeShadersNormalsDisplacementNormalsDisplacementShaderDef()
.Param("scale_type", "viewport"));
            TextureDefs.push_back(ReshadeShadersNormalsDisplacementCurveNormalsTextureDef()
.Param("name", "displacementMap"));
	}
};
}
