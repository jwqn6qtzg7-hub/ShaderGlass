/*
ShaderGlass preset blurs / gauss_4tap imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/blurs/gauss_4tap.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursGauss_4tapPresetDef : public PresetDef
{
public:
	BlursGauss_4tapPresetDef() : PresetDef{}
	{
		Name = "gauss_4tap";
		Category = "blurs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BlursShadersGauss_4tapGauss_2tap_hShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
         	ShaderDefs.push_back(BlursShadersGauss_4tapGauss_2tap_vShaderDef()
.Param("filter_linear", "true")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "mirrored_repeat"));
	}
};
}
