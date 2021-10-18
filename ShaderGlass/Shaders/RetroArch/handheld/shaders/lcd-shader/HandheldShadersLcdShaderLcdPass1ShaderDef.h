/*
ShaderGlass shader handheld-shaders-lcd-shader\lcd-pass-1 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/shaders/lcd-shader/lcd-pass-1.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

/////////////////////////////////////////////////////////////////////////
                                                                       //
 LCD Shader v0.0.1                                                     //
                                                                       //
 Copyright (C) 2013 Harlequin : unknown92835@gmail.com                 //
                                                                       //
 This program is free software: you can redistribute it and/or modify  //
 it under the terms of the GNU General Public License as published by  //
 the Free Software Foundation, either version 3 of the License, or     //
 (at your option) any later version.                                   //
                                                                       //
 This program is distributed in the hope that it will be useful,       //
 but WITHOUT ANY WARRANTY; without even the implied warranty of        //
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
 GNU General Public License for more details.                          //
                                                                       //
 You should have received a copy of the GNU General Public License     //
 along with this program.  If not, see <http://www.gnu.org/licenses/>. //
                                                                       //
/////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
config                                                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vertex shader                                                                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fragment definitions                                                                                                                    //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define triad_color_0 vec3(0.0, 0.0, 1.0)	//blue
#define triad_color_1 vec3(1.0, 0.0, 0.0)	//red
#define triad_color_2 vec3(0.0, 1.0, 0.0)	//green
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fragment shader                                                                                                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
use modulo to deterimine the current subcell location and apply proper color
use color darkening with input texture to determine the final color of the subpixel
color darkening: the minimum value for each color component between the LCD cell and the input image is selected
ex. LCD cell subpixel is magenta (1.0, 1.0, 0.0) and the current video texel is red (1.0, 0.0, 0.0)...
...the result will be the minimum of each component: result.rgb = min(1.0, 1.0), min(1.0, 0.0), min(0.0, 0.0) = (1.0, 0.0, 0.0) = red

*/

#pragma once

