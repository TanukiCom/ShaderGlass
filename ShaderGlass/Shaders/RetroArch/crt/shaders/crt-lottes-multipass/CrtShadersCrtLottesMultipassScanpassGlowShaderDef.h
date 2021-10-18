/*
ShaderGlass shader crt-shaders-crt-lottes-multipass\scanpass-glow imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-lottes-multipass/scanpass-glow.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// PUBLIC DOMAIN CRT STYLED SCAN-LINE SHADER
//
//   by Timothy Lottes
//
// This is more along the style of a really good CGA arcade monitor.
// With RGB inputs instead of NTSC.
// The shadow mask example has the mask rotated 90 degrees for less chromatic aberration.
//
// Left it unoptimized to show the theory behind the algorithm.
//
// It is an example what I personally would want as a display option for pixel art games.
// Please take and use, change, or whatever.
//Uncomment to reduce instructions with simpler linearization
//(fixes HD3000 Sandy Bridge IGP)
// ------------- //
// sRGB to Linear.
// Assuming using sRGB typed textures this should not be needed.
// Linear to sRGB.
// Assuming using sRGB typed textures this should not be needed.
// Nearest emulated sample given floating point position and texel offset.
// Also zero's off screen.
// Distance in emulated pixels to nearest texel.
// 1D Gaussian.
// 3-tap Gaussian filter along horz line.
// Convert distance to weight.
// Return filtered sample.
// 5-tap Gaussian filter along horz line.
// Convert distance to weight.
// Return filtered sample.
// 7-tap Gaussian filter along horz line.
// Convert distance to weight.
// Return filtered sample.
// Return scanline weight.
// Return scanline weight for bloom.
// Allow nearest three lines to effect pixel.
// Small bloom.
// Distortion of scanlines, and end of screen alpha.
// Shadow mask.
// Very compressed TV style shadow mask.
// Aperture-grille.
// Stretched VGA style shadow mask (same as prior shaders).
// VGA style shadow mask.
//Add Bloom
#ifdef GL_ES    /* TODO/FIXME - hacky clamp fix 

*/

#pragma once

