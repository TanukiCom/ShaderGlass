/*
ShaderGlass shader dithering-shaders-gdapt\gdapt-pass0 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/dithering/shaders/gdapt/gdapt-pass0.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Genesis Dithering and Pseudo Transparency Shader v1.3 - Pass 0
by Sp00kyFox, 2014

Neighbor anaylsis via dot product of the difference vectors.


 Reference: http://www.compuphase.com/cmetric.htm

*/

#pragma once

namespace RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,39,160,
215,142,251,187,7,59,
91,68,199,40,54,90,
8,190,1,0,0,0,
192,5,0,0,5,0,
0,0,52,0,0,0,
84,3,0,0,160,3,
0,0,16,4,0,0,
36,5,0,0,82,68,
69,70,24,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
239,2,0,0,82,68,
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
0,0,6,0,0,0,
24,1,0,0,64,0,
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
235,0,0,0,8,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,36,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,72,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
36,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
92,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,36,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,110,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,136,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
192,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
228,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,192,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,26,2,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,128,2,0,0,
112,97,114,97,109,115,
95,77,79,68,69,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,184,2,
0,0,112,97,114,97,
109,115,95,80,87,82,
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
15,3,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,104,0,0,0,
3,0,0,0,8,0,
0,0,80,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,80,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,12,3,
0,0,89,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
12,1,0,0,80,0,
1,0,67,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,1,0,0,0,
95,0,0,3,50,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,194,32,
16,0,0,0,0,0,
103,0,0,4,242,32,
16,0,1,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,6,
194,32,16,0,0,0,
0,0,166,142,32,0,
1,0,0,0,0,0,
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
0,0,0,0,0,8,
242,32,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,6,0,
0,0,1,0,0,0,
0,0,0,0,5,0,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,33,122,
249,7,80,136,103,160,
66,94,82,80,151,35,
208,89,1,0,0,0,
192,9,0,0,5,0,
0,0,52,0,0,0,
12,3,0,0,88,3,
0,0,140,3,0,0,
36,9,0,0,82,68,
69,70,208,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
167,2,0,0,82,68,
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
0,0,6,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,192,1,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,220,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,0,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
220,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
20,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,220,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,38,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,64,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,100,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
120,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,2,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,120,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,83,
111,117,114,99,101,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,210,1,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,56,2,0,0,
112,97,114,97,109,115,
95,77,79,68,69,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,112,2,
0,0,112,97,114,97,
109,115,95,80,87,82,
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
3,3,0,0,56,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
12,12,0,0,84,69,
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
144,5,0,0,80,0,
0,0,100,1,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,4,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
98,16,0,3,194,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,5,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,64,50,0,
0,12,242,0,16,0,
1,0,0,0,230,30,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,0,0,
0,0,70,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,50,0,
0,15,98,0,16,0,
0,0,0,0,6,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,128,191,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,64,0,0,64,64,
0,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,7,50,0,16,0,
0,0,0,0,214,5,
16,0,0,0,0,0,
70,0,16,0,3,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
50,0,0,9,18,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,42,0,16,0,
3,0,0,0,10,0,
16,0,0,0,0,0,
75,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,64,192,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
171,170,170,190,52,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,192,
1,64,0,0,0,0,
64,64,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,47,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,8,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,42,128,32,0,
1,0,0,0,3,0,
0,0,25,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,226,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,54,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
150,7,16,0,0,0,
0,0,24,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
16,0,0,7,130,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,68,0,
0,5,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,3,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
4,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,150,7,
16,0,0,0,0,0,
57,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,150,7,16,0,
0,0,0,0,54,0,
0,5,114,32,16,0,
0,0,0,0,150,7,
16,0,0,0,0,0,
16,0,0,7,34,0,
16,0,0,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,68,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,226,0,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,6,9,16,0,
4,0,0,0,16,32,
0,7,34,0,16,0,
0,0,0,0,150,7,
16,0,0,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
49,0,0,8,34,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,26,128,32,0,
1,0,0,0,3,0,
0,0,1,0,0,7,
66,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,10,0,
16,0,2,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,2,0,
0,0,42,0,16,0,
0,0,0,0,60,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,60,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
1,0,0,7,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,55,0,0,9,
130,32,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,45,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
32,0,0,0,0,0,
0,0,6,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,0,0,0,1,0,
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
class DitheringShadersGdaptGdaptPass0ShaderDef : public ShaderDef
{
public:
	DitheringShadersGdaptGdaptPass0ShaderDef() : ShaderDef{}
	{
		Name = "gdapt-pass0";
		VertexByteCode = RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchDitheringShadersGdaptGdaptPass0ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MODE", -1, 52, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("PWR", -1, 56, 4, 0.000000f, 10.000000f, 2.000000f));
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
