/*
ShaderGlass shader nes_raw_palette-shaders-cgwg-famicom-geom\lowpass-chroma imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/nes_raw_palette/shaders/cgwg-famicom-geom/lowpass-chroma.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

 after mixing with the adaptive comb filter
 Hamming window

*/

#pragma once

namespace RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs
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
68,88,66,67,138,182,
37,12,137,167,162,20,
34,45,99,138,226,235,
48,65,1,0,0,0,
64,11,0,0,5,0,
0,0,52,0,0,0,
44,3,0,0,96,3,
0,0,148,3,0,0,
164,10,0,0,82,68,
69,70,240,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
199,2,0,0,82,68,
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
16,0,0,0,2,0,
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
132,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
168,2,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,132,2,
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
95,112,111,115,116,102,
105,108,116,101,114,95,
116,97,112,115,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,123,2,
0,0,112,97,114,97,
109,115,95,112,111,115,
116,102,105,108,116,101,
114,95,99,104,114,111,
109,97,99,117,116,111,
102,102,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
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
69,88,8,7,0,0,
80,0,0,0,194,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
4,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,27,0,
0,6,18,0,16,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
3,0,0,0,29,0,
0,7,34,0,16,0,
0,0,0,0,10,16,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,29,0,0,7,
66,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,10,16,
16,0,0,0,0,0,
1,0,0,7,34,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,26,0,16,0,
0,0,0,0,31,0,
4,3,26,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,34,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,54,121,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
18,0,0,1,54,0,
0,5,34,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,0,
21,0,0,1,40,0,
0,5,18,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
87,0,0,7,34,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
2,0,0,0,36,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,85,0,0,7,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,1,64,
0,0,1,0,0,0,
40,0,0,5,66,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,0,0,7,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,128,
55,0,0,9,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
87,0,0,7,130,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
2,0,0,0,1,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
0,128,55,0,0,9,
18,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,30,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,255,255,255,255,
43,0,0,5,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,14,0,0,7,
18,0,16,0,0,0,
0,0,1,64,0,0,
219,15,201,64,10,0,
16,0,0,0,0,0,
56,0,0,11,194,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
146,10,6,64,171,170,
42,63,166,138,32,0,
1,0,0,0,3,0,
0,0,54,0,0,5,
34,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,54,0,
0,8,194,0,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
54,0,0,5,66,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,5,
130,0,16,0,2,0,
0,0,26,0,16,0,
1,0,0,0,48,0,
0,1,34,0,0,7,
18,0,16,0,3,0,
0,0,10,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
3,0,4,3,10,0,
16,0,3,0,0,0,
30,0,0,7,18,0,
16,0,3,0,0,0,
10,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,43,0,
0,5,18,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
56,0,0,7,18,0,
16,0,3,0,0,0,
10,0,16,0,0,0,
0,0,10,0,16,0,
3,0,0,0,77,0,
0,6,0,208,0,0,
18,0,16,0,3,0,
0,0,10,0,16,0,
3,0,0,0,50,0,
0,10,18,0,16,0,
3,0,0,0,10,0,
16,128,65,0,0,0,
3,0,0,0,1,64,
0,0,31,133,235,62,
1,64,0,0,113,61,
10,63,43,0,0,5,
34,0,16,0,3,0,
0,0,58,0,16,0,
2,0,0,0,56,0,
0,7,66,0,16,0,
3,0,0,0,42,0,
16,0,1,0,0,0,
26,0,16,0,3,0,
0,0,52,0,0,8,
66,0,16,0,3,0,
0,0,42,0,16,128,
129,0,0,0,3,0,
0,0,1,64,0,0,
23,183,209,56,77,0,
0,6,130,0,16,0,
3,0,0,0,0,208,
0,0,42,0,16,0,
3,0,0,0,14,0,
0,7,66,0,16,0,
3,0,0,0,58,0,
16,0,3,0,0,0,
42,0,16,0,3,0,
0,0,56,0,0,7,
66,0,16,0,3,0,
0,0,58,0,16,0,
1,0,0,0,42,0,
16,0,3,0,0,0,
50,0,0,10,130,0,
16,0,3,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
26,0,16,0,3,0,
0,0,10,16,16,0,
0,0,0,0,29,0,
0,7,18,0,16,0,
4,0,0,0,58,0,
16,0,3,0,0,0,
1,64,0,0,0,0,
0,0,29,0,0,7,
130,0,16,0,3,0,
0,0,1,64,0,0,
0,0,128,63,58,0,
16,0,3,0,0,0,
1,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,3,0,
0,0,10,0,16,0,
4,0,0,0,31,0,
4,3,58,0,16,0,
3,0,0,0,56,0,
0,8,18,0,16,0,
2,0,0,0,26,0,
16,0,3,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
0,0,0,7,162,0,
16,0,3,0,0,0,
6,4,16,0,2,0,
0,0,6,20,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,162,0,
16,0,3,0,0,0,
214,5,16,0,3,0,
0,0,70,123,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,10,162,0,
16,0,3,0,0,0,
86,13,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,191,0,0,0,0,
0,0,0,191,18,0,
0,1,54,0,0,8,
162,0,16,0,3,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,21,0,
0,1,56,0,0,7,
18,0,16,0,2,0,
0,0,42,0,16,0,
3,0,0,0,10,0,
16,0,3,0,0,0,
50,0,0,9,194,0,
16,0,0,0,0,0,
86,13,16,0,3,0,
0,0,6,0,16,0,
2,0,0,0,166,14,
16,0,0,0,0,0,
50,0,0,9,66,0,
16,0,2,0,0,0,
10,0,16,0,3,0,
0,0,42,0,16,0,
3,0,0,0,42,0,
16,0,2,0,0,0,
30,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
1,0,0,0,22,0,
0,1,14,0,0,10,
98,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,166,10,
16,0,2,0,0,0,
54,0,0,5,18,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,56,0,0,7,
114,0,16,0,0,0,
0,0,150,7,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
16,0,0,10,18,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,220,102,
114,63,110,161,31,63,
0,0,0,0,16,0,
0,10,34,32,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,3,177,140,190,
165,188,34,191,0,0,
0,0,16,0,0,10,
66,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
205,228,141,191,190,192,
218,63,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,66,0,0,0,
5,0,0,0,0,0,
0,0,2,0,0,0,
26,0,0,0,7,0,
0,0,7,0,0,0,
3,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
8,0,0,0,2,0,
0,0,4,0,0,0,
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
class Nes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDef : public ShaderDef
{
public:
	Nes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDef() : ShaderDef{}
	{
		Name = "lowpass-chroma";
		VertexByteCode = RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchNes_raw_paletteShadersCgwgFamicomGeomLowpassChromaShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("postfilter_taps", -1, 52, 4, 1.000000f, 30.000000f, 15.000000f));
		Params.push_back(ShaderParam("postfilter_chromacutoff", -1, 56, 4, 0.100000f, 1.000000f, 0.300000f));
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