namespace RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,18,13,
2,2,7,50,16,37,
145,248,210,134,124,164,
188,157,1,0,0,0,
128,4,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,104,2,
0,0,192,2,0,0,
228,3,0,0,82,68,
69,70,224,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
182,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
92,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,85,66,79,0,
92,0,0,0,4,0,
0,0,120,0,0,0,
112,0,0,0,0,0,
0,0,0,0,0,0,
24,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,44,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,80,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,108,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,144,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
108,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
164,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,108,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,103,108,
111,98,97,108,95,77,
86,80,0,102,108,111,
97,116,52,120,52,0,
2,0,3,0,4,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,35,1,0,0,
103,108,111,98,97,108,
95,79,117,116,112,117,
116,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
98,1,0,0,103,108,
111,98,97,108,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
103,108,111,98,97,108,
95,83,111,117,114,99,
101,83,105,122,101,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,15,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,80,0,0,0,
2,0,0,0,8,0,
0,0,56,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,65,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
28,1,0,0,80,0,
1,0,71,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,103,0,0,4,
242,32,16,0,1,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,56,0,0,10,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,2,64,
0,0,84,0,128,63,
84,0,128,63,0,0,
0,0,0,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
86,21,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,1,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,6,16,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,0,
16,0,0,0,0,0,
166,26,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,2,0,
0,0,70,14,16,0,
0,0,0,0,50,0,
0,10,242,32,16,0,
1,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,6,0,0,0,
1,0,0,0,0,0,
0,0,4,0,0,0,
5,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,114,221,
32,142,186,141,58,26,
56,84,212,189,158,145,
175,191,1,0,0,0,
200,27,0,0,5,0,
0,0,52,0,0,0,
192,6,0,0,12,7,
0,0,64,7,0,0,
44,27,0,0,82,68,
69,70,132,6,0,0,
2,0,0,0,168,1,
0,0,8,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
90,6,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
60,1,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,1,0,
0,0,85,1,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
0,0,1,0,0,0,
1,0,0,0,104,1,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
5,0,0,0,1,0,
0,0,1,0,0,0,
122,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,138,1,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,4,0,
0,0,1,0,0,0,
13,0,0,0,148,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
5,0,0,0,1,0,
0,0,13,0,0,0,
157,1,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,161,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,79,
82,73,71,95,76,73,
78,69,65,82,73,90,
69,68,95,115,97,109,
112,108,101,114,0,95,
66,108,111,111,109,80,
97,115,115,95,115,97,
109,112,108,101,114,0,
95,71,108,111,119,80,
97,115,115,95,115,97,
109,112,108,101,114,0,
79,82,73,71,95,76,
73,78,69,65,82,73,
90,69,68,0,66,108,
111,111,109,80,97,115,
115,0,71,108,111,119,
80,97,115,115,0,85,
66,79,0,80,117,115,
104,0,171,171,157,1,
0,0,4,0,0,0,
216,1,0,0,112,0,
0,0,0,0,0,0,
0,0,0,0,161,1,
0,0,14,0,0,0,
24,3,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,120,2,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,140,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,2,0,0,
64,0,0,0,16,0,
0,0,2,0,0,0,
204,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
240,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,204,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,4,3,
0,0,96,0,0,0,
16,0,0,0,2,0,
0,0,204,2,0,0,
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
131,2,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,194,2,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,171,171,
72,5,0,0,0,0,
0,0,4,0,0,0,
2,0,0,0,96,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,132,5,
0,0,4,0,0,0,
4,0,0,0,2,0,
0,0,96,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,146,5,0,0,
8,0,0,0,4,0,
0,0,2,0,0,0,
96,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
158,5,0,0,12,0,
0,0,4,0,0,0,
2,0,0,0,96,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,170,5,
0,0,16,0,0,0,
4,0,0,0,2,0,
0,0,96,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,185,5,0,0,
20,0,0,0,4,0,
0,0,2,0,0,0,
96,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
201,5,0,0,24,0,
0,0,4,0,0,0,
0,0,0,0,96,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,226,5,
0,0,28,0,0,0,
4,0,0,0,2,0,
0,0,96,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,243,5,0,0,
32,0,0,0,4,0,
0,0,2,0,0,0,
96,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
5,6,0,0,36,0,
0,0,4,0,0,0,
0,0,0,0,96,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,25,6,
0,0,40,0,0,0,
4,0,0,0,0,0,
0,0,96,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,44,6,0,0,
44,0,0,0,4,0,
0,0,2,0,0,0,
96,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
62,6,0,0,48,0,
0,0,4,0,0,0,
2,0,0,0,96,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,74,6,
0,0,52,0,0,0,
4,0,0,0,2,0,
0,0,96,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,95,104,97,114,100,
83,99,97,110,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,87,5,
0,0,112,97,114,97,
109,95,104,97,114,100,
80,105,120,0,112,97,
114,97,109,95,119,97,
114,112,88,0,112,97,
114,97,109,95,119,97,
114,112,89,0,112,97,
114,97,109,95,109,97,
115,107,68,97,114,107,
0,112,97,114,97,109,
95,109,97,115,107,76,
105,103,104,116,0,112,
97,114,97,109,95,115,
99,97,108,101,73,110,
76,105,110,101,97,114,
71,97,109,109,97,0,
112,97,114,97,109,95,
115,104,97,100,111,119,
77,97,115,107,0,112,
97,114,97,109,95,98,
114,105,103,104,116,66,
111,111,115,116,0,112,
97,114,97,109,95,104,
97,114,100,66,108,111,
111,109,83,99,97,110,
0,112,97,114,97,109,
95,104,97,114,100,66,
108,111,111,109,80,105,
120,0,112,97,114,97,
109,95,98,108,111,111,
109,65,109,111,117,110,
116,0,112,97,114,97,
109,95,115,104,97,112,
101,0,112,97,114,97,
109,95,68,73,70,70,
85,83,73,79,78,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,68,0,
0,0,2,0,0,0,
8,0,0,0,56,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
12,0,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,0,
0,0,83,86,95,84,
97,114,103,101,116,0,
171,171,83,72,69,88,
228,19,0,0,80,0,
0,0,249,4,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,7,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
90,0,0,3,0,96,
16,0,4,0,0,0,
90,0,0,3,0,96,
16,0,5,0,0,0,
88,24,0,4,0,112,
16,0,3,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
4,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,5,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,10,0,
0,0,50,0,0,15,
50,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,0,0,0,0,
0,0,56,0,0,7,
194,0,16,0,0,0,
0,0,86,1,16,0,
0,0,0,0,86,1,
16,0,0,0,0,0,
50,0,0,13,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,166,142,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,56,0,
0,7,50,0,16,0,
0,0,0,0,230,10,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,50,0,0,15,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,6,4,16,0,
0,0,0,0,6,132,
32,0,0,0,0,0,
6,0,0,0,50,0,
0,13,242,0,16,0,
1,0,0,0,70,4,
16,0,0,0,0,0,
70,132,32,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,0,0,0,0,
128,191,65,0,0,5,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,0,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,14,0,0,8,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,70,132,
32,0,0,0,0,0,
6,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
56,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,6,128,32,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
6,128,32,0,1,0,
0,0,2,0,0,0,
50,0,0,13,242,0,
16,0,3,0,0,0,
70,4,16,0,0,0,
0,0,70,132,32,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,191,0,0,0,192,
0,0,0,0,65,0,
0,5,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
0,0,0,10,242,0,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,14,0,
0,8,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
70,132,32,0,0,0,
0,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,56,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,65,0,
0,5,114,0,16,0,
5,0,0,0,166,11,
16,0,0,0,0,0,
50,0,0,11,194,0,
16,0,0,0,0,0,
6,4,16,0,0,0,
0,0,6,132,32,0,
0,0,0,0,6,0,
0,0,6,8,16,128,
65,0,0,0,5,0,
0,0,0,0,0,10,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,191,0,0,0,191,
0,0,0,11,242,0,
16,0,6,0,0,0,
166,10,16,128,65,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,63,
0,0,0,192,0,0,
0,64,47,0,0,6,
242,0,16,0,6,0,
0,0,70,14,16,128,
129,0,0,0,6,0,
0,0,56,0,0,8,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,6,128,
32,0,1,0,0,0,
3,0,0,0,25,0,
0,5,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
56,0,0,8,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,86,133,32,0,
1,0,0,0,0,0,
0,0,47,0,0,6,
50,0,16,0,3,0,
0,0,230,10,16,128,
129,0,0,0,0,0,
0,0,56,0,0,8,
50,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,6,128,
32,0,1,0,0,0,
3,0,0,0,25,0,
0,5,50,0,16,0,
3,0,0,0,70,0,
16,0,3,0,0,0,
56,0,0,8,50,0,
16,0,3,0,0,0,
70,0,16,0,3,0,
0,0,22,133,32,0,
1,0,0,0,0,0,
0,0,25,0,0,5,
50,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,25,0,
0,5,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,6,0,16,0,
3,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
6,0,16,0,6,0,
0,0,70,2,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,4,0,0,0,
86,5,16,0,6,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,10,0,
16,0,3,0,0,0,
10,0,16,0,6,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,26,0,16,0,
6,0,0,0,42,0,
16,0,0,0,0,0,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,166,10,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,3,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
56,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,6,128,32,0,
1,0,0,0,2,0,
0,0,50,0,0,13,
242,0,16,0,4,0,
0,0,70,4,16,0,
0,0,0,0,70,132,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,0,0,0,
128,63,0,0,0,0,
65,0,0,5,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,0,0,0,10,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
14,0,0,8,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,70,132,32,0,
0,0,0,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
7,0,0,0,70,2,
16,0,7,0,0,0,
6,128,32,0,1,0,
0,0,2,0,0,0,
0,0,0,10,194,0,
16,0,3,0,0,0,
86,9,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,63,
0,0,0,63,14,0,
0,8,194,0,16,0,
3,0,0,0,166,14,
16,0,3,0,0,0,
6,132,32,0,0,0,
0,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
3,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,56,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
56,0,0,8,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,6,128,32,0,
1,0,0,0,2,0,
0,0,50,0,0,13,
242,0,16,0,8,0,
0,0,70,4,16,0,
0,0,0,0,70,132,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
128,191,0,0,128,63,
65,0,0,5,242,0,
16,0,8,0,0,0,
70,14,16,0,8,0,
0,0,0,0,0,10,
242,0,16,0,8,0,
0,0,70,14,16,0,
8,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
14,0,0,8,242,0,
16,0,8,0,0,0,
70,14,16,0,8,0,
0,0,70,132,32,0,
0,0,0,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
9,0,0,0,70,0,
16,0,8,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
9,0,0,0,70,2,
16,0,9,0,0,0,
6,128,32,0,1,0,
0,0,2,0,0,0,
56,0,0,7,114,0,
16,0,7,0,0,0,
6,0,16,0,6,0,
0,0,70,2,16,0,
7,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
166,10,16,0,6,0,
0,0,70,2,16,0,
7,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
6,0,16,0,3,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
86,5,16,0,6,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
2,0,0,0,70,2,
16,0,9,0,0,0,
246,15,16,0,6,0,
0,0,70,2,16,0,
2,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,10,0,
16,0,6,0,0,0,
42,0,16,0,6,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,10,0,16,0,
3,0,0,0,58,0,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
26,0,16,0,6,0,
0,0,58,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,6,0,0,0,
58,0,16,0,1,0,
0,0,14,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,230,10,16,0,
8,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,56,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,50,0,
0,13,242,0,16,0,
5,0,0,0,70,4,
16,0,0,0,0,0,
70,132,32,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,65,0,0,5,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,0,0,
0,10,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,14,0,0,8,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,70,132,
32,0,0,0,0,0,
6,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
70,0,16,0,5,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
56,0,0,8,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,6,128,32,0,
1,0,0,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
6,128,32,0,1,0,
0,0,2,0,0,0,
56,0,0,7,210,0,
16,0,3,0,0,0,
6,0,16,0,3,0,
0,0,6,9,16,0,
7,0,0,0,50,0,
0,9,210,0,16,0,
3,0,0,0,6,9,
16,0,4,0,0,0,
6,0,16,0,6,0,
0,0,6,14,16,0,
3,0,0,0,50,0,
0,9,210,0,16,0,
3,0,0,0,6,9,
16,0,5,0,0,0,
86,5,16,0,6,0,
0,0,6,14,16,0,
3,0,0,0,14,0,
0,7,210,0,16,0,
3,0,0,0,6,14,
16,0,3,0,0,0,
166,10,16,0,0,0,
0,0,0,0,0,11,
194,0,16,0,0,0,
0,0,246,15,16,128,
65,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,191,
0,0,128,63,47,0,
0,6,194,0,16,0,
0,0,0,0,166,14,
16,128,129,0,0,0,
0,0,0,0,56,0,
0,8,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,3,0,0,0,
25,0,0,5,194,0,
16,0,0,0,0,0,
166,14,16,0,0,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,25,0,
0,5,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
86,5,16,0,3,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,134,3,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,0,16,0,0,0,
0,0,70,126,16,0,
5,0,0,0,0,96,
16,0,5,0,0,0,
49,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,58,128,32,0,
1,0,0,0,1,0,
0,0,31,0,4,3,
42,0,16,0,0,0,
0,0,14,0,0,8,
114,0,16,0,3,0,
0,0,22,21,16,0,
0,0,0,0,182,143,
32,0,0,0,0,0,
4,0,0,0,24,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
58,128,32,0,1,0,
0,0,1,0,0,0,
31,0,4,3,42,0,
16,0,0,0,0,0,
56,0,0,10,114,0,
16,0,4,0,0,0,
86,5,16,0,3,0,
0,0,2,64,0,0,
182,170,42,62,182,170,
170,62,182,170,170,62,
0,0,0,0,26,0,
0,5,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
49,0,0,10,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
0,0,0,63,250,126,
170,62,250,126,42,63,
0,0,0,0,1,0,
0,7,66,0,16,0,
0,0,0,0,10,0,
16,0,4,0,0,0,
1,64,0,0,0,0,
128,63,50,0,0,9,
66,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,1,64,
0,0,8,0,128,63,
42,0,16,0,0,0,
0,0,56,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
26,0,0,5,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,49,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
55,0,0,11,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,26,128,32,0,
1,0,0,0,1,0,
0,0,55,0,0,11,
98,0,16,0,5,0,
0,0,166,10,16,0,
4,0,0,0,86,132,
32,0,1,0,0,0,
1,0,0,0,6,129,
32,0,1,0,0,0,
1,0,0,0,54,0,
0,6,18,0,16,0,
5,0,0,0,10,128,
32,0,1,0,0,0,
1,0,0,0,55,0,
0,10,114,0,16,0,
4,0,0,0,86,5,
16,0,4,0,0,0,
22,132,32,0,1,0,
0,0,1,0,0,0,
70,2,16,0,5,0,
0,0,56,0,0,7,
114,0,16,0,4,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,4,0,0,0,
18,0,0,1,24,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
58,128,32,0,1,0,
0,0,1,0,0,0,
31,0,4,3,42,0,
16,0,0,0,0,0,
56,0,0,7,66,0,
16,0,0,0,0,0,
26,0,16,0,3,0,
0,0,1,64,0,0,
182,170,170,62,26,0,
0,5,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
49,0,0,10,194,0,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,250,126,170,62,
250,126,42,63,55,0,
0,11,98,0,16,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
86,132,32,0,1,0,
0,0,1,0,0,0,
6,129,32,0,1,0,
0,0,1,0,0,0,
54,0,0,6,18,0,
16,0,5,0,0,0,
10,128,32,0,1,0,
0,0,1,0,0,0,
55,0,0,10,114,0,
16,0,4,0,0,0,
166,10,16,0,0,0,
0,0,22,132,32,0,
1,0,0,0,1,0,
0,0,70,2,16,0,
5,0,0,0,18,0,
0,1,56,0,0,10,
210,0,16,0,3,0,
0,0,6,9,16,0,
3,0,0,0,2,64,
0,0,12,0,64,64,
0,0,0,0,8,0,
128,63,8,0,0,63,
50,0,0,9,66,0,
16,0,0,0,0,0,
26,0,16,0,3,0,
0,0,1,64,0,0,
8,0,128,63,10,0,
16,0,3,0,0,0,
56,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
171,170,42,62,26,0,
0,5,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
49,0,0,10,194,0,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,250,126,170,62,
250,126,42,63,55,0,
0,11,98,0,16,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
86,132,32,0,1,0,
0,0,1,0,0,0,
6,129,32,0,1,0,
0,0,1,0,0,0,
54,0,0,6,18,0,
16,0,5,0,0,0,
10,128,32,0,1,0,
0,0,1,0,0,0,
55,0,0,10,114,0,
16,0,5,0,0,0,
166,10,16,0,0,0,
0,0,22,132,32,0,
1,0,0,0,1,0,
0,0,70,2,16,0,
5,0,0,0,24,0,
0,11,194,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
64,64,0,0,128,64,
246,143,32,0,1,0,
0,0,1,0,0,0,
65,0,0,5,50,0,
16,0,3,0,0,0,
230,10,16,0,3,0,
0,0,50,0,0,9,
130,0,16,0,1,0,
0,0,26,0,16,0,
3,0,0,0,1,64,
0,0,0,0,64,64,
10,0,16,0,3,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,171,170,42,62,
26,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,49,0,0,10,
50,0,16,0,3,0,
0,0,246,15,16,0,
1,0,0,0,2,64,
0,0,250,126,170,62,
250,126,42,63,0,0,
0,0,0,0,0,0,
55,0,0,11,98,0,
16,0,6,0,0,0,
86,5,16,0,3,0,
0,0,86,132,32,0,
1,0,0,0,1,0,
0,0,6,129,32,0,
1,0,0,0,1,0,
0,0,54,0,0,6,
18,0,16,0,6,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,55,0,0,10,
114,0,16,0,3,0,
0,0,6,0,16,0,
3,0,0,0,22,132,
32,0,1,0,0,0,
1,0,0,0,70,2,
16,0,6,0,0,0,
55,0,0,10,114,0,
16,0,3,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
3,0,0,0,6,128,
32,0,1,0,0,0,
1,0,0,0,55,0,
0,9,114,0,16,0,
4,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
3,0,0,0,21,0,
0,1,21,0,0,1,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,21,0,
0,1,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,4,0,
0,0,0,96,16,0,
4,0,0,0,50,0,
0,10,114,0,16,0,
0,0,0,0,246,143,
32,0,1,0,0,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,56,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,47,186,232,62,
47,186,232,62,47,186,
232,62,0,0,0,0,
25,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,153,0,
0,0,10,0,0,0,
0,0,0,0,2,0,
0,0,114,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
13,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
11,0,0,0,12,0,
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
0,0
};

}

