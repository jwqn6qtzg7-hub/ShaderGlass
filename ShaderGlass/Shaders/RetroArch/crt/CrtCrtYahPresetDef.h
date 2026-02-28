/*
ShaderGlass preset crt / crt-yah imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-yah.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtYahPresetDef : public PresetDef
{
public:
	CrtCrtYahPresetDef() : PresetDef{}
	{
		Name = "crt-yah";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtYahNtscPass1ShaderDef()
.Param("alias", "NtscPass1")
.Param("filter_linear", "false")
.Param("float_framebuffer", "true")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "4.0")
.Param("scale_y", "4.0"));
         	ShaderDefs.push_back(CrtShadersCrtYahNtscPass2ShaderDef()
.Param("alias", "NtscPass2")
.Param("filter_linear", "true")
.Param("float_framebuffer", "false")
.Param("scale_type_x", "source")
.Param("scale_type_y", "source")
.Param("scale_x", "0.25")
.Param("scale_y", "0.25"));
         	ShaderDefs.push_back(CrtShadersCrtYahDeconvergeShaderDef()
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtYahPhosphorShaderDef()
.Param("alias", "PhosphorPass")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtYahLutShaderDef()
.Param("alias", "LutPass")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtYahBlurHorizontalShaderDef()
.Param("alias", "BlurHPass")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtYahBlurVerticalShaderDef()
.Param("alias", "BlurVPass")
.Param("filter_linear", "true"));
         	ShaderDefs.push_back(CrtShadersCrtYahCrtYahShaderDef()
.Param("filter_linear", "true"));
            TextureDefs.push_back(CrtShadersCrtYahLutNtscLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLutNtsc"));
            TextureDefs.push_back(CrtShadersCrtYahLutTrinitronLutTextureDef()
.Param("linear", "true")
.Param("name", "SamplerLutTrinitron"));
	}
};
}
