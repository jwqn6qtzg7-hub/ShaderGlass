/*
ShaderGlass preset stereoscopic-3d / side-by-side-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/stereoscopic-3d/side-by-side-simple.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class Stereoscopic3dSideBySideSimplePresetDef : public PresetDef
{
public:
	Stereoscopic3dSideBySideSimplePresetDef() : PresetDef{}
	{
		Name = "side-by-side-simple";
		Category = "stereoscopic-3d";
	}

	virtual void Build() {
         	ShaderDefs.push_back(Stereoscopic3dShadersSideBySideSimpleShaderDef()
.Param("scale_type", "viewport"));
	}
};
}
