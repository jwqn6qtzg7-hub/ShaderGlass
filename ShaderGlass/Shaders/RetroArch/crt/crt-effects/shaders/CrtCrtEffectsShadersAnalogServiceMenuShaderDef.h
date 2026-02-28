/*
ShaderGlass shader crt/crt-effects/shaders\analog-service-menu imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/a4f3aeec04fcb2624ec6df5dd17e38f9b575eab9/crt/crt-effects/shaders/analog-service-menu.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// Analog Service Menu
// by hunterk and chatGPT 4.o
// license: public domain, I guess, since AI can't own copyrights lol
//#pragma parameter nonLinHStr "Horizontal Non-Linearity" 0.0 0.0 1.0 0.01
//#pragma parameter nonLinVStr "Vertical Non-Linearity" 0.0 0.0 1.0 0.01
// Distort only the X component
// Remap [0,1] so inflection point becomes the center
// Remap back to [0,1] with inflection
// Distance from pivot edge (0.0 or 1.0 depending on sign)
// Distortion falls off from pivot edge to the other edge
// Centered Y in [-1, 1]
// Vertical weighting curve (e.g. inverted parabola)
// Horizontal weighting curve (e.g. inverted parabola)
// Shift X based on Y curve
// Shift Y based on X curve
// Vertical offset from center [-0.5, 0.5]
// Horizontal offset from center [-0.5, 0.5]
// Apply shear: X shifts proportionally to vertical offset
// Apply shear: Y shifts proportionally to horizontal offset
// compatibility macros for transparently converting HLSLisms into GLSLisms
/////////////////////////////  GPL LICENSE NOTICE  /////////////////////////////
//  crt-royale: A full-featured CRT shader, with cheese.
//  Copyright (C) 2014 TroggleMonkey <trogglemonkey@gmx.com>
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along with
//  this program; if not, write to the Free Software Foundation, Inc., 59 Temple
//  Place, Suite 330, Boston, MA 02111-1307 USA
/////////////////////////////////  DESCRIPTION  ////////////////////////////////
//  This file provides antialiased and subpixel-aware tex2D lookups.
//  Requires:   All functions share these requirements:
//              1.) All requirements of gamma-management.h must be satisfied!
//              2.) pixel_to_tex_uv must be a 2x2 matrix that transforms pixe-
//                  space offsets to texture uv offsets.  You can get this with:
//                      const float2 duv_dx = ddx(tex_uv);
//                      const float2 duv_dy = ddy(tex_uv);
//                      const float2x2 pixel_to_tex_uv = float2x2(
//                          duv_dx.x, duv_dy.x,
//                          duv_dx.y, duv_dy.y);
//                  This is left to the user in case the current Cg profile
//                  doesn't support ddx()/ddy().  Ideally, the user could find
//                  calculate a distorted tangent-space mapping analytically.
//                  If not, a simple flat mapping can be obtained with:
//                      const float2 xy_to_uv_scale = IN.output_size *
//                          IN.video_size/IN.texture_size;
//                      const float2x2 pixel_to_tex_uv = float2x2(
//                          xy_to_uv_scale.x, 0.0,
//                          0.0, xy_to_uv_scale.y);
//  Optional:   To set basic AA settings, #define ANTIALIAS_OVERRIDE_BASICS and:
//              1.) Set an antialiasing level:
//                      static const float aa_level = {0 (none),
//                          1 (sample subpixels), 4, 5, 6, 7, 8, 12, 16, 20, 24}
//              2.) Set a filter type:
//                      static const float aa_filter = {
//                          0 (Box, Separable), 1 (Box, Cylindrical),
//                          2 (Tent, Separable), 3 (Tent, Cylindrical)
//                          4 (Gaussian, Separable), 5 (Gaussian, Cylindrical)
//                          6 (Cubic, Separable), 7 (Cubic, Cylindrical)
//                          8 (Lanczos Sinc, Separable),
//                          9 (Lanczos Jinc, Cylindrical)}
//                  If the input is unknown, a separable box filter is used.
//                  Note: Lanczos Jinc is terrible for sparse sampling, and
//                  using aa_axis_importance (see below) defeats the purpose.
//              3.) Mirror the sample pattern on odd frames?
//                      static const bool aa_temporal = {true, false]
//                  This helps rotational invariance but can look "fluttery.
//              The user may #define ANTIALIAS_OVERRIDE_PARAMETERS to override
//              (all of) the following default parameters with static or uniform
//              constants (or an accessor function for subpixel offsets):
//              1.) Cubic parameters:
//                      static const float aa_cubic_c = 0.5;
//                  See http://www.imagemagick.org/Usage/filter/#mitchell
//              2.) Gaussian parameters:
//                      static const float aa_gauss_sigma =
//                          0.5/aa_pixel_diameter;
//              3.) Set subpixel offsets.  This requires an accessor function
//                  for compatibility with scalar runtime shader params.  Return
//                  a float2 pixel offset in [-0.5, 0.5] for the red subpixel:
//                      float2 get_aa_subpixel_r_offset()
//              The user may also #define ANTIALIAS_OVERRIDE_STATIC_CONSTANTS to
//              override (all of) the following default static values.  However,
//              the file's structure requires them to be declared static const:
//              1.) static const float aa_lanczos_lobes = 3.0;
//              2.) static const float aa_gauss_support = 1.0/aa_pixel_diameter;
//                  Note the default tent/Gaussian support radii may appear
//                  arbitrary, but extensive testing found them nearly optimal
//                  for tough cases like strong distortion at low AA levels.
//                  (The Gaussian default is only best for practical gauss_sigma
//                  values; much larger gauss_sigmas ironically prefer slightly
//                  smaller support given sparse sampling, and vice versa.)
//              3.) static const float aa_tent_support = 1.0 / aa_pixel_diameter;
//              4.) static const float2 aa_xy_axis_importance:
//                  The sparse N-queens sampling grid interacts poorly with
//                  negative-lobed 2D filters.  However, if aliasing is much
//                  stronger in one direction (e.g. horizontally with a phosphor
//                  mask), it can be useful to downplay sample offsets along the
//                  other axis.  The support radius in each direction scales with
//                  aa_xy_axis_importance down to a minimum of 0.5 (box support),
//                  after which point only the offsets used for calculating
//                  weights continue to scale downward.  This works as follows:
//                  If aa_xy_axis_importance = float2(1.0, 1.0/support_radius),
//                  the vertical support radius will drop to 1.0, and we'll just
//                  filter vertical offsets with the first filter lobe, while
//                  horizontal offsets go through the full multi-lobe filter.
//                  If aa_xy_axis_importance = float2(1.0, 0.0), the vertical
//                  support radius will drop to box support, and the vertical
//                  offsets will be ignored entirely (essentially giving us a
//                  box filter vertically).  The former is potentially smoother
//                  (but less predictable) and the default behavior of Lanczos
//                  jinc, whereas the latter is sharper and the default behavior
//                  of cubics and Lanczos sinc.
//              5.) static const float aa_pixel_diameter: You can expand the
//                  pixel diameter to e.g. sqrt(2.0), which may be a better
//                  support range for cylindrical filters (they don't
//                  currently discard out-of-circle samples though).
//              Finally, there are two miscellaneous options:
//              1.) If you want to antialias a manually tiled texture, you can
//                  #define ANTIALIAS_DISABLE_ANISOTROPIC to use tex2Dlod() to
//                  fix incompatibilities with anisotropic filtering.  This is
//                  slower, and the Cg profile must support tex2Dlod().
//              2.) If aa_cubic_c is a runtime uniform, you can #define
//                  RUNTIME_ANTIALIAS_WEIGHTS to evaluate cubic weights once per
//                  fragment instead of at the usage site (which is used by
//                  default, because it enables static evaluation).
//  Description:
//  Each antialiased lookup follows these steps:
//  1.) Define a sample pattern of pixel offsets in the range of [-0.5, 0.5]
//      pixels, spanning the diameter of a rectangular box filter.
//  2.) Scale these offsets by the support diameter of the user's chosen filter.
//  3.) Using these pixel offsets from the pixel center, compute the offsets to
//      predefined subpixel locations.
//  4.) Compute filter weights based on subpixel offsets.
//  Much of that can often be done at compile-time.  At runtime:
//  1.) Project pixel-space offsets into uv-space with a matrix multiplication
//      to get the uv offsets for each sample.  Rectangular pixels have a
//      diameter of 1.0.  Circular pixels are not currently supported, but they
//      might be better with a diameter of sqrt(2.0) to ensure there are no gaps
//      between them.
//  2.) Load, weight, and sum samples.
//  We use a sparse bilinear sampling grid, so there are two major implications:
//  1.) We can directly project the pixel-space support box into uv-space even
//      if we're upsizing.  This wouldn't be the case for nearest neighbor,
//      where we'd have to expand the uv-space diameter to at least the support
//      size to ensure sufficient filter support.  In our case, this allows us
//      to treat upsizing the same as downsizing and use static weighting. :)
//  2.) For decent results, negative-lobed filters must be computed based on
//      separable weights, not radial distances, because the sparse sampling
//      makes no guarantees about radial distributions.  Even then, it's much
//      better to set aa_xy_axis_importance to e.g. float2(1.0, 0.0) to use e.g.
//      Lanczos2 horizontally and a box filter vertically.  This is mainly due
//      to the sparse N-queens sampling and a statistically enormous positive or
//      negative covariance between horizontal and vertical weights.
//
//  Design Decision Comments:
//  "aa_temporal" mirrors the sample pattern on odd frames along the axis that
//  keeps subpixel weights constant.  This helps with rotational invariance, but
//  it can cause distracting fluctuations, and horizontal and vertical edges
//  will look the same.  Using a different pattern on a shifted grid would
//  exploit temporal AA better, but it would require a dynamic branch or a lot
//  of conditional moves, so it's prohibitively slow for the minor benefit.
/////////////////////////////  SETTINGS MANAGEMENT  ////////////////////////////
//  The following settings must be static constants:
//  Users may override these parameters, but the file structure requires
//  them to be static constants; see the descriptions above.
//  If we're using a negative-lobed filter, default to using it horizontally
//  only, and use only the first lobe vertically or a box filter, over a
//  correspondingly smaller range.  This compensates for the sparse sampling
//  grid's typically large positive/negative x/y covariance.
//  Users may override these values with their own uniform or static consts.
//  Cubics: See http://www.imagemagick.org/Usage/filter/#mitchell
//  1.) "Keys cubics" with B = 1 - 2C are considered the highest quality.
//  2.) C = 0.5 (default) is Catmull-Rom; higher C's apply sharpening.
//  3.) C = 1.0/3.0 is the Mitchell-Netravali filter.
//  4.) C = 0.0 is a soft spline filter.
//  Users may override the subpixel offset accessor function with their own.
//  A function is used for compatibility with scalar runtime shader params.
//////////////////////////////////  INCLUDES  //////////////////////////////////
/////////////////////////////////  MIT LICENSE  ////////////////////////////////
//  Copyright (C) 2014 TroggleMonkey
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to
//  deal in the Software without restriction, including without limitation the
//  rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
//  sell copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
/////////////////////////////////  DESCRIPTION  ////////////////////////////////
//  This file provides gamma-aware tex*D*() and encode_output() functions.
//  Requires:   Before #include-ing this file, the including file must #define
//              the following macros when applicable and follow their rules:
//              1.) #define FIRST_PASS if this is the first pass.
//              2.) #define LAST_PASS if this is the last pass.
//              3.) If sRGB is available, set srgb_framebufferN = "true" for
//                  every pass except the last in your .cgp preset.
//              4.) If sRGB isn't available but you want gamma-correctness with
//                  no banding, #define GAMMA_ENCODE_EVERY_FBO each pass.
//              5.) #define SIMULATE_CRT_ON_LCD if desired (precedence over 5-7)
//              6.) #define SIMULATE_GBA_ON_LCD if desired (precedence over 6-7)
//              7.) #define SIMULATE_LCD_ON_CRT if desired (precedence over 7)
//              8.) #define SIMULATE_GBA_ON_CRT if desired (precedence over -)
//              If an option in [5, 8] is #defined in the first or last pass, it
//              should be #defined for both.  It shouldn't make a difference
//              whether it's #defined for intermediate passes or not.
//  Optional:   The including file (or an earlier included file) may optionally
//              #define a number of macros indicating it will override certain
//              macros and associated constants are as follows:
//              static constants with either static or uniform constants.  The
//              1.) OVERRIDE_STANDARD_GAMMA: The user must first define:
//                  static const float ntsc_gamma
//                  static const float pal_gamma
//                  static const float crt_reference_gamma_high
//                  static const float crt_reference_gamma_low
//                  static const float lcd_reference_gamma
//                  static const float crt_office_gamma
//                  static const float lcd_office_gamma
//              2.) OVERRIDE_DEVICE_GAMMA: The user must first define:
//                  static const float crt_gamma
//                  static const float gba_gamma
//                  static const float lcd_gamma
//              3.) OVERRIDE_FINAL_GAMMA: The user must first define:
//                  static const float input_gamma
//                  static const float intermediate_gamma
//                  static const float output_gamma
//                  (intermediate_gamma is for GAMMA_ENCODE_EVERY_FBO.)
//              4.) OVERRIDE_ALPHA_ASSUMPTIONS: The user must first define:
//                  static const bool assume_opaque_alpha
//              The gamma constant overrides must be used in every pass or none,
//              and OVERRIDE_FINAL_GAMMA bypasses all of the SIMULATE* macros.
//              OVERRIDE_ALPHA_ASSUMPTIONS may be set on a per-pass basis.
//  Usage:      After setting macros appropriately, ignore gamma correction and
//              replace all tex*D*() calls with equivalent gamma-aware
//              tex*D*_linearize calls, except:
//              1.) When you read an LUT, use regular tex*D or a gamma-specified
//                  function, depending on its gamma encoding:
//                      tex*D*_linearize_gamma (takes a runtime gamma parameter)
//              2.) If you must read pass0's original input in a later pass, use
//                  tex2D_linearize_ntsc_gamma.  If you want to read pass0's
//                  input with gamma-corrected bilinear filtering, consider
//                  creating a first linearizing pass and reading from the input
//                  of pass1 later.
//              Then, return encode_output(color) from every fragment shader.
//              Finally, use the global gamma_aware_bilinear boolean if you want
//              to statically branch based on whether bilinear filtering is
//              gamma-correct or not (e.g. for placing Gaussian blur samples).
//
//  Detailed Policy:
//  tex*D*_linearize() functions enforce a consistent gamma-management policy
//  based on the FIRST_PASS and GAMMA_ENCODE_EVERY_FBO settings.  They assume
//  their input texture has the same encoding characteristics as the input for
//  the current pass (which doesn't apply to the exceptions listed above).
//  Similarly, encode_output() enforces a policy based on the LAST_PASS and
//  GAMMA_ENCODE_EVERY_FBO settings.  Together, they result in one of the
//  following two pipelines.
//  Typical pipeline with intermediate sRGB framebuffers:
//      linear_color = pow(pass0_encoded_color, input_gamma);
//      intermediate_output = linear_color;     //  Automatic sRGB encoding
//      linear_color = intermediate_output;     //  Automatic sRGB decoding
//      final_output = pow(intermediate_output, 1.0/output_gamma);
//  Typical pipeline without intermediate sRGB framebuffers:
//      linear_color = pow(pass0_encoded_color, input_gamma);
//      intermediate_output = pow(linear_color, 1.0/intermediate_gamma);
//      linear_color = pow(intermediate_output, intermediate_gamma);
//      final_output = pow(intermediate_output, 1.0/output_gamma);
//  Using GAMMA_ENCODE_EVERY_FBO is much slower, but it's provided as a way to
//  easily get gamma-correctness without banding on devices where sRGB isn't
//  supported.
//
//  Use This Header to Maximize Code Reuse:
//  The purpose of this header is to provide a consistent interface for texture
//  reads and output gamma-encoding that localizes and abstracts away all the
//  annoying details.  This greatly reduces the amount of code in each shader
//  pass that depends on the pass number in the .cgp preset or whether sRGB
//  FBO's are being used: You can trivially change the gamma behavior of your
//  whole pass by commenting or uncommenting 1-3 #defines.  To reuse the same
//  code in your first, Nth, and last passes, you can even put it all in another
//  header file and #include it from skeleton .cg files that #define the
//  appropriate pass-specific settings.
//
//  Rationale for Using Three Macros:
//  This file uses GAMMA_ENCODE_EVERY_FBO instead of an opposite macro like
//  SRGB_PIPELINE to ensure sRGB is assumed by default, which hopefully imposes
//  a lower maintenance burden on each pass.  At first glance it seems we could
//  accomplish everything with two macros: GAMMA_CORRECT_IN / GAMMA_CORRECT_OUT.
//  This works for simple use cases where input_gamma == output_gamma, but it
//  breaks down for more complex scenarios like CRT simulation, where the pass
//  number determines the gamma encoding of the input and output.
///////////////////////////////  BASE CONSTANTS  ///////////////////////////////
//  Set standard gamma constants, but allow users to override them:
//  Standard encoding gammas:
//  Typical device decoding gammas (only use for emulating devices):
//  CRT/LCD reference gammas are higher than NTSC and Rec.709 video standard
//  gammas: The standards purposely undercorrected for an analog CRT's
//  assumed 2.5 reference display gamma to maintain contrast in assumed
//  [dark] viewing conditions: http://www.poynton.com/PDFs/GammaFAQ.pdf
//  These unstated assumptions about display gamma and perceptual rendering
//  intent caused a lot of confusion, and more modern CRT's seemed to target
//  NTSC 2.2 gamma with circuitry.  LCD displays seem to have followed suit
//  (they struggle near black with 2.5 gamma anyway), especially PC/laptop
//  displays designed to view sRGB in bright environments.  (Standards are
//  also in flux again with BT.1886, but it's underspecified for displays.)
//  Assuming alpha == 1.0 might make it easier for users to avoid some bugs,
//  but only if they're aware of it.
///////////////////////  DERIVED CONSTANTS AS FUNCTIONS  ///////////////////////
//  gamma-management.h should be compatible with overriding gamma values with
//  runtime user parameters, but we can only define other global constants in
//  terms of static constants, not uniform user parameters.  To get around this
//  limitation, we need to define derived constants using functions.
//  Set device gamma constants, but allow users to override them:
//  The user promises to globally define the appropriate constants:
//  Set decoding/encoding gammas for the first/lass passes, but allow overrides:
//  The user promises to globally define the appropriate constants:
//  If we gamma-correct every pass, always use ntsc_gamma between passes to
//  ensure middle passes don't need to care if anything is being simulated:
//  Set decoding/encoding gammas for the current pass.  Use static constants for
//  linearize_input and gamma_encode_output, because they aren't derived, and
//  they let the compiler do dead-code elimination.
//  Users might want to know if bilinear filtering will be gamma-correct:
//////////////////////  COLOR ENCODING/DECODING FUNCTIONS  /////////////////////
//TODO/FIXME: I have no idea why replacing the lookup wrappers with this macro fixes the blurs being offset ¯\_(ツ)_/¯
//#define tex2D_linearize(C, D) decode_input(vec4(texture(C, D)))
// EDIT: it's the 'const' in front of the coords that's doing it
///////////////////////////  TEXTURE LOOKUP WRAPPERS  //////////////////////////
//  "SMART" LINEARIZING TEXTURE LOOKUP FUNCTIONS:
//  Provide a wide array of linearizing texture lookup wrapper functions.  The
//  Cg shader spec Retroarch uses only allows for 2D textures, but 1D and 3D
//  lookups are provided for completeness in case that changes someday.  Nobody
//  is likely to use the *fetch and *proj functions, but they're included just
//  in case.  The only tex*D texture sampling functions omitted are:
//      - tex*Dcmpbias
//      - tex*Dcmplod
//      - tex*DARRAY*
//      - tex*DMS*
//      - Variants returning integers
//  Standard line length restrictions are ignored below for vertical brevity.
//  tex1D:
//  tex1Dbias:
//  tex1Dfetch:
//  tex1Dlod:
//  tex1Dproj:
//  tex2D:
//inline float4 tex2D_linearize(const sampler2D tex, const float2 tex_coords, const float2 dx, const float2 dy)
//{   return decode_input(texture(tex, tex_coords, dx, dy));   }
//inline float4 tex2D_linearize(const sampler2D tex, const float3 tex_coords, const float2 dx, const float2 dy)
//{   return decode_input(texture(tex, tex_coords, dx, dy));   }
//inline float4 tex2D_linearize(const sampler2D tex, const float2 tex_coords, const float2 dx, const float2 dy, const int texel_off)
//{   return decode_input(texture(tex, tex_coords, dx, dy, texel_off));    }
//inline float4 tex2D_linearize(const sampler2D tex, const float3 tex_coords, const float2 dx, const float2 dy, const int texel_off)
//{   return decode_input(texture(tex, tex_coords, dx, dy, texel_off));    }
//  tex2Dbias:
//inline float4 tex2Dbias_linearize(const sampler2D tex, const float4 tex_coords)
//{   return decode_input(tex2Dbias(tex, tex_coords));   }
//inline float4 tex2Dbias_linearize(const sampler2D tex, const float4 tex_coords, const int texel_off)
//{   return decode_input(tex2Dbias(tex, tex_coords, texel_off));    }
//  tex2Dfetch:
//inline float4 tex2Dfetch_linearize(const sampler2D tex, const int4 tex_coords)
//{   return decode_input(tex2Dfetch(tex, tex_coords));  }
//inline float4 tex2Dfetch_linearize(const sampler2D tex, const int4 tex_coords, const int texel_off)
//{   return decode_input(tex2Dfetch(tex, tex_coords, texel_off));   }
//  tex2Dlod:
//  tex2Dproj:
//  tex3D:
//  tex3Dbias:
//  tex3Dfetch:
//  tex3Dlod:
//  tex3Dproj:
/////////*
//  NONSTANDARD "SMART" LINEARIZING TEXTURE LOOKUP FUNCTIONS:
//  This narrow selection of nonstandard tex2D* functions can be useful:
//  tex2Dlod0: Automatically fill in the tex2D LOD parameter for mip level 0.
//inline float4 tex2Dlod0_linearize(const sampler2D tex, const float2 tex_coords)
//{   return decode_input(tex2Dlod(tex, float4(tex_coords, 0.0, 0.0)));   }
//inline float4 tex2Dlod0_linearize(const sampler2D tex, const float2 tex_coords, const int texel_off)
//{   return decode_input(tex2Dlod(tex, float4(tex_coords, 0.0, 0.0), texel_off));    }
//  MANUALLY LINEARIZING TEXTURE LOOKUP FUNCTIONS:
//  Provide a narrower selection of tex2D* wrapper functions that decode an
//  input sample with a specified gamma value.  These are useful for reading
//  LUT's and for reading the input of pass0 in a later pass.
//  tex2D:
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float2 tex_coords, const int texel_off, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, texel_off), gamma);    }
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float3 tex_coords, const int texel_off, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, texel_off), gamma);    }
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float2 tex_coords, const float2 dx, const float2 dy, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, dx, dy), gamma);   }
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float3 tex_coords, const float2 dx, const float2 dy, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, dx, dy), gamma);   }
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float2 tex_coords, const float2 dx, const float2 dy, const int texel_off, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, dx, dy, texel_off), gamma);    }
//inline float4 tex2D_linearize_gamma(const sampler2D tex, const float3 tex_coords, const float2 dx, const float2 dy, const int texel_off, const float3 gamma)
//{   return decode_gamma_input(texture(tex, tex_coords, dx, dy, texel_off), gamma);    }
//  tex2Dbias:
//  tex2Dfetch:
//  tex2Dlod:
//////////////////////////////////  CONSTANTS  /////////////////////////////////
////////////////////////////  GLOBAL NON-CONSTANTS  ////////////////////////////
//  We'll want to define these only once per fragment at most.
///////////////////////////////////  HELPERS  //////////////////////////////////
//  Compute cubic coefficients on demand at runtime, and save them to global
//  uniforms.  The B parameter is computed from C, because "Keys cubics
//  with B = 1 - 2C are considered the highest quality.
//  Statically select the base support radius:
//  Expand the filter support for subpixel filtering.
//  Ignore aa_xy_axis_importance for box filtering.
//  Scale the support window by aa_xy_axis_importance, but don't narrow
//  it further than box support.  This allows decent vertical AA without
//  messing up horizontal weights or using something silly like Lanczos4
//  horizontally with a huge vertical average over an 8-pixel radius.
//  Adjust aa_xy_axis_importance to compensate for what's already done:
///////////////////////////  FILTER WEIGHT FUNCTIONS  //////////////////////////
//  Compute coefficients like assign_aa_cubic_constants(), but statically.
//  When runtime weights are used, these values are instead written to
//  global uniforms at the beginning of each tex2Daa* call.
//  Compute the cubic based on the Horner's method formula in:
//  http://www.cs.utexas.edu/users/fussell/courses/cs384g/lectures/mitchell/Mitchell.pdf
//  This is faster than using a specific float2 version:
//  It's faster to let the caller handle the zero case, or at least it
//  was when I used macros and the shader preset took a full minute to load.
//  Note: For sparse sampling, you really need to pick an axis to use
//  Lanczos along (e.g. set aa_xy_axis_importance = float2(1.0, 0.0)).
//  This is a Jinc approximation for x in [0, 45).  We'll use x in range
//  [0, 4*pi) or so.  There are faster/closer approximations based on
//  piecewise cubics from [0, 45) and asymptotic approximations beyond that,
//  but this has a maximum absolute error < 1/512, and it's simpler/faster
//  for shaders...not that it's all that useful for sparse sampling anyway.
//  Requires:   1.) final_axis_impportance must be computed according to
//                  get_subpixel_support_diam_and_final_axis_importance().
//              2.) aa_filter must be a global constant.
//              3.) offset must be an xy pixel offset in the range:
//                      ([-subpixel_support_diameter.x/2,
//                      subpixel_support_diameter.x/2],
//                      [-subpixel_support_diameter.y/2,
//                      subpixel_support_diameter.y/2])
//  Returns:    Sample weights at R/G/B destination subpixels for the
//              given xy pixel offset.
//  Statically select a filter:
//  Default to a box, because Lanczos Jinc is so bad. ;)
//////////////////////////////  HELPER FUNCTIONS  //////////////////////////////
//  If we're manually tiling a texture, anisotropic filtering can get
//  confused.  This is one workaround:
//  TODO: Use tex2Dlod_linearize with a calculated mip level.
//  Mirror the sampling pattern for odd frames in a direction that
//  lets us keep the same subpixel sample weights:
/////////////////////////  ANTIALIASED TEXTURE LOOKUPS  ////////////////////////
//  This function is unlike the others: Just perform a single independent
//  lookup for each subpixel.  It may be very aliased.
//  The tex2Daa* functions compile very slowly due to all the macros and
//  compile-time math, so only include the ones we'll actually use!
//  Use an RGMS4 pattern (4-queens):
//  . . Q .  : off =(-1.5, -1.5)/4 + (2.0, 0.0)/4
//  Q . . .  : off =(-1.5, -1.5)/4 + (0.0, 1.0)/4
//  . . . Q  : off =(-1.5, -1.5)/4 + (3.0, 2.0)/4
//  . Q . .  : off =(-1.5, -1.5)/4 + (1.0, 3.0)/4
//  Static screenspace sample offsets (compute some implicitly):
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 5-queens pattern:
//  . Q . . .  : off =(-2.0, -2.0)/5 + (1.0, 0.0)/5
//  . . . . Q  : off =(-2.0, -2.0)/5 + (4.0, 1.0)/5
//  . . Q . .  : off =(-2.0, -2.0)/5 + (2.0, 2.0)/5
//  Q . . . .  : off =(-2.0, -2.0)/5 + (0.0, 3.0)/5
//  . . . Q .  : off =(-2.0, -2.0)/5 + (3.0, 4.0)/5
//  Static screenspace sample offsets (compute some implicitly):
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 6-queens pattern with a stronger horizontal
//  than vertical slant:
//  . . . . Q .  : off =(-2.5, -2.5)/6 + (4.0, 0.0)/6
//  . . Q . . .  : off =(-2.5, -2.5)/6 + (2.0, 1.0)/6
//  Q . . . . .  : off =(-2.5, -2.5)/6 + (0.0, 2.0)/6
//  . . . . . Q  : off =(-2.5, -2.5)/6 + (5.0, 3.0)/6
//  . . . Q . .  : off =(-2.5, -2.5)/6 + (3.0, 4.0)/6
//  . Q . . . .  : off =(-2.5, -2.5)/6 + (1.0, 5.0)/6
//  Static screenspace sample offsets (compute some implicitly):
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 7-queens pattern with a queen in the center:
//  . Q . . . . .  : off =(-3.0, -3.0)/7 + (1.0, 0.0)/7
//  . . . . Q . .  : off =(-3.0, -3.0)/7 + (4.0, 1.0)/7
//  Q . . . . . .  : off =(-3.0, -3.0)/7 + (0.0, 2.0)/7
//  . . . Q . . .  : off =(-3.0, -3.0)/7 + (3.0, 3.0)/7
//  . . . . . . Q  : off =(-3.0, -3.0)/7 + (6.0, 4.0)/7
//  . . Q . . . .  : off =(-3.0, -3.0)/7 + (2.0, 5.0)/7
//  . . . . . Q .  : off =(-3.0, -3.0)/7 + (5.0, 6.0)/7
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 8-queens pattern.
//  . . Q . . . . .  : off =(-3.5, -3.5)/8 + (2.0, 0.0)/8
//  . . . . Q . . .  : off =(-3.5, -3.5)/8 + (4.0, 1.0)/8
//  . Q . . . . . .  : off =(-3.5, -3.5)/8 + (1.0, 2.0)/8
//  . . . . . . . Q  : off =(-3.5, -3.5)/8 + (7.0, 3.0)/8
//  Q . . . . . . .  : off =(-3.5, -3.5)/8 + (0.0, 4.0)/8
//  . . . . . . Q .  : off =(-3.5, -3.5)/8 + (6.0, 5.0)/8
//  . . . Q . . . .  : off =(-3.5, -3.5)/8 + (3.0, 6.0)/8
//  . . . . . Q . .  : off =(-3.5, -3.5)/8 + (5.0, 7.0)/8
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, and mirror on odd frames if directed:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 12-superqueens pattern where no 3 points are
//  exactly collinear.
//  . . . Q . . . . . . . .  : off =(-5.5, -5.5)/12 + (3.0, 0.0)/12
//  . . . . . . . . . Q . .  : off =(-5.5, -5.5)/12 + (9.0, 1.0)/12
//  . . . . . . Q . . . . .  : off =(-5.5, -5.5)/12 + (6.0, 2.0)/12
//  . Q . . . . . . . . . .  : off =(-5.5, -5.5)/12 + (1.0, 3.0)/12
//  . . . . . . . . . . . Q  : off =(-5.5, -5.5)/12 + (11.0, 4.0)/12
//  . . . . Q . . . . . . .  : off =(-5.5, -5.5)/12 + (4.0, 5.0)/12
//  . . . . . . . Q . . . .  : off =(-5.5, -5.5)/12 + (7.0, 6.0)/12
//  Q . . . . . . . . . . .  : off =(-5.5, -5.5)/12 + (0.0, 7.0)/12
//  . . . . . . . . . . Q .  : off =(-5.5, -5.5)/12 + (10.0, 8.0)/12
//  . . . . . Q . . . . . .  : off =(-5.5, -5.5)/12 + (5.0, 9.0)/12
//  . . Q . . . . . . . . .  : off =(-5.5, -5.5)/12 + (2.0, 10.0)/12
//  . . . . . . . . Q . . .  : off =(-5.5, -5.5)/12 + (8.0, 11.0)/12
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 16-superqueens pattern where no 3 points are
//  exactly collinear.
//  . . Q . . . . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (2.0, 0.0)/16
//  . . . . . . . . . Q . . . . . .  : off =(-7.5, -7.5)/16 + (9.0, 1.0)/16
//  . . . . . . . . . . . . Q . . .  : off =(-7.5, -7.5)/16 + (12.0, 2.0)/16
//  . . . . Q . . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (4.0, 3.0)/16
//  . . . . . . . . Q . . . . . . .  : off =(-7.5, -7.5)/16 + (8.0, 4.0)/16
//  . . . . . . . . . . . . . . Q .  : off =(-7.5, -7.5)/16 + (14.0, 5.0)/16
//  Q . . . . . . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (0.0, 6.0)/16
//  . . . . . . . . . . Q . . . . .  : off =(-7.5, -7.5)/16 + (10.0, 7.0)/16
//  . . . . . Q . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (5.0, 8.0)/16
//  . . . . . . . . . . . . . . . Q  : off =(-7.5, -7.5)/16 + (15.0, 9.0)/16
//  . Q . . . . . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (1.0, 10.0)/16
//  . . . . . . . Q . . . . . . . .  : off =(-7.5, -7.5)/16 + (7.0, 11.0)/16
//  . . . . . . . . . . . Q . . . .  : off =(-7.5, -7.5)/16 + (11.0, 12.0)/16
//  . . . Q . . . . . . . . . . . .  : off =(-7.5, -7.5)/16 + (3.0, 13.0)/16
//  . . . . . . Q . . . . . . . . .  : off =(-7.5, -7.5)/16 + (6.0, 14.0)/16
//  . . . . . . . . . . . . . Q . .  : off =(-7.5, -7.5)/16 + (13.0, 15.0)/16
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 20-superqueens pattern where no 3 points are
//  exactly collinear and superqueens have a squared attack radius of 13.
//  . . . . . . . Q . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (7.0, 0.0)/20
//  . . . . . . . . . . . . . . . . Q . . .  : off =(-9.5, -9.5)/20 + (16.0, 1.0)/20
//  . . . . . . . . . . . Q . . . . . . . .  : off =(-9.5, -9.5)/20 + (11.0, 2.0)/20
//  . Q . . . . . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (1.0, 3.0)/20
//  . . . . . Q . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (5.0, 4.0)/20
//  . . . . . . . . . . . . . . . Q . . . .  : off =(-9.5, -9.5)/20 + (15.0, 5.0)/20
//  . . . . . . . . . . Q . . . . . . . . .  : off =(-9.5, -9.5)/20 + (10.0, 6.0)/20
//  . . . . . . . . . . . . . . . . . . . Q  : off =(-9.5, -9.5)/20 + (19.0, 7.0)/20
//  . . Q . . . . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (2.0, 8.0)/20
//  . . . . . . Q . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (6.0, 9.0)/20
//  . . . . . . . . . . . . . Q . . . . . .  : off =(-9.5, -9.5)/20 + (13.0, 10.0)/20
//  . . . . . . . . . . . . . . . . . Q . .  : off =(-9.5, -9.5)/20 + (17.0, 11.0)/20
//  Q . . . . . . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (0.0, 12.0)/20
//  . . . . . . . . . Q . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (9.0, 13.0)/20
//  . . . . Q . . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (4.0, 14.0)/20
//  . . . . . . . . . . . . . . Q . . . . .  : off =(-9.5, -9.5)/20 + (14.0, 15.0)/20
//  . . . . . . . . . . . . . . . . . . Q .  : off =(-9.5, -9.5)/20 + (18.0, 16.0)/20
//  . . . . . . . . Q . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (8.0, 17.0)/20
//  . . . Q . . . . . . . . . . . . . . . .  : off =(-9.5, -9.5)/20 + (3.0, 18.0)/20
//  . . . . . . . . . . . . Q . . . . . . .  : off =(-9.5, -9.5)/20 + (12.0, 19.0)/20
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Use a diagonally symmetric 24-superqueens pattern where no 3 points are
//  exactly collinear and superqueens have a squared attack radius of 13.
//  . . . . . . Q . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (6.0, 0.0)/24
//  . . . . . . . . . . . . . . . . Q . . . . . . .  : off =(-11.5, -11.5)/24 + (16.0, 1.0)/24
//  . . . . . . . . . . Q . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (10.0, 2.0)/24
//  . . . . . . . . . . . . . . . . . . . . . Q . .  : off =(-11.5, -11.5)/24 + (21.0, 3.0)/24
//  . . . . . Q . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (5.0, 4.0)/24
//  . . . . . . . . . . . . . . . Q . . . . . . . .  : off =(-11.5, -11.5)/24 + (15.0, 5.0)/24
//  . Q . . . . . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (1.0, 6.0)/24
//  . . . . . . . . . . . Q . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (11.0, 7.0)/24
//  . . . . . . . . . . . . . . . . . . . Q . . . .  : off =(-11.5, -11.5)/24 + (19.0, 8.0)/24
//  . . . . . . . . . . . . . . . . . . . . . . . Q  : off =(-11.5, -11.5)/24 + (23.0, 9.0)/24
//  . . . Q . . . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (3.0, 10.0)/24
//  . . . . . . . . . . . . . . Q . . . . . . . . .  : off =(-11.5, -11.5)/24 + (14.0, 11.0)/24
//  . . . . . . . . . Q . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (9.0, 12.0)/24
//  . . . . . . . . . . . . . . . . . . . . Q . . .  : off =(-11.5, -11.5)/24 + (20.0, 13.0)/24
//  Q . . . . . . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (0.0, 14.0)/24
//  . . . . Q . . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (4.0, 15.0)/24
//  . . . . . . . . . . . . Q . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (12.0, 16.0)/24
//  . . . . . . . . . . . . . . . . . . . . . . Q .  : off =(-11.5, -11.5)/24 + (22.0, 17.0)/24
//  . . . . . . . . Q . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (8.0, 18.0)/24
//  . . . . . . . . . . . . . . . . . . Q . . . . .  : off =(-11.5, -11.5)/24 + (18.0, 19.0)/24
//  . . Q . . . . . . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (2.0, 20.0)/24
//  . . . . . . . . . . . . . Q . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (13.0, 21.0)/24
//  . . . . . . . Q . . . . . . . . . . . . . . . .  : off =(-11.5, -11.5)/24 + (7.0, 22.0)/24
//  . . . . . . . . . . . . . . . . . Q . . . . . .  : off =(-11.5, -11.5)/24 + (17.0, 23.0)/24
//  Get the xy offset of each sample.  Exploit diagonal symmetry:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, mirror on odd frames if directed, and exploit
//  diagonal symmetry:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  Sample on a regular 4x4 grid.  This is mainly for testing.
//  Get the xy offset of each sample:
//  Compute subpixel weights, and exploit diagonal symmetry for speed.
//  (We can't exploit vertical or horizontal symmetry due to uncertain
//  subpixel offsets.  We could fix that by rotating xy offsets with the
//  subpixel structure, but...no.)
//  Get the weight sum to normalize the total to 1.0 later:
//  Scale the pixel-space to texture offset matrix by the pixel diameter.
//  Get uv sample offsets, taking advantage of row alignment:
//  Load samples, linearizing if necessary, etc.:
//  Sum weighted samples (weight sum must equal 1.0 for each channel):
//  This function is for testing only: Use an NxN grid with dynamic weights.
//  Compute xy sample offsets and subpixel weights:
//  Weights based on xy distances:
//  Get uv offset vectors along x and y directions:
//  Get a starting sample location:
//  Load, weight, and sum [linearized] samples:
///////////////////////  ANTIALIASING CODEPATH SELECTION  //////////////////////
//  Statically switch between antialiasing modes/levels:
// hide some weird behavior when coords are out of bounds

*/

