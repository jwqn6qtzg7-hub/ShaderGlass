/*
ShaderGlass preset denoisers / bilateral-2p imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/denoisers/bilateral-2p.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DenoisersBilateral2pPresetDef : public PresetDef
{
public:
	DenoisersBilateral2pPresetDef() : PresetDef{}
	{
		Name = "bilateral-2p";
		Category = "denoisers";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DenoisersShadersBilateralHorizontalShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(DenoisersShadersBilateralVerticalShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
	}
};
}
