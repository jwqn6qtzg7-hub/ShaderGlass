# Rebuilding Shaders

Shaders in ShaderGlass are precompiled and included in the binary. If you'd like to add
or modify a shader, you will need to rebuild it and then recompile ShaderGlass.

ShaderGen is a tool that reads .slangp profiles and generates header files
which are then compiled with ShaderGlass.

## Rebuilding whole shader library

0. Build ShaderGen using Visual Studio in Debug configuration
1. Go into Scripts folder
2. Run DownloadShaders.bat

> This will download RetroArch shaders from ShaderGlass' fork, which includes
tweaks and exclusions. You can clone original slang-shaders repo instead
but beware many shaders will fail to compile or not work properly.

3. Run RebuildAllShaders.bat
> This will try to rebuild all shaders (takes A LONG TIME, 30 min+)

4. Rebuild ShaderGlass using Visual Studio

## Rebuilding a single shader

Instead of rebuilding all shaders you can focus on a single .slangp shader.

1. Go into Scripts folder
2. Run RebuildShader.bat [shader-path] (see .bat for usage)
3. Rebuild ShaderGlass using Visual Studio

## Debugging

ShaderGen will generate log and intermediate files in temp subdirectory.
You can check there for compilation errors/warnings.
