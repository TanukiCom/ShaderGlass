/*
ShaderGlass shader anti-aliasing-shaders\advanced-aa imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/anti-aliasing/shaders/advanced-aa.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


Copyright (C) 2006 guest(r) - guest.r@gmail.com

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


The AdvancedAA shader is well used to:
- AA 2xscaled gfx. to its 4x absolute size,
- AA hi-res "screens" (640x480) to their 2x size or,
- AA gfx. back to it's original size (looks nice above 640x480, set scaling to 1.0)


*/

#pragma once

namespace RetroArchAntiAliasingShadersAdvancedAaShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,164,42,
66,184,253,58,98,237,
56,165,116,188,86,177,
238,209,1,0,0,0,
252,7,0,0,5,0,
0,0,52,0,0,0,
108,3,0,0,184,3,
0,0,112,4,0,0,
96,7,0,0,82,68,
69,70,48,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
7,3,0,0,82,68,
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
0,0,6,0,0,0,
24,1,0,0,64,0,
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
235,0,0,0,8,2,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,36,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,72,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
36,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
92,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,36,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,110,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,136,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,172,2,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
204,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
240,2,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,204,2,
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
0,0,0,0,26,2,
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
0,0,128,2,0,0,
112,97,114,97,109,115,
95,65,65,95,82,69,
83,79,76,85,84,73,
79,78,95,88,0,102,
108,111,97,116,0,171,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,195,2,
0,0,112,97,114,97,
109,115,95,65,65,95,
82,69,83,79,76,85,
84,73,79,78,95,89,
0,77,105,99,114,111,
115,111,102,116,32,40,
82,41,32,72,76,83,
76,32,83,104,97,100,
101,114,32,67,111,109,
112,105,108,101,114,32,
49,48,46,49,0,171,
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
71,78,176,0,0,0,
6,0,0,0,8,0,
0,0,152,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,12,
0,0,152,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,15,0,
0,0,152,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,15,0,
0,0,152,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,152,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
4,0,0,0,15,0,
0,0,161,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
5,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
232,2,0,0,80,0,
1,0,186,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,242,32,
16,0,1,0,0,0,
101,0,0,3,242,32,
16,0,2,0,0,0,
101,0,0,3,242,32,
16,0,3,0,0,0,
101,0,0,3,242,32,
16,0,4,0,0,0,
103,0,0,4,242,32,
16,0,5,0,0,0,
1,0,0,0,104,0,
0,2,2,0,0,0,
54,0,0,5,50,32,
16,0,0,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,5,
66,0,16,0,0,0,
0,0,1,64,0,0,
0,0,0,0,24,0,
0,11,50,0,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
150,133,32,0,1,0,
0,0,3,0,0,0,
55,0,0,11,50,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,150,133,32,0,
1,0,0,0,3,0,
0,0,14,0,0,10,
50,0,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,70,0,
16,0,1,0,0,0,
56,0,0,10,50,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,2,64,0,0,
0,0,0,63,0,0,
0,63,0,0,0,0,
0,0,0,0,54,0,
0,6,50,0,16,0,
0,0,0,0,70,0,
16,128,65,0,0,0,
1,0,0,0,0,0,
0,7,242,32,16,0,
1,0,0,0,134,4,
16,0,0,0,0,0,
70,20,16,0,1,0,
0,0,50,0,0,12,
194,32,16,0,2,0,
0,0,6,4,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
128,191,0,0,128,63,
6,20,16,0,1,0,
0,0,54,0,0,5,
66,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,0,0,
0,7,50,32,16,0,
2,0,0,0,134,0,
16,0,1,0,0,0,
70,16,16,0,1,0,
0,0,54,0,0,6,
130,0,16,0,1,0,
0,0,26,0,16,128,
65,0,0,0,1,0,
0,0,0,0,0,7,
242,32,16,0,3,0,
0,0,230,12,16,0,
1,0,0,0,70,20,
16,0,1,0,0,0,
0,0,0,7,242,32,
16,0,4,0,0,0,
102,4,16,0,1,0,
0,0,70,20,16,0,
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
242,32,16,0,5,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
19,0,0,0,2,0,
0,0,0,0,0,0,
8,0,0,0,14,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
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
0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,85,37,
16,245,8,39,100,247,
206,107,93,145,130,103,
228,137,1,0,0,0,
96,9,0,0,5,0,
0,0,52,0,0,0,
248,0,0,0,140,1,
0,0,192,1,0,0,
196,8,0,0,82,68,
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
140,0,0,0,5,0,
0,0,8,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
128,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,15,15,0,0,
128,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,2,0,
0,0,15,15,0,0,
128,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,3,0,
0,0,15,15,0,0,
128,0,0,0,4,0,
0,0,0,0,0,0,
3,0,0,0,4,0,
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
69,88,252,6,0,0,
80,0,0,0,191,1,
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
4,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,6,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,0,0,
0,0,230,26,16,0,
3,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
1,0,0,0,230,26,
16,0,2,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
0,0,0,7,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,16,0,
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
23,183,209,56,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
230,26,16,0,1,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,2,0,
0,0,230,26,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,3,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,16,0,0,11,
18,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,18,0,16,0,
1,0,0,0,10,0,
16,0,1,0,0,0,
1,64,0,0,23,183,
209,56,56,0,0,7,
226,0,16,0,1,0,
0,0,246,15,16,0,
0,0,0,0,6,9,
16,0,3,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,10,0,16,0,
1,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,150,7,16,0,
1,0,0,0,56,0,
0,10,50,0,16,0,
1,0,0,0,246,15,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,63,0,0,32,64,
0,0,0,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
2,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
6,0,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,14,0,
0,7,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
86,5,16,0,1,0,
0,0,0,0,0,8,
114,0,16,0,1,0,
0,0,70,2,16,128,
65,0,0,0,2,0,
0,0,70,2,16,0,
0,0,0,0,16,0,
0,11,130,0,16,0,
0,0,0,0,70,2,
16,128,129,0,0,0,
1,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,0,0,0,0,
58,0,16,0,0,0,
0,0,1,64,0,0,
23,183,209,56,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,16,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,16,16,0,
4,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,0,0,0,8,
114,0,16,0,4,0,
0,0,70,2,16,0,
1,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,0,0,
0,7,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,16,0,0,11,
130,0,16,0,1,0,
0,0,70,2,16,128,
129,0,0,0,4,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
1,64,0,0,23,183,
209,56,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,16,
16,0,1,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
70,16,16,0,2,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,7,114,0,
16,0,5,0,0,0,
70,2,16,0,3,0,
0,0,70,2,16,0,
4,0,0,0,0,0,
0,8,114,0,16,0,
3,0,0,0,70,2,
16,0,3,0,0,0,
70,2,16,128,65,0,
0,0,4,0,0,0,
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
0,0,23,183,209,56,
56,0,0,7,114,0,
16,0,3,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
5,0,0,0,0,0,
0,7,130,0,16,0,
1,0,0,0,58,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,50,0,0,9,
114,0,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,246,15,
16,0,2,0,0,0,
70,2,16,0,3,0,
0,0,56,0,0,10,
50,0,16,0,3,0,
0,0,246,15,16,0,
1,0,0,0,2,64,
0,0,0,0,0,63,
0,0,32,64,0,0,
0,0,0,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,2,0,
0,0,6,0,16,0,
3,0,0,0,70,2,
16,0,1,0,0,0,
14,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,86,5,16,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
246,15,16,0,0,0,
0,0,70,2,16,0,
1,0,0,0,16,0,
0,11,130,0,16,0,
1,0,0,0,70,2,
16,128,129,0,0,0,
2,0,0,0,2,64,
0,0,0,0,128,63,
0,0,128,63,0,0,
128,63,0,0,0,0,
0,0,0,7,130,0,
16,0,1,0,0,0,
58,0,16,0,1,0,
0,0,1,64,0,0,
23,183,209,56,50,0,
0,9,114,0,16,0,
0,0,0,0,70,2,
16,0,0,0,0,0,
246,15,16,0,1,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,7,130,0,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
58,0,16,0,1,0,
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
0,0,49,0,0,0,
6,0,0,0,0,0,
0,0,6,0,0,0,
38,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,9,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
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
0,0,0,0,0,0,
0,0,0,0,0,0
};

}

namespace RetroArch
{
class AntiAliasingShadersAdvancedAaShaderDef : public ShaderDef
{
public:
	AntiAliasingShadersAdvancedAaShaderDef() : ShaderDef{}
	{
		Name = "advanced-aa";
		VertexByteCode = RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchAntiAliasingShadersAdvancedAaShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("AA_RESOLUTION_X", -1, 52, 4, 0.000000f, 1920.000000f, 0.000000f));
		Params.push_back(ShaderParam("AA_RESOLUTION_Y", -1, 56, 4, 0.000000f, 1920.000000f, 0.000000f));
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
