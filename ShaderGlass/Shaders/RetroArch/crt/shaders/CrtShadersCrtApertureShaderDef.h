/*
ShaderGlass shader crt-shaders\crt-aperture imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-aperture.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


CRT Shader by EasyMode
License: GPL


*/

#pragma once

namespace RetroArchCrtShadersCrtApertureShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,110,239,
1,38,44,138,120,137,
121,214,212,137,93,170,
129,5,1,0,0,0,
140,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
240,2,0,0,82,68,
69,70,0,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
216,0,0,0,82,68,
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
92,0,0,0,1,0,
0,0,120,0,0,0,
64,0,0,0,0,0,
0,0,0,0,0,0,
160,0,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,180,0,
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
0,0,171,0,0,0,
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
68,88,66,67,111,107,
143,191,54,137,236,195,
125,198,165,178,91,105,
141,6,1,0,0,0,
156,31,0,0,5,0,
0,0,52,0,0,0,
56,6,0,0,108,6,
0,0,160,6,0,0,
0,31,0,0,82,68,
69,70,252,5,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
212,5,0,0,82,68,
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
0,0,19,0,0,0,
208,0,0,0,112,0,
0,0,0,0,0,0,
0,0,0,0,200,3,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,228,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,8,4,0,0,
16,0,0,0,16,0,
0,0,2,0,0,0,
228,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
26,4,0,0,32,0,
0,0,4,0,0,0,
0,0,0,0,52,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,88,4,
0,0,36,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,156,4,0,0,
40,0,0,0,4,0,
0,0,2,0,0,0,
120,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
179,4,0,0,44,0,
0,0,4,0,0,0,
2,0,0,0,120,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,197,4,
0,0,48,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,216,4,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
120,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
237,4,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,120,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,3,5,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,22,5,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
120,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
43,5,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,120,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,60,5,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,85,5,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
120,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
110,5,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,120,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,132,5,
0,0,84,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,155,5,0,0,
88,0,0,0,4,0,
0,0,2,0,0,0,
120,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
174,5,0,0,92,0,
0,0,4,0,0,0,
2,0,0,0,120,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,194,5,
0,0,96,0,0,0,
4,0,0,0,2,0,
0,0,120,4,0,0,
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
0,0,218,3,0,0,
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
0,0,0,0,44,4,
0,0,112,97,114,97,
109,115,95,83,72,65,
82,80,78,69,83,83,
95,73,77,65,71,69,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
111,4,0,0,112,97,
114,97,109,115,95,83,
72,65,82,80,78,69,
83,83,95,69,68,71,
69,83,0,112,97,114,
97,109,115,95,71,76,
79,87,95,87,73,68,
84,72,0,112,97,114,
97,109,115,95,71,76,
79,87,95,72,69,73,
71,72,84,0,112,97,
114,97,109,115,95,71,
76,79,87,95,72,65,
76,65,84,73,79,78,
0,112,97,114,97,109,
115,95,71,76,79,87,
95,68,73,70,70,85,
83,73,79,78,0,112,
97,114,97,109,115,95,
77,65,83,75,95,67,
79,76,79,82,83,0,
112,97,114,97,109,115,
95,77,65,83,75,95,
83,84,82,69,78,71,
84,72,0,112,97,114,
97,109,115,95,77,65,
83,75,95,83,73,90,
69,0,112,97,114,97,
109,115,95,83,67,65,
78,76,73,78,69,95,
83,73,90,69,95,77,
73,78,0,112,97,114,
97,109,115,95,83,67,
65,78,76,73,78,69,
95,83,73,90,69,95,
77,65,88,0,112,97,
114,97,109,115,95,83,
67,65,78,76,73,78,
69,95,83,72,65,80,
69,0,112,97,114,97,
109,115,95,83,67,65,
78,76,73,78,69,95,
79,70,70,83,69,84,
0,112,97,114,97,109,
115,95,71,65,77,77,
65,95,73,78,80,85,
84,0,112,97,114,97,
109,115,95,71,65,77,
77,65,95,79,85,84,
80,85,84,0,112,97,
114,97,109,115,95,66,
82,73,71,72,84,78,
69,83,83,0,77,105,
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
69,88,88,24,0,0,
80,0,0,0,22,6,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
7,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
9,0,0,0,56,0,
0,9,18,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
1,0,0,0,65,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,7,34,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,65,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
50,0,0,10,34,0,
16,0,0,0,0,0,
26,0,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,64,10,0,16,0,
0,0,0,0,14,0,
0,10,18,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
10,0,16,0,0,0,
0,0,56,0,0,8,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
5,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,57,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
55,0,0,9,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
54,0,0,5,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,50,0,0,11,
50,0,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,70,128,
32,0,1,0,0,0,
0,0,0,0,70,0,
16,128,65,0,0,0,
0,0,0,0,56,0,
0,8,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
56,0,0,8,194,0,
16,0,0,0,0,0,
6,4,16,0,0,0,
0,0,6,132,32,0,
1,0,0,0,0,0,
0,0,65,0,0,5,
50,0,16,0,1,0,
0,0,230,10,16,0,
0,0,0,0,26,0,
0,5,194,0,16,0,
0,0,0,0,166,14,
16,0,0,0,0,0,
0,0,0,10,50,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,14,0,
0,8,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
70,128,32,0,1,0,
0,0,0,0,0,0,
14,0,0,11,50,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,70,128,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
66,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,8,242,0,16,0,
3,0,0,0,70,4,
16,0,1,0,0,0,
102,8,16,128,65,0,
0,0,2,0,0,0,
0,0,0,7,194,0,
16,0,1,0,0,0,
6,8,16,0,2,0,
0,0,6,4,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,56,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,166,138,
32,0,1,0,0,0,
5,0,0,0,25,0,
0,5,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
0,0,0,8,194,0,
16,0,1,0,0,0,
6,8,16,128,65,0,
0,0,2,0,0,0,
6,4,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
56,0,0,8,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,10,194,0,16,0,
1,0,0,0,166,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,191,0,0,
0,191,54,0,0,6,
50,0,16,0,6,0,
0,0,230,10,16,128,
65,0,0,0,1,0,
0,0,0,0,0,10,
194,0,16,0,6,0,
0,0,6,0,16,0,
6,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,0,0,128,63,
14,0,0,8,210,0,
16,0,6,0,0,0,
166,12,16,0,6,0,
0,0,246,143,32,0,
1,0,0,0,2,0,
0,0,0,0,0,10,
114,0,16,0,7,0,
0,0,86,5,16,0,
6,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,0,0,0,
128,63,0,0,0,0,
14,0,0,8,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,6,128,32,0,
1,0,0,0,3,0,
0,0,56,0,0,7,
114,0,16,0,7,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,7,0,0,0,
25,0,0,6,114,0,
16,0,7,0,0,0,
70,2,16,128,65,0,
0,0,7,0,0,0,
56,0,0,7,114,0,
16,0,6,0,0,0,
134,3,16,0,6,0,
0,0,134,3,16,0,
6,0,0,0,25,0,
0,6,114,0,16,0,
6,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
70,0,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,230,10,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,3,0,
0,0,70,2,16,0,
3,0,0,0,56,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
166,138,32,0,1,0,
0,0,5,0,0,0,
25,0,0,5,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,47,0,0,5,
114,0,16,0,8,0,
0,0,70,2,16,0,
8,0,0,0,56,0,
0,8,114,0,16,0,
8,0,0,0,70,2,
16,0,8,0,0,0,
166,138,32,0,1,0,
0,0,5,0,0,0,
25,0,0,5,114,0,
16,0,8,0,0,0,
70,2,16,0,8,0,
0,0,56,0,0,7,
114,0,16,0,8,0,
0,0,86,5,16,0,
6,0,0,0,70,2,
16,0,8,0,0,0,
50,0,0,9,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,6,0,16,0,
6,0,0,0,70,2,
16,0,8,0,0,0,
50,0,0,9,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,166,10,16,0,
6,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
26,0,16,0,6,0,
0,0,10,0,16,0,
6,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,42,0,
16,0,6,0,0,0,
42,0,16,0,0,0,
0,0,14,0,0,7,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,166,10,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,0,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
242,0,16,0,1,0,
0,0,70,4,16,0,
1,0,0,0,134,6,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,56,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,166,138,
32,0,1,0,0,0,
5,0,0,0,25,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
56,0,0,7,114,0,
16,0,5,0,0,0,
86,5,16,0,6,0,
0,0,70,2,16,0,
5,0,0,0,50,0,
0,9,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
6,0,16,0,6,0,
0,0,70,2,16,0,
5,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,5,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,56,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,166,138,
32,0,1,0,0,0,
5,0,0,0,25,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
50,0,0,9,114,0,
16,0,3,0,0,0,
70,2,16,0,5,0,
0,0,166,10,16,0,
6,0,0,0,70,2,
16,0,3,0,0,0,
14,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,166,10,16,0,
0,0,0,0,56,0,
0,7,114,0,16,0,
3,0,0,0,86,5,
16,0,7,0,0,0,
70,2,16,0,3,0,
0,0,50,0,0,9,
114,0,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,6,0,
16,0,7,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,8,
50,0,16,0,1,0,
0,0,134,0,16,128,
65,0,0,0,2,0,
0,0,230,10,16,0,
1,0,0,0,0,0,
0,7,50,0,16,0,
2,0,0,0,134,0,
16,0,2,0,0,0,
230,10,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
56,0,0,8,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,56,0,
0,7,114,0,16,0,
4,0,0,0,86,5,
16,0,6,0,0,0,
70,2,16,0,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
47,0,0,5,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,166,138,
32,0,1,0,0,0,
5,0,0,0,25,0,
0,5,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,6,0,16,0,
6,0,0,0,70,2,
16,0,4,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,166,10,16,0,
6,0,0,0,70,2,
16,0,1,0,0,0,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,166,10,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
166,10,16,0,7,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,7,66,0,16,0,
0,0,0,0,26,0,
16,0,7,0,0,0,
10,0,16,0,7,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
7,0,0,0,42,0,
16,0,0,0,0,0,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,166,10,16,0,
0,0,0,0,54,0,
0,6,66,0,16,0,
2,0,0,0,26,128,
32,0,1,0,0,0,
0,0,0,0,56,0,
0,9,50,0,16,0,
2,0,0,0,6,128,
32,0,1,0,0,0,
0,0,0,0,150,133,
32,0,1,0,0,0,
2,0,0,0,50,0,
0,12,242,0,16,0,
3,0,0,0,70,4,
16,0,0,0,0,0,
134,9,16,0,2,0,
0,0,2,64,0,0,
0,0,0,191,0,0,
0,128,0,0,0,191,
0,0,0,128,26,0,
0,5,34,0,16,0,
4,0,0,0,42,0,
16,0,3,0,0,0,
0,0,0,10,210,0,
16,0,4,0,0,0,
86,5,16,0,4,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,128,191,
0,0,0,192,56,0,
0,10,242,0,16,0,
4,0,0,0,70,14,
16,0,4,0,0,0,
2,64,0,0,219,15,
73,64,219,15,73,64,
219,15,73,64,219,15,
73,64,52,0,0,11,
242,0,16,0,4,0,
0,0,70,14,16,128,
129,0,0,0,4,0,
0,0,2,64,0,0,
172,197,39,55,172,197,
39,55,172,197,39,55,
172,197,39,55,77,0,
0,6,242,0,16,0,
5,0,0,0,0,208,
0,0,70,14,16,0,
4,0,0,0,0,0,
0,7,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
70,14,16,0,5,0,
0,0,56,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
4,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
56,0,0,7,242,0,
16,0,4,0,0,0,
70,14,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,77,0,
0,6,242,0,16,0,
6,0,0,0,0,208,
0,0,70,14,16,0,
6,0,0,0,56,0,
0,7,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
70,14,16,0,6,0,
0,0,14,0,0,7,
242,0,16,0,4,0,
0,0,70,14,16,0,
5,0,0,0,70,14,
16,0,4,0,0,0,
17,0,0,10,18,0,
16,0,0,0,0,0,
70,14,16,0,4,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,14,0,
0,7,242,0,16,0,
4,0,0,0,70,14,
16,0,4,0,0,0,
6,0,16,0,0,0,
0,0,65,0,0,5,
242,0,16,0,5,0,
0,0,70,14,16,0,
3,0,0,0,26,0,
0,5,34,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
0,0,0,10,242,0,
16,0,5,0,0,0,
70,14,16,0,5,0,
0,0,2,64,0,0,
0,0,0,63,111,18,
131,58,0,0,0,63,
111,18,131,58,14,0,
0,7,242,0,16,0,
5,0,0,0,70,14,
16,0,5,0,0,0,
134,9,16,0,2,0,
0,0,14,0,0,10,
50,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,70,0,
16,0,2,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,7,
242,0,16,0,2,0,
0,0,134,9,16,0,
0,0,0,0,70,14,
16,0,5,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,6,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,66,0,16,0,
0,0,0,0,42,0,
16,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,7,0,
0,0,230,10,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,47,0,
0,5,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
56,0,0,8,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,47,0,
0,5,114,0,16,0,
7,0,0,0,70,2,
16,0,7,0,0,0,
56,0,0,8,114,0,
16,0,7,0,0,0,
70,2,16,0,7,0,
0,0,166,138,32,0,
1,0,0,0,5,0,
0,0,25,0,0,5,
114,0,16,0,7,0,
0,0,70,2,16,0,
7,0,0,0,54,0,
0,5,18,0,16,0,
0,0,0,0,42,0,
16,0,7,0,0,0,
17,0,0,7,66,0,
16,0,0,0,0,0,
70,14,16,0,4,0,
0,0,6,10,16,0,
0,0,0,0,54,0,
0,5,130,0,16,0,
7,0,0,0,10,0,
16,0,6,0,0,0,
17,0,0,7,18,0,
16,0,0,0,0,0,
70,14,16,0,4,0,
0,0,6,15,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
6,0,0,0,26,0,
16,0,7,0,0,0,
17,0,0,7,34,0,
16,0,0,0,0,0,
230,4,16,0,4,0,
0,0,86,15,16,0,
6,0,0,0,0,0,
0,10,210,0,16,0,
3,0,0,0,86,5,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,0,
0,0,128,191,0,0,
0,192,56,0,0,10,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,2,64,
0,0,219,15,73,64,
219,15,73,64,219,15,
73,64,219,15,73,64,
52,0,0,11,242,0,
16,0,3,0,0,0,
70,14,16,128,129,0,
0,0,3,0,0,0,
2,64,0,0,172,197,
39,55,172,197,39,55,
172,197,39,55,172,197,
39,55,77,0,0,6,
242,0,16,0,4,0,
0,0,0,208,0,0,
70,14,16,0,3,0,
0,0,0,0,0,7,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,70,14,
16,0,4,0,0,0,
56,0,0,10,242,0,
16,0,6,0,0,0,
70,14,16,0,3,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,56,0,
0,7,242,0,16,0,
3,0,0,0,70,14,
16,0,3,0,0,0,
70,14,16,0,3,0,
0,0,77,0,0,6,
242,0,16,0,6,0,
0,0,0,208,0,0,
70,14,16,0,6,0,
0,0,56,0,0,7,
242,0,16,0,4,0,
0,0,70,14,16,0,
4,0,0,0,70,14,
16,0,6,0,0,0,
14,0,0,7,242,0,
16,0,3,0,0,0,
70,14,16,0,4,0,
0,0,70,14,16,0,
3,0,0,0,17,0,
0,10,130,0,16,0,
1,0,0,0,70,14,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,14,0,0,7,
242,0,16,0,3,0,
0,0,70,14,16,0,
3,0,0,0,246,15,
16,0,1,0,0,0,
54,0,0,5,66,0,
16,0,4,0,0,0,
42,0,16,0,2,0,
0,0,54,0,0,5,
18,0,16,0,4,0,
0,0,42,0,16,0,
5,0,0,0,17,0,
0,7,66,0,16,0,
4,0,0,0,70,14,
16,0,3,0,0,0,
6,10,16,0,4,0,
0,0,54,0,0,5,
130,0,16,0,5,0,
0,0,10,0,16,0,
2,0,0,0,17,0,
0,7,18,0,16,0,
4,0,0,0,70,14,
16,0,3,0,0,0,
6,15,16,0,5,0,
0,0,54,0,0,5,
130,0,16,0,2,0,
0,0,26,0,16,0,
5,0,0,0,17,0,
0,7,34,0,16,0,
4,0,0,0,230,4,
16,0,3,0,0,0,
86,15,16,0,2,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,4,0,0,0,
47,0,0,5,114,0,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,75,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,14,0,
0,11,50,0,16,0,
3,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
198,128,32,0,1,0,
0,0,5,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,6,0,16,0,
3,0,0,0,25,0,
0,5,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,10,130,0,
16,0,1,0,0,0,
42,128,32,128,65,0,
0,0,1,0,0,0,
4,0,0,0,58,128,
32,0,1,0,0,0,
4,0,0,0,50,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
246,15,16,0,1,0,
0,0,166,138,32,0,
1,0,0,0,4,0,
0,0,14,0,0,10,
114,0,16,0,2,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,64,0,0,0,64,
0,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,10,210,0,
16,0,3,0,0,0,
6,9,16,0,2,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,0,0,0,0,63,
0,0,0,63,50,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
246,15,16,0,0,0,
0,0,134,3,16,128,
65,0,0,0,3,0,
0,0,0,0,0,11,
114,0,16,0,2,0,
0,0,70,2,16,128,
193,0,0,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,52,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,50,0,0,15,
114,0,16,0,4,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,0,0,0,192,
0,0,0,192,0,0,
0,192,0,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,64,64,0,0,
0,0,56,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
56,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
4,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,134,3,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,50,32,0,10,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,86,133,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
10,16,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
0,0,0,0,56,0,
0,9,130,0,16,0,
1,0,0,0,10,128,
32,0,1,0,0,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
4,0,0,0,14,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,65,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,14,0,
0,8,130,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
58,128,32,0,1,0,
0,0,3,0,0,0,
65,0,0,5,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,50,0,0,11,
130,0,16,0,0,0,
0,0,58,128,32,128,
65,0,0,0,1,0,
0,0,3,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,24,0,
0,10,50,0,16,0,
2,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
0,0,0,0,0,0,
0,0,55,0,0,15,
226,0,16,0,2,0,
0,0,86,5,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,63,0,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,192,58,128,
32,0,1,0,0,0,
3,0,0,0,50,0,
0,15,210,0,16,0,
3,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,0,0,
0,0,128,63,55,0,
0,9,114,0,16,0,
2,0,0,0,6,0,
16,0,2,0,0,0,
134,3,16,0,3,0,
0,0,150,7,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,11,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,246,143,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,50,0,
0,10,114,0,16,0,
0,0,0,0,6,128,
32,0,1,0,0,0,
4,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,50,0,0,10,
114,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,166,138,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,6,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
86,5,16,0,3,0,
0,0,25,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
201,0,0,0,9,0,
0,0,0,0,0,0,
2,0,0,0,171,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,13,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,13,0,
0,0,3,0,0,0,
9,0,0,0,0,0,
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
class CrtShadersCrtApertureShaderDef : public ShaderDef
{
public:
	CrtShadersCrtApertureShaderDef() : ShaderDef{}
	{
		Name = "crt-aperture";
		VertexByteCode = RetroArchCrtShadersCrtApertureShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtApertureShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtApertureShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtApertureShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SHARPNESS_IMAGE", -1, 36, 4, 1.000000f, 5.000000f, 1.000000f, 1.000000f, "Sharpness Image"));
		Params.push_back(ShaderParam("SHARPNESS_EDGES", -1, 40, 4, 1.000000f, 5.000000f, 3.000000f, 1.000000f, "Sharpness Edges"));
		Params.push_back(ShaderParam("GLOW_WIDTH", -1, 44, 4, 0.050000f, 0.650000f, 0.500000f, 0.050000f, "Glow Width"));
		Params.push_back(ShaderParam("GLOW_HEIGHT", -1, 48, 4, 0.050000f, 0.650000f, 0.500000f, 0.050000f, "Glow Height"));
		Params.push_back(ShaderParam("GLOW_HALATION", -1, 52, 4, 0.000000f, 1.000000f, 0.100000f, 0.010000f, "Glow Halation"));
		Params.push_back(ShaderParam("GLOW_DIFFUSION", -1, 56, 4, 0.000000f, 1.000000f, 0.050000f, 0.010000f, "Glow Diffusion"));
		Params.push_back(ShaderParam("MASK_COLORS", -1, 60, 4, 2.000000f, 3.000000f, 2.000000f, 1.000000f, "Mask Colors"));
		Params.push_back(ShaderParam("MASK_STRENGTH", -1, 64, 4, 0.000000f, 1.000000f, 0.300000f, 0.050000f, "Mask Strength"));
		Params.push_back(ShaderParam("MASK_SIZE", -1, 68, 4, 1.000000f, 9.000000f, 1.000000f, 1.000000f, "Mask Size"));
		Params.push_back(ShaderParam("SCANLINE_SIZE_MIN", -1, 72, 4, 0.500000f, 1.500000f, 0.500000f, 0.050000f, "Scanline Size Min."));
		Params.push_back(ShaderParam("SCANLINE_SIZE_MAX", -1, 76, 4, 0.500000f, 1.500000f, 1.500000f, 0.050000f, "Scanline Size Max."));
		Params.push_back(ShaderParam("SCANLINE_SHAPE", -1, 80, 4, 1.000000f, 100.000000f, 2.500000f, 0.100000f, "Scanline Shape"));
		Params.push_back(ShaderParam("SCANLINE_OFFSET", -1, 84, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "Scanline Offset"));
		Params.push_back(ShaderParam("GAMMA_INPUT", -1, 88, 4, 1.000000f, 5.000000f, 2.400000f, 0.100000f, "Gamma Input"));
		Params.push_back(ShaderParam("GAMMA_OUTPUT", -1, 92, 4, 1.000000f, 5.000000f, 2.400000f, 0.100000f, "Gamma Output"));
		Params.push_back(ShaderParam("BRIGHTNESS", -1, 96, 4, 0.000000f, 2.000000f, 1.500000f, 0.050000f, "Brightness"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 32, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
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
