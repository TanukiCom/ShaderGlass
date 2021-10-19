/*
ShaderGlass shader reshade-shaders-bloom\LensFlarePass2 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/reshade/shaders/bloom/LensFlarePass2.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

//Linear add\0Screen add\0Screen/Lighten/Opacity\0Lighten\0
//Every pixel brighter than this value triggers bloom.
//Intensity of bloom.
//Bloom saturation. 0.0 means white bloom, 2.0 means very, very colorful bloom.
//R, G and B components of bloom tint the bloom color gets shifted to.
//Linear add\0Screen add\0Screen/Lighten/Opacity\0Lighten\0
//Intensity of lensdirt.
//Color saturation of lensdirt.
//R, G and B components of lensdirt tint the lensdirt color gets shifted to.
//Every pixel brighter than this value gets a flare.
//Horizontal wideness of flare. Don't set too high, otherwise the single samples are visible.
//Intensity of anamorphic flare.
//Intensity curve of flare with distance from source.
//R, G and B components of anamorphic flare. Flare is always same color.
//Power of lens flare effect
//Minimum brightness an object must have to cast lensflare.
//Brightness threshold for lensflare generation. Everything brighter than this value gets a flare.
//Number of single halos to be generated. If set to 0, only the curved halo around is visible.
//Distance from screen center (and from themselves) the flares are generated.
//Distance (from screen center) the halo and flares are generated.
//Offset of RGB components of flares as modifier for Chromatic abberation. Same 3 values means no CA.
//Intensity of flares and halo, remember that higher threshold lowers intensity, you might play with both values to get desired result.
//How fast they decay. It's logarithmic, 1.0 means infinite long rays which will cover whole screen
//Upscales the godray's brightness
//weighting
//Density of rays, higher means more and brighter rays
//Minimum brightness an object must have to cast godrays
//2^x format values; How many samples the godrays get
//bright pass luminance value
//manages the size of the flare
//effect intensity
//effect tint RGB
// If 1, only pixels with depth = 1 get lens flares
// This prevents white objects from getting lens flares sources, which would normally happen in LDR
 This isn't something RA has, so just comment it out
#if CHAPMAN_DEPTH_CHECK
if (textureLod(ReShade::DepthBuffer, vec4(coords.xy, 0, 3)).x < 0.99999)
color = 0;
#endif

 This isn't something RA has, so just comment it out
#if FLARE_DEPTH_CHECK
float checkdepth = tex2D(ReShade::DepthBuffer, coords).x;
if (checkdepth < 0.99999)
result = 0;
#endif


*/

#pragma once

