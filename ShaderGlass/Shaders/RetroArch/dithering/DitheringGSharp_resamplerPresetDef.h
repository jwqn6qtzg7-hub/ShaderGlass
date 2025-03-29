/*
ShaderGlass preset dithering / g-sharp_resampler imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/dithering/g-sharp_resampler.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringGSharp_resamplerPresetDef : public PresetDef
{
public:
	DitheringGSharp_resamplerPresetDef() : PresetDef{}
	{
		Name = "g-sharp_resampler";
		Category = "dithering";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersGSharp_resamplerShaderDef()
.Param("scale", "1.0")
.Param("scale_type", "source"));
	}
};
}
