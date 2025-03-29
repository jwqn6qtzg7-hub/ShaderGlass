/*
ShaderGlass preset stereoscopic-3d / shutter-to-anaglyph imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/stereoscopic-3d/shutter-to-anaglyph.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dShutterToAnaglyphPresetDef : public PresetDef
{
public:
	Stereoscopic3dShutterToAnaglyphPresetDef() : PresetDef{}
	{
		Name = "shutter-to-anaglyph";
		Category = "stereoscopic-3d";
	}

	virtual void Build() {
         	ShaderDefs.push_back(Stereoscopic3dShadersShutterToAnaglyphShaderDef()
.Param("scale_type", "source"));
	}
};
}