#pragma once

namespace RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,36,166,
235,223,211,40,113,204,
21,96,133,119,39,31,
6,156,1,0,0,0,
220,9,0,0,5,0,
0,0,52,0,0,0,
172,6,0,0,248,6,
0,0,80,7,0,0,
64,9,0,0,82,68,
69,70,112,6,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
71,6,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,85,66,
79,0,80,117,115,104,
0,171,171,171,124,0,
0,0,1,0,0,0,
184,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,128,0,
0,0,20,0,0,0,
24,1,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,224,0,
0,0,0,0,0,0,
64,0,0,0,2,0,
0,0,244,0,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,103,108,111,98,
97,108,95,77,86,80,
0,102,108,111,97,116,
52,120,52,0,2,0,
3,0,4,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
235,0,0,0,56,4,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,84,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,120,4,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
84,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
140,4,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,84,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,158,4,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,184,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,220,4,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
32,5,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,252,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,51,5,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,252,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,76,5,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
101,5,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,252,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,128,5,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,252,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,155,5,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
178,5,0,0,80,0,
0,0,4,0,0,0,
0,0,0,0,252,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,201,5,
0,0,84,0,0,0,
4,0,0,0,2,0,
0,0,252,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,216,5,0,0,
88,0,0,0,4,0,
0,0,2,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
231,5,0,0,92,0,
0,0,4,0,0,0,
2,0,0,0,252,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,244,5,
0,0,96,0,0,0,
4,0,0,0,2,0,
0,0,252,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,1,6,0,0,
100,0,0,0,4,0,
0,0,0,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
24,6,0,0,104,0,
0,0,4,0,0,0,
0,0,0,0,252,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,43,6,
0,0,108,0,0,0,
4,0,0,0,0,0,
0,0,252,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,57,6,0,0,
112,0,0,0,4,0,
0,0,0,0,0,0,
252,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
74,4,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,176,4,
0,0,112,97,114,97,
109,115,95,115,99,117,
114,118,101,83,116,114,
101,110,103,116,104,89,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
243,4,0,0,112,97,
114,97,109,115,95,105,
110,102,108,101,99,116,
105,111,110,89,0,112,
97,114,97,109,115,95,
112,105,110,80,104,97,
115,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,112,105,110,80,104,
97,115,101,83,116,114,
101,110,103,116,104,89,
0,112,97,114,97,109,
115,95,112,105,110,67,
117,115,104,105,111,110,
83,116,114,101,110,103,
116,104,88,0,112,97,
114,97,109,115,95,112,
105,110,67,117,115,104,
105,111,110,83,116,114,
101,110,103,116,104,89,
0,112,97,114,97,109,
115,95,118,65,110,103,
108,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,118,65,110,103,108,
101,83,116,114,101,110,
103,116,104,89,0,112,
97,114,97,109,115,95,
118,67,101,110,116,101,
114,0,112,97,114,97,
109,115,95,104,67,101,
110,116,101,114,0,112,
97,114,97,109,115,95,
104,83,105,122,101,0,
112,97,114,97,109,115,
95,118,83,105,122,101,
0,112,97,114,97,109,
115,95,115,99,117,114,
118,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,105,110,102,108,101,
99,116,105,111,110,88,
0,112,97,114,97,109,
115,95,100,117,109,109,
121,49,0,112,97,114,
97,109,115,95,100,117,
109,109,121,50,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
71,78,68,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,15,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,232,1,
0,0,80,0,1,0,
122,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
7,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,103,0,
0,4,242,32,16,0,
1,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,0,0,
0,10,50,0,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,0,0,0,
0,0,14,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
5,0,0,0,14,0,
0,8,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,128,32,0,1,0,
0,0,6,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,5,0,
0,0,0,0,0,7,
34,32,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,9,18,32,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
42,128,32,128,65,0,
0,0,1,0,0,0,
5,0,0,0,56,0,
0,8,242,0,16,0,
0,0,0,0,86,21,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,1,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
6,16,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,0,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,166,26,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,2,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,32,16,0,1,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
12,0,0,0,1,0,
0,0,0,0,0,0,
4,0,0,0,11,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,207,54,
41,58,11,31,170,193,
70,183,65,244,38,22,
139,229,1,0,0,0,
208,23,0,0,5,0,
0,0,52,0,0,0,
100,6,0,0,152,6,
0,0,204,6,0,0,
52,23,0,0,82,68,
69,70,40,6,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
255,5,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,80,
117,115,104,0,179,0,
0,0,20,0,0,0,
208,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,240,3,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,12,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,48,4,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
12,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
68,4,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,12,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,86,4,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,112,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,148,4,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
216,4,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,180,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,235,4,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,180,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,4,5,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
29,5,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,180,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,56,5,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,180,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,83,5,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
106,5,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,180,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,129,5,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,180,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,144,5,0,0,
88,0,0,0,4,0,
0,0,0,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
159,5,0,0,92,0,
0,0,4,0,0,0,
0,0,0,0,180,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,172,5,
0,0,96,0,0,0,
4,0,0,0,0,0,
0,0,180,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,185,5,0,0,
100,0,0,0,4,0,
0,0,2,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
208,5,0,0,104,0,
0,0,4,0,0,0,
2,0,0,0,180,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,227,5,
0,0,108,0,0,0,
4,0,0,0,0,0,
0,0,180,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,241,5,0,0,
112,0,0,0,4,0,
0,0,0,0,0,0,
180,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,4,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,104,4,
0,0,112,97,114,97,
109,115,95,115,99,117,
114,118,101,83,116,114,
101,110,103,116,104,89,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
171,4,0,0,112,97,
114,97,109,115,95,105,
110,102,108,101,99,116,
105,111,110,89,0,112,
97,114,97,109,115,95,
112,105,110,80,104,97,
115,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,112,105,110,80,104,
97,115,101,83,116,114,
101,110,103,116,104,89,
0,112,97,114,97,109,
115,95,112,105,110,67,
117,115,104,105,111,110,
83,116,114,101,110,103,
116,104,88,0,112,97,
114,97,109,115,95,112,
105,110,67,117,115,104,
105,111,110,83,116,114,
101,110,103,116,104,89,
0,112,97,114,97,109,
115,95,118,65,110,103,
108,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,118,65,110,103,108,
101,83,116,114,101,110,
103,116,104,89,0,112,
97,114,97,109,115,95,
118,67,101,110,116,101,
114,0,112,97,114,97,
109,115,95,104,67,101,
110,116,101,114,0,112,
97,114,97,109,115,95,
104,83,105,122,101,0,
112,97,114,97,109,115,
95,118,83,105,122,101,
0,112,97,114,97,109,
115,95,115,99,117,114,
118,101,83,116,114,101,
110,103,116,104,88,0,
112,97,114,97,109,115,
95,105,110,102,108,101,
99,116,105,111,110,88,
0,112,97,114,97,109,
115,95,100,117,109,109,
121,49,0,112,97,114,
97,109,115,95,100,117,
109,109,121,50,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,84,69,88,67,
79,79,82,68,0,171,
171,171,79,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,0,0,0,
83,86,95,84,97,114,
103,101,116,0,171,171,
83,72,69,88,96,16,
0,0,80,0,0,0,
24,4,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,7,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,6,0,0,0,
49,0,0,8,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,58,128,32,0,
1,0,0,0,3,0,
0,0,49,0,0,8,
34,0,16,0,0,0,
0,0,58,128,32,0,
1,0,0,0,3,0,
0,0,1,64,0,0,
0,0,0,0,30,0,
0,8,18,0,16,0,
0,0,0,0,10,0,
16,128,65,0,0,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
43,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,49,0,0,7,
18,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
0,0,0,11,98,0,
16,0,0,0,0,0,
86,20,16,128,65,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,16,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,0,0,0,10,
194,0,16,0,0,0,
0,0,6,20,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,191,0,0,0,191,
56,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,128,32,128,
129,0,0,0,1,0,
0,0,3,0,0,0,
56,0,0,9,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,128,32,128,
129,0,0,0,1,0,
0,0,4,0,0,0,
50,0,0,9,18,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,16,
16,0,0,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,64,1,64,
0,0,0,0,128,191,
50,0,0,10,130,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,49,0,
0,8,18,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
10,128,32,0,1,0,
0,0,4,0,0,0,
49,0,0,8,34,0,
16,0,1,0,0,0,
10,128,32,0,1,0,
0,0,4,0,0,0,
1,64,0,0,0,0,
0,0,30,0,0,8,
18,0,16,0,1,0,
0,0,10,0,16,128,
65,0,0,0,1,0,
0,0,26,0,16,0,
1,0,0,0,43,0,
0,5,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
49,0,0,7,18,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,10,0,16,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
26,16,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,9,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,16,16,0,
0,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,191,56,0,0,7,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
50,0,0,10,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,128,32,0,
1,0,0,0,4,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,9,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,64,1,64,0,0,
0,0,128,191,50,0,
0,10,34,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,0,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,191,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,191,56,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,50,0,0,10,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
4,0,0,0,10,0,
16,0,0,0,0,0,
50,0,0,10,34,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,128,32,0,
1,0,0,0,4,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,191,50,0,0,10,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
5,0,0,0,42,0,
16,0,0,0,0,0,
54,32,0,5,66,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
14,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,128,32,0,
1,0,0,0,3,0,
0,0,49,0,0,8,
18,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
3,0,0,0,0,0,
0,9,34,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
42,128,32,128,65,0,
0,0,1,0,0,0,
3,0,0,0,56,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,63,0,0,0,9,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,42,128,
32,128,65,0,0,0,
1,0,0,0,3,0,
0,0,14,0,0,7,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
0,0,0,7,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,63,55,0,
0,9,130,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,57,0,
0,8,18,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
42,128,32,0,1,0,
0,0,3,0,0,0,
55,0,0,9,66,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,50,0,
0,10,34,0,16,0,
1,0,0,0,42,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
1,64,0,0,0,0,
64,64,50,0,0,10,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,0,0,0,0,
50,0,0,10,66,0,
16,0,0,0,0,0,
26,128,32,0,1,0,
0,0,3,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,191,15,0,0,7,
130,0,16,0,0,0,
0,0,166,10,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
0,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,128,32,0,
1,0,0,0,3,0,
0,0,49,0,0,7,
34,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
15,0,0,8,66,0,
16,0,1,0,0,0,
166,138,32,0,1,0,
0,0,3,0,0,0,
166,10,16,0,0,0,
0,0,55,0,0,9,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,55,0,0,9,
34,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,54,32,0,5,
66,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,14,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
6,0,0,0,49,0,
0,8,66,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,6,0,0,0,
0,0,0,9,130,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,42,128,32,128,
65,0,0,0,1,0,
0,0,6,0,0,0,
56,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,9,18,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
42,128,32,128,65,0,
0,0,1,0,0,0,
6,0,0,0,14,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
55,0,0,9,130,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
57,0,0,8,66,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,63,42,128,32,0,
1,0,0,0,6,0,
0,0,55,0,0,9,
66,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
50,0,0,10,130,0,
16,0,1,0,0,0,
42,0,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,64,1,64,0,0,
0,0,64,64,50,0,
0,10,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,42,0,16,128,
65,0,0,0,0,0,
0,0,50,0,0,10,
66,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,6,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,191,15,0,
0,7,130,0,16,0,
0,0,0,0,6,0,
16,0,2,0,0,0,
246,15,16,0,0,0,
0,0,0,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
6,0,0,0,49,0,
0,7,130,0,16,0,
1,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,15,0,0,8,
18,0,16,0,2,0,
0,0,166,138,32,0,
1,0,0,0,6,0,
0,0,166,10,16,0,
0,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
10,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,14,0,
0,11,242,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
70,132,32,0,1,0,
0,0,2,0,0,0,
50,0,0,12,242,0,
16,0,3,0,0,0,
230,14,16,0,2,0,
0,0,2,64,0,0,
86,85,85,190,171,170,
234,190,85,85,149,62,
0,0,192,190,70,4,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,230,10,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,4,0,
0,0,50,0,0,12,
242,0,16,0,4,0,
0,0,230,14,16,0,
2,0,0,0,2,64,
0,0,168,170,42,61,
86,85,149,190,0,0,
192,190,86,85,85,190,
70,4,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,12,
242,0,16,0,4,0,
0,0,230,4,16,0,
2,0,0,0,2,64,
0,0,171,170,234,62,
0,0,0,190,0,0,
0,190,168,170,42,189,
70,4,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,13,
242,0,16,0,4,0,
0,0,70,14,16,128,
65,0,0,0,2,0,
0,0,2,64,0,0,
0,0,0,190,168,170,
42,189,171,170,234,62,
0,0,0,190,70,4,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,0,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,230,10,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,0,3,0,0,0,
50,0,0,13,242,0,
16,0,4,0,0,0,
230,14,16,128,65,0,
0,0,2,0,0,0,
2,64,0,0,0,0,
192,190,86,85,85,190,
168,170,42,61,86,85,
149,190,70,4,16,0,
1,0,0,0,50,0,
0,13,242,0,16,0,
1,0,0,0,230,14,
16,128,65,0,0,0,
2,0,0,0,2,64,
0,0,85,85,149,62,
0,0,192,190,86,85,
85,190,171,170,234,190,
70,4,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,10,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,171,170,170,61,
171,170,170,61,171,170,
170,61,0,0,0,0,
29,0,0,7,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,26,0,16,0,
0,0,0,0,49,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,55,0,0,9,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
1,64,0,0,0,0,
128,63,54,0,0,5,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,242,0,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,29,0,0,7,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,10,0,
16,0,0,0,0,0,
49,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,55,0,
0,9,18,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
255,255,255,255,55,0,
0,9,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,242,32,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,121,0,0,0,
6,0,0,0,0,0,
0,0,2,0,0,0,
87,0,0,0,2,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,12,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,14,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0
};


