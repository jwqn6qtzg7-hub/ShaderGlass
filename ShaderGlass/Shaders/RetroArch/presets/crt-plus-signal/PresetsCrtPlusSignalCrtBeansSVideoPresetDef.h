/*
ShaderGlass preset presets/crt-plus-signal / crt-beans-s-video imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/presets/crt-plus-signal/crt-beans-s-video.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class PresetsCrtPlusSignalCrtBeansSVideoPresetDef : public PresetDef
{
public:
	PresetsCrtPlusSignalCrtBeansSVideoPresetDef() : PresetDef{}
	{
		Name = "crt-beans-s-video";
		Category = "presets/crt-plus-signal";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersCrtBeansTransformShaderDef()
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersCrtBeansFilterShaderDef()
.Param("alias", "Filtered")
.Param("mipmap_input", "false")
.Param("scale_type_x", "absolute")
.Param("scale_type_y", "source")
.Param("scale_x", "1024")
.Param("scale_y", "1.0"));
         	ShaderDefs.push_back(CrtShadersCrtBeansCalculate_widthsShaderDef()
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtShadersCrtBeansScanlines_cubicShaderDef()
.Param("alias", "Scanlines")
.Param("filter_linear", "false")
.Param("mipmap_input", "false")
.Param("scale", "1.0")
.Param("scale_type", "viewport")
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
            OverrideParam("Cutoff", (float)3.600000);
            OverrideParam("ICutoff", (float)0.800000);
            OverrideParam("QCutoff", (float)0.800000);
            OverrideParam("YIQ", (float)1.000000);
	}
};
}
