/*
ShaderGlass shader handheld-shaders-lcd-shader\lcd-pass-3 imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/handheld/shaders/lcd-shader/lcd-pass-3.slang
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
values related to color blending on the darkened vertical lines of the output image
contribution of LCD colors to the blended output, higher values apply more color - [0.0, 0.5]
contribution of the original input colors to the blended output, higher values apply more color - [0.0, 0.5]
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
vertex shader                                                                                                                           //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fragment definitions                                                                                                                    //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ANY CHANGE TO THIS SHOULD BE REPEATED IN lcd_pass_0 SO IT CAN PROPERLY SET THE ALPHA VALUES
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fragment functions                                                                                                                      //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
a simple blur technique that softens harsh color transitions and applies the results to fragmetns that lie on the darkened vertical lines of the image
specialized to sample from the original input as well as the LCD overlay and allow mixing between the results
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
fragment shader                                                                                                                         //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
clamp the blur coords to the input texture size so it doesn't attempt to sample off the texture (it'll retrieve vec4(0.,0.,0.,0.) and darken the edges otherwise)
sample adjacent texels based on the coordinates above
sum the differences between neighboring texels and apply modifiers
subtract the values calculated above from the input color
return new value
sample input texture
determine if the current fragment is located on the darkened vertical lines
apply simple_blur to line fragments, otherwise keep out_color equal to the input value

*/

#pragma once

