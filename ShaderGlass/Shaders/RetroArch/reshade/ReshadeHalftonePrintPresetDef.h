/*
ShaderGlass preset reshade / halftone-print imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/reshade/halftone-print.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class ReshadeHalftonePrintPresetDef : public PresetDef
{
public:
	ReshadeHalftonePrintPresetDef() : PresetDef{}
	{
		Name = "halftone-print";
		Category = "reshade";
	}

	void Build() {
         	ShaderDefs.push_back(ReshadeShadersLUTLUTShaderDef()
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(MiscShadersCmykHalftoneDotShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(ReshadeShadersLUTCmyk16TextureDef()
.Param("linear", "true")
.Param("name", "SamplerLUT"));
	}
};
}
