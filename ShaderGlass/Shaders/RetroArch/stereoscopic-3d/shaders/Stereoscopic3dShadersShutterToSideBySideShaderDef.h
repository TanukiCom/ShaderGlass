/*
ShaderGlass shader stereoscopic-3d-shaders\shutter-to-side-by-side imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/stereoscopic-3d/shaders/shutter-to-side-by-side.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

 Shutter 3D to side-by-side
 by hunterk
 license: public domain

*/

#pragma once

namespace RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,179,180,
123,16,176,40,194,60,
76,28,14,190,223,32,
105,143,1,0,0,0,
36,9,0,0,5,0,
0,0,52,0,0,0,
116,4,0,0,192,4,
0,0,72,5,0,0,
136,8,0,0,82,68,
69,70,56,4,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
15,4,0,0,82,68,
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
0,0,11,0,0,0,
24,1,0,0,80,0,
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
235,0,0,0,208,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,236,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,16,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
236,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
36,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,236,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,54,3,
0,0,48,0,0,0,
4,0,0,0,2,0,
0,0,80,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,116,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
136,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
172,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,136,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,188,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,136,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,204,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
136,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
222,3,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,136,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,237,3,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,136,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,255,3,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
136,3,0,0,0,0,
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
226,2,0,0,112,97,
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
0,0,0,0,72,3,
0,0,112,97,114,97,
109,115,95,90,79,79,
77,0,102,108,111,97,
116,0,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,3,0,0,112,97,
114,97,109,115,95,118,
101,114,116,95,112,111,
115,0,112,97,114,97,
109,115,95,104,111,114,
122,95,112,111,115,0,
112,97,114,97,109,115,
95,115,101,112,97,114,
97,116,105,111,110,0,
112,97,114,97,109,115,
95,102,108,105,99,107,
101,114,0,112,97,114,
97,109,115,95,104,101,
105,103,104,116,95,109,
111,100,0,112,97,114,
97,109,115,95,115,119,
97,112,95,101,121,101,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
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
71,78,128,0,0,0,
4,0,0,0,8,0,
0,0,104,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,104,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,12,3,
0,0,104,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,1,14,
0,0,113,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
56,3,0,0,80,0,
1,0,206,0,0,0,
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
101,0,0,3,194,32,
16,0,0,0,0,0,
101,0,0,3,18,32,
16,0,1,0,0,0,
103,0,0,4,242,32,
16,0,2,0,0,0,
1,0,0,0,104,0,
0,2,2,0,0,0,
0,0,0,10,50,0,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
0,191,0,0,0,0,
0,0,0,0,56,0,
0,8,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
14,0,0,11,34,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,42,128,32,0,
1,0,0,0,4,0,
0,0,54,0,0,8,
146,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,0,0,0,0,0,
0,0,0,128,50,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,0,16,0,1,0,
0,0,182,143,32,0,
1,0,0,0,3,0,
0,0,0,0,0,10,
210,0,16,0,0,0,
0,0,6,1,16,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,0,0,0,
0,63,0,0,0,63,
0,0,0,7,130,32,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,0,0,
0,8,34,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
10,128,32,0,1,0,
0,0,4,0,0,0,
54,0,0,6,66,0,
16,0,1,0,0,0,
26,0,16,128,65,0,
0,0,0,0,0,0,
0,0,0,7,66,32,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,0,0,
0,7,50,32,16,0,
0,0,0,0,230,10,
16,0,1,0,0,0,
134,0,16,0,0,0,
0,0,86,0,0,6,
18,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,3,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
65,0,0,5,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,10,
18,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
0,0,0,64,10,0,
16,0,0,0,0,0,
0,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
58,128,32,0,1,0,
0,0,4,0,0,0,
54,0,0,6,18,32,
16,0,1,0,0,0,
10,0,16,128,129,0,
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
2,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,22,0,0,0,
2,0,0,0,0,0,
0,0,6,0,0,0,
18,0,0,0,0,0,
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


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,16,135,
228,182,118,23,126,195,
195,212,252,64,41,96,
142,20,1,0,0,0,
16,8,0,0,5,0,
0,0,52,0,0,0,
152,4,0,0,252,4,
0,0,48,5,0,0,
116,7,0,0,82,68,
69,70,92,4,0,0,
1,0,0,0,36,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
51,4,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,6,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
13,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,30,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,79,114,105,
103,105,110,97,108,72,
105,115,116,111,114,121,
49,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,79,
114,105,103,105,110,97,
108,72,105,115,116,111,
114,121,49,0,80,117,
115,104,0,171,30,1,
0,0,11,0,0,0,
60,1,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,244,2,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,16,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,52,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
16,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
72,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,16,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,90,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,116,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,3,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
172,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
208,3,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,172,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,224,3,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,172,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,240,3,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
172,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
2,4,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,172,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,17,4,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,172,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,35,4,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
172,3,0,0,0,0,
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
6,3,0,0,112,97,
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
0,0,0,0,108,3,
0,0,112,97,114,97,
109,115,95,90,79,79,
77,0,102,108,111,97,
116,0,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
164,3,0,0,112,97,
114,97,109,115,95,118,
101,114,116,95,112,111,
115,0,112,97,114,97,
109,115,95,104,111,114,
122,95,112,111,115,0,
112,97,114,97,109,115,
95,115,101,112,97,114,
97,116,105,111,110,0,
112,97,114,97,109,115,
95,102,108,105,99,107,
101,114,0,112,97,114,
97,109,115,95,104,101,
105,103,104,116,95,109,
111,100,0,112,97,114,
97,109,115,95,115,119,
97,112,95,101,121,101,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
73,83,71,78,92,0,
0,0,3,0,0,0,
8,0,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,80,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
12,12,0,0,80,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,1,0,0,84,69,
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
60,2,0,0,80,0,
0,0,143,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,5,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,90,0,0,3,
0,96,16,0,3,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,3,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,194,16,16,0,
0,0,0,0,98,16,
0,3,18,16,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,8,
18,0,16,0,1,0,
0,0,10,16,16,128,
65,0,0,0,1,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,86,133,
32,0,1,0,0,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,9,242,0,
16,0,0,0,0,0,
70,14,16,0,2,0,
0,0,6,16,16,0,
1,0,0,0,70,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,2,0,
0,0,230,26,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,56,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,6,16,
16,0,1,0,0,0,
56,0,0,8,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,86,133,32,0,
1,0,0,0,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
3,0,0,0,230,26,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,9,242,0,16,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
6,0,16,0,1,0,
0,0,70,14,16,0,
2,0,0,0,0,0,
0,7,242,32,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,13,0,0,0,
4,0,0,0,0,0,
0,0,4,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
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

}

namespace RetroArch
{
class Stereoscopic3dShadersShutterToSideBySideShaderDef : public ShaderDef
{
public:
	Stereoscopic3dShadersShutterToSideBySideShaderDef() : ShaderDef{}
	{
		Name = "shutter-to-side-by-side";
		VertexByteCode = RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchStereoscopic3dShadersShutterToSideBySideShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("ZOOM", -1, 52, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("vert_pos", -1, 56, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("horz_pos", -1, 60, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("separation", -1, 64, 4, -2.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("flicker", -1, 68, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("height_mod", -1, 72, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("swap_eye", -1, 76, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("OriginalHistory1", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
