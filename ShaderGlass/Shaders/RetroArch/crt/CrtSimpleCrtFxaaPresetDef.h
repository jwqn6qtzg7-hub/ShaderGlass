/*
ShaderGlass preset crt / simple-crt-fxaa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/crt/simple-crt-fxaa.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtSimpleCrtFxaaPresetDef : public PresetDef
{
public:
	CrtSimpleCrtFxaaPresetDef() : PresetDef{}
	{
		Name = "simple-crt-fxaa";
		Category = "crt";
	}

	virtual void Build() {
         	ShaderDefs.push_back(CrtShadersSimpleCrtSimpleFxaaShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersSimpleCrtSimpleColorCorrectionShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(CrtShadersSimpleCrtSimpleCrtShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport"));
            OverrideParam("SHARPNESS", (float)-0.500000);
	}
};
}