namespace RetroArch
{
class CrtShadersCrtLottesMultipassScanpassGlowShaderDef : public ShaderDef
{
public:
	CrtShadersCrtLottesMultipassScanpassGlowShaderDef() : ShaderDef{}
	{
		Name = "scanpass-glow";
		VertexByteCode = RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtLottesMultipassScanpassGlowShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("hardScan", -1, 0, 4, -20.000000f, 0.000000f, -8.000000f));
		Params.push_back(ShaderParam("hardPix", -1, 4, 4, -20.000000f, 0.000000f, -3.000000f));
		Params.push_back(ShaderParam("warpX", -1, 8, 4, 0.000000f, 0.125000f, 0.031000f));
		Params.push_back(ShaderParam("warpY", -1, 12, 4, 0.000000f, 0.125000f, 0.041000f));
		Params.push_back(ShaderParam("maskDark", -1, 16, 4, 0.000000f, 2.000000f, 0.500000f));
		Params.push_back(ShaderParam("maskLight", -1, 20, 4, 0.000000f, 2.000000f, 1.500000f));
		Params.push_back(ShaderParam("scaleInLinearGamma", -1, 24, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("shadowMask", -1, 28, 4, 0.000000f, 4.000000f, 3.000000f));
		Params.push_back(ShaderParam("brightBoost", -1, 32, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("hardBloomPix", -1, 40, 4, -2.000000f, -0.500000f, -1.500000f));
		Params.push_back(ShaderParam("hardBloomScan", -1, 36, 4, -4.000000f, -1.000000f, -2.000000f));
		Params.push_back(ShaderParam("bloomAmount", -1, 44, 4, 0.000000f, 1.000000f, 0.400000f));
		Params.push_back(ShaderParam("shape", -1, 48, 4, 0.000000f, 10.000000f, 2.000000f));
		Params.push_back(ShaderParam("DIFFUSION", -1, 52, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("ORIG_LINEARIZED", 3));
		Samplers.push_back(ShaderSampler("GlowPass", 5));
		Samplers.push_back(ShaderSampler("BloomPass", 4));
		Samplers.push_back(ShaderSampler("Source", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