namespace RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,82,112,
83,107,83,130,245,35,
172,122,164,35,179,5,
219,3,1,0,0,0,
116,8,0,0,5,0,
0,0,52,0,0,0,
92,5,0,0,168,5,
0,0,72,6,0,0,
216,7,0,0,82,68,
69,70,32,5,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
247,4,0,0,82,68,
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
0,0,14,0,0,0,
24,1,0,0,96,0,
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
235,0,0,0,72,3,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,100,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,136,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
100,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
156,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,100,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,174,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,200,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,236,3,0,0,
52,0,0,0,4,0,
0,0,0,0,0,0,
4,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
40,4,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,4,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,63,4,
0,0,60,0,0,0,
4,0,0,0,0,0,
0,0,4,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,86,4,0,0,
64,0,0,0,4,0,
0,0,0,0,0,0,
4,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
109,4,0,0,68,0,
0,0,4,0,0,0,
0,0,0,0,4,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,132,4,
0,0,72,0,0,0,
4,0,0,0,0,0,
0,0,4,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,155,4,0,0,
76,0,0,0,4,0,
0,0,0,0,0,0,
4,4,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
178,4,0,0,80,0,
0,0,4,0,0,0,
0,0,0,0,4,4,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,201,4,
0,0,84,0,0,0,
4,0,0,0,0,0,
0,0,4,4,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,224,4,0,0,
88,0,0,0,4,0,
0,0,0,0,0,0,
4,4,0,0,0,0,
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
90,3,0,0,112,97,
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
0,0,0,0,192,3,
0,0,112,97,114,97,
109,115,95,99,101,108,
108,95,115,99,97,108,
101,0,102,108,111,97,
116,0,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,254,3,
0,0,112,97,114,97,
109,115,95,116,114,105,
97,100,95,99,111,108,
111,114,95,48,95,114,
0,112,97,114,97,109,
115,95,116,114,105,97,
100,95,99,111,108,111,
114,95,48,95,103,0,
112,97,114,97,109,115,
95,116,114,105,97,100,
95,99,111,108,111,114,
95,48,95,98,0,112,
97,114,97,109,115,95,
116,114,105,97,100,95,
99,111,108,111,114,95,
49,95,114,0,112,97,
114,97,109,115,95,116,
114,105,97,100,95,99,
111,108,111,114,95,49,
95,103,0,112,97,114,
97,109,115,95,116,114,
105,97,100,95,99,111,
108,111,114,95,49,95,
98,0,112,97,114,97,
109,115,95,116,114,105,
97,100,95,99,111,108,
111,114,95,50,95,114,
0,112,97,114,97,109,
115,95,116,114,105,97,
100,95,99,111,108,111,
114,95,50,95,103,0,
112,97,114,97,109,115,
95,116,114,105,97,100,
95,99,111,108,111,114,
95,50,95,98,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
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
152,0,0,0,5,0,
0,0,8,0,0,0,
128,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,12,0,0,
128,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,4,11,0,0,
128,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,8,7,0,0,
128,0,0,0,3,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,1,14,0,0,
137,0,0,0,0,0,
0,0,1,0,0,0,
3,0,0,0,2,0,
0,0,15,0,0,0,
84,69,88,67,79,79,
82,68,0,83,86,95,
80,111,115,105,116,105,
111,110,0,171,171,171,
83,72,69,88,136,1,
0,0,80,0,1,0,
98,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,0,0,
0,0,4,0,0,0,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,95,0,
0,3,242,16,16,0,
0,0,0,0,95,0,
0,3,50,16,16,0,
1,0,0,0,101,0,
0,3,50,32,16,0,
0,0,0,0,101,0,
0,3,66,32,16,0,
0,0,0,0,101,0,
0,3,130,32,16,0,
0,0,0,0,101,0,
0,3,18,32,16,0,
1,0,0,0,103,0,
0,4,242,32,16,0,
2,0,0,0,1,0,
0,0,104,0,0,2,
1,0,0,0,54,0,
0,5,50,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
56,0,0,11,194,32,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,128,63,0,0,
0,64,166,138,32,0,
1,0,0,0,0,0,
0,0,56,0,0,8,
18,32,16,0,1,0,
0,0,1,64,0,0,
0,0,64,64,42,128,
32,0,1,0,0,0,
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
8,0,0,0,1,0,
0,0,0,0,0,0,
7,0,0,0,6,0,
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
68,88,66,67,214,2,
161,180,214,62,218,55,
159,79,18,19,132,222,
132,247,1,0,0,0,
116,8,0,0,5,0,
0,0,52,0,0,0,
20,5,0,0,144,5,
0,0,196,5,0,0,
216,7,0,0,82,68,
69,70,216,4,0,0,
1,0,0,0,184,0,
0,0,3,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
175,4,0,0,82,68,
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
0,0,14,0,0,0,
208,0,0,0,96,0,
0,0,0,0,0,0,
0,0,0,0,0,3,
0,0,0,0,0,0,
16,0,0,0,0,0,
0,0,28,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,64,3,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
28,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
84,3,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,28,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,102,3,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,128,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,164,3,0,0,
52,0,0,0,4,0,
0,0,2,0,0,0,
188,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
224,3,0,0,56,0,
0,0,4,0,0,0,
2,0,0,0,188,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,247,3,
0,0,60,0,0,0,
4,0,0,0,2,0,
0,0,188,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,14,4,0,0,
64,0,0,0,4,0,
0,0,2,0,0,0,
188,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
37,4,0,0,68,0,
0,0,4,0,0,0,
2,0,0,0,188,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,60,4,
0,0,72,0,0,0,
4,0,0,0,2,0,
0,0,188,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,83,4,0,0,
76,0,0,0,4,0,
0,0,2,0,0,0,
188,3,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
106,4,0,0,80,0,
0,0,4,0,0,0,
2,0,0,0,188,3,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,129,4,
0,0,84,0,0,0,
4,0,0,0,2,0,
0,0,188,3,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,152,4,0,0,
88,0,0,0,4,0,
0,0,2,0,0,0,
188,3,0,0,0,0,
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
18,3,0,0,112,97,
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
0,0,0,0,120,3,
0,0,112,97,114,97,
109,115,95,99,101,108,
108,95,115,99,97,108,
101,0,102,108,111,97,
116,0,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,182,3,
0,0,112,97,114,97,
109,115,95,116,114,105,
97,100,95,99,111,108,
111,114,95,48,95,114,
0,112,97,114,97,109,
115,95,116,114,105,97,
100,95,99,111,108,111,
114,95,48,95,103,0,
112,97,114,97,109,115,
95,116,114,105,97,100,
95,99,111,108,111,114,
95,48,95,98,0,112,
97,114,97,109,115,95,
116,114,105,97,100,95,
99,111,108,111,114,95,
49,95,114,0,112,97,
114,97,109,115,95,116,
114,105,97,100,95,99,
111,108,111,114,95,49,
95,103,0,112,97,114,
97,109,115,95,116,114,
105,97,100,95,99,111,
108,111,114,95,49,95,
98,0,112,97,114,97,
109,115,95,116,114,105,
97,100,95,99,111,108,
111,114,95,50,95,114,
0,112,97,114,97,109,
115,95,116,114,105,97,
100,95,99,111,108,111,
114,95,50,95,103,0,
112,97,114,97,109,115,
95,116,114,105,97,100,
95,99,111,108,111,114,
95,50,95,98,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,73,83,
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
83,72,69,88,12,2,
0,0,80,0,0,0,
131,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,6,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,98,16,
0,3,66,16,16,0,
0,0,0,0,98,16,
0,3,130,16,16,0,
0,0,0,0,98,16,
0,3,18,16,16,0,
1,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,2,0,0,0,
56,0,0,8,18,0,
16,0,0,0,0,0,
10,16,16,0,1,0,
0,0,26,128,32,0,
1,0,0,0,3,0,
0,0,14,0,0,7,
34,0,16,0,0,0,
0,0,10,16,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
65,0,0,5,34,0,
16,0,0,0,0,0,
26,0,16,0,0,0,
0,0,50,0,0,10,
18,0,16,0,0,0,
0,0,10,0,16,128,
65,0,0,0,0,0,
0,0,26,0,16,0,
0,0,0,0,10,16,
16,0,0,0,0,0,
56,0,0,8,98,0,
16,0,0,0,0,0,
166,27,16,0,0,0,
0,0,86,133,32,0,
1,0,0,0,3,0,
0,0,49,0,0,7,
50,0,16,0,0,0,
0,0,6,0,16,0,
0,0,0,0,150,5,
16,0,0,0,0,0,
55,0,0,11,226,0,
16,0,0,0,0,0,
86,5,16,0,0,0,
0,0,86,142,32,0,
1,0,0,0,4,0,
0,0,6,137,32,0,
1,0,0,0,5,0,
0,0,55,0,0,10,
50,0,16,0,1,0,
0,0,6,0,16,0,
0,0,0,0,230,138,
32,0,1,0,0,0,
3,0,0,0,150,5,
16,0,0,0,0,0,
55,0,0,10,66,0,
16,0,1,0,0,0,
10,0,16,0,0,0,
0,0,10,128,32,0,
1,0,0,0,4,0,
0,0,58,0,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
51,0,0,7,114,32,
16,0,0,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
0,0,0,0,54,0,
0,5,130,32,16,0,
0,0,0,0,58,0,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
13,0,0,0,2,0,
0,0,0,0,0,0,
5,0,0,0,7,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
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

}

namespace RetroArch
{
class HandheldShadersLcdShaderLcdPass1ShaderDef : public ShaderDef
{
public:
	HandheldShadersLcdShaderLcdPass1ShaderDef() : ShaderDef{}
	{
		Name = "lcd-pass-1";
		VertexByteCode = RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHandheldShadersLcdShaderLcdPass1ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("cell_scale", -1, 52, 4, 1.000000f, 5.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_0_r", -1, 56, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_0_g", -1, 60, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("triad_color_0_b", -1, 64, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_1_r", -1, 68, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_1_g", -1, 72, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_1_b", -1, 76, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("triad_color_2_r", -1, 80, 4, 0.000000f, 1.000000f, 0.000000f));
		Params.push_back(ShaderParam("triad_color_2_g", -1, 84, 4, 0.000000f, 1.000000f, 1.000000f));
		Params.push_back(ShaderParam("triad_color_2_b", -1, 88, 4, 0.000000f, 1.000000f, 1.000000f));
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
