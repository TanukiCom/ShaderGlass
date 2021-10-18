/*
ShaderGlass shader crt-shaders\crt-easymode imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-easymode.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


CRT Shader by EasyMode
License: GPL

A flat CRT shader ideally for 1080p or higher displays.

Recommended Settings:

Video
- Aspect Ratio:  4:3
- Integer Scale: Off

Shader
- Filter: Nearest
- Scale:  Don't Care

Example RGB Mask Parameter Settings:

Aperture Grille (Default)
- Dot Width:  1
- Dot Height: 1
- Stagger:    0

Lottes' Shadow Mask
- Dot Width:  2
- Dot Height: 1
- Stagger:    3

// Set to 0 to use linear filter and gain speed

apply half-circle s-curve to distance for sharper (more pixelated) interpolation
single line formula for Graph Toy:
0.5 - sqrt(0.25 - (x - step(0.5, x)) * (x - step(0.5, x))) * sign(0.5 - x)

 main_fragment 

*/

#pragma once

namespace RetroArchCrtShadersCrtEasymodeShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,70,157,
101,249,174,100,43,221,
126,125,12,154,217,12,
102,75,1,0,0,0,
108,4,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,104,2,
0,0,192,2,0,0,
208,3,0,0,82,68,
69,70,224,1,0,0,
1,0,0,0,96,0,
0,0,1,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
182,1,0,0,82,68,
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
92,0,0,0,4,0,
0,0,120,0,0,0,
112,0,0,0,0,0,
0,0,0,0,0,0,
24,1,0,0,0,0,
0,0,64,0,0,0,
2,0,0,0,44,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,80,1,
0,0,64,0,0,0,
16,0,0,0,0,0,
0,0,108,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,144,1,0,0,
80,0,0,0,16,0,
0,0,0,0,0,0,
108,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
164,1,0,0,96,0,
0,0,16,0,0,0,
0,0,0,0,108,1,
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
0,0,35,1,0,0,
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
98,1,0,0,103,108,
111,98,97,108,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
103,108,111,98,97,108,
95,83,111,117,114,99,
101,83,105,122,101,0,
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
8,1,0,0,80,0,
1,0,66,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,103,0,0,4,
242,32,16,0,1,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,56,0,
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
4,0,0,0,4,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,33,23,
27,197,122,124,4,234,
74,141,162,182,189,215,
74,103,1,0,0,0,
64,28,0,0,5,0,
0,0,52,0,0,0,
0,7,0,0,52,7,
0,0,104,7,0,0,
164,27,0,0,82,68,
69,70,196,6,0,0,
2,0,0,0,220,0,
0,0,4,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
156,6,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
188,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,204,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,211,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
215,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
83,111,117,114,99,101,
0,85,66,79,0,80,
117,115,104,0,211,0,
0,0,4,0,0,0,
12,1,0,0,112,0,
0,0,0,0,0,0,
0,0,0,0,215,0,
0,0,17,0,0,0,
76,2,0,0,80,0,
0,0,0,0,0,0,
0,0,0,0,172,1,
0,0,0,0,0,0,
64,0,0,0,0,0,
0,0,192,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,228,1,0,0,
64,0,0,0,16,0,
0,0,2,0,0,0,
0,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
36,2,0,0,80,0,
0,0,16,0,0,0,
0,0,0,0,0,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,56,2,
0,0,96,0,0,0,
16,0,0,0,2,0,
0,0,0,2,0,0,
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
183,1,0,0,103,108,
111,98,97,108,95,79,
117,116,112,117,116,83,
105,122,101,0,102,108,
111,97,116,52,0,171,
171,171,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,246,1,
0,0,103,108,111,98,
97,108,95,79,114,105,
103,105,110,97,108,83,
105,122,101,0,103,108,
111,98,97,108,95,83,
111,117,114,99,101,83,
105,122,101,0,171,171,
244,4,0,0,0,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,52,5,
0,0,4,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,68,5,0,0,
8,0,0,0,4,0,
0,0,2,0,0,0,
16,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
87,5,0,0,12,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,107,5,
0,0,16,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,124,5,0,0,
20,0,0,0,4,0,
0,0,2,0,0,0,
16,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
144,5,0,0,24,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,165,5,
0,0,28,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,188,5,0,0,
32,0,0,0,4,0,
0,0,2,0,0,0,
16,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
210,5,0,0,36,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,233,5,
0,0,40,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,8,6,0,0,
44,0,0,0,4,0,
0,0,2,0,0,0,
16,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
39,6,0,0,48,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,66,6,
0,0,52,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,93,6,0,0,
56,0,0,0,4,0,
0,0,2,0,0,0,
16,5,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
118,6,0,0,60,0,
0,0,4,0,0,0,
2,0,0,0,16,5,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,137,6,
0,0,64,0,0,0,
4,0,0,0,2,0,
0,0,16,5,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,66,82,73,
71,72,84,95,66,79,
79,83,84,0,102,108,
111,97,116,0,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,8,5,0,0,
112,97,114,97,109,115,
95,68,73,76,65,84,
73,79,78,0,112,97,
114,97,109,115,95,71,
65,77,77,65,95,73,
78,80,85,84,0,112,
97,114,97,109,115,95,
71,65,77,77,65,95,
79,85,84,80,85,84,
0,112,97,114,97,109,
115,95,77,65,83,75,
95,83,73,90,69,0,
112,97,114,97,109,115,
95,77,65,83,75,95,
83,84,65,71,71,69,
82,0,112,97,114,97,
109,115,95,77,65,83,
75,95,83,84,82,69,
78,71,84,72,0,112,
97,114,97,109,115,95,
77,65,83,75,95,68,
79,84,95,72,69,73,
71,72,84,0,112,97,
114,97,109,115,95,77,
65,83,75,95,68,79,
84,95,87,73,68,84,
72,0,112,97,114,97,
109,115,95,83,67,65,
78,76,73,78,69,95,
67,85,84,79,70,70,
0,112,97,114,97,109,
115,95,83,67,65,78,
76,73,78,69,95,66,
69,65,77,95,87,73,
68,84,72,95,77,65,
88,0,112,97,114,97,
109,115,95,83,67,65,
78,76,73,78,69,95,
66,69,65,77,95,87,
73,68,84,72,95,77,
73,78,0,112,97,114,
97,109,115,95,83,67,
65,78,76,73,78,69,
95,66,82,73,71,72,
84,95,77,65,88,0,
112,97,114,97,109,115,
95,83,67,65,78,76,
73,78,69,95,66,82,
73,71,72,84,95,77,
73,78,0,112,97,114,
97,109,115,95,83,67,
65,78,76,73,78,69,
95,83,84,82,69,78,
71,84,72,0,112,97,
114,97,109,115,95,83,
72,65,82,80,78,69,
83,83,95,72,0,112,
97,114,97,109,115,95,
83,72,65,82,80,78,
69,83,83,95,86,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
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
83,72,69,88,52,20,
0,0,80,0,0,0,
13,5,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,7,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
5,0,0,0,90,0,
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
0,13,50,0,16,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
70,128,32,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,0,0,0,
0,0,26,0,0,5,
194,0,16,0,0,0,
0,0,6,4,16,0,
0,0,0,0,65,0,
0,5,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
0,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,29,0,
0,10,50,0,16,0,
1,0,0,0,230,10,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,55,0,0,15,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,128,0,0,0,128,
0,0,0,0,0,0,
0,0,0,0,0,7,
50,0,16,0,1,0,
0,0,230,10,16,0,
0,0,0,0,70,0,
16,0,1,0,0,0,
50,0,0,13,50,0,
16,0,1,0,0,0,
70,0,16,128,65,0,
0,0,1,0,0,0,
70,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,62,0,0,
128,62,0,0,0,0,
0,0,0,0,75,0,
0,5,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
0,0,0,11,194,0,
16,0,1,0,0,0,
166,14,16,128,65,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,63,0,0,
0,63,49,0,0,10,
50,0,16,0,2,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,230,10,
16,0,1,0,0,0,
49,0,0,10,194,0,
16,0,1,0,0,0,
166,14,16,0,1,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,30,0,
0,8,194,0,16,0,
1,0,0,0,6,4,
16,128,65,0,0,0,
2,0,0,0,166,14,
16,0,1,0,0,0,
43,0,0,5,194,0,
16,0,1,0,0,0,
166,14,16,0,1,0,
0,0,50,0,0,11,
50,0,16,0,1,0,
0,0,70,0,16,128,
65,0,0,0,1,0,
0,0,230,10,16,0,
1,0,0,0,230,10,
16,128,65,0,0,0,
0,0,0,0,0,0,
0,10,50,0,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,0,56,0,0,9,
66,0,16,0,1,0,
0,0,58,128,32,0,
1,0,0,0,3,0,
0,0,58,128,32,0,
1,0,0,0,3,0,
0,0,50,0,0,9,
34,0,16,0,2,0,
0,0,42,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
42,0,16,0,0,0,
0,0,50,0,0,10,
66,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,4,0,
0,0,26,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
50,0,0,15,210,0,
16,0,2,0,0,0,
86,5,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
0,0,0,0,128,191,
0,0,128,191,2,64,
0,0,0,0,128,63,
0,0,0,0,0,0,
128,63,0,0,0,64,
56,0,0,10,242,0,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,2,64,0,0,
219,15,73,64,219,15,
73,64,219,15,73,64,
219,15,73,64,52,0,
0,11,242,0,16,0,
1,0,0,0,70,14,
16,128,129,0,0,0,
1,0,0,0,2,64,
0,0,172,197,39,55,
172,197,39,55,172,197,
39,55,172,197,39,55,
77,0,0,6,242,0,
16,0,2,0,0,0,
0,208,0,0,70,14,
16,0,1,0,0,0,
0,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,56,0,
0,10,242,0,16,0,
3,0,0,0,70,14,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,56,0,0,7,
242,0,16,0,1,0,
0,0,70,14,16,0,
1,0,0,0,70,14,
16,0,1,0,0,0,
77,0,0,6,242,0,
16,0,3,0,0,0,
0,208,0,0,70,14,
16,0,3,0,0,0,
56,0,0,7,242,0,
16,0,2,0,0,0,
70,14,16,0,2,0,
0,0,70,14,16,0,
3,0,0,0,14,0,
0,7,242,0,16,0,
1,0,0,0,70,14,
16,0,2,0,0,0,
70,14,16,0,1,0,
0,0,17,0,0,10,
130,0,16,0,0,0,
0,0,70,14,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
14,0,0,7,242,0,
16,0,1,0,0,0,
70,14,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,54,0,
0,6,146,0,16,0,
2,0,0,0,166,142,
32,0,0,0,0,0,
6,0,0,0,54,0,
0,8,98,0,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
50,0,0,10,242,0,
16,0,3,0,0,0,
70,4,16,0,0,0,
0,0,230,142,32,0,
0,0,0,0,6,0,
0,0,70,14,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,10,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,10,114,0,
16,0,5,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,191,0,0,128,191,
0,0,0,0,50,0,
0,13,114,0,16,0,
5,0,0,0,86,133,
32,0,1,0,0,0,
0,0,0,0,70,2,
16,0,5,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,56,0,0,7,
114,0,16,0,4,0,
0,0,70,2,16,0,
4,0,0,0,70,2,
16,0,5,0,0,0,
56,0,0,7,114,0,
16,0,5,0,0,0,
86,5,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,0,0,
0,8,194,0,16,0,
2,0,0,0,6,4,
16,128,65,0,0,0,
2,0,0,0,166,14,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
114,0,16,0,7,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,7,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,114,0,16,0,
6,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,7,0,
0,0,50,0,0,9,
114,0,16,0,5,0,
0,0,6,0,16,0,
1,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,7,
194,0,16,0,2,0,
0,0,6,4,16,0,
2,0,0,0,166,14,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
114,0,16,0,7,0,
0,0,70,2,16,0,
6,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,7,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,114,0,16,0,
6,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,7,0,
0,0,50,0,0,9,
114,0,16,0,5,0,
0,0,166,10,16,0,
1,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,5,0,
0,0,50,0,0,12,
194,0,16,0,2,0,
0,0,6,4,16,0,
2,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,64,0,0,0,64,
166,14,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,7,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,10,114,0,
16,0,8,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
0,0,128,191,0,0,
128,191,0,0,128,191,
0,0,0,0,50,0,
0,13,114,0,16,0,
8,0,0,0,86,133,
32,0,1,0,0,0,
0,0,0,0,70,2,
16,0,8,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,56,0,0,7,
114,0,16,0,7,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,8,0,0,0,
50,0,0,9,114,0,
16,0,5,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,5,0,0,0,
51,0,0,7,114,0,
16,0,7,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
6,0,0,0,52,0,
0,7,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,0,6,0,
0,0,52,0,0,7,
114,0,16,0,5,0,
0,0,70,2,16,0,
5,0,0,0,70,2,
16,0,7,0,0,0,
51,0,0,7,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
5,0,0,0,56,0,
0,8,194,0,16,0,
2,0,0,0,6,4,
16,0,0,0,0,0,
166,142,32,0,0,0,
0,0,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
114,0,16,0,6,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,6,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
70,2,16,0,6,0,
0,0,56,0,0,7,
114,0,16,0,6,0,
0,0,86,5,16,0,
1,0,0,0,70,2,
16,0,5,0,0,0,
50,0,0,11,194,0,
16,0,2,0,0,0,
6,4,16,0,0,0,
0,0,166,142,32,0,
0,0,0,0,6,0,
0,0,6,4,16,128,
65,0,0,0,2,0,
0,0,0,0,0,7,
50,0,16,0,2,0,
0,0,70,0,16,0,
2,0,0,0,70,0,
16,0,2,0,0,0,
50,0,0,10,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,230,138,32,0,
0,0,0,0,6,0,
0,0,70,0,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,178,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,70,123,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,230,10,16,0,
2,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,10,
114,0,16,0,7,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,7,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,7,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,7,0,
0,0,50,0,0,9,
114,0,16,0,2,0,
0,0,6,0,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,6,0,
0,0,0,0,0,10,
114,0,16,0,6,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,6,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,6,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,166,10,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,10,
114,0,16,0,2,0,
0,0,70,3,16,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
128,191,0,0,0,0,
50,0,0,13,114,0,
16,0,2,0,0,0,
86,133,32,0,1,0,
0,0,0,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,178,0,16,0,
0,0,0,0,70,12,
16,0,0,0,0,0,
70,8,16,0,2,0,
0,0,50,0,0,9,
178,0,16,0,0,0,
0,0,246,15,16,0,
1,0,0,0,70,12,
16,0,0,0,0,0,
70,8,16,0,1,0,
0,0,51,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,5,0,0,0,
52,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,52,0,
0,7,178,0,16,0,
0,0,0,0,70,12,
16,0,0,0,0,0,
70,8,16,0,1,0,
0,0,51,0,0,7,
178,0,16,0,0,0,
0,0,70,8,16,0,
2,0,0,0,70,12,
16,0,0,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,3,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,4,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,3,16,0,0,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,0,0,
0,8,130,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
26,128,32,0,1,0,
0,0,0,0,0,0,
14,0,0,8,130,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,0,0,0,0,
58,0,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
25,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,52,0,0,7,
130,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,26,0,
16,0,0,0,0,0,
52,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,16,0,
0,10,18,0,16,0,
1,0,0,0,2,64,
0,0,208,179,89,62,
89,23,55,63,152,221,
147,61,0,0,0,0,
70,2,16,0,0,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
56,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,56,0,
0,8,18,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
42,128,32,0,1,0,
0,0,2,0,0,0,
52,0,0,8,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,3,0,
0,0,51,0,0,8,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
3,0,0,0,52,0,
0,8,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
58,128,32,0,1,0,
0,0,2,0,0,0,
51,0,0,8,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,42,128,32,0,
1,0,0,0,2,0,
0,0,56,0,0,8,
34,0,16,0,1,0,
0,0,26,16,16,0,
0,0,0,0,26,128,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,7,34,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
1,64,0,0,219,15,
201,64,77,0,0,6,
0,208,0,0,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,50,0,0,9,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
1,64,0,0,0,0,
0,63,47,0,0,5,
34,0,16,0,1,0,
0,0,26,0,16,0,
1,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,26,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,25,0,0,5,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,11,18,0,16,0,
1,0,0,0,10,0,
16,128,65,0,0,0,
1,0,0,0,42,128,
32,0,1,0,0,0,
3,0,0,0,1,64,
0,0,0,0,128,63,
29,0,0,9,34,0,
16,0,1,0,0,0,
26,128,32,0,0,0,
0,0,6,0,0,0,
26,128,32,0,1,0,
0,0,2,0,0,0,
55,0,0,9,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,10,0,
16,0,1,0,0,0,
56,0,0,7,226,0,
16,0,1,0,0,0,
6,9,16,0,0,0,
0,0,6,0,16,0,
1,0,0,0,50,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,6,0,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
150,7,16,0,1,0,
0,0,56,0,0,9,
34,0,16,0,1,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,58,128,32,0,
1,0,0,0,1,0,
0,0,54,0,0,6,
18,0,16,0,1,0,
0,0,10,128,32,0,
1,0,0,0,1,0,
0,0,56,0,0,8,
50,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,70,128,
32,0,0,0,0,0,
6,0,0,0,56,0,
0,8,194,0,16,0,
1,0,0,0,6,20,
16,0,0,0,0,0,
6,132,32,0,0,0,
0,0,4,0,0,0,
56,0,0,8,194,0,
16,0,1,0,0,0,
166,14,16,0,1,0,
0,0,6,132,32,0,
0,0,0,0,6,0,
0,0,14,0,0,7,
50,0,16,0,1,0,
0,0,230,10,16,0,
1,0,0,0,70,0,
16,0,1,0,0,0,
65,0,0,5,50,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,56,0,0,7,
130,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,1,64,
0,0,0,0,0,63,
65,0,0,5,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,50,0,0,10,
130,0,16,0,0,0,
0,0,58,0,16,128,
65,0,0,0,0,0,
0,0,1,64,0,0,
0,0,0,64,26,0,
16,0,1,0,0,0,
50,0,0,10,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,1,0,
0,0,10,0,16,0,
1,0,0,0,14,0,
0,8,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,128,32,0,1,0,
0,0,2,0,0,0,
56,0,0,7,18,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
171,170,170,62,65,0,
0,5,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
50,0,0,10,130,0,
16,0,0,0,0,0,
10,0,16,128,65,0,
0,0,1,0,0,0,
1,64,0,0,0,0,
64,64,58,0,16,0,
0,0,0,0,27,0,
0,5,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
32,0,0,7,18,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
1,0,0,0,0,0,
0,9,34,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
42,128,32,128,65,0,
0,0,1,0,0,0,
1,0,0,0,55,0,
0,9,34,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,26,0,16,0,
1,0,0,0,55,0,
0,9,66,0,16,0,
2,0,0,0,10,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,55,0,
0,9,98,0,16,0,
2,0,0,0,246,15,
16,0,0,0,0,0,
86,6,16,0,2,0,
0,0,86,5,16,0,
1,0,0,0,55,0,
0,9,18,0,16,0,
2,0,0,0,58,0,
16,0,0,0,0,0,
26,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,2,0,
0,0,47,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,14,0,
0,11,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,128,32,0,1,0,
0,0,0,0,0,0,
56,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,25,0,
0,5,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,8,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,6,128,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,149,0,
0,0,9,0,0,0,
0,0,0,0,2,0,
0,0,126,0,0,0,
2,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,4,0,0,0,
6,0,0,0,7,0,
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
class CrtShadersCrtEasymodeShaderDef : public ShaderDef
{
public:
	CrtShadersCrtEasymodeShaderDef() : ShaderDef{}
	{
		Name = "crt-easymode";
		VertexByteCode = RetroArchCrtShadersCrtEasymodeShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtEasymodeShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtEasymodeShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtEasymodeShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("SHARPNESS_H", -1, 60, 4, 0.000000f, 1.000000f, 0.500000f));
		Params.push_back(ShaderParam("SHARPNESS_V", -1, 64, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MASK_STRENGTH", -1, 24, 4, 0.000000f, 1.000000f, 0.300000f));
		Params.push_back(ShaderParam("MASK_DOT_WIDTH", -1, 32, 4, 1.000000f, 100.000000f, 1.000000f));
		Params.push_back(ShaderParam("MASK_DOT_HEIGHT", -1, 28, 4, 1.000000f, 100.000000f, 1.000000f));
		Params.push_back(ShaderParam("MASK_STAGGER", -1, 20, 4, 0.000000f, 100.000000f, 0.000000f));
		Params.push_back(ShaderParam("MASK_SIZE", -1, 16, 4, 1.000000f, 100.000000f, 1.000000f));
		Params.push_back(ShaderParam("SCANLINE_STRENGTH", -1, 56, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("SCANLINE_BEAM_WIDTH_MIN", -1, 44, 4, 0.500000f, 5.000000f, 1.500000f));
		Params.push_back(ShaderParam("SCANLINE_BEAM_WIDTH_MAX", -1, 40, 4, 0.500000f, 5.000000f, 1.500000f));
		Params.push_back(ShaderParam("SCANLINE_BRIGHT_MIN", -1, 52, 4, 0.000000f, 1.000000f, 0.350000f));
		Params.push_back(ShaderParam("SCANLINE_BRIGHT_MAX", -1, 48, 4, 0.000000f, 1.000000f, 0.650000f));
		Params.push_back(ShaderParam("SCANLINE_CUTOFF", -1, 36, 4, 1.000000f, 1000.000000f, 400.000000f));
		Params.push_back(ShaderParam("GAMMA_INPUT", -1, 8, 4, 0.100000f, 5.000000f, 2.000000f));
		Params.push_back(ShaderParam("GAMMA_OUTPUT", -1, 12, 4, 0.100000f, 5.000000f, 1.800000f));
		Params.push_back(ShaderParam("BRIGHT_BOOST", -1, 0, 4, 1.000000f, 2.000000f, 1.200000f));
		Params.push_back(ShaderParam("DILATION", -1, 4, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f));
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