static const uint32_t sVertexHash[] = 
{
0x4959a50e,0x2b9ae7ec,0x1d0a907c,0x67afaa01,0xe7c3ae56,0x4debe5af,
0x97e4fa7a,0xf1129649
};


static const uint32_t sFragmentHash[] =
{
0x4babc0fd,0xa79ce08c,0x9940d2ca,0xa846061b,0x2a5747ff,0x24d6bec1,
0x831a2c81,0x79142549
};

}

namespace RetroArch
{
class CrtCrtEffectsShadersAnalogServiceMenuShaderDef : public ShaderDef
{
public:
	CrtCrtEffectsShadersAnalogServiceMenuShaderDef() : ShaderDef{}
	{
		Name = "analog-service-menu";
		VertexByteCode = RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sVertexByteCode);
		VertexHash = RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sVertexHash;
		FragmentByteCode = RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sFragmentByteCode);
		FragmentHash = RetroArchCrtCrtEffectsShadersAnalogServiceMenuShaderDefs::sFragmentHash;
		Format = "";
		AddParam("dummy1", -1, 108, 4, 0.000000f, 0.000010f, 0.000000f, 0.000010f, "======== Analog Service Menu Start ========");
		AddParam("hSize", -1, 92, 4, 0.000000f, 2.000000f, 1.000000f, 0.010000f, "H Size");
		AddParam("vSize", -1, 96, 4, 0.000000f, 2.000000f, 1.000000f, 0.010000f, "V Size");
		AddParam("hCenter", -1, 88, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "H Center");
		AddParam("vCenter", -1, 84, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "V Center");
		AddParam("vAngleStrengthY", -1, 80, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "H Angle");
		AddParam("vAngleStrengthX", -1, 76, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "V Angle");
		AddParam("pinPhaseStrengthX", -1, 60, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "H Pin Phase");
		AddParam("pinPhaseStrengthY", -1, 64, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "V Pin Phase");
		AddParam("pinCushionStrengthX", -1, 68, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "H Pin Cushion");
		AddParam("pinCushionStrengthY", -1, 72, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "V Pin Cushion");
		AddParam("scurveStrengthY", -1, 52, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "S-Curve Correction (Vert)");
		AddParam("inflectionY", -1, 56, 4, 0.000000f, 1.000000f, 0.500000f, 0.010000f, "S-Curve Inflection Point (Vert)");
		AddParam("scurveStrengthX", -1, 100, 4, -1.000000f, 1.000000f, 0.000000f, 0.010000f, "S-Curve Correction (Horz)");
		AddParam("inflectionX", -1, 104, 4, 0.000000f, 1.000000f, 0.500000f, 0.010000f, "S-Curve Inflection Point (Horz)");
		AddParam("dummy2", -1, 112, 4, 0.000000f, 0.000010f, 0.000000f, 0.000010f, "========= Analog Service Menu End =========");
		AddParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, "");
		AddParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, "");
		AddParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, "");
		AddParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, "");
		AddParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, "");
		AddSampler("Source", 2);
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
