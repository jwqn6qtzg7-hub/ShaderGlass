/*
ShaderGlass preset vhs / VHSPro imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/vhs/VHSPro.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class VhsVHSProPresetDef : public PresetDef
{
public:
	VhsVHSProPresetDef() : PresetDef{}
	{
		Name = "VHSPro";
		Category = "vhs";
	}

	void Build() {
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_ThirdShaderDef()
.Param("alias", "third")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_TapeShaderDef()
.Param("alias", "tape")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_FirstShaderDef()
.Param("alias", "first")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_SecondShaderDef()
.Param("alias", "second")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_ForthShaderDef()
.Param("alias", "forth")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(VhsShadersVHSProVHSPro_ClearShaderDef()
.Param("alias", "clear")
.Param("filter_linear", "true")
.Param("scale_type", "source"));
	}
};
}
