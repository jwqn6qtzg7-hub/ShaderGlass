/*
ShaderGlass preset crt / crt-consumer-1w-ntsc-XL imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-consumer-1w-ntsc-XL.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtConsumer1wNtscXLPresetDef : public PresetDef
{
public:
	CrtCrtConsumer1wNtscXLPresetDef() : PresetDef{}
	{
		Name = "crt-consumer-1w-ntsc-XL";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtConsumerLinearShaderDef());
         	ShaderDefs.push_back(CrtShadersCrtConsumerNtsc_module_XLShaderDef());
         	ShaderDefs.push_back(CrtShadersCrtConsumerCrtConsumer1wShaderDef()
.Param("filter_linear", "true"));
            OverrideParam("u_gamma", (float)1.150000);
	}
};
}
