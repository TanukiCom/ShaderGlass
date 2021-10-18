/*
ShaderGlass shader crt-shaders-glow\resolve imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/glow/resolve.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// Original bits by Themaister
// Moire mitigation bits by Timothy Lottes, added by hunterk
// For debugging
// Convert from linear to sRGB.
//float Srgb(float c){return(c<0.0031308?c*12.92:1.055*pow(c,0.41666)-0.055);}
// Convert from sRGB to linear.
//float Linear(float c){return(c<=0.04045)?c/12.92:pow((c+0.055)/1.055,2.4);}
// Shadow mask.
// Very compressed TV style shadow mask.
// Aperture-grille.
// Stretched VGA style shadow mask (same as prior shaders).
// VGA style shadow mask.
 TODO/FIXME - hacky clamp fix 

*/

#pragma once

namespace RetroArchCrtShadersGlowResolveShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,77,14,
179,179,55,16,0,192,
14,37,236,148,226,254,
168,96,1,0,0,0,
12,5,0,0,5,0,
0,0,52,0,0,0,
188,2,0,0,8,3,
0,0,96,3,0,0,
112,4,0,0,82,68,
69,70,128,2,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
88,2,0,0,82,68,
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
92,0,0,0,6,0,
0,0,120,0,0,0,
144,0,0,0,0,0,
0,0,0,0,0,0,
104,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,124,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,160,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,188,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,224,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
188,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
244,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,188,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,6,2,
0,0,112,0,0,0,
16,0,0,0,0,0,
0,0,188,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,25,2,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
52,2,0,0,0,0,
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
0,0,0,0,115,1,
0,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,178,1,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,67,82,84,
80,97,115,115,83,105,
122,101,0,103,108,111,
98,97,108,95,70,114,
97,109,101,67,111,117,
110,116,0,100,119,111,
114,100,0,171,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,43,2,0,0,
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
68,88,66,67,188,24,
234,106,193,242,97,223,
150,226,41,49,220,227,
156,50,1,0,0,0,
252,28,0,0,5,0,
0,0,52,0,0,0,
80,6,0,0,168,6,
0,0,220,6,0,0,
96,28,0,0,82,68,
69,70,20,6,0,0,
2,0,0,0,56,1,
0,0,6,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
233,5,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
252,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,1,0,
0,0,12,1,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,1,0,0,0,
1,0,0,0,29,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
1,0,0,0,1,0,
0,0,13,0,0,0,
36,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,2,0,0,0,
1,0,0,0,13,0,
0,0,44,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,48,1,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,95,67,
82,84,80,97,115,115,
95,115,97,109,112,108,
101,114,0,83,111,117,
114,99,101,0,67,82,
84,80,97,115,115,0,
85,66,79,0,80,117,
115,104,0,171,171,171,
44,1,0,0,6,0,
0,0,104,1,0,0,
144,0,0,0,0,0,
0,0,0,0,0,0,
48,1,0,0,11,0,
0,0,72,3,0,0,
48,0,0,0,0,0,
0,0,0,0,0,0,
88,2,0,0,0,0,
0,0,64,0,0,0,
0,0,0,0,108,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,144,2,
0,0,64,0,0,0,
16,0,0,0,2,0,
0,0,172,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,208,2,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
172,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
228,2,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,172,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,246,2,
0,0,112,0,0,0,
16,0,0,0,0,0,
0,0,172,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,9,3,0,0,
128,0,0,0,4,0,
0,0,2,0,0,0,
36,3,0,0,0,0,
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
0,0,0,0,99,2,
0,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,162,2,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,103,108,111,98,
97,108,95,67,82,84,
80,97,115,115,83,105,
122,101,0,103,108,111,
98,97,108,95,70,114,
97,109,101,67,111,117,
110,116,0,100,119,111,
114,100,0,171,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,27,3,0,0,
0,5,0,0,0,0,
0,0,4,0,0,0,
2,0,0,0,28,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,64,5,
0,0,4,0,0,0,
4,0,0,0,2,0,
0,0,28,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,84,5,0,0,
8,0,0,0,4,0,
0,0,2,0,0,0,
28,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
101,5,0,0,12,0,
0,0,4,0,0,0,
2,0,0,0,28,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,114,5,
0,0,16,0,0,0,
4,0,0,0,2,0,
0,0,28,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,127,5,0,0,
20,0,0,0,4,0,
0,0,2,0,0,0,
28,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
145,5,0,0,24,0,
0,0,4,0,0,0,
2,0,0,0,28,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,161,5,
0,0,28,0,0,0,
4,0,0,0,2,0,
0,0,28,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,178,5,0,0,
32,0,0,0,4,0,
0,0,2,0,0,0,
28,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
196,5,0,0,36,0,
0,0,4,0,0,0,
2,0,0,0,28,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,216,5,
0,0,40,0,0,0,
4,0,0,0,2,0,
0,0,28,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,66,76,79,
79,77,95,83,84,82,
69,78,71,84,72,0,
102,108,111,97,116,0,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,22,5,0,0,
112,97,114,97,109,115,
95,79,85,84,80,85,
84,95,71,65,77,77,
65,0,112,97,114,97,
109,115,95,67,85,82,
86,65,84,85,82,69,
0,112,97,114,97,109,
115,95,119,97,114,112,
88,0,112,97,114,97,
109,115,95,119,97,114,
112,89,0,112,97,114,
97,109,115,95,115,104,
97,100,111,119,77,97,
115,107,0,112,97,114,
97,109,115,95,109,97,
115,107,68,97,114,107,
0,112,97,114,97,109,
115,95,109,97,115,107,
76,105,103,104,116,0,
112,97,114,97,109,115,
95,99,111,114,110,101,
114,115,105,122,101,0,
112,97,114,97,109,115,
95,99,111,114,110,101,
114,115,109,111,111,116,
104,0,112,97,114,97,
109,115,95,110,111,105,
115,101,95,97,109,116,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
171,171,73,83,71,78,
80,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
65,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,3,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
79,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
15,0,0,0,83,86,
95,84,97,114,103,101,
116,0,171,171,83,72,
69,88,124,21,0,0,
80,0,0,0,95,5,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
9,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,3,0,
0,0,90,0,0,3,
0,96,16,0,1,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,1,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,100,32,
0,4,50,16,16,0,
1,0,0,0,1,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,49,0,
0,8,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
42,128,32,0,1,0,
0,0,0,0,0,0,
31,0,4,3,10,0,
16,0,0,0,0,0,
77,0,0,6,98,0,
16,0,0,0,0,0,
0,208,0,0,6,17,
16,0,1,0,0,0,
86,0,0,6,130,0,
16,0,0,0,0,0,
10,128,32,0,0,0,
0,0,8,0,0,0,
56,0,0,10,50,0,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
72,138,53,59,199,35,
150,58,0,0,0,0,
0,0,0,0,65,0,
0,5,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
50,0,0,13,50,0,
16,0,1,0,0,0,
70,0,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,128,
180,67,0,64,90,68,
0,0,0,0,0,0,
0,0,246,15,16,0,
0,0,0,0,56,0,
0,7,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,65,0,0,5,
82,0,16,0,1,0,
0,0,86,6,16,0,
0,0,0,0,26,0,
0,5,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
56,0,0,7,50,0,
16,0,2,0,0,0,
150,5,16,0,0,0,
0,0,150,5,16,0,
0,0,0,0,50,0,
0,16,98,0,16,0,
0,0,0,0,86,6,
16,128,65,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,64,0,0,
0,64,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,64,64,
0,0,64,64,0,0,
0,0,56,0,0,7,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,6,1,
16,0,2,0,0,0,
0,0,0,10,242,0,
16,0,2,0,0,0,
134,8,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,10,50,0,16,0,
3,0,0,0,134,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,15,0,0,10,
130,0,16,0,0,0,
0,0,134,0,16,0,
1,0,0,0,2,64,
0,0,57,214,79,65,
89,134,132,64,0,0,
0,0,0,0,0,0,
77,0,0,6,130,0,
16,0,0,0,0,0,
0,208,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
140,238,42,71,26,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
15,0,0,10,18,0,
16,0,1,0,0,0,
70,0,16,0,2,0,
0,0,2,64,0,0,
57,214,79,65,89,134,
132,64,0,0,0,0,
0,0,0,0,77,0,
0,6,18,0,16,0,
1,0,0,0,0,208,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,140,238,
42,71,26,0,0,5,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,0,0,
0,8,18,0,16,0,
1,0,0,0,58,0,
16,128,65,0,0,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
15,0,0,10,18,0,
16,0,1,0,0,0,
230,10,16,0,2,0,
0,0,2,64,0,0,
57,214,79,65,89,134,
132,64,0,0,0,0,
0,0,0,0,77,0,
0,6,18,0,16,0,
1,0,0,0,0,208,
0,0,10,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,140,238,
42,71,15,0,0,10,
66,0,16,0,1,0,
0,0,70,0,16,0,
3,0,0,0,2,64,
0,0,57,214,79,65,
89,134,132,64,0,0,
0,0,0,0,0,0,
77,0,0,6,66,0,
16,0,1,0,0,0,
0,208,0,0,42,0,
16,0,1,0,0,0,
56,0,0,7,66,0,
16,0,1,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
140,238,42,71,26,0,
0,5,82,0,16,0,
1,0,0,0,6,2,
16,0,1,0,0,0,
0,0,0,8,66,0,
16,0,1,0,0,0,
10,0,16,128,65,0,
0,0,1,0,0,0,
42,0,16,0,1,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,0,0,0,8,
34,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,9,34,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,77,0,0,6,
0,208,0,0,98,0,
16,0,0,0,0,0,
86,20,16,0,1,0,
0,0,56,0,0,7,
98,0,16,0,0,0,
0,0,86,5,16,0,
1,0,0,0,86,6,
16,0,0,0,0,0,
65,0,0,5,50,0,
16,0,1,0,0,0,
150,5,16,0,0,0,
0,0,26,0,0,5,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,56,0,
0,7,194,0,16,0,
1,0,0,0,86,9,
16,0,0,0,0,0,
86,9,16,0,0,0,
0,0,50,0,0,16,
98,0,16,0,0,0,
0,0,86,6,16,128,
65,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,64,0,0,0,64,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,64,64,0,0,
64,64,0,0,0,0,
56,0,0,7,98,0,
16,0,0,0,0,0,
86,6,16,0,0,0,
0,0,166,11,16,0,
1,0,0,0,0,0,
0,10,242,0,16,0,
3,0,0,0,70,4,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,0,10,
194,0,16,0,1,0,
0,0,6,4,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,128,63,
15,0,0,10,130,0,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,2,64,0,0,
57,214,79,65,89,134,
132,64,0,0,0,0,
0,0,0,0,77,0,
0,6,130,0,16,0,
0,0,0,0,0,208,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,140,238,
42,71,26,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,15,0,
0,10,18,0,16,0,
1,0,0,0,70,0,
16,0,3,0,0,0,
2,64,0,0,57,214,
79,65,89,134,132,64,
0,0,0,0,0,0,
0,0,77,0,0,6,
18,0,16,0,1,0,
0,0,0,208,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,140,238,42,71,
26,0,0,5,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,0,0,0,8,
18,0,16,0,1,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,15,0,
0,10,18,0,16,0,
1,0,0,0,230,10,
16,0,3,0,0,0,
2,64,0,0,57,214,
79,65,89,134,132,64,
0,0,0,0,0,0,
0,0,77,0,0,6,
18,0,16,0,1,0,
0,0,0,208,0,0,
10,0,16,0,1,0,
0,0,56,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,140,238,42,71,
15,0,0,10,34,0,
16,0,1,0,0,0,
230,10,16,0,1,0,
0,0,2,64,0,0,
57,214,79,65,89,134,
132,64,0,0,0,0,
0,0,0,0,77,0,
0,6,34,0,16,0,
1,0,0,0,0,208,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,140,238,
42,71,26,0,0,5,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,0,0,
0,8,34,0,16,0,
1,0,0,0,10,0,
16,128,65,0,0,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
50,0,0,9,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,56,0,0,7,
34,0,16,0,2,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,8,98,0,
16,0,0,0,0,0,
6,1,16,0,2,0,
0,0,166,138,32,0,
1,0,0,0,2,0,
0,0,50,0,0,12,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
111,18,131,58,111,18,
131,58,0,0,0,0,
6,17,16,0,0,0,
0,0,50,0,0,15,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,64,0,0,
0,64,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,191,
0,0,128,191,0,0,
0,0,15,0,0,7,
130,0,16,0,0,0,
0,0,150,5,16,0,
0,0,0,0,150,5,
16,0,0,0,0,0,
75,0,0,5,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,14,0,0,7,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
50,0,0,10,130,0,
16,0,0,0,0,0,
58,0,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,243,4,
53,63,1,64,0,0,
0,0,128,63,56,0,
0,8,18,0,16,0,
1,0,0,0,1,64,
0,0,0,0,64,64,
58,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,8,34,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
64,64,10,128,32,0,
1,0,0,0,1,0,
0,0,0,0,0,10,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,0,
14,0,0,10,50,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,70,0,16,0,
1,0,0,0,47,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,194,0,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,6,4,16,0,
1,0,0,0,25,0,
0,5,194,0,16,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
0,0,0,11,194,0,
16,0,1,0,0,0,
166,14,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
128,63,56,0,0,7,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,166,11,
16,0,1,0,0,0,
56,0,0,10,50,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,2,64,0,0,
66,194,226,191,66,194,
226,191,0,0,0,0,
0,0,0,0,25,0,
0,5,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
0,0,0,11,50,0,
16,0,1,0,0,0,
70,0,16,128,65,0,
0,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,0,14,0,0,7,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,6,1,
16,0,1,0,0,0,
50,0,0,15,98,0,
16,0,0,0,0,0,
86,6,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
18,0,0,1,54,0,
0,5,98,0,16,0,
0,0,0,0,6,17,
16,0,0,0,0,0,
21,0,0,1,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
150,5,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,150,5,16,0,
0,0,0,0,70,126,
16,0,1,0,0,0,
0,96,16,0,1,0,
0,0,56,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,50,32,
0,12,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,51,51,
147,63,51,51,147,63,
51,51,147,63,0,0,
0,0,70,2,16,0,
2,0,0,0,14,0,
0,11,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
26,128,32,0,1,0,
0,0,0,0,0,0,
47,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,7,
114,0,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
25,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,49,0,0,10,
50,0,16,0,2,0,
0,0,2,64,0,0,
23,183,209,56,23,183,
209,56,0,0,0,0,
0,0,0,0,150,5,
16,0,0,0,0,0,
49,0,0,10,194,0,
16,0,2,0,0,0,
86,9,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,114,249,127,63,
114,249,127,63,1,0,
0,7,130,0,16,0,
0,0,0,0,42,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,1,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
1,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
0,0,0,0,1,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,11,50,0,16,0,
2,0,0,0,150,5,
16,128,65,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,0,
51,0,0,7,98,0,
16,0,0,0,0,0,
86,6,16,0,0,0,
0,0,6,1,16,0,
2,0,0,0,56,0,
0,10,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,64,63,0,0,
0,0,51,0,0,8,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,0,0,
0,9,98,0,16,0,
0,0,0,0,86,6,
16,128,65,0,0,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
2,0,0,0,15,0,
0,7,34,0,16,0,
0,0,0,0,150,5,
16,0,0,0,0,0,
150,5,16,0,0,0,
0,0,75,0,0,5,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,9,34,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
2,0,0,0,56,32,
0,8,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
26,128,32,0,1,0,
0,0,2,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
56,0,0,7,114,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,49,0,
0,8,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
26,128,32,0,1,0,
0,0,1,0,0,0,
31,0,4,3,58,0,
16,0,0,0,0,0,
56,0,0,8,114,0,
16,0,1,0,0,0,
22,21,16,0,0,0,
0,0,22,133,32,0,
0,0,0,0,4,0,
0,0,24,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,26,128,
32,0,1,0,0,0,
1,0,0,0,31,0,
4,3,58,0,16,0,
0,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,86,5,
16,0,1,0,0,0,
2,64,0,0,182,170,
42,62,182,170,170,62,
182,170,170,62,0,0,
0,0,26,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,49,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,63,250,126,170,62,
250,126,42,63,0,0,
0,0,1,0,0,7,
130,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
50,0,0,9,130,0,
16,0,0,0,0,0,
42,0,16,0,1,0,
0,0,1,64,0,0,
8,0,128,63,58,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,26,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
49,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,55,0,
0,11,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,1,0,0,0,
58,128,32,0,1,0,
0,0,1,0,0,0,
55,0,0,11,98,0,
16,0,3,0,0,0,
166,10,16,0,2,0,
0,0,246,142,32,0,
1,0,0,0,1,0,
0,0,166,139,32,0,
1,0,0,0,1,0,
0,0,54,0,0,6,
18,0,16,0,3,0,
0,0,42,128,32,0,
1,0,0,0,1,0,
0,0,55,0,0,10,
114,0,16,0,2,0,
0,0,86,5,16,0,
2,0,0,0,182,142,
32,0,1,0,0,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,18,0,
0,1,24,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,64,26,128,
32,0,1,0,0,0,
1,0,0,0,31,0,
4,3,58,0,16,0,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,182,170,
170,62,26,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,10,50,0,16,0,
3,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,250,126,
170,62,250,126,42,63,
0,0,0,0,0,0,
0,0,55,0,0,11,
98,0,16,0,4,0,
0,0,86,5,16,0,
3,0,0,0,246,142,
32,0,1,0,0,0,
1,0,0,0,166,139,
32,0,1,0,0,0,
1,0,0,0,54,0,
0,6,18,0,16,0,
4,0,0,0,42,128,
32,0,1,0,0,0,
1,0,0,0,55,0,
0,10,114,0,16,0,
2,0,0,0,6,0,
16,0,3,0,0,0,
182,142,32,0,1,0,
0,0,1,0,0,0,
70,2,16,0,4,0,
0,0,18,0,0,1,
56,0,0,10,210,0,
16,0,1,0,0,0,
6,9,16,0,1,0,
0,0,2,64,0,0,
12,0,64,64,0,0,
0,0,8,0,128,63,
8,0,0,63,50,0,
0,9,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,8,0,
128,63,10,0,16,0,
1,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,171,170,
42,62,26,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,49,0,
0,10,50,0,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,250,126,
170,62,250,126,42,63,
0,0,0,0,0,0,
0,0,55,0,0,11,
98,0,16,0,3,0,
0,0,86,5,16,0,
1,0,0,0,246,142,
32,0,1,0,0,0,
1,0,0,0,166,139,
32,0,1,0,0,0,
1,0,0,0,54,0,
0,6,18,0,16,0,
3,0,0,0,42,128,
32,0,1,0,0,0,
1,0,0,0,55,0,
0,10,114,0,16,0,
3,0,0,0,6,0,
16,0,1,0,0,0,
182,142,32,0,1,0,
0,0,1,0,0,0,
70,2,16,0,3,0,
0,0,24,0,0,11,
50,0,16,0,1,0,
0,0,2,64,0,0,
0,0,64,64,0,0,
128,64,0,0,0,0,
0,0,0,0,86,133,
32,0,1,0,0,0,
1,0,0,0,65,0,
0,5,194,0,16,0,
1,0,0,0,166,14,
16,0,1,0,0,0,
50,0,0,9,130,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,64,64,42,0,
16,0,1,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
171,170,42,62,26,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
49,0,0,10,194,0,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,250,126,170,62,
250,126,42,63,55,0,
0,11,98,0,16,0,
4,0,0,0,246,15,
16,0,1,0,0,0,
246,142,32,0,1,0,
0,0,1,0,0,0,
166,139,32,0,1,0,
0,0,1,0,0,0,
54,0,0,6,18,0,
16,0,4,0,0,0,
42,128,32,0,1,0,
0,0,1,0,0,0,
55,0,0,10,114,0,
16,0,4,0,0,0,
166,10,16,0,1,0,
0,0,182,142,32,0,
1,0,0,0,1,0,
0,0,70,2,16,0,
4,0,0,0,55,0,
0,10,226,0,16,0,
1,0,0,0,86,5,
16,0,1,0,0,0,
6,9,16,0,4,0,
0,0,166,138,32,0,
1,0,0,0,1,0,
0,0,55,0,0,9,
114,0,16,0,2,0,
0,0,6,0,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
150,7,16,0,1,0,
0,0,21,0,0,1,
21,0,0,1,47,0,
0,5,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
205,204,12,64,205,204,
12,64,205,204,12,64,
0,0,0,0,25,0,
0,5,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
1,0,0,0,47,0,
0,5,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
56,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
47,186,232,62,47,186,
232,62,47,186,232,62,
0,0,0,0,25,0,
0,5,114,0,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
21,0,0,1,54,0,
0,5,114,32,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
177,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,138,0,
0,0,0,0,0,0,
5,0,0,0,4,0,
0,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,7,0,
0,0,12,0,0,0,
18,0,0,0,0,0,
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
class CrtShadersGlowResolveShaderDef : public ShaderDef
{
public:
	CrtShadersGlowResolveShaderDef() : ShaderDef{}
	{
		Name = "resolve";
		VertexByteCode = RetroArchCrtShadersGlowResolveShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersGlowResolveShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersGlowResolveShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersGlowResolveShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("BLOOM_STRENGTH", -1, 0, 4, 0.000000f, 0.800000f, 0.450000f));
		Params.push_back(ShaderParam("OUTPUT_GAMMA", -1, 4, 4, 1.800000f, 2.600000f, 2.200000f));
		Params.push_back(ShaderParam("CURVATURE", -1, 8, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("warpX", -1, 12, 4, 0.000000f, 0.125000f, 0.031000f));
		Params.push_back(ShaderParam("warpY", -1, 16, 4, 0.000000f, 0.125000f, 0.041000f));
		Params.push_back(ShaderParam("cornersize", -1, 32, 4, 0.001000f, 1.000000f, 0.010000f));
		Params.push_back(ShaderParam("cornersmooth", -1, 36, 4, 80.000000f, 2000.000000f, 1000.000000f));
		Params.push_back(ShaderParam("noise_amt", -1, 40, 4, 0.000000f, 5.000000f, 1.000000f));
		Params.push_back(ShaderParam("shadowMask", -1, 20, 4, 0.000000f, 4.000000f, 0.000000f));
		Params.push_back(ShaderParam("maskDark", -1, 24, 4, 0.000000f, 2.000000f, 0.500000f));
		Params.push_back(ShaderParam("maskLight", -1, 28, 4, 0.000000f, 2.000000f, 1.500000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 128, 4, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("CRTPassSize", 0, 112, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("CRTPass", 2));
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
