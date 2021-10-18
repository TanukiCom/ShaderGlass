/*
ShaderGlass shader cel-shaders-MMJ_Cel\MMJ_Cel_Shader_MP_Outline imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/cel/shaders/MMJ_Cel/MMJ_Cel_Shader_MP_Outline.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


----------------------------------------------------------------
MMJ's Cel Shader v2.0 - Multi-Pass
----------------------------------------------------------------
Parameters:
-----------
Outline Weight = Adjusts darkness of the outlines.

At lower internal resolutions, smaller values work better to
reduce the appearance of lines around individual areas of some
textures. At higher internal resolutions, setting both a higher
outline weight value plus increased blur factors will work
together to thicken the appearance of the lines.
----------------------------------------------------------------


*/

#pragma once

namespace RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,122,184,
223,161,115,182,92,233,
245,172,96,189,184,122,
105,7,1,0,0,0,
64,7,0,0,5,0,
0,0,52,0,0,0,
84,2,0,0,160,2,
0,0,136,3,0,0,
164,6,0,0,82,68,
69,70,24,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
240,1,0,0,82,68,
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
0,0,2,0,0,0,
24,1,0,0,32,0,
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
235,0,0,0,104,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,140,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,176,1,0,0,
16,0,0,0,4,0,
0,0,0,0,0,0,
204,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,77,77,74,95,66,
108,117,114,80,97,115,
115,95,86,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,130,1,0,0,
112,97,114,97,109,115,
95,79,117,116,108,105,
110,101,87,101,105,103,
104,116,0,102,108,111,
97,116,0,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
197,1,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,224,0,
0,0,8,0,0,0,
8,0,0,0,200,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,200,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,0,0,0,200,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,200,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,0,0,0,200,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,0,0,0,200,0,
0,0,5,0,0,0,
0,0,0,0,3,0,
0,0,5,0,0,0,
15,0,0,0,200,0,
0,0,6,0,0,0,
0,0,0,0,3,0,
0,0,6,0,0,0,
15,0,0,0,209,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,7,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,20,3,0,0,
80,0,1,0,197,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,1,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,3,0,
0,0,101,0,0,3,
242,32,16,0,4,0,
0,0,101,0,0,3,
242,32,16,0,5,0,
0,0,101,0,0,3,
242,32,16,0,6,0,
0,0,103,0,0,4,
242,32,16,0,7,0,
0,0,1,0,0,0,
104,0,0,2,4,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,54,0,
0,5,242,32,16,0,
1,0,0,0,70,20,
16,0,1,0,0,0,
54,0,0,6,66,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
54,0,0,5,130,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,6,
50,0,16,0,0,0,
0,0,230,10,16,128,
65,0,0,0,0,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,70,14,16,0,
0,0,0,0,70,20,
16,0,1,0,0,0,
54,0,0,5,242,32,
16,0,2,0,0,0,
70,14,16,0,1,0,
0,0,54,0,0,5,
66,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,54,0,
0,6,130,0,16,0,
2,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,54,0,
0,6,50,0,16,0,
2,0,0,0,230,10,
16,128,65,0,0,0,
2,0,0,0,0,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,2,0,0,0,
70,20,16,0,1,0,
0,0,54,0,0,5,
242,32,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,50,0,
0,12,242,32,16,0,
4,0,0,0,102,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,191,0,0,128,63,
0,0,128,63,0,0,
128,63,70,14,16,0,
1,0,0,0,54,0,
0,5,66,0,16,0,
3,0,0,0,10,16,
16,0,1,0,0,0,
50,0,0,12,242,32,
16,0,5,0,0,0,
102,14,16,0,2,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,63,0,0,128,63,
0,0,128,63,70,14,
16,0,3,0,0,0,
54,0,0,5,130,0,
16,0,1,0,0,0,
26,16,16,0,1,0,
0,0,50,0,0,12,
242,32,16,0,6,0,
0,0,102,14,16,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,63,0,0,
128,63,0,0,128,63,
70,14,16,0,1,0,
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
16,0,7,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,22,0,
0,0,4,0,0,0,
0,0,0,0,10,0,
0,0,11,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,10,0,0,0,
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
68,88,66,67,248,107,
17,143,141,8,249,112,
4,218,173,41,107,62,
54,97,1,0,0,0,
28,22,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,224,2,
0,0,20,3,0,0,
128,21,0,0,82,68,
69,70,224,1,0,0,
1,0,0,0,200,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
184,1,0,0,82,68,
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
0,0,180,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,195,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,77,77,74,95,66,
108,117,114,80,97,115,
115,95,86,95,115,97,
109,112,108,101,114,0,
77,77,74,95,66,108,
117,114,80,97,115,115,
95,86,0,80,117,115,
104,0,195,0,0,0,
2,0,0,0,224,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,48,1,0,0,
0,0,0,0,16,0,
0,0,0,0,0,0,
84,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
120,1,0,0,16,0,
0,0,4,0,0,0,
2,0,0,0,148,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,112,97,
114,97,109,115,95,77,
77,74,95,66,108,117,
114,80,97,115,115,95,
86,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
74,1,0,0,112,97,
114,97,109,115,95,79,
117,116,108,105,110,101,
87,101,105,103,104,116,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,141,1,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
73,83,71,78,188,0,
0,0,7,0,0,0,
8,0,0,0,176,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,176,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
15,3,0,0,176,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,2,0,0,0,
15,15,0,0,176,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,3,0,0,0,
15,15,0,0,176,0,
0,0,4,0,0,0,
0,0,0,0,3,0,
0,0,4,0,0,0,
15,15,0,0,176,0,
0,0,5,0,0,0,
0,0,0,0,3,0,
0,0,5,0,0,0,
15,15,0,0,176,0,
0,0,6,0,0,0,
0,0,0,0,3,0,
0,0,6,0,0,0,
15,15,0,0,84,69,
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
100,18,0,0,80,0,
0,0,153,4,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,2,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,1,0,0,0,
98,16,0,3,242,16,
16,0,2,0,0,0,
98,16,0,3,242,16,
16,0,3,0,0,0,
98,16,0,3,242,16,
16,0,4,0,0,0,
98,16,0,3,242,16,
16,0,5,0,0,0,
98,16,0,3,242,16,
16,0,6,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,14,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,70,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,16,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,0,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,10,215,163,59,
0,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,0,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,16,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
70,16,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
102,26,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
70,16,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,230,26,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
6,0,0,0,198,16,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,6,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,230,26,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,7,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,230,26,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,8,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
9,0,0,0,70,16,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,9,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
10,0,0,0,230,26,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,10,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
11,0,0,0,70,16,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,11,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
12,0,0,0,230,26,
16,0,6,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,12,0,
0,0,56,0,0,10,
114,0,16,0,13,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,217,137,157,61,
217,137,157,61,217,137,
157,61,0,0,0,0,
50,0,0,15,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
217,137,157,61,217,137,
157,61,217,137,157,61,
0,0,0,0,2,64,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
13,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,0,0,
0,0,16,0,0,7,
130,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,130,0,16,0,
0,0,0,0,1,64,
0,0,66,96,229,59,
58,0,16,0,0,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,10,226,0,
16,0,1,0,0,0,
6,9,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,16,0,0,7,
18,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,18,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
10,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
4,0,0,0,0,0,
0,10,226,0,16,0,
1,0,0,0,6,9,
16,0,4,0,0,0,
2,64,0,0,0,0,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
150,7,16,0,1,0,
0,0,6,0,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
16,0,0,7,18,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
18,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,10,0,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,10,
226,0,16,0,1,0,
0,0,6,9,16,0,
5,0,0,0,2,64,
0,0,0,0,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,150,7,
16,0,1,0,0,0,
6,0,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,16,0,
0,7,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,7,18,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,10,226,0,
16,0,1,0,0,0,
6,9,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,16,0,0,7,
18,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,18,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
10,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
6,0,0,0,0,0,
0,10,226,0,16,0,
1,0,0,0,6,9,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
150,7,16,0,1,0,
0,0,6,0,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
16,0,0,7,18,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
18,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,10,0,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,7,0,
0,0,0,0,0,10,
226,0,16,0,1,0,
0,0,6,9,16,0,
7,0,0,0,2,64,
0,0,0,0,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,150,7,
16,0,1,0,0,0,
6,0,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,16,0,
0,7,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,7,18,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,10,226,0,
16,0,1,0,0,0,
6,9,16,0,8,0,
0,0,2,64,0,0,
0,0,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,16,0,0,7,
18,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,18,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
10,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
9,0,0,0,0,0,
0,10,226,0,16,0,
1,0,0,0,6,9,
16,0,9,0,0,0,
2,64,0,0,0,0,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
150,7,16,0,1,0,
0,0,6,0,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
16,0,0,7,18,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
18,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,10,0,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
70,2,16,0,10,0,
0,0,0,0,0,10,
226,0,16,0,1,0,
0,0,6,9,16,0,
10,0,0,0,2,64,
0,0,0,0,0,0,
205,204,76,61,205,204,
76,61,205,204,76,61,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
10,215,163,59,14,0,
0,7,114,0,16,0,
1,0,0,0,150,7,
16,0,1,0,0,0,
6,0,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
1,0,0,0,16,0,
0,7,18,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
14,0,0,7,18,0,
16,0,1,0,0,0,
1,64,0,0,66,96,
229,59,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,16,0,0,10,
18,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,70,2,
16,0,11,0,0,0,
0,0,0,10,226,0,
16,0,1,0,0,0,
6,9,16,0,11,0,
0,0,2,64,0,0,
0,0,0,0,205,204,
76,61,205,204,76,61,
205,204,76,61,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,10,215,
163,59,14,0,0,7,
114,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,6,0,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,16,0,0,7,
18,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
66,96,229,59,14,0,
0,7,18,0,16,0,
1,0,0,0,1,64,
0,0,66,96,229,59,
10,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
16,0,0,10,18,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,70,2,16,0,
12,0,0,0,0,0,
0,10,226,0,16,0,
1,0,0,0,6,9,
16,0,12,0,0,0,
2,64,0,0,0,0,
0,0,205,204,76,61,
205,204,76,61,205,204,
76,61,0,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,10,215,163,59,
14,0,0,7,114,0,
16,0,1,0,0,0,
150,7,16,0,1,0,
0,0,6,0,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
16,0,0,7,18,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,66,96,
229,59,14,0,0,7,
18,0,16,0,0,0,
0,0,1,64,0,0,
66,96,229,59,10,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,171,170,
170,61,47,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,8,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
10,128,32,0,1,0,
0,0,1,0,0,0,
25,0,0,5,114,32,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,143,0,
0,0,14,0,0,0,
0,0,0,0,7,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
13,0,0,0,0,0,
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

}

namespace RetroArch
{
class CelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDef : public ShaderDef
{
public:
	CelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDef() : ShaderDef{}
	{
		Name = "MMJ_Cel_Shader_MP_Outline";
		VertexByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCelShadersMMJ_CelMMJ_Cel_Shader_MP_OutlineShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("OutlineWeight", -1, 16, 4, 0.000000f, 10.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("MMJ_BlurPass_VSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("MMJ_BlurPass_V", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
