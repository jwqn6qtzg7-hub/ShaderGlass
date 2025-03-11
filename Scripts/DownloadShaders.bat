@echo off
echo This script will download RetroArch shaders including ShaderGlass adjustments so they can be rebuilt.
echo You could also clone the original https://github.com/libretro/slang-shaders.git repo instead for testing new shaders.
pause

git clone -b shaderglass --depth 1 https://github.com/mausimus/slang-shaders.git

rem Use this to clone latest RetroArch repo instead
rem git clone --depth 1 https://github.com/libretro/slang-shaders.git
