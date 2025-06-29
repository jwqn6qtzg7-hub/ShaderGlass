/*
ShaderGlass preset stereoscopic-3d / anaglyph-to-interlaced imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/stereoscopic-3d/anaglyph-to-interlaced.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dAnaglyphToInterlacedPresetDef : public PresetDef
{
public:
	Stereoscopic3dAnaglyphToInterlacedPresetDef() : PresetDef{}
	{
		Name = "anaglyph-to-interlaced";
		Category = "stereoscopic-3d";
	}

	virtual void Build() {
         	ShaderDefs.push_back(StockStockShaderDef()
.Param("scale_type", "viewport"));
         	ShaderDefs.push_back(Stereoscopic3dShadersAnaglyphToInterlacedShaderDef());
	}
};
}
