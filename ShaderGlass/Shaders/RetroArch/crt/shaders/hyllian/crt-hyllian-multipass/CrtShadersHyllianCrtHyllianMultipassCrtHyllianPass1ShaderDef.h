/*
ShaderGlass shader crt-shaders-hyllian-crt-hyllian-multipass\crt-hyllian-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/hyllian/crt-hyllian-multipass/crt-hyllian-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Hyllian's CRT Shader - pass1

Copyright (C) 2011-2016 Hyllian - sergiogdb@gmail.com
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


*/

#pragma once

namespace RetroArchCrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDefs
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
68,88,66,67,142,46,
135,199,26,233,120,55,
84,133,221,98,240,121,
98,41,1,0,0,0,
200,11,0,0,5,0,
0,0,52,0,0,0,
192,4,0,0,244,4,
0,0,40,5,0,0,
44,11,0,0,82,68,
69,70,132,4,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
91,4,0,0,82,68,
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
0,0,13,0,0,0,
208,0,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,216,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,244,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,24,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
244,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
44,3,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,244,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,62,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,88,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,124,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
152,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
188,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,152,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,204,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,152,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,223,3,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
152,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
240,3,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,152,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,3,4,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,152,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,21,4,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
152,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
47,4,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,152,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,69,4,
0,0,84,0,0,0,
4,0,0,0,2,0,
0,0,152,3,0,0,
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
0,0,234,2,0,0,
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
80,3,0,0,112,97,
114,97,109,115,95,79,
117,116,112,117,116,71,
97,109,109,97,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,143,3,
0,0,112,97,114,97,
109,115,95,80,72,79,
83,80,72,79,82,0,
112,97,114,97,109,115,
95,67,79,76,79,82,
95,66,79,79,83,84,
0,112,97,114,97,109,
115,95,82,69,68,95,
66,79,79,83,84,0,
112,97,114,97,109,115,
95,71,82,69,69,78,
95,66,79,79,83,84,
0,112,97,114,97,109,
115,95,66,76,85,69,
95,66,79,79,83,84,
0,112,97,114,97,109,
115,95,83,67,65,78,
76,73,78,69,83,95,
83,84,82,69,78,71,
84,72,0,112,97,114,
97,109,115,95,66,69,
65,77,95,77,73,78,
95,87,73,68,84,72,
0,112,97,114,97,109,
115,95,66,69,65,77,
95,77,65,88,95,87,
73,68,84,72,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
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
83,72,69,88,252,5,
0,0,80,0,0,0,
127,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,6,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,3,0,0,0,
50,0,0,13,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,63,0,0,0,0,
0,0,0,0,65,0,
0,5,82,0,16,0,
0,0,0,0,6,1,
16,0,0,0,0,0,
26,0,0,5,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,0,0,0,10,
82,0,16,0,0,0,
0,0,6,2,16,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,63,0,0,0,0,
14,0,0,8,82,0,
16,0,0,0,0,0,
6,2,16,0,0,0,
0,0,6,129,32,0,
1,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,134,0,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,10,130,0,16,0,
0,0,0,0,10,128,
32,128,65,0,0,0,
1,0,0,0,5,0,
0,0,26,128,32,0,
1,0,0,0,5,0,
0,0,50,0,0,10,
114,0,16,0,2,0,
0,0,70,2,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,5,0,0,0,
0,0,0,10,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
149,191,214,51,149,191,
214,51,149,191,214,51,
0,0,0,0,0,0,
0,8,130,0,16,0,
1,0,0,0,26,0,
16,128,65,0,0,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
14,32,0,7,114,0,
16,0,2,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,8,
130,0,16,0,1,0,
0,0,1,64,0,0,
0,0,32,193,58,128,
32,0,1,0,0,0,
4,0,0,0,56,0,
0,7,114,0,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,10,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,59,170,184,63,
59,170,184,63,59,170,
184,63,0,0,0,0,
25,0,0,5,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,56,0,0,7,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
14,0,0,11,34,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,26,128,32,0,
1,0,0,0,0,0,
0,0,54,0,0,5,
18,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,8,82,0,16,0,
0,0,0,0,6,2,
16,0,0,0,0,0,
6,1,16,128,65,0,
0,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,134,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,10,
210,0,16,0,0,0,
0,0,6,9,16,0,
2,0,0,0,246,15,
16,0,0,0,0,0,
6,128,32,0,1,0,
0,0,5,0,0,0,
0,0,0,10,210,0,
16,0,0,0,0,0,
6,14,16,0,0,0,
0,0,2,64,0,0,
149,191,214,51,0,0,
0,0,149,191,214,51,
149,191,214,51,14,32,
0,7,114,0,16,0,
0,0,0,0,86,5,
16,0,0,0,0,0,
134,3,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,56,0,
0,10,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
2,64,0,0,59,170,
184,63,59,170,184,63,
59,170,184,63,0,0,
0,0,25,0,0,5,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,50,32,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,56,0,
0,9,114,0,16,0,
1,0,0,0,246,143,
32,0,1,0,0,0,
3,0,0,0,70,130,
32,0,1,0,0,0,
4,0,0,0,56,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,56,0,0,8,
130,0,16,0,0,0,
0,0,10,16,16,0,
0,0,0,0,10,128,
32,0,1,0,0,0,
2,0,0,0,56,0,
0,7,18,0,16,0,
1,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,65,0,0,5,
18,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,10,130,0,16,0,
0,0,0,0,10,0,
16,128,65,0,0,0,
1,0,0,0,1,64,
0,0,0,0,0,64,
58,0,16,0,0,0,
0,0,65,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,15,114,0,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,154,153,
153,190,154,153,153,62,
154,153,153,190,0,0,
0,0,2,64,0,0,
0,0,0,0,154,153,
153,190,0,0,0,0,
0,0,0,0,50,0,
0,13,114,0,16,0,
1,0,0,0,166,138,
32,0,1,0,0,0,
3,0,0,0,70,2,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,56,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,0,1,0,0,0,
47,0,0,5,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,14,0,0,11,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,26,128,
32,0,1,0,0,0,
3,0,0,0,56,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
246,15,16,0,0,0,
0,0,25,0,0,5,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
62,0,0,1,83,84,
65,84,148,0,0,0,
45,0,0,0,3,0,
0,0,0,0,0,0,
2,0,0,0,40,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
4,0,0,0,0,0,
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
class CrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDef : public ShaderDef
{
public:
	CrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDef() : ShaderDef{}
	{
		Name = "crt-hyllian-pass1";
		VertexByteCode = RetroArchCrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersHyllianCrtHyllianMultipassCrtHyllianPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("OutputGamma", -1, 52, 4, 0.000000f, 5.000000f, 2.200000f));
		Params.push_back(ShaderParam("PHOSPHOR", -1, 56, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("COLOR_BOOST", -1, 60, 4, 1.000000f, 2.000000f, 1.500000f));
		Params.push_back(ShaderParam("RED_BOOST", -1, 64, 4, 1.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("GREEN_BOOST", -1, 68, 4, 1.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("BLUE_BOOST", -1, 72, 4, 1.000000f, 2.000000f, 1.000000f));
		Params.push_back(ShaderParam("SCANLINES_STRENGTH", -1, 76, 4, 0.000000f, 1.000000f, 0.720000f));
		Params.push_back(ShaderParam("BEAM_MIN_WIDTH", -1, 80, 4, 0.000000f, 1.000000f, 0.860000f));
		Params.push_back(ShaderParam("BEAM_MAX_WIDTH", -1, 84, 4, 0.000000f, 1.000000f, 1.000000f));
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
