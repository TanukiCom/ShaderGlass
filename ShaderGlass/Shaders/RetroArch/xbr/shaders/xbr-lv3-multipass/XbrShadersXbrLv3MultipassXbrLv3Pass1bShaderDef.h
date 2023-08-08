/*
ShaderGlass shader xbr-shaders-xbr-lv3-multipass\xbr-lv3-pass1b imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/xbr/shaders/xbr-lv3-multipass/xbr-lv3-pass1b.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's xBR-lv3 - pass1b Shader

Copyright (C) 2011-2022 Hyllian - sergiogdb@gmail.com

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

//   vTexCoord = TexCoord;
//    A1 B1 C1
// A0  A  B  C C4
// D0  D  E  F F4
// G0  G  H  I I4
//    G5 H5 I5
//  H
// Return if A components are less than or equal B ones.
// Return if A components are less than B ones.
// Calculate color distance between two vectors of four pixels

mat4 unpack_info(vec4 i)
{
mat4 info;
info[0] = round(modf(i/2.0, i));
info[1] = round(modf(i/2.0, i));
info[2] = round(modf(i/2.0, i));
info[3] = i;

return transpose(info);
}
// These inequations define the line below which interpolation occurs.

*/

#pragma once

namespace RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,100,251,
34,139,84,56,83,125,
211,88,142,99,245,226,
161,171,1,0,0,0,
252,5,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,104,2,
0,0,8,3,0,0,
96,5,0,0,82,68,
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
16,0,0,0,2,0,
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
2,0,0,0,108,1,
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
95,83,111,117,114,99,
101,83,105,122,101,0,
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
95,79,117,116,112,117,
116,83,105,122,101,0,
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
71,78,152,0,0,0,
5,0,0,0,8,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,128,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,4,11,
0,0,128,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,128,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,137,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
80,2,0,0,80,0,
1,0,148,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,7,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
66,32,16,0,0,0,
0,0,101,0,0,3,
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,103,0,0,4,
242,32,16,0,3,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,15,0,0,9,
66,32,16,0,0,0,
0,0,6,128,32,0,
0,0,0,0,4,0,
0,0,166,138,32,0,
0,0,0,0,6,0,
0,0,56,0,0,10,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,0,0,
0,0,0,0,0,0,
54,0,0,5,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,56,0,0,11,
162,0,16,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,191,0,0,0,0,
0,0,128,63,246,143,
32,0,0,0,0,0,
4,0,0,0,50,0,
0,12,242,32,16,0,
1,0,0,0,70,21,
16,0,1,0,0,0,
2,64,0,0,71,3,
128,63,71,3,128,63,
71,3,128,63,71,3,
128,63,70,12,16,0,
0,0,0,0,56,0,
0,11,82,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,191,
0,0,0,0,0,0,
128,63,0,0,0,0,
166,138,32,0,0,0,
0,0,4,0,0,0,
54,0,0,8,162,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,50,0,0,12,
242,32,16,0,2,0,
0,0,6,20,16,0,
1,0,0,0,2,64,
0,0,71,3,128,63,
71,3,128,63,71,3,
128,63,71,3,128,63,
70,14,16,0,0,0,
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
16,0,3,0,0,0,
246,31,16,0,0,0,
0,0,70,142,32,0,
0,0,0,0,3,0,
0,0,70,14,16,0,
0,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,13,0,
0,0,1,0,0,0,
0,0,0,0,7,0,
0,0,10,0,0,0,
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
68,88,66,67,97,34,
192,134,149,131,103,254,
99,75,123,16,136,17,
195,224,1,0,0,0,
36,26,0,0,5,0,
0,0,52,0,0,0,
112,3,0,0,236,3,
0,0,32,4,0,0,
136,25,0,0,82,68,
69,70,52,3,0,0,
2,0,0,0,52,1,
0,0,6,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
12,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
252,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,12,1,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,27,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
34,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,40,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,44,1,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,1,0,
0,0,0,0,0,0,
95,83,111,117,114,99,
101,95,115,97,109,112,
108,101,114,0,95,120,
98,114,51,120,95,115,
97,109,112,108,101,114,
0,83,111,117,114,99,
101,0,120,98,114,51,
120,0,85,66,79,0,
80,117,115,104,0,171,
171,171,40,1,0,0,
4,0,0,0,100,1,
0,0,112,0,0,0,
0,0,0,0,0,0,
0,0,44,1,0,0,
1,0,0,0,164,2,
0,0,16,0,0,0,
0,0,0,0,0,0,
0,0,4,2,0,0,
0,0,0,0,64,0,
0,0,0,0,0,0,
24,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
60,2,0,0,64,0,
0,0,16,0,0,0,
2,0,0,0,88,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,124,2,
0,0,80,0,0,0,
16,0,0,0,0,0,
0,0,88,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,144,2,0,0,
96,0,0,0,16,0,
0,0,0,0,0,0,
88,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
103,108,111,98,97,108,
95,77,86,80,0,102,
108,111,97,116,52,120,
52,0,2,0,3,0,
4,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,15,2,
0,0,103,108,111,98,
97,108,95,83,111,117,
114,99,101,83,105,122,
101,0,102,108,111,97,
116,52,0,171,171,171,
1,0,3,0,1,0,
4,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,78,2,0,0,
103,108,111,98,97,108,
95,79,114,105,103,105,
110,97,108,83,105,122,
101,0,103,108,111,98,
97,108,95,79,117,116,
112,117,116,83,105,122,
101,0,171,171,204,2,
0,0,0,0,0,0,
4,0,0,0,2,0,
0,0,232,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,112,97,114,97,
109,115,95,88,66,82,
95,66,76,69,78,68,
73,78,71,0,102,108,
111,97,116,0,171,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,224,2,0,0,
77,105,99,114,111,115,
111,102,116,32,40,82,
41,32,72,76,83,76,
32,83,104,97,100,101,
114,32,67,111,109,112,
105,108,101,114,32,49,
48,46,49,0,73,83,
71,78,116,0,0,0,
4,0,0,0,8,0,
0,0,104,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,104,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,4,4,
0,0,104,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,11,
0,0,104,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,15,
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
83,72,69,88,96,21,
0,0,80,0,0,0,
88,5,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,5,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
3,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,3,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
98,16,0,3,66,16,
16,0,0,0,0,0,
98,16,0,3,178,16,
16,0,1,0,0,0,
98,16,0,3,242,16,
16,0,2,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,20,0,
0,0,56,0,0,8,
242,0,16,0,0,0,
0,0,86,16,16,0,
0,0,0,0,86,128,
32,0,0,0,0,0,
4,0,0,0,26,0,
0,5,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,16,16,0,
1,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,198,16,
16,0,2,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
214,21,16,0,2,0,
0,0,70,126,16,0,
3,0,0,0,0,96,
16,0,3,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,230,26,16,0,
2,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,198,16,
16,0,1,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,56,0,
0,10,242,0,16,0,
6,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,128,63,0,0,
128,191,0,0,0,7,
242,0,16,0,6,0,
0,0,166,15,16,0,
6,0,0,0,70,1,
16,0,6,0,0,0,
56,0,0,10,242,0,
16,0,7,0,0,0,
246,15,16,0,0,0,
0,0,2,64,0,0,
0,0,0,64,0,0,
0,63,0,0,0,192,
0,0,0,191,50,0,
0,12,242,0,16,0,
8,0,0,0,70,1,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,128,191,0,0,
128,63,22,11,16,0,
7,0,0,0,50,0,
0,12,242,0,16,0,
7,0,0,0,70,1,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,191,
0,0,128,191,0,0,
128,63,70,14,16,0,
7,0,0,0,56,0,
0,10,242,0,16,0,
9,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
192,64,0,0,0,64,
0,0,192,192,0,0,
0,192,50,0,0,12,
242,0,16,0,10,0,
0,0,86,5,16,0,
0,0,0,0,2,64,
0,0,0,0,192,64,
0,0,0,192,0,0,
192,192,0,0,0,64,
22,11,16,0,9,0,
0,0,50,0,0,12,
242,0,16,0,0,0,
0,0,86,5,16,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,192,192,0,0,
0,192,0,0,192,64,
70,14,16,0,9,0,
0,0,24,0,0,8,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,10,128,
32,0,1,0,0,0,
0,0,0,0,31,0,
4,3,58,0,16,0,
1,0,0,0,56,0,
0,10,242,0,16,0,
9,0,0,0,166,26,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,0,63,
0,0,128,63,0,0,
0,63,0,0,0,10,
242,0,16,0,11,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,192,191,
0,0,0,191,0,0,
0,63,0,0,0,191,
14,0,0,7,242,0,
16,0,11,0,0,0,
70,14,16,0,11,0,
0,0,166,26,16,0,
0,0,0,0,0,32,
0,10,242,0,16,0,
11,0,0,0,70,14,
16,0,11,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,10,
242,0,16,0,12,0,
0,0,70,14,16,0,
8,0,0,0,2,64,
0,0,0,0,128,191,
0,0,128,191,0,0,
0,63,0,0,0,128,
14,0,0,7,242,0,
16,0,12,0,0,0,
70,14,16,0,12,0,
0,0,182,11,16,0,
9,0,0,0,0,32,
0,10,242,0,16,0,
12,0,0,0,70,14,
16,0,12,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,10,
242,0,16,0,13,0,
0,0,70,14,16,0,
7,0,0,0,2,64,
0,0,0,0,0,192,
0,0,0,128,0,0,
128,63,0,0,0,191,
14,0,0,7,242,0,
16,0,13,0,0,0,
70,14,16,0,13,0,
0,0,70,14,16,0,
9,0,0,0,0,32,
0,10,242,0,16,0,
13,0,0,0,70,14,
16,0,13,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,10,
242,0,16,0,14,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,224,191,
0,0,64,191,0,0,
128,62,0,0,64,191,
14,0,0,7,242,0,
16,0,14,0,0,0,
70,14,16,0,14,0,
0,0,166,26,16,0,
0,0,0,0,0,32,
0,10,242,0,16,0,
14,0,0,0,70,14,
16,0,14,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,10,
242,0,16,0,15,0,
0,0,70,14,16,0,
10,0,0,0,2,64,
0,0,0,0,160,192,
0,0,64,192,0,0,
64,64,0,0,128,63,
14,0,0,7,242,0,
16,0,15,0,0,0,
70,14,16,0,15,0,
0,0,182,11,16,0,
9,0,0,0,0,32,
0,10,242,0,16,0,
15,0,0,0,70,14,
16,0,15,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,10,
242,0,16,0,16,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,0,0,160,192,
0,0,128,63,0,0,
64,64,0,0,64,192,
14,0,0,7,242,0,
16,0,9,0,0,0,
70,14,16,0,16,0,
0,0,70,14,16,0,
9,0,0,0,0,32,
0,10,242,0,16,0,
9,0,0,0,70,14,
16,0,9,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,18,0,0,1,
49,0,0,10,242,0,
16,0,16,0,0,0,
2,64,0,0,0,0,
192,63,0,0,0,63,
0,0,0,191,0,0,
0,63,70,14,16,0,
6,0,0,0,1,0,
0,10,242,0,16,0,
11,0,0,0,70,14,
16,0,16,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,49,0,0,10,
242,0,16,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,0,191,
0,0,0,0,70,14,
16,0,8,0,0,0,
1,0,0,10,242,0,
16,0,12,0,0,0,
70,14,16,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,49,0,
0,10,242,0,16,0,
7,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,0,0,0,
128,191,0,0,0,63,
70,14,16,0,7,0,
0,0,1,0,0,10,
242,0,16,0,13,0,
0,0,70,14,16,0,
7,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
49,0,0,10,242,0,
16,0,6,0,0,0,
2,64,0,0,0,0,
224,63,0,0,64,63,
0,0,128,190,0,0,
64,63,70,14,16,0,
6,0,0,0,1,0,
0,10,242,0,16,0,
14,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,49,0,0,10,
242,0,16,0,6,0,
0,0,2,64,0,0,
0,0,160,64,0,0,
64,64,0,0,64,192,
0,0,128,191,70,14,
16,0,10,0,0,0,
1,0,0,10,242,0,
16,0,15,0,0,0,
70,14,16,0,6,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,49,0,
0,10,242,0,16,0,
0,0,0,0,2,64,
0,0,0,0,160,64,
0,0,128,191,0,0,
64,192,0,0,64,64,
70,14,16,0,0,0,
0,0,1,0,0,10,
242,0,16,0,9,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
21,0,0,1,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
50,0,0,15,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,127,67,0,0,
127,67,0,0,127,67,
0,0,127,67,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
65,0,0,5,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,56,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
67,0,0,5,242,0,
16,0,6,0,0,0,
70,14,16,0,6,0,
0,0,50,0,0,13,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
70,14,16,128,65,0,
0,0,6,0,0,0,
0,0,0,10,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,56,0,
0,10,242,0,16,0,
7,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,67,0,0,5,
242,0,16,0,7,0,
0,0,70,14,16,0,
7,0,0,0,50,0,
0,13,242,0,16,0,
6,0,0,0,70,14,
16,0,6,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,70,14,16,128,
65,0,0,0,7,0,
0,0,0,0,0,10,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,63,
56,0,0,10,242,0,
16,0,8,0,0,0,
70,14,16,0,7,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,67,0,
0,5,242,0,16,0,
8,0,0,0,70,14,
16,0,8,0,0,0,
50,0,0,13,242,0,
16,0,7,0,0,0,
70,14,16,0,7,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,63,70,14,
16,128,65,0,0,0,
8,0,0,0,0,0,
0,10,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,63,56,0,0,10,
114,0,16,0,10,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
67,0,0,5,114,0,
16,0,10,0,0,0,
70,2,16,0,10,0,
0,0,50,0,0,13,
114,0,16,0,16,0,
0,0,70,2,16,0,
8,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
70,2,16,128,65,0,
0,0,10,0,0,0,
0,0,0,10,114,0,
16,0,16,0,0,0,
70,2,16,0,16,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,56,0,
0,10,114,0,16,0,
17,0,0,0,70,2,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,67,0,0,5,
114,0,16,0,17,0,
0,0,70,2,16,0,
17,0,0,0,50,0,
0,13,114,0,16,0,
10,0,0,0,70,2,
16,0,10,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,70,2,16,128,
65,0,0,0,17,0,
0,0,0,0,0,10,
114,0,16,0,10,0,
0,0,70,2,16,0,
10,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
56,0,0,10,114,0,
16,0,18,0,0,0,
70,2,16,0,17,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,67,0,
0,5,114,0,16,0,
18,0,0,0,70,2,
16,0,18,0,0,0,
50,0,0,13,114,0,
16,0,17,0,0,0,
70,2,16,0,17,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,70,2,
16,128,65,0,0,0,
18,0,0,0,0,0,
0,10,114,0,16,0,
17,0,0,0,70,2,
16,0,17,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,56,0,0,10,
114,0,16,0,19,0,
0,0,70,2,16,0,
18,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
67,0,0,5,114,0,
16,0,19,0,0,0,
70,2,16,0,19,0,
0,0,50,0,0,13,
114,0,16,0,18,0,
0,0,70,2,16,0,
18,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,63,0,0,0,0,
70,2,16,128,65,0,
0,0,19,0,0,0,
0,0,0,10,114,0,
16,0,18,0,0,0,
70,2,16,0,18,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,65,0,
0,5,178,0,16,0,
16,0,0,0,70,8,
16,0,16,0,0,0,
65,0,0,5,114,0,
16,0,10,0,0,0,
70,2,16,0,10,0,
0,0,65,0,0,5,
114,0,16,0,17,0,
0,0,70,2,16,0,
17,0,0,0,65,0,
0,5,114,0,16,0,
18,0,0,0,70,2,
16,0,18,0,0,0,
65,0,0,5,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,65,0,0,5,
242,0,16,0,6,0,
0,0,70,14,16,0,
6,0,0,0,65,0,
0,5,242,0,16,0,
7,0,0,0,70,14,
16,0,7,0,0,0,
54,0,0,5,18,0,
16,0,8,0,0,0,
58,0,16,0,0,0,
0,0,54,0,0,5,
34,0,16,0,8,0,
0,0,58,0,16,0,
6,0,0,0,54,0,
0,5,66,0,16,0,
8,0,0,0,58,0,
16,0,7,0,0,0,
56,0,0,7,242,0,
16,0,8,0,0,0,
70,14,16,0,14,0,
0,0,70,14,16,0,
8,0,0,0,54,0,
0,5,18,0,16,0,
14,0,0,0,10,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,14,0,0,0,
10,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,14,0,
0,0,10,0,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
14,0,0,0,10,0,
16,0,16,0,0,0,
56,0,0,7,242,0,
16,0,11,0,0,0,
70,14,16,0,11,0,
0,0,70,14,16,0,
14,0,0,0,54,0,
0,5,18,0,16,0,
14,0,0,0,26,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,14,0,0,0,
26,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,14,0,
0,0,26,0,16,0,
7,0,0,0,54,0,
0,5,130,0,16,0,
14,0,0,0,26,0,
16,0,16,0,0,0,
56,0,0,7,242,0,
16,0,12,0,0,0,
70,14,16,0,12,0,
0,0,70,14,16,0,
14,0,0,0,54,0,
0,5,18,0,16,0,
16,0,0,0,42,0,
16,0,0,0,0,0,
54,0,0,5,34,0,
16,0,16,0,0,0,
42,0,16,0,6,0,
0,0,54,0,0,5,
66,0,16,0,16,0,
0,0,42,0,16,0,
7,0,0,0,56,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,13,0,0,0,
70,14,16,0,16,0,
0,0,54,0,0,5,
18,0,16,0,6,0,
0,0,10,0,16,0,
10,0,0,0,54,0,
0,5,34,0,16,0,
6,0,0,0,10,0,
16,0,17,0,0,0,
54,0,0,5,66,0,
16,0,6,0,0,0,
10,0,16,0,18,0,
0,0,54,0,0,5,
130,0,16,0,6,0,
0,0,10,0,16,0,
19,0,0,0,56,0,
0,7,242,0,16,0,
6,0,0,0,70,14,
16,0,15,0,0,0,
70,14,16,0,6,0,
0,0,54,0,0,5,
18,0,16,0,7,0,
0,0,26,0,16,0,
10,0,0,0,54,0,
0,5,34,0,16,0,
7,0,0,0,26,0,
16,0,17,0,0,0,
54,0,0,5,66,0,
16,0,7,0,0,0,
26,0,16,0,18,0,
0,0,54,0,0,5,
130,0,16,0,7,0,
0,0,26,0,16,0,
19,0,0,0,56,0,
0,7,242,0,16,0,
7,0,0,0,70,14,
16,0,9,0,0,0,
70,14,16,0,7,0,
0,0,52,0,0,7,
242,0,16,0,6,0,
0,0,70,14,16,0,
12,0,0,0,70,14,
16,0,6,0,0,0,
52,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,14,16,0,
7,0,0,0,52,0,
0,7,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,6,0,
0,0,52,0,0,7,
242,0,16,0,6,0,
0,0,70,14,16,0,
8,0,0,0,70,14,
16,0,11,0,0,0,
52,0,0,7,242,0,
16,0,0,0,0,0,
70,14,16,0,0,0,
0,0,70,14,16,0,
6,0,0,0,0,0,
0,8,114,0,16,0,
6,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,128,65,0,
0,0,5,0,0,0,
50,0,0,9,114,0,
16,0,6,0,0,0,
166,10,16,0,10,0,
0,0,70,2,16,0,
6,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,8,114,0,
16,0,6,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,6,0,
0,0,50,0,0,9,
114,0,16,0,6,0,
0,0,6,0,16,0,
0,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,7,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
7,0,0,0,166,10,
16,0,18,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
7,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,70,2,
16,0,7,0,0,0,
50,0,0,9,114,0,
16,0,7,0,0,0,
166,10,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,8,114,0,
16,0,8,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,6,0,
0,0,16,0,0,11,
18,0,16,0,0,0,
0,0,70,2,16,128,
129,0,0,0,8,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,0,0,
0,8,114,0,16,0,
8,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,7,0,0,0,
16,0,0,11,66,0,
16,0,0,0,0,0,
70,2,16,128,129,0,
0,0,8,0,0,0,
2,64,0,0,157,128,
134,62,104,145,45,63,
143,228,114,61,0,0,
0,0,29,0,0,7,
18,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
1,0,0,7,18,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,0,0,
0,8,114,0,16,0,
7,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
50,0,0,9,114,0,
16,0,6,0,0,0,
6,0,16,0,0,0,
0,0,70,2,16,0,
7,0,0,0,70,2,
16,0,6,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,4,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,166,10,16,0,
17,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,3,0,
0,0,70,2,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,86,5,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
166,10,16,0,19,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
3,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
2,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,3,0,
0,0,16,0,0,11,
130,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,1,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,1,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
1,0,0,0,2,64,
0,0,157,128,134,62,
104,145,45,63,143,228,
114,61,0,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,3,0,
0,0,16,0,0,11,
18,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,1,0,
0,0,2,64,0,0,
157,128,134,62,104,145,
45,63,143,228,114,61,
0,0,0,0,29,0,
0,7,130,0,16,0,
0,0,0,0,10,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,1,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,6,0,0,0,
70,2,16,0,0,0,
0,0,50,0,0,9,
114,32,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,6,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,163,0,
0,0,20,0,0,0,
0,0,0,0,5,0,
0,0,121,0,0,0,
0,0,0,0,9,0,
0,0,2,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
6,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,23,0,0,0,
0,0,0,0,16,0,
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
class XbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDef : public ShaderDef
{
public:
	XbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDef() : ShaderDef{}
	{
		Name = "xbr-lv3-pass1b";
		VertexByteCode = RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchXbrShadersXbrLv3MultipassXbrLv3Pass1bShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("XBR_BLENDING", -1, 0, 4, 0.000000f, 1.000000f, 1.000000f, 1.000000f, "BLENDING [ NOBLEND | AA ]"));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", 0, 64, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", 0, 80, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", 0, 96, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("xbr3x", 3));
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