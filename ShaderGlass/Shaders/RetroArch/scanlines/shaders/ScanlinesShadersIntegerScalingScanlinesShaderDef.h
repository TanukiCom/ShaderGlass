/*
ShaderGlass shader scanlines-shaders\integer-scaling-scanlines imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scanlines/shaders/integer-scaling-scanlines.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Simple pixel perfect scanlines for use *only* with interger scaling mode.
Perfect for low res output and low performance machines.
Also great if you dont want any moire patterns pin sharp scanlines
Use in combination with HDR mode in latest RetroArch and very bright
HDR monitors to get 'glowing' scanlines much like the original CRT's but sharper

Recommended setting for 720p 1 pixel width scalines at 2x or 3x scalings
Recommended setting for 1080p 2 or 3 pixel width scalines at 4x or 5x scalings
Recommended setting for 4K 4 or 5 pixel width scalines at 8x or 9x scalings


*/

#pragma once

namespace RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,30,62,
125,121,82,160,17,33,
82,85,104,209,50,119,
150,252,1,0,0,0,
176,7,0,0,5,0,
0,0,52,0,0,0,
160,3,0,0,236,3,
0,0,92,4,0,0,
20,7,0,0,82,68,
69,70,100,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
59,3,0,0,82,68,
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
0,0,7,0,0,0,
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
235,0,0,0,48,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,76,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
76,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
132,2,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,76,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,150,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,176,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,212,2,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
240,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
20,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,240,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,39,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,240,2,0,0,
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
0,0,66,2,0,0,
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
168,2,0,0,112,97,
114,97,109,115,95,83,
99,97,110,108,105,110,
101,87,105,100,116,104,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,233,2,
0,0,112,97,114,97,
109,115,95,83,99,114,
101,101,110,87,105,100,
116,104,0,112,97,114,
97,109,115,95,83,99,
114,101,101,110,72,101,
105,103,104,116,0,77,
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
104,0,0,0,3,0,
0,0,8,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
80,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,4,11,0,0,
89,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,1,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,176,2,
0,0,80,0,1,0,
172,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,66,32,16,0,
0,0,0,0,103,0,
0,4,242,32,16,0,
1,0,0,0,1,0,
0,0,104,0,0,2,
3,0,0,0,56,0,
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
52,0,0,9,50,0,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,2,0,0,0,
230,138,32,0,1,0,
0,0,3,0,0,0,
29,0,0,8,66,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,0,0,
0,0,49,0,0,8,
130,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
0,0,0,0,55,0,
0,9,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
255,255,255,255,31,0,
4,3,42,0,16,0,
0,0,0,0,54,0,
0,5,18,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
18,0,0,1,54,0,
0,5,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
48,0,0,1,56,0,
0,8,50,0,16,0,
2,0,0,0,166,10,
16,0,0,0,0,0,
70,128,32,0,1,0,
0,0,0,0,0,0,
29,0,0,7,50,0,
16,0,2,0,0,0,
70,0,16,0,0,0,
0,0,70,0,16,0,
2,0,0,0,1,0,
0,7,130,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,31,0,4,3,
58,0,16,0,0,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
7,0,0,1,18,0,
0,1,2,0,0,1,
21,0,0,1,22,0,
0,1,0,0,0,7,
18,0,16,0,1,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,191,
21,0,0,1,54,0,
0,5,98,0,16,0,
1,0,0,0,6,17,
16,0,1,0,0,0,
54,0,0,5,114,32,
16,0,0,0,0,0,
150,4,16,0,1,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,28,0,0,0,
3,0,0,0,0,0,
0,0,5,0,0,0,
11,0,0,0,0,0,
0,0,1,0,0,0,
5,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
4,0,0,0,1,0,
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
68,88,66,67,164,124,
81,201,49,203,96,72,
218,55,254,164,65,140,
155,131,1,0,0,0,
128,6,0,0,5,0,
0,0,52,0,0,0,
88,3,0,0,164,3,
0,0,216,3,0,0,
228,5,0,0,82,68,
69,70,28,3,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
243,2,0,0,82,68,
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
0,0,7,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,232,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,4,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,40,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
4,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
60,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,4,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,78,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,104,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,140,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
168,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
204,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,168,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,223,2,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,168,2,0,0,
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
0,0,250,1,0,0,
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
96,2,0,0,112,97,
114,97,109,115,95,83,
99,97,110,108,105,110,
101,87,105,100,116,104,
0,102,108,111,97,116,
0,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,161,2,
0,0,112,97,114,97,
109,115,95,83,99,114,
101,101,110,87,105,100,
116,104,0,112,97,114,
97,109,115,95,83,99,
114,101,101,110,72,101,
105,103,104,116,0,77,
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
0,0,0,0,3,3,
0,0,56,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,4,4,
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
83,72,69,88,4,2,
0,0,80,0,0,0,
129,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,66,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,1,0,0,0,
56,0,0,8,18,0,
16,0,0,0,0,0,
26,16,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,0,0,
0,0,56,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,42,16,
16,0,0,0,0,0,
65,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
14,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,16,16,0,
0,0,0,0,65,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
50,0,0,10,18,0,
16,0,0,0,0,0,
26,0,16,128,65,0,
0,0,0,0,0,0,
42,16,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,65,0,0,5,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,49,0,
0,8,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
26,128,32,0,1,0,
0,0,3,0,0,0,
31,0,4,3,10,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,18,0,0,1,
54,0,0,8,114,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,21,0,0,1,
54,0,0,5,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,18,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,10,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
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
class ScanlinesShadersIntegerScalingScanlinesShaderDef : public ShaderDef
{
public:
	ScanlinesShadersIntegerScalingScanlinesShaderDef() : ShaderDef{}
	{
		Name = "integer-scaling-scanlines";
		VertexByteCode = RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScanlinesShadersIntegerScalingScanlinesShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("ScanlineWidth", -1, 52, 4, 0.000000f, 20.000000f, 4.000000f, 1.000000f, "Scanline Width"));
		Params.push_back(ShaderParam("ScreenWidth", -1, 56, 4, 0.000000f, 7680.000000f, 3840.000000f, 1.000000f, "Screen Width"));
		Params.push_back(ShaderParam("ScreenHeight", -1, 60, 4, 0.000000f, 4320.000000f, 2160.000000f, 1.000000f, "Screen Height"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
