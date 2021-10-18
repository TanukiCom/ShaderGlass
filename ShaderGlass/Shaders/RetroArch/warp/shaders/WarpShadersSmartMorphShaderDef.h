/*
ShaderGlass shader warp-shaders\smart-morph imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/warp/shaders/smart-morph.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Smart Morph v1.1
by Sp00kyFox, 2014


Determines the brightest (or darkest) pixel X in the orthogonal neighborship of pixel E (including itself).
Output is a linear combination of X and E weighted with their luma difference d (range: [0.0, 1.0]):

w = sstp{sat[(d - CUTLO)/(CUTHI - CUTLO)]^PWR} * (STRMAX - STRMIN) + STRMIN

with
sstp(x) := smoothstep(0, 1, x) = -2x^3 + 3x^2
sat(x)  := saturate(x) = max(0, min(1, x))


 STRMIN = CUTLO = 1.0 behaves equivalent to Hyllian's shaders.

*/

#pragma once

namespace RetroArchWarpShadersSmartMorphShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,7,90,
244,202,208,136,239,143,
61,205,42,234,171,96,
146,251,1,0,0,0,
160,3,0,0,5,0,
0,0,52,0,0,0,
60,1,0,0,136,1,
0,0,224,1,0,0,
4,3,0,0,82,68,
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
83,72,69,88,28,1,
0,0,80,0,1,0,
71,0,0,0,106,8,
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
56,0,0,10,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,2,64,0,0,
71,3,128,63,71,3,
128,63,0,0,0,0,
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
242,32,16,0,1,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
6,0,0,0,1,0,
0,0,0,0,0,0,
4,0,0,0,5,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,140,186,
149,11,158,232,151,211,
225,74,144,76,49,36,
57,7,1,0,0,0,
200,14,0,0,5,0,
0,0,52,0,0,0,
100,4,0,0,152,4,
0,0,204,4,0,0,
44,14,0,0,82,68,
69,70,40,4,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
0,4,0,0,82,68,
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
0,0,12,0,0,0,
208,0,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,176,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,204,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,240,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
204,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
4,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,204,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,22,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,48,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,84,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
108,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
144,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,108,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,160,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,108,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,174,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
108,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
191,3,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,108,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,208,3,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,108,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,224,3,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
108,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
240,3,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,108,3,
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
0,0,0,0,194,2,
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
0,0,40,3,0,0,
112,97,114,97,109,115,
95,83,77,95,77,79,
68,69,0,102,108,111,
97,116,0,171,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,99,3,0,0,
112,97,114,97,109,115,
95,83,77,95,82,65,
78,71,69,0,112,97,
114,97,109,115,95,83,
77,95,80,87,82,0,
112,97,114,97,109,115,
95,83,77,95,83,84,
82,77,73,78,0,112,
97,114,97,109,115,95,
83,77,95,83,84,82,
77,65,88,0,112,97,
114,97,109,115,95,83,
77,95,67,85,84,76,
79,0,112,97,114,97,
109,115,95,83,77,95,
67,85,84,72,73,0,
112,97,114,97,109,115,
95,83,77,95,68,69,
66,85,71,0,77,105,
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
69,88,88,9,0,0,
80,0,0,0,86,2,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
6,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
9,0,0,0,50,0,
0,13,242,0,16,0,
0,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,128,191,0,0,
0,0,0,0,128,63,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,230,10,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,16,0,0,10,
130,0,16,0,0,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
24,0,0,8,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,64,42,128,32,0,
1,0,0,0,3,0,
0,0,31,0,4,3,
58,0,16,0,1,0,
0,0,16,0,0,10,
130,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,49,0,
0,8,18,0,16,0,
3,0,0,0,1,64,
0,0,0,0,0,63,
26,128,32,0,1,0,
0,0,3,0,0,0,
52,0,0,7,34,0,
16,0,3,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,51,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,55,0,0,9,
130,0,16,0,3,0,
0,0,10,0,16,0,
3,0,0,0,26,0,
16,0,3,0,0,0,
58,0,16,0,1,0,
0,0,24,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,3,0,0,0,
55,0,0,9,114,0,
16,0,3,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
18,0,0,1,50,0,
0,13,242,0,16,0,
4,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,0,0,0,
128,63,0,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
24,0,0,8,130,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,42,128,32,0,
1,0,0,0,3,0,
0,0,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,135,22,153,62,
162,69,22,63,213,120,
233,61,0,0,0,0,
16,0,0,10,130,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,49,0,
0,8,130,0,16,0,
5,0,0,0,1,64,
0,0,0,0,0,63,
26,128,32,0,1,0,
0,0,3,0,0,0,
52,0,0,7,18,0,
16,0,6,0,0,0,
58,0,16,0,2,0,
0,0,58,0,16,0,
4,0,0,0,51,0,
0,7,34,0,16,0,
6,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,4,0,
0,0,55,0,0,9,
18,0,16,0,6,0,
0,0,58,0,16,0,
5,0,0,0,10,0,
16,0,6,0,0,0,
26,0,16,0,6,0,
0,0,24,0,0,7,
18,0,16,0,7,0,
0,0,58,0,16,0,
4,0,0,0,10,0,
16,0,6,0,0,0,
55,0,0,9,226,0,
16,0,6,0,0,0,
6,0,16,0,7,0,
0,0,6,9,16,0,
5,0,0,0,6,9,
16,0,4,0,0,0,
16,0,0,10,18,0,
16,0,7,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
135,22,153,62,162,69,
22,63,213,120,233,61,
0,0,0,0,16,0,
0,10,34,0,16,0,
7,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,135,22,
153,62,162,69,22,63,
213,120,233,61,0,0,
0,0,51,0,0,7,
66,0,16,0,7,0,
0,0,58,0,16,0,
2,0,0,0,10,0,
16,0,7,0,0,0,
51,0,0,7,130,0,
16,0,7,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
4,0,0,0,51,0,
0,7,130,0,16,0,
7,0,0,0,58,0,
16,0,7,0,0,0,
26,0,16,0,7,0,
0,0,51,0,0,7,
66,0,16,0,7,0,
0,0,58,0,16,0,
7,0,0,0,42,0,
16,0,7,0,0,0,
52,0,0,7,130,0,
16,0,7,0,0,0,
58,0,16,0,2,0,
0,0,10,0,16,0,
7,0,0,0,52,0,
0,7,130,0,16,0,
4,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,4,0,
0,0,52,0,0,7,
130,0,16,0,4,0,
0,0,58,0,16,0,
4,0,0,0,26,0,
16,0,7,0,0,0,
52,0,0,7,130,0,
16,0,4,0,0,0,
58,0,16,0,4,0,
0,0,58,0,16,0,
7,0,0,0,55,0,
0,9,18,0,16,0,
8,0,0,0,58,0,
16,0,5,0,0,0,
42,0,16,0,7,0,
0,0,58,0,16,0,
4,0,0,0,24,0,
0,7,130,0,16,0,
4,0,0,0,10,0,
16,0,7,0,0,0,
10,0,16,0,8,0,
0,0,24,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,10,0,
16,0,8,0,0,0,
24,0,0,7,130,0,
16,0,5,0,0,0,
26,0,16,0,7,0,
0,0,10,0,16,0,
8,0,0,0,55,0,
0,9,114,0,16,0,
0,0,0,0,246,15,
16,0,5,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
4,0,0,0,55,0,
0,9,114,0,16,0,
0,0,0,0,246,15,
16,0,2,0,0,0,
70,2,16,0,5,0,
0,0,70,2,16,0,
0,0,0,0,55,0,
0,9,226,0,16,0,
8,0,0,0,246,15,
16,0,4,0,0,0,
6,9,16,0,1,0,
0,0,6,9,16,0,
0,0,0,0,55,0,
0,9,242,0,16,0,
3,0,0,0,246,15,
16,0,1,0,0,0,
150,3,16,0,6,0,
0,0,150,3,16,0,
8,0,0,0,21,0,
0,1,0,0,0,8,
18,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,128,65,0,0,0,
3,0,0,0,29,0,
0,9,34,0,16,0,
0,0,0,0,42,128,
32,0,1,0,0,0,
4,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,29,0,
0,9,66,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
4,0,0,0,0,0,
0,10,130,0,16,0,
0,0,0,0,10,0,
16,128,129,0,0,0,
0,0,0,0,42,128,
32,128,65,0,0,0,
1,0,0,0,4,0,
0,0,0,0,0,10,
50,0,16,0,1,0,
0,0,38,138,32,128,
65,0,0,0,1,0,
0,0,4,0,0,0,
118,143,32,0,1,0,
0,0,4,0,0,0,
14,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,47,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,128,32,0,
1,0,0,0,3,0,
0,0,25,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,51,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,50,0,0,9,
18,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,192,
1,64,0,0,0,0,
64,64,56,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,10,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,10,128,32,0,
1,0,0,0,4,0,
0,0,55,0,0,10,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
4,0,0,0,58,0,
16,0,0,0,0,0,
55,0,0,10,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,4,0,
0,0,42,0,16,0,
0,0,0,0,49,0,
0,8,66,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,63,
10,128,32,0,1,0,
0,0,5,0,0,0,
24,0,0,8,18,0,
16,0,0,0,0,0,
10,0,16,128,129,0,
0,0,0,0,0,0,
1,64,0,0,0,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
3,0,0,0,50,0,
0,9,114,0,16,0,
1,0,0,0,86,5,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,55,0,
0,9,114,0,16,0,
1,0,0,0,6,0,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
1,0,0,0,55,0,
0,9,114,32,16,0,
0,0,0,0,166,10,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
71,0,0,0,9,0,
0,0,0,0,0,0,
2,0,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,5,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,13,0,0,0,
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
0,0,0,0
};

}

namespace RetroArch
{
class WarpShadersSmartMorphShaderDef : public ShaderDef
{
public:
	WarpShadersSmartMorphShaderDef() : ShaderDef{}
	{
		Name = "smart-morph";
		VertexByteCode = RetroArchWarpShadersSmartMorphShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchWarpShadersSmartMorphShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchWarpShadersSmartMorphShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchWarpShadersSmartMorphShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SM_MODE", -1, 52, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("SM_RANGE", -1, 56, 4, 0.000000f, 2.000000f, 0.000000f));
		Params.push_back(ShaderParam("SM_PWR", -1, 60, 4, 0.000000f, 10.000000f, 0.500000f));
		Params.push_back(ShaderParam("SM_STRMIN", -1, 64, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("SM_STRMAX", -1, 68, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("SM_CUTLO", -1, 72, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("SM_CUTHI", -1, 76, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("SM_DEBUG", -1, 80, 4, 0.000000f, 1.000000f, 0.000000f));
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
