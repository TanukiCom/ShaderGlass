/*
ShaderGlass shader handheld-shaders\ds-hybrid-view imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/shaders/ds-hybrid-view.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

//	DS Hybrid View
//	by hunterk
//	additional modifications by Dranyth
//	license: public domain
//
//	This shader requires 16:9 aspect ratio forced in Video > Scaling
//	and integer scaling OFF
//	Set the Screen Layout to top/bottom
//	A Screen Gap value can be set in the emulator to prevent
//	effects from bleeding across the division of the two screens
//	The Screen Gap itself will be compensated for and removed from the final output
// screen gap setting increases fb size; modulo at original res to compensate

*/

#pragma once

namespace RetroArchHandheldShadersDsHybridViewShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,46,33,
107,11,212,174,96,242,
103,3,6,13,14,46,
133,234,1,0,0,0,
60,7,0,0,5,0,
0,0,52,0,0,0,
8,3,0,0,84,3,
0,0,244,3,0,0,
160,6,0,0,82,68,
69,70,204,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
161,2,0,0,82,68,
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
0,0,5,0,0,0,
24,1,0,0,48,0,
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
235,0,0,0,224,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,252,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,32,2,0,0,
16,0,0,0,16,0,
0,0,2,0,0,0,
252,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
50,2,0,0,32,0,
0,0,4,0,0,0,
0,0,0,0,80,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,116,2,
0,0,36,0,0,0,
4,0,0,0,0,0,
0,0,80,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,141,2,0,0,
40,0,0,0,4,0,
0,0,0,0,0,0,
80,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,102,108,111,97,
116,52,0,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
244,1,0,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,83,
105,122,101,0,112,97,
114,97,109,115,95,115,
99,114,101,101,110,95,
116,111,103,103,108,101,
0,102,108,111,97,116,
0,171,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
71,2,0,0,112,97,
114,97,109,115,95,115,
104,111,119,95,98,111,
116,104,95,115,99,114,
101,101,110,115,0,112,
97,114,97,109,115,95,
102,105,108,116,101,114,
95,115,109,97,108,108,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
171,171,73,83,71,78,
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
79,83,71,78,152,0,
0,0,5,0,0,0,
8,0,0,0,128,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,128,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
4,11,0,0,128,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
8,7,0,0,128,0,
0,0,3,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,14,0,0,137,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,164,2,0,0,
80,0,1,0,169,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,2,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
66,32,16,0,0,0,
0,0,101,0,0,3,
130,32,16,0,0,0,
0,0,101,0,0,3,
18,32,16,0,1,0,
0,0,103,0,0,4,
242,32,16,0,2,0,
0,0,1,0,0,0,
104,0,0,2,2,0,
0,0,56,0,0,8,
18,0,16,0,0,0,
0,0,1,64,0,0,
171,170,170,59,26,128,
32,0,1,0,0,0,
0,0,0,0,65,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
50,0,0,11,18,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
64,67,26,128,32,0,
1,0,0,0,0,0,
0,0,56,0,0,8,
66,32,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,56,0,
0,7,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,50,0,0,11,
34,0,16,0,1,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,58,128,32,0,
1,0,0,0,0,0,
0,0,1,64,0,0,
0,0,0,63,56,0,
0,10,98,0,16,0,
0,0,0,0,6,17,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,128,63,
84,0,128,63,0,0,
0,0,54,0,0,5,
18,0,16,0,1,0,
0,0,1,64,0,0,
46,160,170,63,56,0,
0,7,50,32,16,0,
0,0,0,0,70,0,
16,0,1,0,0,0,
150,5,16,0,0,0,
0,0,56,0,0,8,
34,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,50,0,
0,10,18,32,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
58,128,32,0,1,0,
0,0,1,0,0,0,
1,64,0,0,0,0,
128,190,54,0,0,5,
130,32,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,56,0,
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
242,32,16,0,2,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
17,0,0,0,2,0,
0,0,0,0,0,0,
7,0,0,0,14,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
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


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,247,33,
28,184,136,42,88,44,
57,13,116,208,40,71,
36,227,1,0,0,0,
248,8,0,0,5,0,
0,0,52,0,0,0,
28,3,0,0,152,3,
0,0,204,3,0,0,
92,8,0,0,82,68,
69,70,224,2,0,0,
1,0,0,0,20,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
181,2,0,0,82,68,
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
0,0,238,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,254,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
7,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,14,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,79,
114,105,103,105,110,97,
108,95,115,97,109,112,
108,101,114,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,79,114,105,103,
105,110,97,108,0,83,
111,117,114,99,101,0,
80,117,115,104,0,171,
14,1,0,0,5,0,
0,0,44,1,0,0,
48,0,0,0,0,0,
0,0,0,0,0,0,
244,1,0,0,0,0,
0,0,16,0,0,0,
0,0,0,0,16,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,52,2,
0,0,16,0,0,0,
16,0,0,0,0,0,
0,0,16,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,70,2,0,0,
32,0,0,0,4,0,
0,0,2,0,0,0,
100,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
136,2,0,0,36,0,
0,0,4,0,0,0,
2,0,0,0,100,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,161,2,
0,0,40,0,0,0,
4,0,0,0,2,0,
0,0,100,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,8,2,0,0,
112,97,114,97,109,115,
95,79,117,116,112,117,
116,83,105,122,101,0,
112,97,114,97,109,115,
95,115,99,114,101,101,
110,95,116,111,103,103,
108,101,0,102,108,111,
97,116,0,171,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,91,2,0,0,
112,97,114,97,109,115,
95,115,104,111,119,95,
98,111,116,104,95,115,
99,114,101,101,110,115,
0,112,97,114,97,109,
115,95,102,105,108,116,
101,114,95,115,109,97,
108,108,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,171,171,73,83,
71,78,116,0,0,0,
4,0,0,0,8,0,
0,0,104,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,104,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,4,4,
0,0,104,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,8,8,
0,0,104,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,1,1,
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
83,72,69,88,136,4,
0,0,80,0,0,0,
34,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,3,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
3,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,98,16,0,3,
66,16,16,0,0,0,
0,0,98,16,0,3,
130,16,16,0,0,0,
0,0,98,16,0,3,
18,16,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,49,0,
0,11,114,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
134,129,32,0,1,0,
0,0,2,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,16,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,1,0,
0,7,34,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,54,0,0,8,
82,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,64,192,
0,0,0,0,0,0,
0,7,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
70,16,16,0,0,0,
0,0,54,0,0,5,
130,0,16,0,1,0,
0,0,10,16,16,0,
1,0,0,0,50,0,
0,12,50,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,0,0,0,0,
0,0,230,10,16,0,
1,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
31,0,4,3,26,0,
16,0,0,0,0,0,
0,0,0,8,34,0,
16,0,0,0,0,0,
58,16,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,63,49,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
56,0,0,7,66,0,
16,0,2,0,0,0,
10,16,16,0,0,0,
0,0,1,64,0,0,
0,0,64,64,54,0,
0,5,18,0,16,0,
3,0,0,0,1,64,
0,0,0,0,64,192,
54,0,0,5,34,0,
16,0,3,0,0,0,
42,16,16,0,0,0,
0,0,0,0,0,7,
50,0,16,0,3,0,
0,0,102,10,16,0,
2,0,0,0,70,0,
16,0,3,0,0,0,
55,0,0,9,50,0,
16,0,3,0,0,0,
86,5,16,0,0,0,
0,0,70,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,18,0,0,1,
0,0,0,8,34,0,
16,0,0,0,0,0,
58,16,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,63,49,0,0,7,
34,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,26,0,
16,0,2,0,0,0,
56,0,0,7,130,0,
16,0,2,0,0,0,
10,16,16,0,0,0,
0,0,1,64,0,0,
0,0,64,64,54,0,
0,5,18,0,16,0,
4,0,0,0,1,64,
0,0,0,0,64,192,
54,0,0,5,34,0,
16,0,4,0,0,0,
42,16,16,0,0,0,
0,0,0,0,0,7,
194,0,16,0,2,0,
0,0,246,7,16,0,
2,0,0,0,6,4,
16,0,4,0,0,0,
55,0,0,9,82,0,
16,0,2,0,0,0,
86,5,16,0,0,0,
0,0,166,11,16,0,
2,0,0,0,6,1,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,3,0,
0,0,134,0,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,21,0,0,1,
0,0,0,8,34,0,
16,0,0,0,0,0,
58,16,16,128,65,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,63,0,0,0,8,
34,0,16,0,0,0,
0,0,26,0,16,128,
65,0,0,0,2,0,
0,0,26,0,16,0,
0,0,0,0,66,0,
0,5,34,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
2,0,0,0,65,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,9,18,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,10,0,
16,0,0,0,0,0,
50,0,0,9,242,32,
16,0,0,0,0,0,
70,14,16,0,3,0,
0,0,6,0,16,0,
0,0,0,0,70,14,
16,0,1,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
36,0,0,0,5,0,
0,0,0,0,0,0,
5,0,0,0,18,0,
0,0,0,0,0,0,
1,0,0,0,2,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,6,0,
0,0,4,0,0,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class HandheldShadersDsHybridViewShaderDef : public ShaderDef
{
public:
	HandheldShadersDsHybridViewShaderDef() : ShaderDef{}
	{
		Name = "ds-hybrid-view";
		VertexByteCode = RetroArchHandheldShadersDsHybridViewShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHandheldShadersDsHybridViewShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHandheldShadersDsHybridViewShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHandheldShadersDsHybridViewShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("screen_toggle", -1, 32, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("show_both_screens", -1, 36, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("filter_small", -1, 40, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 3));
		Samplers.push_back(ShaderSampler("Original", 2));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
