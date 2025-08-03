/*
ShaderGlass preset stereoscopic-3d / anaglyph-to-interlaced imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/f1796f6f744c32da57b9d8c27ea1a20160128696/stereoscopic-3d/anaglyph-to-interlaced.slangp
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
