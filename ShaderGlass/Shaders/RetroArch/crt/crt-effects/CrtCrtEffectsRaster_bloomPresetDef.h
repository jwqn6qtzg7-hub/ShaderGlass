/*
ShaderGlass preset crt/crt-effects / raster_bloom imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/raster_bloom.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class CrtCrtEffectsRaster_bloomPresetDef : public PresetDef
{
public:
	CrtCrtEffectsRaster_bloomPresetDef() : PresetDef{}
	{
		Name = "raster_bloom";
		Category = "crt/crt-effects";
	}

	void Build() {
         	ShaderDefs.push_back(CrtShadersGuestHdStockShaderDef()
.Param("alias", "PerRBAvgLumPass")
.Param("filter_linear", "false")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersRaster_bloomAvgLumShaderDef()
.Param("alias", "RBAvgLumPass")
.Param("filter_linear", "true")
.Param("mipmap_input", "true")
.Param("scale", "1.0")
.Param("scale_type", "source"));
         	ShaderDefs.push_back(CrtCrtEffectsShadersRaster_bloomRaster_bloomShaderDef()
.Param("filter_linear", "true")
.Param("scale_type", "viewport")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
            OverrideParam("RB_BLOOM", (float)3.000000);
            OverrideParam("RB_lsdev", (float)0.100000);
	}
};
}
