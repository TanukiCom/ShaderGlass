/*
ShaderGlass shader interpolation-shaders\bandlimit-pixel imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/interpolation/shaders/bandlimit-pixel.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


* Bandlimited pixel footprint shader.
* Author: Themaister
* License: MIT
* Adapted from: https://github.com/Themaister/Granite/blob/master/assets/shaders/inc/bandlimited_pixel_filter.h

// The cosine filter convolved with rect has a support of 0.5 + d pixels.
// We can sample 4x4 regions, so we can deal with 2.0 pixel range in our filter,
// and the maximum extent value we can have is 1.5.
// Our Taylor approximation is not exact, normalize so the peak is 1.
// No templates in GLSL. Stamp out macros.
// Given weights, compute a bilinear filter which implements the weight.
// All weights are known to be non-negative, and separable.
// The sum of a bilinear sample has combined weight of 1, we will need to adjust the resulting sample
// to match our actual weight sum.
// Get derivatives in texel space.
// Need a non-zero derivative.
// Get base pixel and phase, range [0, 1).
// We need to just do regular minimization filtering.
// We can resolve the filter by just sampling a single 2x2 block.
// Full 4x4 sampling.
// Fade between bandlimited and normal sampling.
// Fully use bandlimited filter at LOD 0, normal filtering at approx. LOD -0.5.

*/

#pragma once

