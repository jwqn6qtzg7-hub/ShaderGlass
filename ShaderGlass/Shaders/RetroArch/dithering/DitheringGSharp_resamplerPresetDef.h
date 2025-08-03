/*
ShaderGlass preset dithering / g-sharp_resampler imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/dithering/g-sharp_resampler.slangp
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