namespace RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,129,210,
110,155,166,41,74,35,
74,44,2,9,130,21,
158,23,1,0,0,0,
100,15,0,0,5,0,
0,0,52,0,0,0,
20,13,0,0,96,13,
0,0,184,13,0,0,
200,14,0,0,82,68,
69,70,216,12,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
174,12,0,0,82,68,
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
92,0,0,0,48,0,
0,0,120,0,0,0,
0,1,0,0,0,0,
0,0,0,0,0,0,
248,7,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,12,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,48,8,
0,0,64,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,8,0,0,
68,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
135,8,0,0,72,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,155,8,
0,0,76,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,179,8,0,0,
80,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
199,8,0,0,84,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,219,8,
0,0,88,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,239,8,0,0,
92,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
13,9,0,0,96,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,37,9,
0,0,100,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,63,9,0,0,
104,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
90,9,0,0,108,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,113,9,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,9,0,0,
116,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
159,9,0,0,120,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,190,9,
0,0,124,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,217,9,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
243,9,0,0,132,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,11,10,
0,0,136,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,34,10,0,0,
140,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
59,10,0,0,144,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,84,10,
0,0,148,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,109,10,0,0,
152,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
135,10,0,0,156,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,157,10,
0,0,160,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,179,10,0,0,
164,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
210,10,0,0,168,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,237,10,
0,0,172,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,4,11,0,0,
176,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
31,11,0,0,180,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,53,11,
0,0,184,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,75,11,0,0,
188,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
97,11,0,0,192,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,119,11,
0,0,196,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,146,11,0,0,
200,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
174,11,0,0,204,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,194,11,
0,0,208,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,217,11,0,0,
212,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
238,11,0,0,216,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,4,12,
0,0,220,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,28,12,0,0,
224,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
50,12,0,0,228,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,73,12,
0,0,232,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,91,12,0,0,
236,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
114,12,0,0,240,0,
0,0,4,0,0,0,
0,0,0,0,76,8,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,134,12,
0,0,244,0,0,0,
4,0,0,0,0,0,
0,0,76,8,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,154,12,0,0,
248,0,0,0,4,0,
0,0,0,0,0,0,
76,8,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,8,
0,0,103,108,111,98,
97,108,95,105,66,108,
111,111,109,77,105,120,
109,111,100,101,0,102,
108,111,97,116,0,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,69,8,0,0,
103,108,111,98,97,108,
95,102,66,108,111,111,
109,84,104,114,101,115,
104,111,108,100,0,103,
108,111,98,97,108,95,
102,66,108,111,111,109,
65,109,111,117,110,116,
0,103,108,111,98,97,
108,95,102,66,108,111,
111,109,83,97,116,117,
114,97,116,105,111,110,
0,103,108,111,98,97,
108,95,102,66,108,111,
111,109,84,105,110,116,
95,114,0,103,108,111,
98,97,108,95,102,66,
108,111,111,109,84,105,
110,116,95,103,0,103,
108,111,98,97,108,95,
102,66,108,111,111,109,
84,105,110,116,95,98,
0,103,108,111,98,97,
108,95,98,76,101,110,
115,100,105,114,116,69,
110,97,98,108,101,95,
116,111,103,103,108,101,
0,103,108,111,98,97,
108,95,105,76,101,110,
115,100,105,114,116,77,
105,120,109,111,100,101,
0,103,108,111,98,97,
108,95,102,76,101,110,
115,100,105,114,116,73,
110,116,101,110,115,105,
116,121,0,103,108,111,
98,97,108,95,102,76,
101,110,115,100,105,114,
116,83,97,116,117,114,
97,116,105,111,110,0,
103,108,111,98,97,108,
95,102,76,101,110,115,
100,105,114,116,84,105,
110,116,95,114,0,103,
108,111,98,97,108,95,
102,76,101,110,115,100,
105,114,116,84,105,110,
116,95,103,0,103,108,
111,98,97,108,95,102,
76,101,110,115,100,105,
114,116,84,105,110,116,
95,98,0,103,108,111,
98,97,108,95,98,65,
110,97,109,70,108,97,
114,101,69,110,97,98,
108,101,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,102,
65,110,97,109,70,108,
97,114,101,84,104,114,
101,115,104,111,108,100,
0,103,108,111,98,97,
108,95,102,65,110,97,
109,70,108,97,114,101,
87,105,100,101,110,101,
115,115,0,103,108,111,
98,97,108,95,102,65,
110,97,109,70,108,97,
114,101,65,109,111,117,
110,116,0,103,108,111,
98,97,108,95,102,65,
110,97,109,70,108,97,
114,101,67,117,114,118,
101,0,103,108,111,98,
97,108,95,102,65,110,
97,109,70,108,97,114,
101,67,111,108,111,114,
95,114,0,103,108,111,
98,97,108,95,102,65,
110,97,109,70,108,97,
114,101,67,111,108,111,
114,95,103,0,103,108,
111,98,97,108,95,102,
65,110,97,109,70,108,
97,114,101,67,111,108,
111,114,95,98,0,103,
108,111,98,97,108,95,
98,76,101,110,122,69,
110,97,98,108,101,95,
116,111,103,103,108,101,
0,103,108,111,98,97,
108,95,102,76,101,110,
122,73,110,116,101,110,
115,105,116,121,0,103,
108,111,98,97,108,95,
102,76,101,110,122,84,
104,114,101,115,104,111,
108,100,0,103,108,111,
98,97,108,95,98,67,
104,97,112,70,108,97,
114,101,69,110,97,98,
108,101,95,116,111,103,
103,108,101,0,103,108,
111,98,97,108,95,102,
67,104,97,112,70,108,
97,114,101,84,104,114,
101,115,104,111,108,100,
0,103,108,111,98,97,
108,95,105,67,104,97,
112,70,108,97,114,101,
67,111,117,110,116,0,
103,108,111,98,97,108,
95,102,67,104,97,112,
70,108,97,114,101,68,
105,115,112,101,114,115,
97,108,0,103,108,111,
98,97,108,95,102,67,
104,97,112,70,108,97,
114,101,83,105,122,101,
0,103,108,111,98,97,
108,95,102,67,104,97,
112,70,108,97,114,101,
67,65,95,114,0,103,
108,111,98,97,108,95,
102,67,104,97,112,70,
108,97,114,101,67,65,
95,103,0,103,108,111,
98,97,108,95,102,67,
104,97,112,70,108,97,
114,101,67,65,95,98,
0,103,108,111,98,97,
108,95,102,67,104,97,
112,70,108,97,114,101,
73,110,116,101,110,115,
105,116,121,0,103,108,
111,98,97,108,95,98,
71,111,100,114,97,121,
69,110,97,98,108,101,
95,116,111,103,103,108,
101,0,103,108,111,98,
97,108,95,102,71,111,
100,114,97,121,68,101,
99,97,121,0,103,108,
111,98,97,108,95,102,
71,111,100,114,97,121,
69,120,112,111,115,117,
114,101,0,103,108,111,
98,97,108,95,102,71,
111,100,114,97,121,87,
101,105,103,104,116,0,
103,108,111,98,97,108,
95,102,71,111,100,114,
97,121,68,101,110,115,
105,116,121,0,103,108,
111,98,97,108,95,102,
71,111,100,114,97,121,
84,104,114,101,115,104,
111,108,100,0,103,108,
111,98,97,108,95,105,
71,111,100,114,97,121,
83,97,109,112,108,101,
115,0,103,108,111,98,
97,108,95,102,70,108,
97,114,101,76,117,109,
105,110,97,110,99,101,
0,103,108,111,98,97,
108,95,102,70,108,97,
114,101,66,108,117,114,
0,103,108,111,98,97,
108,95,102,70,108,97,
114,101,73,110,116,101,
110,115,105,116,121,0,
103,108,111,98,97,108,
95,102,70,108,97,114,
101,84,105,110,116,95,
114,0,103,108,111,98,
97,108,95,102,70,108,
97,114,101,84,105,110,
116,95,103,0,103,108,
111,98,97,108,95,102,
70,108,97,114,101,84,
105,110,116,95,98,0,
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
8,1,0,0,80,0,
1,0,66,0,0,0,
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
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,56,0,
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
6,0,0,0,1,0,
0,0,0,0,0,0,
4,0,0,0,4,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,199,18,
203,106,233,5,245,25,
111,35,59,188,47,176,
2,172,1,0,0,0,
40,6,0,0,5,0,
0,0,52,0,0,0,
120,2,0,0,172,2,
0,0,224,2,0,0,
140,5,0,0,82,68,
69,70,60,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
20,2,0,0,82,68,
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
0,0,4,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,112,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,140,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
140,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,1,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,140,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,214,1,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,240,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,130,1,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,70,114,97,
109,101,67,111,117,110,
116,0,100,119,111,114,
100,0,171,171,0,0,
19,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
232,1,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,164,2,0,0,
80,0,0,0,169,0,
0,0,106,8,0,1,
53,24,0,0,46,0,
0,0,220,45,169,61,
0,0,0,0,0,0,
0,0,0,0,0,0,
69,215,165,61,0,0,
0,0,0,0,0,0,
0,0,0,0,151,54,
156,61,0,0,0,0,
0,0,0,0,0,0,
0,0,94,101,141,61,
0,0,0,0,0,0,
0,0,0,0,0,0,
241,245,117,61,0,0,
0,0,0,0,0,0,
0,0,0,0,226,144,
77,61,0,0,0,0,
0,0,0,0,0,0,
0,0,231,23,37,61,
0,0,0,0,0,0,
0,0,0,0,0,0,
234,207,254,60,0,0,
0,0,0,0,0,0,
0,0,0,0,232,244,
188,60,0,0,0,0,
0,0,0,0,0,0,
0,0,202,164,134,60,
0,0,0,0,0,0,
0,0,0,0,0,0,
178,98,56,60,0,0,
0,0,0,0,0,0,
0,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,1,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,3,0,
0,0,54,0,0,5,
34,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,54,0,
0,8,242,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
1,64,0,0,246,255,
255,255,48,0,0,1,
33,0,0,7,130,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
11,0,0,0,3,0,
4,3,58,0,16,0,
0,0,0,0,36,0,
0,8,130,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
43,0,0,5,18,0,
16,0,2,0,0,0,
42,0,16,0,0,0,
0,0,56,0,0,8,
18,0,16,0,2,0,
0,0,10,0,16,0,
2,0,0,0,42,128,
32,0,1,0,0,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,64,0,0,0,7,
50,0,16,0,2,0,
0,0,70,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
72,0,0,141,194,0,
0,128,67,85,21,0,
242,0,16,0,2,0,
0,0,70,0,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,10,242,0,16,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
6,144,144,0,58,0,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,30,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,1,0,0,0,
22,0,0,1,54,0,
0,5,242,32,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
17,0,0,0,3,0,
0,0,11,0,0,0,
2,0,0,0,4,0,
0,0,3,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class ReshadeShadersBloomLensFlarePass2ShaderDef : public ShaderDef
{
public:
	ReshadeShadersBloomLensFlarePass2ShaderDef() : ShaderDef{}
	{
		Name = "LensFlarePass2";
		VertexByteCode = RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchReshadeShadersBloomLensFlarePass2ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("bLensdirtEnable_toggle", 0, 92, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Lens Dirt Enable"));
		Params.push_back(ShaderParam("bAnamFlareEnable_toggle", 0, 120, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Anam Flare Enable"));
		Params.push_back(ShaderParam("bLenzEnable_toggle", 0, 152, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Lenz Enable"));
		Params.push_back(ShaderParam("bChapFlareEnable_toggle", 0, 164, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Chap Flare Enable"));
		Params.push_back(ShaderParam("bGodrayEnable_toggle", 0, 200, 4, 0.000000f, 1.000000f, 0.000000f, 1.000000f, "Godray Enable"));
		Params.push_back(ShaderParam("iBloomMixmode", 0, 64, 4, 0.000000f, 2.000000f, 0.000000f, 1.000000f, "Bloom Mix Mode"));
		Params.push_back(ShaderParam("fBloomThreshold", 0, 68, 4, 0.100000f, 1.000000f, 0.800000f, 0.100000f, "Bloom Threshold"));
		Params.push_back(ShaderParam("fBloomAmount", 0, 72, 4, 0.000000f, 20.000000f, 0.800000f, 0.100000f, "Bloom Amount"));
		Params.push_back(ShaderParam("fBloomSaturation", 0, 76, 4, 0.000000f, 2.000000f, 0.800000f, 0.100000f, "Bloom Saturation"));
		Params.push_back(ShaderParam("fBloomTint_r", 0, 80, 4, 0.000000f, 1.000000f, 0.700000f, 0.050000f, "Bloom Tint R"));
		Params.push_back(ShaderParam("fBloomTint_g", 0, 84, 4, 0.000000f, 1.000000f, 0.800000f, 0.050000f, "Bloom Tint G"));
		Params.push_back(ShaderParam("fBloomTint_b", 0, 88, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Bloom Tint B"));
		Params.push_back(ShaderParam("iLensdirtMixmode", 0, 96, 4, 0.000000f, 3.000000f, 0.000000f, 1.000000f, "Lens Dirt Mix Mode"));
		Params.push_back(ShaderParam("fLensdirtIntensity", 0, 100, 4, 0.000000f, 2.000000f, 0.400000f, 0.100000f, "Lens Dirt Intensity"));
		Params.push_back(ShaderParam("fLensdirtSaturation", 0, 104, 4, 0.000000f, 2.000000f, 2.000000f, 0.100000f, "Lens Dirt Saturation"));
		Params.push_back(ShaderParam("fLensdirtTint_r", 0, 108, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Lens Dirt Tint R"));
		Params.push_back(ShaderParam("fLensdirtTint_g", 0, 112, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Lens Dirt Tint G"));
		Params.push_back(ShaderParam("fLensdirtTint_b", 0, 116, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Lens Dirt Tint B"));
		Params.push_back(ShaderParam("fAnamFlareThreshold", 0, 124, 4, 0.100000f, 1.000000f, 0.900000f, 0.100000f, "Anam Flare Threshold"));
		Params.push_back(ShaderParam("fAnamFlareWideness", 0, 128, 4, 1.000000f, 2.500000f, 2.400000f, 0.100000f, "Anam Flare Width"));
		Params.push_back(ShaderParam("fAnamFlareAmount", 0, 132, 4, 1.000000f, 20.000000f, 14.500000f, 0.500000f, "Anam Flare Amt"));
		Params.push_back(ShaderParam("fAnamFlareCurve", 0, 136, 4, 1.000000f, 2.000000f, 1.200000f, 0.100000f, "Anam Flare Curve"));
		Params.push_back(ShaderParam("fAnamFlareColor_r", 0, 140, 4, 0.000000f, 1.000000f, 0.012000f, 0.010000f, "Anam Flare Col R"));
		Params.push_back(ShaderParam("fAnamFlareColor_g", 0, 144, 4, 0.000000f, 1.000000f, 0.313000f, 0.010000f, "Anam Flare Col G"));
		Params.push_back(ShaderParam("fAnamFlareColor_b", 0, 148, 4, 0.000000f, 1.000000f, 0.588000f, 0.010000f, "Anam Flare Col B"));
		Params.push_back(ShaderParam("fLenzIntensity", 0, 156, 4, 0.200000f, 3.000000f, 1.000000f, 0.100000f, "Lenz Intensity"));
		Params.push_back(ShaderParam("fLenzThreshold", 0, 160, 4, 0.600000f, 1.000000f, 0.800000f, 0.100000f, "Lenz Threshold"));
		Params.push_back(ShaderParam("fChapFlareThreshold", 0, 168, 4, 0.700000f, 0.990000f, 0.900000f, 0.050000f, "Chap Flare Threshold"));
		Params.push_back(ShaderParam("iChapFlareCount", 0, 172, 4, 1.000000f, 20.000000f, 15.000000f, 1.000000f, "Chap Flare Count"));
		Params.push_back(ShaderParam("fChapFlareDispersal", 0, 176, 4, 0.250000f, 1.000000f, 0.250000f, 0.050000f, "Chap Flare Dispersal"));
		Params.push_back(ShaderParam("fChapFlareSize", 0, 180, 4, 0.200000f, 0.800000f, 0.450000f, 0.050000f, "Chap Flare Size"));
		Params.push_back(ShaderParam("fChapFlareCA_r", 0, 184, 4, 0.000000f, 1.000000f, 0.000000f, 0.010000f, "Chap Flare CA R"));
		Params.push_back(ShaderParam("fChapFlareCA_g", 0, 188, 4, 0.000000f, 1.000000f, 0.010000f, 0.010000f, "Chap Flare CA G"));
		Params.push_back(ShaderParam("fChapFlareCA_b", 0, 192, 4, 0.000000f, 1.000000f, 0.020000f, 0.010000f, "Chap Flare CA B"));
		Params.push_back(ShaderParam("fChapFlareIntensity", 0, 196, 4, 5.000000f, 200.000000f, 100.000000f, 5.000000f, "Chap Flare Intensity"));
		Params.push_back(ShaderParam("fGodrayDecay", 0, 204, 4, 0.500000f, 0.999900f, 0.990000f, 0.050000f, "Godray Decay"));
		Params.push_back(ShaderParam("fGodrayExposure", 0, 208, 4, 0.700000f, 1.500000f, 1.000000f, 0.050000f, "Godray Exposure"));
		Params.push_back(ShaderParam("fGodrayWeight", 0, 212, 4, 0.800000f, 1.700000f, 1.250000f, 0.050000f, "Godray Weight"));
		Params.push_back(ShaderParam("fGodrayDensity", 0, 216, 4, 0.200000f, 2.000000f, 1.000000f, 0.200000f, "Godray Density"));
		Params.push_back(ShaderParam("fGodrayThreshold", 0, 220, 4, 0.600000f, 1.000000f, 0.900000f, 0.050000f, "Godray Threshold"));
		Params.push_back(ShaderParam("iGodraySamples", 0, 224, 4, 16.000000f, 256.000000f, 128.000000f, 16.000000f, "Godray Samples"));
		Params.push_back(ShaderParam("fFlareLuminance", 0, 228, 4, 0.000000f, 1.000000f, 0.095000f, 0.005000f, "Flare Luminance"));
		Params.push_back(ShaderParam("fFlareBlur", 0, 232, 4, 1.000000f, 10000.000000f, 200.000000f, 50.000000f, "Flare Blur"));
		Params.push_back(ShaderParam("fFlareIntensity", 0, 236, 4, 0.200000f, 5.000000f, 2.070000f, 0.100000f, "Flare Intensity"));
		Params.push_back(ShaderParam("fFlareTint_r", 0, 240, 4, 0.000000f, 1.000000f, 0.137000f, 0.050000f, "Flare Tint R"));
		Params.push_back(ShaderParam("fFlareTint_g", 0, 244, 4, 0.000000f, 1.000000f, 0.216000f, 0.050000f, "Flare Tint G"));
		Params.push_back(ShaderParam("fFlareTint_b", 0, 248, 4, 0.000000f, 1.000000f, 1.000000f, 0.050000f, "Flare Tint B"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("Original", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