namespace RetroArchInterpolationShadersBandlimitPixelShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,87,155,
86,119,18,145,75,227,
122,100,247,171,82,243,
206,152,1,0,0,0,
88,4,0,0,5,0,
0,0,52,0,0,0,
8,2,0,0,84,2,
0,0,172,2,0,0,
188,3,0,0,82,68,
69,70,204,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
164,1,0,0,82,68,
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
92,0,0,0,3,0,
0,0,120,0,0,0,
96,0,0,0,0,0,
0,0,0,0,0,0,
240,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,4,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,40,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,68,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,104,1,0,0,
80,0,0,0,4,0,
0,0,0,0,0,0,
128,1,0,0,0,0,
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
0,0,0,0,251,0,
0,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,58,1,0,0,
103,108,111,98,97,108,
95,83,77,79,79,84,
72,78,69,83,83,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,122,1,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
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
83,72,69,88,8,1,
0,0,80,0,1,0,
66,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,21,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
1,0,0,0,50,0,
0,10,242,0,16,0,
0,0,0,0,6,16,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,0,0,0,0,
70,14,16,0,0,0,
0,0,50,0,0,10,
242,0,16,0,0,0,
0,0,166,26,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
2,0,0,0,70,14,
16,0,0,0,0,0,
50,0,0,10,242,32,
16,0,1,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,4,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,133,164,
78,229,187,110,191,7,
127,29,177,69,151,195,
178,201,1,0,0,0,
128,20,0,0,5,0,
0,0,52,0,0,0,
96,2,0,0,148,2,
0,0,200,2,0,0,
228,19,0,0,82,68,
69,70,36,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
252,1,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
156,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,1,0,
0,0,172,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,1,0,
0,0,1,0,0,0,
13,0,0,0,179,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,3,0,0,0,
208,0,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,92,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,128,1,0,0,
64,0,0,0,16,0,
0,0,2,0,0,0,
156,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
192,1,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,216,1,
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
0,0,83,1,0,0,
103,108,111,98,97,108,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
146,1,0,0,103,108,
111,98,97,108,95,83,
77,79,79,84,72,78,
69,83,83,0,102,108,
111,97,116,0,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
210,1,0,0,77,105,
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
69,88,20,17,0,0,
80,0,0,0,69,4,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
6,0,0,0,90,0,
0,3,0,96,16,0,
1,0,0,0,88,24,
0,4,0,112,16,0,
1,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
10,0,0,0,122,0,
0,5,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
124,0,0,5,194,0,
16,0,0,0,0,0,
6,20,16,0,0,0,
0,0,0,0,0,9,
50,0,16,0,0,0,
0,0,230,10,16,128,
129,0,0,0,0,0,
0,0,70,0,16,128,
129,0,0,0,0,0,
0,0,56,0,0,8,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,128,
32,0,0,0,0,0,
4,0,0,0,0,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
10,128,32,0,0,0,
0,0,5,0,0,0,
56,0,0,7,50,0,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,52,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,59,0,0,128,59,
0,0,0,0,0,0,
0,0,49,0,0,10,
194,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,192,63,
0,0,192,63,6,4,
16,0,0,0,0,0,
60,0,0,7,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,31,0,
4,3,42,0,16,0,
0,0,0,0,54,0,
0,8,194,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,8,242,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,54,0,0,8,
114,0,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,54,0,
0,8,242,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
18,0,0,1,50,0,
0,13,50,0,16,0,
4,0,0,0,70,16,
16,0,0,0,0,0,
70,128,32,0,0,0,
0,0,4,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,0,0,0,
0,0,65,0,0,5,
194,0,16,0,4,0,
0,0,6,4,16,0,
4,0,0,0,0,0,
0,8,50,0,16,0,
4,0,0,0,230,10,
16,128,65,0,0,0,
4,0,0,0,70,0,
16,0,4,0,0,0,
14,0,0,10,50,0,
16,0,5,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,70,0,16,0,
0,0,0,0,29,0,
0,10,194,0,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,63,0,0,0,63,
6,4,16,0,0,0,
0,0,1,0,0,7,
130,0,16,0,3,0,
0,0,58,0,16,0,
5,0,0,0,42,0,
16,0,5,0,0,0,
31,0,4,3,58,0,
16,0,3,0,0,0,
0,0,0,10,194,0,
16,0,5,0,0,0,
6,4,16,0,4,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,191,
0,0,0,191,56,0,
0,7,194,0,16,0,
5,0,0,0,166,14,
16,0,5,0,0,0,
6,4,16,0,5,0,
0,0,52,0,0,10,
194,0,16,0,5,0,
0,0,166,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,0,0,128,191,
51,0,0,10,194,0,
16,0,5,0,0,0,
166,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,56,0,
0,10,194,0,16,0,
5,0,0,0,166,14,
16,0,5,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
219,15,201,63,219,15,
201,63,56,0,0,7,
50,0,16,0,6,0,
0,0,230,10,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
56,0,0,7,194,0,
16,0,6,0,0,0,
166,14,16,0,5,0,
0,0,6,4,16,0,
6,0,0,0,56,0,
0,7,50,0,16,0,
6,0,0,0,230,10,
16,0,6,0,0,0,
70,0,16,0,6,0,
0,0,50,0,0,13,
194,0,16,0,5,0,
0,0,166,14,16,128,
65,0,0,0,6,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,171,170,42,62,
171,170,42,62,166,14,
16,0,5,0,0,0,
50,0,0,12,194,0,
16,0,5,0,0,0,
6,4,16,0,6,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,137,136,8,60,
137,136,8,60,166,14,
16,0,5,0,0,0,
56,0,0,10,194,0,
16,0,5,0,0,0,
166,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,203,216,126,63,
203,216,126,63,52,0,
0,10,194,0,16,0,
5,0,0,0,166,14,
16,0,5,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,191,0,0,
128,191,51,0,0,10,
194,0,16,0,5,0,
0,0,166,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
50,0,0,12,194,0,
16,0,5,0,0,0,
166,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,63,
0,0,0,63,166,14,
16,0,4,0,0,0,
0,0,0,10,194,0,
16,0,5,0,0,0,
166,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,56,0,
0,8,194,0,16,0,
1,0,0,0,166,14,
16,0,5,0,0,0,
166,142,32,0,0,0,
0,0,4,0,0,0,
54,0,0,8,50,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,54,0,0,8,
194,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,54,0,
0,8,242,0,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,8,114,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,63,0,0,
0,0,18,0,0,1,
52,0,0,7,18,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,191,50,32,0,10,
34,0,16,0,3,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
0,0,0,64,1,64,
0,0,0,0,128,63,
0,0,0,10,242,0,
16,0,6,0,0,0,
6,0,16,0,4,0,
0,0,2,64,0,0,
0,0,192,63,0,0,
0,63,0,0,0,191,
0,0,192,191,56,0,
0,7,242,0,16,0,
6,0,0,0,6,0,
16,0,5,0,0,0,
70,14,16,0,6,0,
0,0,52,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,128,191,
51,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,56,0,
0,10,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,219,15,
201,63,219,15,201,63,
219,15,201,63,219,15,
201,63,56,0,0,7,
242,0,16,0,7,0,
0,0,70,14,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
56,0,0,7,242,0,
16,0,8,0,0,0,
70,14,16,0,6,0,
0,0,70,14,16,0,
7,0,0,0,56,0,
0,7,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
70,14,16,0,8,0,
0,0,50,0,0,13,
242,0,16,0,6,0,
0,0,70,14,16,128,
65,0,0,0,8,0,
0,0,2,64,0,0,
171,170,42,62,171,170,
42,62,171,170,42,62,
171,170,42,62,70,14,
16,0,6,0,0,0,
50,0,0,12,242,0,
16,0,6,0,0,0,
70,14,16,0,7,0,
0,0,2,64,0,0,
137,136,8,60,137,136,
8,60,137,136,8,60,
137,136,8,60,70,14,
16,0,6,0,0,0,
56,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
203,216,126,63,203,216,
126,63,203,216,126,63,
203,216,126,63,52,0,
0,10,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,128,191,0,0,
128,191,51,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,10,242,0,
16,0,7,0,0,0,
86,5,16,0,4,0,
0,0,2,64,0,0,
0,0,192,63,0,0,
0,63,0,0,0,191,
0,0,192,191,56,0,
0,7,242,0,16,0,
7,0,0,0,86,5,
16,0,5,0,0,0,
70,14,16,0,7,0,
0,0,52,0,0,10,
242,0,16,0,7,0,
0,0,70,14,16,0,
7,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,128,191,
51,0,0,10,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,56,0,
0,10,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
2,64,0,0,219,15,
201,63,219,15,201,63,
219,15,201,63,219,15,
201,63,56,0,0,7,
242,0,16,0,8,0,
0,0,70,14,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
56,0,0,7,242,0,
16,0,9,0,0,0,
70,14,16,0,7,0,
0,0,70,14,16,0,
8,0,0,0,56,0,
0,7,242,0,16,0,
8,0,0,0,70,14,
16,0,8,0,0,0,
70,14,16,0,9,0,
0,0,50,0,0,13,
242,0,16,0,7,0,
0,0,70,14,16,128,
65,0,0,0,9,0,
0,0,2,64,0,0,
171,170,42,62,171,170,
42,62,171,170,42,62,
171,170,42,62,70,14,
16,0,7,0,0,0,
50,0,0,12,242,0,
16,0,7,0,0,0,
70,14,16,0,8,0,
0,0,2,64,0,0,
137,136,8,60,137,136,
8,60,137,136,8,60,
137,136,8,60,70,14,
16,0,7,0,0,0,
56,0,0,10,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,2,64,0,0,
203,216,126,63,203,216,
126,63,203,216,126,63,
203,216,126,63,52,0,
0,10,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,128,191,0,0,
128,191,51,0,0,10,
242,0,16,0,7,0,
0,0,70,14,16,0,
7,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,4,0,
0,0,2,64,0,0,
0,0,32,192,0,0,
32,192,0,0,0,0,
0,0,0,0,56,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,0,16,0,5,0,
0,0,52,0,0,10,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
0,0,0,0,0,0,
51,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,0,56,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,219,15,
201,63,219,15,201,63,
0,0,0,0,0,0,
0,0,56,0,0,7,
50,0,16,0,4,0,
0,0,70,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
56,0,0,7,50,0,
16,0,5,0,0,0,
70,0,16,0,0,0,
0,0,70,0,16,0,
4,0,0,0,56,0,
0,7,50,0,16,0,
4,0,0,0,70,0,
16,0,4,0,0,0,
70,0,16,0,5,0,
0,0,50,0,0,13,
50,0,16,0,0,0,
0,0,70,0,16,128,
65,0,0,0,5,0,
0,0,2,64,0,0,
171,170,42,62,171,170,
42,62,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
50,0,0,12,50,0,
16,0,0,0,0,0,
70,0,16,0,4,0,
0,0,2,64,0,0,
137,136,8,60,137,136,
8,60,0,0,0,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
56,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
203,216,126,63,203,216,
126,63,0,0,0,0,
0,0,0,0,52,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,191,
0,0,0,0,0,0,
0,0,51,0,0,10,
146,0,16,0,5,0,
0,0,6,4,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,0,0,0,
0,0,0,0,128,63,
54,0,0,5,114,0,
16,0,8,0,0,0,
150,7,16,0,6,0,
0,0,54,0,0,5,
130,0,16,0,8,0,
0,0,10,0,16,0,
5,0,0,0,0,0,
0,8,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
70,14,16,128,65,0,
0,0,8,0,0,0,
56,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,54,0,
0,5,114,0,16,0,
5,0,0,0,150,7,
16,0,7,0,0,0,
0,0,0,8,242,0,
16,0,5,0,0,0,
70,14,16,128,65,0,
0,0,5,0,0,0,
70,14,16,0,7,0,
0,0,56,0,0,10,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
17,0,0,7,66,0,
16,0,3,0,0,0,
70,4,16,0,6,0,
0,0,6,5,16,0,
5,0,0,0,0,0,
0,7,50,0,16,0,
0,0,0,0,214,5,
16,0,6,0,0,0,
134,0,16,0,6,0,
0,0,52,0,0,10,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,111,18,131,58,
111,18,131,58,0,0,
0,0,0,0,0,0,
0,0,0,7,50,0,
16,0,4,0,0,0,
214,5,16,0,5,0,
0,0,134,0,16,0,
5,0,0,0,52,0,
0,10,50,0,16,0,
4,0,0,0,70,0,
16,0,4,0,0,0,
2,64,0,0,111,18,
131,58,111,18,131,58,
0,0,0,0,0,0,
0,0,17,0,0,7,
66,0,16,0,0,0,
0,0,230,14,16,0,
6,0,0,0,6,5,
16,0,5,0,0,0,
14,0,0,7,50,0,
16,0,7,0,0,0,
214,5,16,0,6,0,
0,0,70,0,16,0,
0,0,0,0,17,0,
0,7,130,0,16,0,
0,0,0,0,70,4,
16,0,6,0,0,0,
166,15,16,0,5,0,
0,0,14,0,0,7,
194,0,16,0,7,0,
0,0,86,13,16,0,
5,0,0,0,6,4,
16,0,4,0,0,0,
17,0,0,7,18,0,
16,0,3,0,0,0,
230,14,16,0,6,0,
0,0,166,15,16,0,
5,0,0,0,0,0,
0,7,242,0,16,0,
5,0,0,0,230,14,
16,0,4,0,0,0,
134,9,16,0,7,0,
0,0,0,0,0,10,
242,0,16,0,5,0,
0,0,70,14,16,0,
5,0,0,0,2,64,
0,0,0,0,0,191,
0,0,0,191,0,0,
192,63,0,0,0,191,
56,0,0,8,242,0,
16,0,1,0,0,0,
230,4,16,0,5,0,
0,0,230,142,32,0,
0,0,0,0,4,0,
0,0,0,0,0,7,
242,0,16,0,4,0,
0,0,230,14,16,0,
4,0,0,0,198,13,
16,0,7,0,0,0,
0,0,0,10,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
192,63,0,0,192,63,
0,0,192,63,56,0,
0,8,242,0,16,0,
2,0,0,0,70,14,
16,0,4,0,0,0,
230,142,32,0,0,0,
0,0,4,0,0,0,
21,0,0,1,21,0,
0,1,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
26,0,16,0,3,0,
0,0,31,0,4,3,
10,0,16,0,0,0,
0,0,72,0,0,141,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
56,0,0,7,114,0,
16,0,5,0,0,0,
166,10,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,42,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
128,63,31,0,4,3,
10,0,16,0,0,0,
0,0,72,0,0,141,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
70,126,16,0,1,0,
0,0,0,96,16,0,
1,0,0,0,1,64,
0,0,0,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,5,0,0,0,
72,0,0,141,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
2,0,0,0,70,126,
16,0,1,0,0,0,
0,96,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,72,0,
0,141,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
1,0,0,0,0,96,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,9,
114,0,16,0,5,0,
0,0,70,2,16,0,
1,0,0,0,6,0,
16,0,3,0,0,0,
70,2,16,0,0,0,
0,0,21,0,0,1,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,4,0,0,0,
70,2,16,0,5,0,
0,0,50,0,0,9,
114,0,16,0,4,0,
0,0,86,5,16,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,4,0,
0,0,21,0,0,1,
54,32,0,5,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,75,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
4,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
131,0,0,0,10,0,
0,0,0,0,0,0,
2,0,0,0,100,0,
0,0,0,0,0,0,
2,0,0,0,3,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,13,0,
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
class InterpolationShadersBandlimitPixelShaderDef : public ShaderDef
{
public:
	InterpolationShadersBandlimitPixelShaderDef() : ShaderDef{}
	{
		Name = "bandlimit-pixel";
		VertexByteCode = RetroArchInterpolationShadersBandlimitPixelShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchInterpolationShadersBandlimitPixelShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchInterpolationShadersBandlimitPixelShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchInterpolationShadersBandlimitPixelShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SMOOTHNESS", 0, 80, 4, 0.000000f, 5.000000f, 0.500000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 1));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
