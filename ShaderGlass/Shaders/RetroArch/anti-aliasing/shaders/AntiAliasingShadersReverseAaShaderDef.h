/*
ShaderGlass shader anti-aliasing-shaders\reverse-aa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/anti-aliasing/shaders/reverse-aa.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Reverse Antialiasing Shader

Adapted from the C source (see Copyright below) to shader
cg language by Hyllian/Jararaca - sergiogdb@gmail.com

This shader works best in 2x scale.



*
*  Copyright (c) 2012, Christoph Feck <christoph@maxiom.de>
*  All Rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*
*    * Redistributions of source code must retain the above copyright notice,
*      this list of conditions and the following disclaimer.
*
*    * Redistributions in binary form must reproduce the above copyright
*      notice, this list of conditions and the following disclaimer in the
*      documentation and/or other materials provided with the distribution.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS
*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
*  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
*  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
*  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
*  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
*  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
*  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
*  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
*  POSSIBILITY OF SUCH DAMAGE.
*


*/

#pragma once

namespace RetroArchAntiAliasingShadersReverseAaShaderDefs
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
68,88,66,67,225,45,
11,122,175,232,29,255,
225,3,179,192,168,23,
233,73,1,0,0,0,
24,11,0,0,5,0,
0,0,52,0,0,0,
68,2,0,0,120,2,
0,0,172,2,0,0,
124,10,0,0,82,68,
69,70,8,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
224,1,0,0,82,68,
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
0,0,3,0,0,0,
208,0,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,72,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,100,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
100,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
154,1,0,0,32,0,
0,0,4,0,0,0,
2,0,0,0,188,1,
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
0,0,0,0,90,1,
0,0,112,97,114,97,
109,115,95,79,117,116,
112,117,116,83,105,122,
101,0,112,97,114,97,
109,115,95,82,69,86,
69,82,83,69,65,65,
95,83,72,65,82,80,
78,69,83,83,0,102,
108,111,97,116,0,171,
0,0,3,0,1,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,181,1,0,0,
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
83,72,69,88,200,7,
0,0,80,0,0,0,
242,1,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,3,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,7,0,0,0,
56,0,0,8,242,0,
16,0,0,0,0,0,
70,20,16,0,0,0,
0,0,70,132,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
242,0,16,0,0,0,
0,0,70,14,16,0,
0,0,0,0,0,0,
0,10,242,0,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,191,0,0,0,191,
0,0,0,191,0,0,
0,191,50,0,0,11,
242,0,16,0,1,0,
0,0,70,14,16,128,
65,0,0,0,0,0,
0,0,230,142,32,0,
1,0,0,0,0,0,
0,0,70,20,16,0,
0,0,0,0,50,0,
0,13,242,0,16,0,
2,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,192,0,0,
0,0,0,0,128,191,
230,14,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,13,
242,0,16,0,4,0,
0,0,230,142,32,0,
1,0,0,0,0,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
128,63,0,0,0,0,
0,0,0,64,70,14,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,230,10,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
4,0,0,0,70,0,
16,0,4,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
5,0,0,0,56,0,
0,10,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,64,64,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,8,114,0,
16,0,4,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,128,
65,0,0,0,5,0,
0,0,0,0,0,7,
114,0,16,0,6,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
51,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,128,129,0,
0,0,2,0,0,0,
70,2,16,128,129,0,
0,0,4,0,0,0,
50,0,0,13,114,0,
16,0,3,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
0,0,224,64,0,0,
224,64,0,0,224,64,
0,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,56,0,
0,10,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,61,0,0,128,61,
0,0,128,61,0,0,
0,0,0,0,0,10,
114,0,16,0,4,0,
0,0,70,2,16,0,
5,0,0,0,2,64,
0,0,0,0,0,191,
0,0,0,191,0,0,
0,191,0,0,0,0,
0,0,0,11,114,0,
16,0,4,0,0,0,
70,2,16,128,193,0,
0,0,4,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,63,0,0,
0,0,51,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
56,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,6,128,32,0,
1,0,0,0,2,0,
0,0,52,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
3,0,0,0,51,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,7,
178,0,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,70,8,
16,0,2,0,0,0,
50,0,0,13,242,0,
16,0,2,0,0,0,
230,142,32,0,1,0,
0,0,0,0,0,0,
2,64,0,0,0,0,
0,192,0,0,0,0,
0,0,128,191,0,0,
0,0,230,14,16,0,
1,0,0,0,50,0,
0,13,242,0,16,0,
1,0,0,0,230,142,
32,0,1,0,0,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,0,0,0,0,
0,64,0,0,0,0,
230,14,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
230,10,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,3,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
5,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,6,0,0,0,
230,10,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,6,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
6,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
5,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
6,0,0,0,56,0,
0,10,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
64,64,0,0,64,64,
0,0,64,64,0,0,
0,0,0,0,0,7,
114,0,16,0,6,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
51,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,128,129,0,
0,0,1,0,0,0,
70,2,16,128,129,0,
0,0,2,0,0,0,
51,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,56,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
6,128,32,0,1,0,
0,0,2,0,0,0,
50,0,0,13,114,0,
16,0,2,0,0,0,
70,2,16,0,6,0,
0,0,2,64,0,0,
0,0,224,64,0,0,
224,64,0,0,224,64,
0,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,56,0,
0,10,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,61,0,0,128,61,
0,0,128,61,0,0,
0,0,52,0,0,8,
114,0,16,0,2,0,
0,0,70,2,16,128,
65,0,0,0,1,0,
0,0,70,2,16,0,
2,0,0,0,51,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,166,10,
16,0,0,0,0,0,
70,3,16,0,0,0,
0,0,50,32,0,12,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,2,64,
0,0,0,0,0,64,
0,0,0,64,0,0,
0,64,0,0,0,0,
70,2,16,0,5,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,52,0,
0,0,7,0,0,0,
0,0,0,0,2,0,
0,0,41,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
9,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0
};

}

namespace RetroArch
{
class AntiAliasingShadersReverseAaShaderDef : public ShaderDef
{
public:
	AntiAliasingShadersReverseAaShaderDef() : ShaderDef{}
	{
		Name = "reverse-aa";
		VertexByteCode = RetroArchAntiAliasingShadersReverseAaShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchAntiAliasingShadersReverseAaShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchAntiAliasingShadersReverseAaShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchAntiAliasingShadersReverseAaShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("REVERSEAA_SHARPNESS", -1, 32, 4, 0.000000f, 10.000000f, 2.000000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
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
