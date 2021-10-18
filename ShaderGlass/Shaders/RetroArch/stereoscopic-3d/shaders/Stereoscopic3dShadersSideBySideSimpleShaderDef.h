/*
ShaderGlass shader stereoscopic-3d-shaders\side-by-side-simple imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/stereoscopic-3d/shaders/side-by-side-simple.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// simple shader to view content on side-by-side 3D displays
// by hunterk
// license: public domain
//distortion

*/

#pragma once

namespace RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,231,16,
235,136,183,231,246,153,
170,213,115,141,19,54,
129,187,1,0,0,0,
212,7,0,0,5,0,
0,0,52,0,0,0,
212,4,0,0,32,5,
0,0,120,5,0,0,
56,7,0,0,82,68,
69,70,152,4,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
110,4,0,0,82,68,
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
0,0,13,0,0,0,
24,1,0,0,96,0,
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
235,0,0,0,32,3,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,60,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,96,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
60,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
116,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,60,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,134,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,160,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,196,3,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
220,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
0,4,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,220,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,13,4,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,220,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,25,4,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
220,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
41,4,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,220,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,54,4,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,220,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,68,4,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
220,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
81,4,0,0,80,0,
0,0,4,0,0,0,
0,0,0,0,220,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,94,4,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,220,3,0,0,
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
0,0,50,3,0,0,
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
152,3,0,0,112,97,
114,97,109,115,95,101,
121,101,95,115,101,112,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
211,3,0,0,112,97,
114,97,109,115,95,121,
95,108,111,99,0,112,
97,114,97,109,115,95,
66,79,84,72,0,112,
97,114,97,109,115,95,
97,110,97,95,122,111,
111,109,0,112,97,114,
97,109,115,95,87,73,
68,84,72,0,112,97,
114,97,109,115,95,72,
69,73,71,72,84,0,
112,97,114,97,109,115,
95,119,97,114,112,88,
0,112,97,114,97,109,
115,95,119,97,114,112,
89,0,112,97,114,97,
109,115,95,112,117,108,
102,114,105,99,104,0,
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
184,1,0,0,80,0,
1,0,110,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,5,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,2,0,0,0,
0,0,0,10,50,0,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
0,191,0,0,0,0,
0,0,0,0,50,0,
0,13,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,4,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,54,0,0,7,
18,0,16,0,1,0,
0,0,58,128,32,128,
65,0,0,0,1,0,
0,0,3,0,0,0,
54,0,0,5,34,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,128,50,0,0,10,
50,32,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,150,133,
32,0,1,0,0,0,
4,0,0,0,70,0,
16,0,1,0,0,0,
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
0,0,10,0,0,0,
2,0,0,0,0,0,
0,0,4,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,25,146,
67,14,124,252,19,39,
186,144,160,235,243,21,
194,153,1,0,0,0,
216,8,0,0,5,0,
0,0,52,0,0,0,
140,4,0,0,192,4,
0,0,244,4,0,0,
60,8,0,0,82,68,
69,70,80,4,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
38,4,0,0,82,68,
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
0,0,13,0,0,0,
208,0,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,216,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,244,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,24,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
244,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
44,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,244,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,62,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,88,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,124,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
148,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
184,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,148,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,197,3,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,148,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,209,3,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
148,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
225,3,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,148,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,238,3,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,148,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,252,3,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
148,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
9,4,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,148,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,22,4,
0,0,84,0,0,0,
4,0,0,0,2,0,
0,0,148,3,0,0,
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
0,0,234,2,0,0,
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
80,3,0,0,112,97,
114,97,109,115,95,101,
121,101,95,115,101,112,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
139,3,0,0,112,97,
114,97,109,115,95,121,
95,108,111,99,0,112,
97,114,97,109,115,95,
66,79,84,72,0,112,
97,114,97,109,115,95,
97,110,97,95,122,111,
111,109,0,112,97,114,
97,109,115,95,87,73,
68,84,72,0,112,97,
114,97,109,115,95,72,
69,73,71,72,84,0,
112,97,114,97,109,115,
95,119,97,114,112,88,
0,112,97,114,97,109,
115,95,119,97,114,112,
89,0,112,97,114,97,
109,115,95,112,117,108,
102,114,105,99,104,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,171,171,
73,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,84,69,
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
64,3,0,0,80,0,
0,0,208,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,6,0,
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
0,0,0,0,0,8,
66,0,16,0,0,0,
0,0,10,16,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,0,0,
0,9,178,0,16,0,
0,0,0,0,70,20,
16,0,0,0,0,0,
150,137,32,128,65,0,
0,0,1,0,0,0,
3,0,0,0,50,0,
0,15,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,64,0,0,
0,64,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,128,191,
0,0,128,191,50,0,
0,15,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,64,0,0,0,64,
0,0,0,0,0,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,191,0,0,0,0,
0,0,0,0,56,0,
0,7,50,0,16,0,
1,0,0,0,182,15,
16,0,0,0,0,0,
182,15,16,0,0,0,
0,0,50,0,0,10,
18,0,16,0,2,0,
0,0,10,0,16,0,
1,0,0,0,58,128,
32,0,1,0,0,0,
4,0,0,0,1,64,
0,0,0,0,128,63,
50,0,0,10,34,0,
16,0,2,0,0,0,
26,0,16,0,1,0,
0,0,10,128,32,0,
1,0,0,0,5,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
6,4,16,0,2,0,
0,0,50,0,0,15,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,63,0,0,0,63,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,63,0,0,
0,63,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,230,10,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,86,1,
16,0,0,0,0,0,
86,1,16,0,0,0,
0,0,50,0,0,10,
18,0,16,0,2,0,
0,0,42,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
4,0,0,0,1,64,
0,0,0,0,128,63,
50,0,0,10,34,0,
16,0,2,0,0,0,
58,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,5,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,0,16,0,2,0,
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
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,9,18,0,16,0,
2,0,0,0,1,64,
0,0,0,0,128,63,
26,128,32,128,65,0,
0,0,1,0,0,0,
5,0,0,0,50,0,
0,9,242,32,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
6,0,16,0,2,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,19,0,
0,0,3,0,0,0,
0,0,0,0,2,0,
0,0,16,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
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
0,0
};

}

