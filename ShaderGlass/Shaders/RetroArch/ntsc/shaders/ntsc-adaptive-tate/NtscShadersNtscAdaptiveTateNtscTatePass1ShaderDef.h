/*
ShaderGlass shader ntsc-shaders-ntsc-adaptive-tate\ntsc-tate-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/ntsc/shaders/ntsc-adaptive-tate/ntsc-tate-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

// NTSC-Adaptive
// based on Themaister's NTSC shader

*/

#pragma once

namespace RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,219,137,
34,90,171,60,96,118,
213,96,47,50,246,245,
230,131,1,0,0,0,
24,12,0,0,5,0,
0,0,52,0,0,0,
132,4,0,0,208,4,
0,0,232,5,0,0,
124,11,0,0,82,68,
69,70,72,4,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
31,4,0,0,82,68,
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
92,0,0,0,13,0,
0,0,120,0,0,0,
160,0,0,0,0,0,
0,0,0,0,0,0,
128,2,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,148,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,184,2,
0,0,64,0,0,0,
16,0,0,0,2,0,
0,0,212,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,248,2,0,0,
80,0,0,0,16,0,
0,0,2,0,0,0,
212,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
12,3,0,0,96,0,
0,0,16,0,0,0,
2,0,0,0,212,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,3,
0,0,112,0,0,0,
4,0,0,0,0,0,
0,0,56,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,92,3,0,0,
116,0,0,0,4,0,
0,0,2,0,0,0,
116,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
152,3,0,0,120,0,
0,0,4,0,0,0,
2,0,0,0,116,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,168,3,
0,0,124,0,0,0,
4,0,0,0,2,0,
0,0,116,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,189,3,0,0,
128,0,0,0,4,0,
0,0,2,0,0,0,
116,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
213,3,0,0,132,0,
0,0,4,0,0,0,
2,0,0,0,116,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,232,3,
0,0,136,0,0,0,
4,0,0,0,2,0,
0,0,116,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,250,3,0,0,
140,0,0,0,4,0,
0,0,2,0,0,0,
116,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
13,4,0,0,144,0,
0,0,4,0,0,0,
2,0,0,0,116,3,
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
0,0,139,2,0,0,
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
202,2,0,0,103,108,
111,98,97,108,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
103,108,111,98,97,108,
95,83,111,117,114,99,
101,83,105,122,101,0,
103,108,111,98,97,108,
95,70,114,97,109,101,
67,111,117,110,116,0,
100,119,111,114,100,0,
171,171,0,0,19,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,48,3,
0,0,103,108,111,98,
97,108,95,113,117,97,
108,105,116,121,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,107,3,
0,0,103,108,111,98,
97,108,95,110,116,115,
99,95,115,97,116,0,
103,108,111,98,97,108,
95,99,117,115,116,95,
102,114,105,110,103,105,
110,103,0,103,108,111,
98,97,108,95,99,117,
115,116,95,97,114,116,
105,102,97,99,116,105,
110,103,0,103,108,111,
98,97,108,95,110,116,
115,99,95,98,114,105,
103,104,116,0,103,108,
111,98,97,108,95,110,
116,115,99,95,115,99,
97,108,101,0,103,108,
111,98,97,108,95,110,
116,115,99,95,102,105,
101,108,100,115,0,103,
108,111,98,97,108,95,
110,116,115,99,95,112,
104,97,115,101,0,77,
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
16,1,0,0,10,0,
0,0,8,0,0,0,
248,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
248,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,3,0,0,
248,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,1,14,0,0,
248,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,2,13,0,0,
248,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,4,11,0,0,
248,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,8,7,0,0,
248,0,0,0,6,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,1,14,0,0,
248,0,0,0,7,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,2,13,0,0,
248,0,0,0,8,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,4,11,0,0,
1,1,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,3,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,140,5,
0,0,80,0,1,0,
99,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,10,0,0,0,
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
101,0,0,3,34,32,
16,0,1,0,0,0,
101,0,0,3,66,32,
16,0,1,0,0,0,
101,0,0,3,130,32,
16,0,1,0,0,0,
101,0,0,3,18,32,
16,0,2,0,0,0,
101,0,0,3,34,32,
16,0,2,0,0,0,
101,0,0,3,66,32,
16,0,2,0,0,0,
103,0,0,4,242,32,
16,0,3,0,0,0,
1,0,0,0,104,0,
0,2,2,0,0,0,
56,0,0,9,50,0,
16,0,0,0,0,0,
70,128,32,0,0,0,
0,0,4,0,0,0,
166,138,32,0,0,0,
0,0,8,0,0,0,
14,0,0,8,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,128,32,0,
0,0,0,0,6,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,6,20,16,0,
1,0,0,0,6,132,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,7,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,49,0,0,8,
18,0,16,0,1,0,
0,0,42,128,32,0,
0,0,0,0,8,0,
0,0,1,64,0,0,
0,0,128,63,14,0,
0,9,98,0,16,0,
1,0,0,0,6,129,
32,0,0,0,0,0,
4,0,0,0,6,129,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,7,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
86,9,16,0,1,0,
0,0,55,0,0,9,
50,0,16,0,0,0,
0,0,6,0,16,0,
1,0,0,0,70,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,54,0,0,5,
66,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,52,0,
0,8,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
42,128,32,0,0,0,
0,0,8,0,0,0,
56,0,0,7,130,32,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,0,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,49,0,
0,8,34,0,16,0,
0,0,0,0,1,64,
0,0,0,0,150,67,
26,128,32,0,0,0,
0,0,5,0,0,0,
49,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
32,64,10,128,32,0,
0,0,0,0,9,0,
0,0,55,0,0,15,
98,0,16,0,0,0,
0,0,86,6,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,64,0,0,
64,64,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,64,64,
0,0,0,64,0,0,
0,0,49,0,0,8,
130,0,16,0,0,0,
0,0,10,128,32,0,
0,0,0,0,9,0,
0,0,1,64,0,0,
0,0,192,63,55,0,
0,9,34,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,54,0,
0,5,18,32,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
49,0,0,7,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,32,64,54,0,
0,6,34,32,16,0,
1,0,0,0,26,128,
32,0,0,0,0,0,
8,0,0,0,54,0,
0,6,66,32,16,0,
1,0,0,0,42,128,
32,0,0,0,0,0,
7,0,0,0,49,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,191,
26,128,32,0,0,0,
0,0,7,0,0,0,
55,0,0,11,130,32,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,26,128,32,0,
0,0,0,0,7,0,
0,0,58,128,32,0,
0,0,0,0,7,0,
0,0,56,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,26,128,
32,0,0,0,0,0,
7,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,55,0,0,10,
18,32,16,0,2,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
10,128,32,0,0,0,
0,0,8,0,0,0,
27,0,0,6,18,0,
16,0,0,0,0,0,
26,128,32,0,0,0,
0,0,7,0,0,0,
39,0,0,7,66,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
2,0,0,0,32,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
1,64,0,0,255,255,
255,255,55,0,0,9,
34,32,16,0,2,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,80,119,86,63,
1,64,0,0,146,10,
134,63,55,0,0,9,
34,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
1,64,0,0,0,0,
128,63,55,0,0,10,
66,32,16,0,2,0,
0,0,10,0,16,0,
0,0,0,0,58,128,
32,0,0,0,0,0,
8,0,0,0,26,0,
16,0,0,0,0,0,
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
3,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,39,0,0,0,
2,0,0,0,0,0,
0,0,12,0,0,0,
21,0,0,0,2,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
5,0,0,0,9,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,78,214,
89,206,222,68,66,205,
116,131,135,63,211,220,
215,36,1,0,0,0,
200,13,0,0,5,0,
0,0,52,0,0,0,
220,4,0,0,208,5,
0,0,4,6,0,0,
44,13,0,0,82,68,
69,70,160,4,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
119,4,0,0,82,68,
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
0,0,0,0,1,0,
0,0,1,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,85,
66,79,0,171,179,0,
0,0,13,0,0,0,
208,0,0,0,160,0,
0,0,0,0,0,0,
0,0,0,0,216,2,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,236,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,16,3,0,0,
64,0,0,0,16,0,
0,0,0,0,0,0,
44,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
80,3,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,44,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,100,3,
0,0,96,0,0,0,
16,0,0,0,0,0,
0,0,44,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,118,3,0,0,
112,0,0,0,4,0,
0,0,2,0,0,0,
144,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
180,3,0,0,116,0,
0,0,4,0,0,0,
0,0,0,0,204,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,240,3,
0,0,120,0,0,0,
4,0,0,0,0,0,
0,0,204,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,0,4,0,0,
124,0,0,0,4,0,
0,0,0,0,0,0,
204,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
21,4,0,0,128,0,
0,0,4,0,0,0,
0,0,0,0,204,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,45,4,
0,0,132,0,0,0,
4,0,0,0,0,0,
0,0,204,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,64,4,0,0,
136,0,0,0,4,0,
0,0,0,0,0,0,
204,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
82,4,0,0,140,0,
0,0,4,0,0,0,
0,0,0,0,204,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,101,4,
0,0,144,0,0,0,
4,0,0,0,0,0,
0,0,204,3,0,0,
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
227,2,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,34,3,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,103,108,
111,98,97,108,95,70,
114,97,109,101,67,111,
117,110,116,0,100,119,
111,114,100,0,171,171,
0,0,19,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,136,3,0,0,
103,108,111,98,97,108,
95,113,117,97,108,105,
116,121,0,102,108,111,
97,116,0,171,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,195,3,0,0,
103,108,111,98,97,108,
95,110,116,115,99,95,
115,97,116,0,103,108,
111,98,97,108,95,99,
117,115,116,95,102,114,
105,110,103,105,110,103,
0,103,108,111,98,97,
108,95,99,117,115,116,
95,97,114,116,105,102,
97,99,116,105,110,103,
0,103,108,111,98,97,
108,95,110,116,115,99,
95,98,114,105,103,104,
116,0,103,108,111,98,
97,108,95,110,116,115,
99,95,115,99,97,108,
101,0,103,108,111,98,
97,108,95,110,116,115,
99,95,102,105,101,108,
100,115,0,103,108,111,
98,97,108,95,110,116,
115,99,95,112,104,97,
115,101,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
236,0,0,0,9,0,
0,0,8,0,0,0,
224,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
224,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,12,0,0,
224,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,1,1,0,0,
224,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,2,2,0,0,
224,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,4,4,0,0,
224,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,8,8,0,0,
224,0,0,0,6,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,1,1,0,0,
224,0,0,0,7,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,2,2,0,0,
224,0,0,0,8,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,4,4,0,0,
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
69,88,32,7,0,0,
80,0,0,0,200,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
8,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,98,16,0,3,
194,16,16,0,0,0,
0,0,98,16,0,3,
18,16,16,0,1,0,
0,0,98,16,0,3,
34,16,16,0,1,0,
0,0,98,16,0,3,
66,16,16,0,1,0,
0,0,98,16,0,3,
130,16,16,0,1,0,
0,0,98,16,0,3,
18,16,16,0,2,0,
0,0,98,16,0,3,
34,16,16,0,2,0,
0,0,98,16,0,3,
66,16,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
8,0,0,0,49,0,
0,7,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
42,16,16,0,2,0,
0,0,30,0,0,8,
34,0,16,0,0,0,
0,0,1,64,0,0,
1,0,0,0,10,128,
32,0,0,0,0,0,
7,0,0,0,86,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
56,0,0,7,66,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,65,0,
0,5,66,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
50,0,0,10,34,0,
16,0,0,0,0,0,
42,0,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,64,26,0,16,0,
0,0,0,0,56,0,
0,10,194,0,16,0,
0,0,0,0,166,26,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,63,171,170,
170,62,65,0,0,5,
194,0,16,0,0,0,
0,0,166,14,16,0,
0,0,0,0,50,0,
0,10,66,0,16,0,
0,0,0,0,42,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
42,16,16,0,0,0,
0,0,50,0,0,10,
130,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
0,0,64,64,42,16,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,0,0,
0,7,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,56,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,73,12,6,64,
56,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
219,15,73,64,49,0,
0,7,34,0,16,0,
1,0,0,0,10,16,
16,0,1,0,0,0,
1,64,0,0,0,0,
32,64,55,0,0,9,
34,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,9,
34,0,16,0,0,0,
0,0,58,16,16,0,
0,0,0,0,26,16,
16,0,2,0,0,0,
26,0,16,0,0,0,
0,0,77,0,0,7,
18,0,16,0,1,0,
0,0,18,0,16,0,
2,0,0,0,26,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,2,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,5,
66,0,16,0,2,0,
0,0,10,0,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,210,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,198,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
16,0,0,10,34,0,
16,0,3,0,0,0,
2,64,0,0,231,140,
24,63,40,126,140,190,
193,168,164,190,0,0,
0,0,134,3,16,0,
1,0,0,0,16,0,
0,10,66,0,16,0,
3,0,0,0,2,64,
0,0,117,147,88,62,
198,220,5,191,210,111,
159,62,0,0,0,0,
134,3,16,0,1,0,
0,0,16,0,0,10,
18,0,16,0,4,0,
0,0,2,64,0,0,
108,9,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,134,3,
16,0,1,0,0,0,
56,0,0,7,98,0,
16,0,4,0,0,0,
86,6,16,0,2,0,
0,0,86,6,16,0,
3,0,0,0,54,0,
0,5,18,0,16,0,
5,0,0,0,10,16,
16,0,2,0,0,0,
56,0,0,7,34,0,
16,0,5,0,0,0,
42,16,16,0,1,0,
0,0,1,64,0,0,
0,0,0,64,15,0,
0,7,34,0,16,0,
6,0,0,0,70,0,
16,0,5,0,0,0,
70,0,16,0,4,0,
0,0,15,0,0,7,
66,0,16,0,6,0,
0,0,70,0,16,0,
5,0,0,0,134,0,
16,0,4,0,0,0,
16,0,0,7,18,0,
16,0,7,0,0,0,
214,23,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,54,0,
0,5,18,0,16,0,
3,0,0,0,10,0,
16,0,4,0,0,0,
56,0,0,7,98,0,
16,0,7,0,0,0,
86,6,16,0,2,0,
0,0,86,6,16,0,
6,0,0,0,55,0,
0,9,210,0,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
6,9,16,0,7,0,
0,0,6,9,16,0,
3,0,0,0,86,0,
0,6,18,0,16,0,
0,0,0,0,10,128,
32,0,0,0,0,0,
7,0,0,0,56,0,
0,7,34,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,65,0,0,5,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,50,0,
0,10,18,0,16,0,
0,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
10,0,16,0,0,0,
0,0,0,0,0,7,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,56,0,
0,10,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
2,64,0,0,73,12,
6,64,219,15,73,64,
0,0,0,0,0,0,
0,0,55,0,0,9,
18,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,26,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,50,0,0,9,
18,0,16,0,0,0,
0,0,58,16,16,0,
0,0,0,0,26,16,
16,0,2,0,0,0,
10,0,16,0,0,0,
0,0,77,0,0,7,
18,0,16,0,0,0,
0,0,18,0,16,0,
2,0,0,0,10,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,0,0,0,0,
10,0,16,0,2,0,
0,0,54,0,0,5,
66,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,56,0,
0,7,98,0,16,0,
3,0,0,0,86,6,
16,0,0,0,0,0,
86,6,16,0,3,0,
0,0,15,0,0,7,
34,0,16,0,2,0,
0,0,70,0,16,0,
5,0,0,0,70,0,
16,0,3,0,0,0,
15,0,0,7,66,0,
16,0,2,0,0,0,
70,0,16,0,5,0,
0,0,134,0,16,0,
3,0,0,0,16,0,
0,7,18,0,16,0,
3,0,0,0,214,23,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,7,
98,0,16,0,3,0,
0,0,86,6,16,0,
0,0,0,0,86,6,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,0,0,0,0,
134,3,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,49,0,0,7,
130,0,16,0,0,0,
0,0,42,16,16,0,
2,0,0,0,1,64,
0,0,0,0,0,63,
55,0,0,9,114,32,
16,0,0,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,56,0,0,0,
8,0,0,0,0,0,
0,0,10,0,0,0,
38,0,0,0,1,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
7,0,0,0,4,0,
0,0,5,0,0,0,
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
class NtscShadersNtscAdaptiveTateNtscTatePass1ShaderDef : public ShaderDef
{
public:
	NtscShadersNtscAdaptiveTateNtscTatePass1ShaderDef() : ShaderDef{}
	{
		Name = "ntsc-tate-pass1";
		VertexByteCode = RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNtscShadersNtscAdaptiveTateNtscTatePass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("quality", 0, 116, 4, -1.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("ntsc_fields", 0, 140, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("ntsc_phase", 0, 144, 4, 1.000000f, 3.000000f, 1.000000f));
		Params.push_back(ShaderParam("ntsc_scale", 0, 136, 4, 0.200000f, 3.000000f, 1.000000f));
		Params.push_back(ShaderParam("ntsc_sat", 0, 120, 4, 0.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("ntsc_bright", 0, 132, 4, 0.000000f, 1.500000f, 1.000000f));
		Params.push_back(ShaderParam("cust_fringing", 0, 124, 4, 0.000000f, 5.000000f, 0.000000f));
		Params.push_back(ShaderParam("cust_artifacting", 0, 128, 4, 0.000000f, 5.000000f, 0.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", 0, 112, 4, 0.000000f, 0.000000f, 0.000000f));
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
