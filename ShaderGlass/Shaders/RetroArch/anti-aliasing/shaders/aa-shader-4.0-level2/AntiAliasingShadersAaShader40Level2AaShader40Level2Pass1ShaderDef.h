/*
ShaderGlass shader anti-aliasing-shaders-aa-shader-4.0-level2\aa-shader-4.0-level2-pass1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/anti-aliasing/shaders/aa-shader-4.0-level2/aa-shader-4.0-level2-pass1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Copyright (C) 2016 guest(r) - guest.r@gmail.com

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.


*/

#pragma once

namespace RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,206,147,
165,228,53,25,142,146,
137,145,5,48,134,122,
64,35,1,0,0,0,
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
8,0,128,63,8,0,
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
68,88,66,67,200,218,
111,173,185,21,81,192,
216,168,249,25,28,79,
117,109,1,0,0,0,
232,19,0,0,5,0,
0,0,52,0,0,0,
220,2,0,0,16,3,
0,0,68,3,0,0,
76,19,0,0,82,68,
69,70,160,2,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
120,2,0,0,82,68,
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
0,0,5,0,0,0,
208,0,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,152,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,180,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,216,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
180,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
236,1,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,180,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,254,1,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,24,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,60,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
84,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
112,97,114,97,109,115,
95,83,111,117,114,99,
101,83,105,122,101,0,
102,108,111,97,116,52,
0,171,171,171,1,0,
3,0,1,0,4,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
170,1,0,0,112,97,
114,97,109,115,95,79,
114,105,103,105,110,97,
108,83,105,122,101,0,
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
0,0,0,0,16,2,
0,0,112,97,114,97,
109,115,95,65,65,79,
70,70,83,69,84,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,76,2,
0,0,77,105,99,114,
111,115,111,102,116,32,
40,82,41,32,72,76,
83,76,32,83,104,97,
100,101,114,32,67,111,
109,112,105,108,101,114,
32,49,48,46,49,0,
73,83,71,78,44,0,
0,0,1,0,0,0,
8,0,0,0,32,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,3,0,0,84,69,
88,67,79,79,82,68,
0,171,171,171,79,83,
71,78,44,0,0,0,
1,0,0,0,8,0,
0,0,32,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,15,0,
0,0,83,86,95,84,
97,114,103,101,116,0,
171,171,83,72,69,88,
0,16,0,0,80,0,
0,0,0,4,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
1,0,0,0,4,0,
0,0,90,0,0,3,
0,96,16,0,2,0,
0,0,88,24,0,4,
0,112,16,0,2,0,
0,0,85,85,0,0,
98,16,0,3,50,16,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,10,0,
0,0,14,0,0,9,
50,0,16,0,0,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,50,0,0,12,
242,0,16,0,1,0,
0,0,70,4,16,0,
0,0,0,0,2,64,
0,0,0,0,128,192,
0,0,192,191,0,0,
128,64,0,0,192,191,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,230,10,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
54,0,0,6,194,0,
16,0,0,0,0,0,
86,1,16,128,65,0,
0,0,0,0,0,0,
0,0,0,7,50,0,
16,0,3,0,0,0,
118,15,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,0,0,
0,7,242,0,16,0,
4,0,0,0,134,4,
16,0,0,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,3,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,7,114,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,70,2,16,0,
3,0,0,0,16,0,
0,11,66,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
5,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,66,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
42,0,16,0,0,0,
0,0,56,0,0,7,
114,0,16,0,2,0,
0,0,166,10,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
50,0,0,12,242,0,
16,0,5,0,0,0,
70,4,16,0,0,0,
0,0,2,64,0,0,
0,0,128,64,0,0,
192,63,0,0,128,192,
0,0,192,63,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,70,0,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,230,10,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,50,0,16,0,
7,0,0,0,70,0,
16,128,65,0,0,0,
0,0,0,0,70,16,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,7,0,
0,0,70,0,16,0,
7,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,8,0,
0,0,70,2,16,128,
65,0,0,0,6,0,
0,0,70,2,16,0,
7,0,0,0,0,0,
0,7,114,0,16,0,
6,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,7,0,
0,0,16,0,0,11,
130,0,16,0,0,0,
0,0,70,2,16,128,
129,0,0,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,172,197,
39,55,14,0,0,10,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,2,0,0,0,
70,2,16,0,6,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,6,0,0,0,
230,10,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,0,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,8,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,0,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,6,0,
0,0,16,0,0,11,
130,0,16,0,0,0,
0,0,70,2,16,128,
129,0,0,0,8,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,172,197,
39,55,14,0,0,10,
130,0,16,0,0,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,0,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,70,2,
16,0,5,0,0,0,
0,0,0,7,114,0,
16,0,5,0,0,0,
70,2,16,0,4,0,
0,0,70,2,16,0,
5,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,0,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,42,0,
16,0,0,0,0,0,
56,0,0,10,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,14,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
166,10,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
16,0,0,11,66,0,
16,0,0,0,0,0,
70,2,16,128,129,0,
0,0,5,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,1,64,
0,0,172,197,39,55,
14,0,0,10,66,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,42,0,16,0,
0,0,0,0,56,0,
0,7,114,0,16,0,
1,0,0,0,166,10,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
5,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,0,0,
0,0,0,0,0,7,
114,0,16,0,5,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,4,0,0,0,
56,0,0,7,114,0,
16,0,5,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,8,114,0,16,0,
8,0,0,0,70,2,
16,128,65,0,0,0,
6,0,0,0,70,2,
16,0,7,0,0,0,
16,0,0,11,130,0,
16,0,1,0,0,0,
70,2,16,128,129,0,
0,0,8,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,172,197,39,55,
14,0,0,10,130,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
1,0,0,0,0,0,
0,7,114,0,16,0,
8,0,0,0,70,2,
16,0,6,0,0,0,
70,2,16,0,7,0,
0,0,50,0,0,9,
114,0,16,0,5,0,
0,0,70,2,16,0,
8,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
56,0,0,10,114,0,
16,0,5,0,0,0,
70,2,16,0,5,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,63,
0,0,0,0,14,0,
0,7,114,0,16,0,
5,0,0,0,70,2,
16,0,5,0,0,0,
246,15,16,0,0,0,
0,0,0,0,0,8,
114,0,16,0,8,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
5,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
8,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,130,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,0,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,0,
5,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
66,0,16,0,0,0,
0,0,42,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
50,0,0,12,242,0,
16,0,5,0,0,0,
70,4,16,0,0,0,
0,0,2,64,0,0,
0,0,192,191,0,0,
128,192,0,0,192,63,
0,0,128,192,70,20,
16,0,0,0,0,0,
50,0,0,12,242,0,
16,0,8,0,0,0,
70,4,16,0,0,0,
0,0,2,64,0,0,
0,0,192,63,0,0,
128,64,0,0,192,191,
0,0,128,64,70,20,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
178,0,16,0,0,0,
0,0,230,10,16,0,
5,0,0,0,70,123,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
5,0,0,0,70,0,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
9,0,0,0,70,3,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,3,0,0,0,
0,0,0,7,178,0,
16,0,0,0,0,0,
70,12,16,0,0,0,
0,0,70,8,16,0,
3,0,0,0,16,0,
0,11,130,0,16,0,
1,0,0,0,70,2,
16,128,129,0,0,0,
9,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,130,0,16,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,1,0,
0,0,56,0,0,7,
178,0,16,0,0,0,
0,0,70,12,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,0,16,0,
8,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
8,0,0,0,230,10,
16,0,8,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
9,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,70,2,
16,0,7,0,0,0,
0,0,0,7,114,0,
16,0,3,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
7,0,0,0,16,0,
0,11,130,0,16,0,
2,0,0,0,70,2,
16,128,129,0,0,0,
9,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
172,197,39,55,14,0,
0,10,130,0,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,128,63,
58,0,16,0,2,0,
0,0,50,0,0,9,
178,0,16,0,0,0,
0,0,70,8,16,0,
3,0,0,0,246,15,
16,0,2,0,0,0,
70,12,16,0,0,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,6,0,0,0,
70,2,16,0,5,0,
0,0,0,0,0,7,
114,0,16,0,5,0,
0,0,70,2,16,0,
6,0,0,0,70,2,
16,0,5,0,0,0,
16,0,0,11,130,0,
16,0,2,0,0,0,
70,2,16,128,129,0,
0,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,0,0,0,7,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,172,197,39,55,
14,0,0,10,130,0,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,58,0,16,0,
2,0,0,0,50,0,
0,9,178,0,16,0,
0,0,0,0,70,8,
16,0,5,0,0,0,
246,15,16,0,2,0,
0,0,70,12,16,0,
0,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,4,0,
0,0,70,2,16,0,
8,0,0,0,0,0,
0,7,114,0,16,0,
4,0,0,0,70,2,
16,0,4,0,0,0,
70,2,16,0,8,0,
0,0,16,0,0,11,
130,0,16,0,2,0,
0,0,70,2,16,128,
129,0,0,0,3,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,172,197,
39,55,14,0,0,10,
130,0,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,2,0,0,0,
50,0,0,9,178,0,
16,0,0,0,0,0,
70,8,16,0,4,0,
0,0,246,15,16,0,
2,0,0,0,70,12,
16,0,0,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,56,0,
0,10,178,0,16,0,
0,0,0,0,70,12,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,0,63,
0,0,0,0,0,0,
0,63,14,0,0,7,
178,0,16,0,0,0,
0,0,70,12,16,0,
0,0,0,0,246,15,
16,0,1,0,0,0,
0,0,0,8,114,0,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,2,0,0,0,
70,3,16,0,0,0,
0,0,16,0,0,11,
130,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,172,197,
39,55,14,0,0,10,
130,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,58,0,
16,0,1,0,0,0,
50,0,0,9,178,0,
16,0,0,0,0,0,
70,12,16,0,0,0,
0,0,246,15,16,0,
1,0,0,0,70,8,
16,0,1,0,0,0,
0,0,0,7,66,0,
16,0,0,0,0,0,
42,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,14,0,
0,7,114,32,16,0,
0,0,0,0,70,3,
16,0,0,0,0,0,
166,10,16,0,0,0,
0,0,54,0,0,5,
130,32,16,0,0,0,
0,0,1,64,0,0,
0,0,128,63,62,0,
0,1,83,84,65,84,
148,0,0,0,115,0,
0,0,10,0,0,0,
0,0,0,0,2,0,
0,0,100,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
13,0,0,0,0,0,
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

}

namespace RetroArch
{
class AntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDef : public ShaderDef
{
public:
	AntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDef() : ShaderDef{}
	{
		Name = "aa-shader-4.0-level2-pass1";
		VertexByteCode = RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchAntiAliasingShadersAaShader40Level2AaShader40Level2Pass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("AAOFFSET", -1, 52, 4, 0.250000f, 2.000000f, 1.000000f, 0.050000f, "AA offset first pass"));
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