namespace RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,111,250,
146,205,106,194,155,157,
41,46,54,148,246,59,
96,106,1,0,0,0,
72,7,0,0,5,0,
0,0,52,0,0,0,
108,3,0,0,184,3,
0,0,112,4,0,0,
172,6,0,0,82,68,
69,70,48,3,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
5,3,0,0,82,68,
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
2,0,0,0,36,2,
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
0,0,0,0,0,0,
200,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
236,2,0,0,56,0,
0,0,4,0,0,0,
0,0,0,0,200,2,
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
95,76,67,68,95,98,
108,101,110,100,105,110,
103,0,102,108,111,97,
116,0,171,171,0,0,
3,0,1,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
192,2,0,0,112,97,
114,97,109,115,95,111,
114,105,103,105,110,97,
108,95,98,108,101,110,
100,105,110,103,0,77,
105,99,114,111,115,111,
102,116,32,40,82,41,
32,72,76,83,76,32,
83,104,97,100,101,114,
32,67,111,109,112,105,
108,101,114,32,49,48,
46,49,0,171,171,171,
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
0,0,0,0,12,3,
0,0,152,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,12,
0,0,152,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,12,3,
0,0,152,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,3,12,
0,0,161,0,0,0,
0,0,0,0,1,0,
0,0,3,0,0,0,
3,0,0,0,15,0,
0,0,84,69,88,67,
79,79,82,68,0,83,
86,95,80,111,115,105,
116,105,111,110,0,171,
171,171,83,72,69,88,
52,2,0,0,80,0,
1,0,141,0,0,0,
106,8,0,1,89,0,
0,4,70,142,32,0,
0,0,0,0,4,0,
0,0,89,0,0,4,
70,142,32,0,1,0,
0,0,3,0,0,0,
95,0,0,3,242,16,
16,0,0,0,0,0,
95,0,0,3,50,16,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,0,0,0,0,
101,0,0,3,194,32,
16,0,0,0,0,0,
101,0,0,3,50,32,
16,0,1,0,0,0,
101,0,0,3,194,32,
16,0,1,0,0,0,
101,0,0,3,50,32,
16,0,2,0,0,0,
103,0,0,4,242,32,
16,0,3,0,0,0,
1,0,0,0,104,0,
0,2,1,0,0,0,
54,0,0,6,18,0,
16,0,0,0,0,0,
58,128,32,0,1,0,
0,0,0,0,0,0,
0,0,0,7,130,32,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,26,16,16,0,
1,0,0,0,54,0,
0,5,114,32,16,0,
0,0,0,0,70,16,
16,0,1,0,0,0,
54,0,0,5,18,0,
16,0,0,0,0,0,
1,64,0,0,0,0,
0,0,54,0,0,7,
34,0,16,0,0,0,
0,0,58,128,32,128,
65,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,7,50,32,
16,0,1,0,0,0,
70,0,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,54,0,
0,8,194,32,16,0,
1,0,0,0,2,64,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,11,50,0,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,192,0,0,0,192,
0,0,0,0,0,0,
0,0,70,128,32,0,
1,0,0,0,2,0,
0,0,56,0,0,8,
50,32,16,0,2,0,
0,0,70,0,16,0,
0,0,0,0,230,138,
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
242,32,16,0,3,0,
0,0,246,31,16,0,
0,0,0,0,70,142,
32,0,0,0,0,0,
3,0,0,0,70,14,
16,0,0,0,0,0,
62,0,0,1,83,84,
65,84,148,0,0,0,
14,0,0,0,1,0,
0,0,0,0,0,0,
8,0,0,0,9,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,4,0,
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
68,88,66,67,45,192,
137,244,240,241,130,56,
170,73,225,100,225,221,
84,224,1,0,0,0,
204,8,0,0,5,0,
0,0,52,0,0,0,
124,3,0,0,16,4,
0,0,68,4,0,0,
48,8,0,0,82,68,
69,70,64,3,0,0,
1,0,0,0,16,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
21,3,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
220,0,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,236,0,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,251,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
2,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,8,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,80,65,83,
83,49,95,115,97,109,
112,108,101,114,0,83,
111,117,114,99,101,0,
80,65,83,83,49,0,
80,117,115,104,0,171,
171,171,8,1,0,0,
6,0,0,0,40,1,
0,0,64,0,0,0,
0,0,0,0,0,0,
0,0,24,2,0,0,
0,0,0,0,16,0,
0,0,0,0,0,0,
52,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
88,2,0,0,16,0,
0,0,16,0,0,0,
0,0,0,0,52,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,108,2,
0,0,32,0,0,0,
16,0,0,0,0,0,
0,0,52,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,126,2,0,0,
48,0,0,0,4,0,
0,0,0,0,0,0,
152,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
188,2,0,0,52,0,
0,0,4,0,0,0,
2,0,0,0,216,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,252,2,
0,0,56,0,0,0,
4,0,0,0,2,0,
0,0,216,2,0,0,
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
0,0,42,2,0,0,
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
144,2,0,0,112,97,
114,97,109,115,95,76,
67,68,95,98,108,101,
110,100,105,110,103,0,
102,108,111,97,116,0,
171,171,0,0,3,0,
1,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,208,2,
0,0,112,97,114,97,
109,115,95,111,114,105,
103,105,110,97,108,95,
98,108,101,110,100,105,
110,103,0,77,105,99,
114,111,115,111,102,116,
32,40,82,41,32,72,
76,83,76,32,83,104,
97,100,101,114,32,67,
111,109,112,105,108,101,
114,32,49,48,46,49,
0,171,171,171,73,83,
71,78,140,0,0,0,
5,0,0,0,8,0,
0,0,128,0,0,0,
0,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,3,3,
0,0,128,0,0,0,
1,0,0,0,0,0,
0,0,3,0,0,0,
0,0,0,0,12,12,
0,0,128,0,0,0,
2,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,3,3,
0,0,128,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
1,0,0,0,12,12,
0,0,128,0,0,0,
4,0,0,0,0,0,
0,0,3,0,0,0,
2,0,0,0,3,3,
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
83,72,69,88,228,3,
0,0,80,0,0,0,
249,0,0,0,106,8,
0,1,89,0,0,4,
70,142,32,0,1,0,
0,0,4,0,0,0,
90,0,0,3,0,96,
16,0,2,0,0,0,
90,0,0,3,0,96,
16,0,3,0,0,0,
88,24,0,4,0,112,
16,0,2,0,0,0,
85,85,0,0,88,24,
0,4,0,112,16,0,
3,0,0,0,85,85,
0,0,98,16,0,3,
50,16,16,0,0,0,
0,0,98,16,0,3,
194,16,16,0,0,0,
0,0,98,16,0,3,
50,16,16,0,1,0,
0,0,98,16,0,3,
194,16,16,0,1,0,
0,0,98,16,0,3,
50,16,16,0,2,0,
0,0,101,0,0,3,
242,32,16,0,0,0,
0,0,104,0,0,2,
5,0,0,0,52,0,
0,7,50,0,16,0,
0,0,0,0,230,26,
16,0,0,0,0,0,
230,26,16,0,1,0,
0,0,51,0,0,7,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,16,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,1,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,242,0,
16,0,2,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
0,0,0,8,114,0,
16,0,1,0,0,0,
70,2,16,128,65,0,
0,0,1,0,0,0,
70,2,16,0,2,0,
0,0,52,0,0,7,
50,0,16,0,3,0,
0,0,230,26,16,0,
1,0,0,0,70,16,
16,0,1,0,0,0,
51,0,0,7,50,0,
16,0,3,0,0,0,
70,0,16,0,3,0,
0,0,70,16,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,4,0,0,0,
70,0,16,0,3,0,
0,0,70,126,16,0,
2,0,0,0,0,96,
16,0,2,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
114,0,16,0,3,0,
0,0,70,0,16,0,
3,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,0,0,0,8,
114,0,16,0,3,0,
0,0,70,2,16,0,
2,0,0,0,70,2,
16,128,65,0,0,0,
3,0,0,0,0,0,
0,8,114,0,16,0,
4,0,0,0,70,2,
16,0,2,0,0,0,
70,2,16,128,65,0,
0,0,4,0,0,0,
0,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,70,2,16,0,
4,0,0,0,56,0,
0,8,114,0,16,0,
1,0,0,0,70,2,
16,0,1,0,0,0,
86,133,32,0,1,0,
0,0,3,0,0,0,
0,0,0,8,114,0,
16,0,0,0,0,0,
70,2,16,128,65,0,
0,0,0,0,0,0,
70,2,16,0,2,0,
0,0,0,0,0,7,
114,0,16,0,0,0,
0,0,70,2,16,0,
3,0,0,0,70,2,
16,0,0,0,0,0,
50,0,0,10,114,0,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,166,138,32,0,
1,0,0,0,3,0,
0,0,70,2,16,0,
1,0,0,0,0,0,
0,8,114,0,16,0,
0,0,0,0,70,2,
16,128,65,0,0,0,
0,0,0,0,70,2,
16,0,2,0,0,0,
0,0,0,7,18,0,
16,0,1,0,0,0,
58,0,16,0,2,0,
0,0,1,64,0,0,
0,0,0,191,49,0,
0,8,18,0,16,0,
1,0,0,0,10,0,
16,128,129,0,0,0,
1,0,0,0,1,64,
0,0,205,204,204,61,
55,0,0,9,34,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,0,0,1,64,
0,0,0,0,128,63,
1,0,0,7,18,0,
16,0,1,0,0,0,
10,0,16,0,1,0,
0,0,1,64,0,0,
0,0,128,63,56,0,
0,7,242,0,16,0,
3,0,0,0,86,5,
16,0,1,0,0,0,
70,14,16,0,2,0,
0,0,54,0,0,5,
130,0,16,0,0,0,
0,0,58,0,16,0,
2,0,0,0,50,0,
0,9,242,32,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
6,0,16,0,1,0,
0,0,70,14,16,0,
3,0,0,0,62,0,
0,1,83,84,65,84,
148,0,0,0,26,0,
0,0,5,0,0,0,
0,0,0,0,6,0,
0,0,17,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
5,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
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
0,0
};

}

namespace RetroArch
{
class HandheldShadersLcdShaderLcdPass3ShaderDef : public ShaderDef
{
public:
	HandheldShadersLcdShaderLcdPass3ShaderDef() : ShaderDef{}
	{
		Name = "lcd-pass-3";
		VertexByteCode = RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHandheldShadersLcdShaderLcdPass3ShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("LCD_blending", -1, 52, 4, 0.000000f, 0.500000f, 0.200000f));
		Params.push_back(ShaderParam("original_blending", -1, 56, 4, 0.000000f, 0.500000f, 0.200000f));
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("PASS1", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}
