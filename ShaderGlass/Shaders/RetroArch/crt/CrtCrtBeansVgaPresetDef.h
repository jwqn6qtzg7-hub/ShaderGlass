/*
ShaderGlass preset crt / crt-beans-vga imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-beans-vga.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtBeansVgaPresetDef : public PresetDef
{
public:
	CrtCrtBeansVgaPresetDef() : PresetDef{}
	{
		Name = "crt-beans-vga";
		Category = "crt";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtBeansLinearizeShaderDef()
.Param("alias", "Linearized")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersCrtBeansCalculate_widthsShaderDef()
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansScanlines_analyticalShaderDef()
.Param("alias", "Scanlines")
.Param("filter_linear", "false")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_edge"));
         	ShaderDefs.push_back(CrtShadersCrtBeansCubic_downsampleShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "0.5")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansCubic_downsampleShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "0.5")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansCubic_downsampleShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "0.5")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansBlur_horizontalShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansBlur_verticalShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansBilinear_upsampleShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "2.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansBilinear_upsampleShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "2.0")
.Param("scale_type", "source")
.Param("wrap_mode", "clamp_to_border"));
         	ShaderDefs.push_back(CrtShadersCrtBeansComposite_outputShaderDef()
.Param("filter_linear", "true")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
.Param("wrap_mode", "clamp_to_border"));
            TextureDefs.push_back(CrtShadersCrtBeansBlue_noiseTextureDef()
.Param("linear", "true")
.Param("mipmap", "false")
.Param("name", "BlueNoiseTex")
.Param("wrap_mode", "repeat"));
            OverrideParam("MaskType", (float)0.000000);
            OverrideParam("MaxSpotSize", (float)0.950000);
            OverrideParam("MinSpotSize", (float)0.700000);
            OverrideParam("OddFieldFirst", (float)3.000000);
	}
};
}
