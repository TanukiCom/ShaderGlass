/*
ShaderGlass shader scalehq-shaders\4xScaleHQ imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/scalehq/shaders/4xScaleHQ.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


4xGLSLHqFilter shader

Copyright (C) 2005 guest(r) - guest.r@gmail.com

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

namespace RetroArchScalehqShaders4xScaleHQShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,207,239,
17,244,222,117,54,101,
235,236,211,69,126,228,
175,187,1,0,0,0,
212,7,0,0,5,0,
0,0,52,0,0,0,
28,2,0,0,104,2,
0,0,80,3,0,0,
56,7,0,0,82,68,
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
71,78,224,0,0,0,
8,0,0,0,8,0,
0,0,200,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,200,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,200,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,200,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,200,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,0,
0,0,200,0,0,0,
5,0,0,0,0,0,
0,0,3,0,0,0,
5,0,0,0,15,0,
0,0,200,0,0,0,
6,0,0,0,0,0,
0,0,3,0,0,0,
6,0,0,0,15,0,
0,0,209,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
7,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
224,3,0,0,80,0,
1,0,248,0,0,0,
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
242,32,16,0,1,0,
0,0,101,0,0,3,
242,32,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,3,0,
0,0,101,0,0,3,
242,32,16,0,4,0,
0,0,101,0,0,3,
242,32,16,0,5,0,
0,0,101,0,0,3,
242,32,16,0,6,0,
0,0,103,0,0,4,
242,32,16,0,7,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,50,0,
0,14,50,32,16,0,
1,0,0,0,230,138,
32,128,65,0,0,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,128,62,0,0,
128,62,0,0,0,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
54,0,0,5,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,56,0,0,8,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,63,58,128,
32,0,0,0,0,0,
6,0,0,0,0,0,
0,8,194,32,16,0,
1,0,0,0,166,14,
16,128,65,0,0,0,
0,0,0,0,6,20,
16,0,1,0,0,0,
0,0,0,7,194,32,
16,0,3,0,0,0,
166,14,16,0,0,0,
0,0,6,20,16,0,
1,0,0,0,50,0,
0,14,50,32,16,0,
2,0,0,0,230,138,
32,128,65,0,0,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,128,190,0,0,
128,62,0,0,0,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
56,0,0,8,66,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,63,42,128,32,0,
0,0,0,0,6,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,194,32,16,0,
2,0,0,0,166,14,
16,0,0,0,0,0,
6,20,16,0,1,0,
0,0,0,0,0,8,
194,32,16,0,4,0,
0,0,166,14,16,128,
65,0,0,0,0,0,
0,0,6,20,16,0,
1,0,0,0,50,0,
0,13,50,32,16,0,
3,0,0,0,230,138,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,128,62,
0,0,128,62,0,0,
0,0,0,0,0,0,
70,16,16,0,1,0,
0,0,50,0,0,13,
50,32,16,0,4,0,
0,0,230,138,32,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,128,190,0,0,
128,62,0,0,0,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
50,0,0,14,50,32,
16,0,5,0,0,0,
230,138,32,128,65,0,
0,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
70,16,16,0,1,0,
0,0,50,0,0,14,
194,32,16,0,5,0,
0,0,166,142,32,128,
65,0,0,0,0,0,
0,0,6,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,191,0,0,
0,63,6,20,16,0,
1,0,0,0,50,0,
0,13,50,32,16,0,
6,0,0,0,230,138,
32,0,0,0,0,0,
6,0,0,0,2,64,
0,0,0,0,0,63,
0,0,0,63,0,0,
0,0,0,0,0,0,
70,16,16,0,1,0,
0,0,50,0,0,13,
194,32,16,0,6,0,
0,0,166,142,32,0,
0,0,0,0,6,0,
0,0,2,64,0,0,
0,0,0,0,0,0,
0,0,0,0,0,191,
0,0,0,63,6,20,
16,0,1,0,0,0,
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
7,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,22,0,0,0,
1,0,0,0,0,0,
0,0,10,0,0,0,
18,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,226,129,
170,141,233,75,176,224,
3,99,45,219,93,174,
200,68,1,0,0,0,
12,18,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,188,1,
0,0,240,1,0,0,
112,17,0,0,82,68,
69,70,188,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
147,0,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
124,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,140,0,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,2,0,
0,0,1,0,0,0,
13,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,83,111,117,114,
99,101,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,73,83,71,78,
188,0,0,0,7,0,
0,0,8,0,0,0,
176,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
176,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
176,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,15,0,0,
176,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,15,0,0,
176,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
0,0,15,15,0,0,
176,0,0,0,5,0,
0,0,0,0,0,0,
3,0,0,0,5,0,
0,0,15,15,0,0,
176,0,0,0,6,0,
0,0,0,0,0,0,
3,0,0,0,6,0,
0,0,15,15,0,0,
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
69,88,120,15,0,0,
80,0,0,0,222,3,
0,0,106,8,0,1,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,242,16,16,0,
1,0,0,0,98,16,
0,3,242,16,16,0,
2,0,0,0,98,16,
0,3,242,16,16,0,
3,0,0,0,98,16,
0,3,242,16,16,0,
4,0,0,0,98,16,
0,3,242,16,16,0,
5,0,0,0,98,16,
0,3,242,16,16,0,
6,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,10,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,70,16,16,0,
5,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,230,26,
16,0,5,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,2,0,0,0,
70,16,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,16,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
4,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,16,0,
0,11,130,0,16,0,
1,0,0,0,70,2,
16,128,129,0,0,0,
5,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,5,0,
0,0,70,16,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,6,0,
0,0,70,2,16,128,
65,0,0,0,4,0,
0,0,70,2,16,0,
5,0,0,0,16,0,
0,11,130,0,16,0,
2,0,0,0,70,2,
16,128,129,0,0,0,
6,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
52,0,0,7,130,0,
16,0,3,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,51,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,6,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
4,0,0,0,16,0,
0,11,130,0,16,0,
3,0,0,0,70,2,
16,128,129,0,0,0,
6,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,6,0,
0,0,230,26,16,0,
6,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,7,0,
0,0,70,2,16,128,
65,0,0,0,4,0,
0,0,70,2,16,0,
6,0,0,0,16,0,
0,11,130,0,16,0,
4,0,0,0,70,2,
16,128,129,0,0,0,
7,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
14,0,0,7,130,0,
16,0,5,0,0,0,
58,0,16,0,4,0,
0,0,58,0,16,0,
3,0,0,0,56,0,
0,7,130,0,16,0,
5,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,5,0,
0,0,49,0,0,7,
130,0,16,0,6,0,
0,0,58,0,16,0,
4,0,0,0,58,0,
16,0,3,0,0,0,
55,0,0,9,130,0,
16,0,5,0,0,0,
58,0,16,0,6,0,
0,0,58,0,16,0,
5,0,0,0,58,0,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,246,15,16,0,
5,0,0,0,52,0,
0,7,130,0,16,0,
6,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,4,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
7,0,0,0,70,16,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,8,0,0,0,
70,16,16,0,4,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,9,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,128,
65,0,0,0,8,0,
0,0,16,0,0,11,
130,0,16,0,7,0,
0,0,70,2,16,128,
129,0,0,0,9,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,51,0,
0,7,130,0,16,0,
6,0,0,0,58,0,
16,0,6,0,0,0,
58,0,16,0,7,0,
0,0,14,0,0,7,
130,0,16,0,7,0,
0,0,58,0,16,0,
2,0,0,0,58,0,
16,0,1,0,0,0,
56,0,0,7,130,0,
16,0,7,0,0,0,
58,0,16,0,6,0,
0,0,58,0,16,0,
7,0,0,0,49,0,
0,7,130,0,16,0,
8,0,0,0,58,0,
16,0,2,0,0,0,
58,0,16,0,1,0,
0,0,55,0,0,9,
130,0,16,0,7,0,
0,0,58,0,16,0,
8,0,0,0,58,0,
16,0,7,0,0,0,
58,0,16,0,6,0,
0,0,50,0,0,9,
114,0,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,7,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
18,0,16,0,1,0,
0,0,58,0,16,0,
5,0,0,0,58,0,
16,0,7,0,0,0,
49,0,0,7,34,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,14,0,
0,7,66,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,56,0,0,7,
66,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,6,0,0,0,
55,0,0,9,34,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,42,0,16,0,
1,0,0,0,58,0,
16,0,6,0,0,0,
50,0,0,9,114,0,
16,0,0,0,0,0,
70,2,16,0,5,0,
0,0,86,5,16,0,
1,0,0,0,70,2,
16,0,0,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,10,0,16,0,
1,0,0,0,14,0,
0,7,34,0,16,0,
1,0,0,0,58,0,
16,0,3,0,0,0,
58,0,16,0,4,0,
0,0,49,0,0,7,
66,0,16,0,1,0,
0,0,58,0,16,0,
3,0,0,0,58,0,
16,0,4,0,0,0,
56,0,0,7,34,0,
16,0,1,0,0,0,
58,0,16,0,0,0,
0,0,26,0,16,0,
1,0,0,0,55,0,
0,9,130,0,16,0,
0,0,0,0,42,0,
16,0,1,0,0,0,
26,0,16,0,1,0,
0,0,58,0,16,0,
0,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,6,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
10,0,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,111,18,131,58,
50,0,0,12,114,0,
16,0,0,0,0,0,
70,2,16,0,4,0,
0,0,2,64,0,0,
111,18,131,58,111,18,
131,58,111,18,131,58,
0,0,0,0,70,2,
16,0,0,0,0,0,
14,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,246,15,16,0,
0,0,0,0,0,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,7,0,0,0,
0,0,0,7,114,0,
16,0,4,0,0,0,
70,2,16,0,7,0,
0,0,70,2,16,0,
8,0,0,0,0,0,
0,8,114,0,16,0,
5,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,8,0,0,0,
0,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,128,129,0,
0,0,1,0,0,0,
70,2,16,128,129,0,
0,0,5,0,0,0,
16,0,0,10,130,0,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,205,204,
140,191,16,0,0,10,
18,0,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
50,0,0,9,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,62,1,64,
0,0,195,245,168,62,
14,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,52,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,1,64,
0,0,143,194,245,60,
51,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
0,0,64,63,56,0,
0,7,114,0,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
2,0,0,0,0,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
3,0,0,0,0,0,
0,9,114,0,16,0,
3,0,0,0,70,2,
16,128,129,0,0,0,
3,0,0,0,70,2,
16,128,129,0,0,0,
4,0,0,0,16,0,
0,10,130,0,16,0,
1,0,0,0,70,2,
16,0,3,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,56,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,205,204,140,191,
16,0,0,10,130,0,
16,0,2,0,0,0,
70,2,16,0,2,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,50,0,
0,9,130,0,16,0,
2,0,0,0,58,0,
16,0,2,0,0,0,
1,64,0,0,0,0,
0,62,1,64,0,0,
195,245,168,62,14,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,0,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,128,63,
52,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
143,194,245,60,51,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
64,63,50,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,0,
2,0,0,0,246,15,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,0,0,0,7,
130,0,16,0,0,0,
0,0,58,0,16,0,
0,0,0,0,58,0,
16,0,1,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,230,26,16,0,
1,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
230,26,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,5,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,7,
114,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,0,4,0,0,0,
0,0,0,9,114,0,
16,0,3,0,0,0,
70,2,16,128,129,0,
0,0,3,0,0,0,
70,2,16,128,129,0,
0,0,5,0,0,0,
16,0,0,10,130,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,56,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,205,204,
140,191,16,0,0,10,
130,0,16,0,2,0,
0,0,70,2,16,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
50,0,0,9,130,0,
16,0,2,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,62,1,64,
0,0,195,245,168,62,
14,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,58,0,16,0,
2,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,0,0,
128,63,52,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,143,194,245,60,
51,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,64,63,50,0,
0,9,114,0,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,230,26,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,4,0,
0,0,230,26,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,5,0,
0,0,70,2,16,128,
65,0,0,0,0,0,
0,0,70,2,16,0,
4,0,0,0,0,0,
0,7,114,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,0,4,0,
0,0,0,0,0,9,
114,0,16,0,3,0,
0,0,70,2,16,128,
129,0,0,0,3,0,
0,0,70,2,16,128,
129,0,0,0,5,0,
0,0,16,0,0,10,
130,0,16,0,1,0,
0,0,70,2,16,0,
3,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
56,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
205,204,140,191,16,0,
0,10,130,0,16,0,
2,0,0,0,70,2,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
0,0,50,0,0,9,
130,0,16,0,2,0,
0,0,58,0,16,0,
2,0,0,0,1,64,
0,0,0,0,0,62,
1,64,0,0,195,245,
168,62,14,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,58,0,
16,0,2,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,52,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,143,194,
245,60,51,0,0,7,
130,0,16,0,1,0,
0,0,58,0,16,0,
1,0,0,0,1,64,
0,0,0,0,64,63,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,246,15,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,58,0,16,0,
1,0,0,0,50,0,
0,9,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,64,1,64,0,0,
0,0,128,63,0,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,14,0,0,7,
114,32,16,0,0,0,
0,0,70,2,16,0,
0,0,0,0,246,15,
16,0,0,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,115,0,0,0,
10,0,0,0,0,0,
0,0,8,0,0,0,
96,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,13,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,4,0,
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
0,0,0,0,0,0
};

}

namespace RetroArch
{
class ScalehqShaders4xScaleHQShaderDef : public ShaderDef
{
public:
	ScalehqShaders4xScaleHQShaderDef() : ShaderDef{}
	{
		Name = "4xScaleHQ";
		VertexByteCode = RetroArchScalehqShaders4xScaleHQShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchScalehqShaders4xScaleHQShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchScalehqShaders4xScaleHQShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchScalehqShaders4xScaleHQShaderDefs::sFragmentByteCode);
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
