#pragma once

// Portability macros for building ShaderGC on non-MSVC platforms (macOS, Linux)

#include <cstdint>
#include <sstream>
#include <map>
#include <algorithm>

#ifdef __APPLE__
#include <strings.h> // strcasecmp
#endif

typedef uint8_t BYTE;

#ifndef _MSC_VER
// Replace MSVC __declspec extensions
#define __declspec(x)

// Replace MSVC secure CRT functions
#define _stricmp strcasecmp

// strcpy_s has argument order (dst, size, src) vs POSIX strncpy(dst, src, size)
// Use memcpy instead for safety and portability
#define strcpy_s(dst, sz, src) memcpy(dst, src, sz)
#endif