namespace RetroArch
{
class Stereoscopic3dShadersSideBySideSimpleShaderDef : public ShaderDef
{
public:
	Stereoscopic3dShadersSideBySideSimpleShaderDef() : ShaderDef{}
	{
		Name = "side-by-side-simple";
		VertexByteCode = RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchStereoscopic3dShadersSideBySideSimpleShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("eye_sep", -1, 52, 4, -1.000000f, 5.000000f, 0.300000f));
		Params.push_back(ShaderParam("y_loc", -1, 56, 4, -1.000000f, 1.000000f, 0.250000f));
		Params.push_back(ShaderParam("BOTH", -1, 60, 4, -2.000000f, 2.000000f, 0.510000f));
		Params.push_back(ShaderParam("ana_zoom", -1, 64, 4, -2.000000f, 2.000000f, 0.750000f));
		Params.push_back(ShaderParam("WIDTH", -1, 68, 4, 1.000000f, 7.000000f, 3.050000f));
		Params.push_back(ShaderParam("HEIGHT", -1, 72, 4, 1.000000f, 5.000000f, 2.000000f));
		Params.push_back(ShaderParam("warpX", -1, 76, 4, 0.000000f, 0.500000f, 0.100000f));
		Params.push_back(ShaderParam("warpY", -1, 80, 4, 0.000000f, 0.500000f, 0.100000f));
		Params.push_back(ShaderParam("pulfrich", -1, 84, 4, 0.000000f, 0.500000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
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
