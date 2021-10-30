/*
ShaderGlass shader crt-shaders-crt-potato-shader-files\crt-potato imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/master/crt/shaders/crt-potato/shader-files/crt-potato.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.

///////////////////////////////////////////////////////////////////////////
//                                                                       //
// Copyright (C) 2017 - Brad Parker                                      //
//                                                                       //
// This program is free software: you can redistribute it and/or modify  //
// it under the terms of the GNU General Public License as published by  //
// the Free Software Foundation, either version 3 of the License, or     //
// (at your option) any later version.                                   //
//                                                                       //
// This program is distributed in the hope that it will be useful,       //
// but WITHOUT ANY WARRANTY; without even the implied warranty of        //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         //
// GNU General Public License for more details.                          //
//                                                                       //
// You should have received a copy of the GNU General Public License     //
// along with this program.  If not, see <http://www.gnu.org/licenses/>. //
//                                                                       //
///////////////////////////////////////////////////////////////////////////
// Largest integer scale of input video that will fit in the current output (y axis would typically be limiting on widescreens)
// Size of the scaled video
//#define scaled_video_out    (params.SourceSize.xy * vec2(video_scale))
//it's... half a pixel

*/

#pragma once

namespace RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs
{
static const BYTE sVertexByteCode[] =
{
68,88,66,67,195,234,
3,192,76,38,23,138,
34,236,131,131,6,187,
211,193,1,0,0,0,
0,6,0,0,5,0,
0,0,52,0,0,0,
192,2,0,0,12,3,
0,0,148,3,0,0,
100,5,0,0,82,68,
69,70,132,2,0,0,
2,0,0,0,136,0,
0,0,2,0,0,0,
60,0,0,0,0,5,
254,255,0,129,0,0,
92,2,0,0,82,68,
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
0,0,4,0,0,0,
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
235,0,0,0,184,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,212,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,248,1,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
212,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
12,2,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,212,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,30,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,56,2,0,0,
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
0,0,202,1,0,0,
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
48,2,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
68,0,0,0,2,0,
0,0,8,0,0,0,
56,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,15,15,0,0,
56,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,3,0,0,
84,69,88,67,79,79,
82,68,0,171,171,171,
79,83,71,78,128,0,
0,0,4,0,0,0,
8,0,0,0,104,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
3,12,0,0,104,0,
0,0,1,0,0,0,
0,0,0,0,3,0,
0,0,0,0,0,0,
12,3,0,0,104,0,
0,0,2,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
3,12,0,0,113,0,
0,0,0,0,0,0,
1,0,0,0,3,0,
0,0,2,0,0,0,
15,0,0,0,84,69,
88,67,79,79,82,68,
0,83,86,95,80,111,
115,105,116,105,111,110,
0,171,171,171,83,72,
69,88,200,1,0,0,
80,0,1,0,114,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,0,0,0,0,
4,0,0,0,89,0,
0,4,70,142,32,0,
1,0,0,0,3,0,
0,0,95,0,0,3,
242,16,16,0,0,0,
0,0,95,0,0,3,
50,16,16,0,1,0,
0,0,101,0,0,3,
50,32,16,0,0,0,
0,0,101,0,0,3,
194,32,16,0,0,0,
0,0,101,0,0,3,
50,32,16,0,1,0,
0,0,103,0,0,4,
242,32,16,0,2,0,
0,0,1,0,0,0,
104,0,0,2,1,0,
0,0,54,0,0,5,
50,32,16,0,0,0,
0,0,70,16,16,0,
1,0,0,0,54,0,
0,6,194,32,16,0,
0,0,0,0,166,142,
32,0,1,0,0,0,
0,0,0,0,56,0,
0,9,18,0,16,0,
0,0,0,0,58,128,
32,0,1,0,0,0,
0,0,0,0,26,128,
32,0,1,0,0,0,
2,0,0,0,65,0,
0,5,18,0,16,0,
0,0,0,0,10,0,
16,0,0,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
6,0,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,14,0,0,10,
50,32,16,0,1,0,
0,0,2,64,0,0,
0,0,128,63,0,0,
128,63,0,0,128,63,
0,0,128,63,70,0,
16,0,0,0,0,0,
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
2,0,0,0,246,31,
16,0,0,0,0,0,
70,142,32,0,0,0,
0,0,3,0,0,0,
70,14,16,0,0,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,11,0,0,0,
1,0,0,0,0,0,
0,0,6,0,0,0,
8,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
2,0,0,0,0,0,
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
0,0,0,0,0,0
};


static const BYTE sFragmentByteCode[] =
{
68,88,66,67,66,89,
112,99,79,100,251,52,
16,8,200,59,248,169,
91,8,1,0,0,0,
172,5,0,0,5,0,
0,0,52,0,0,0,
204,2,0,0,48,3,
0,0,100,3,0,0,
16,5,0,0,82,68,
69,70,144,2,0,0,
1,0,0,0,12,1,
0,0,5,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
104,2,0,0,82,68,
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
1,0,0,0,250,0,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
2,0,0,0,1,0,
0,0,13,0,0,0,
1,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,3,0,0,0,
1,0,0,0,13,0,
0,0,6,1,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,1,0,
0,0,1,0,0,0,
0,0,0,0,95,83,
111,117,114,99,101,95,
115,97,109,112,108,101,
114,0,95,77,65,83,
75,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,77,
65,83,75,0,80,117,
115,104,0,171,6,1,
0,0,4,0,0,0,
36,1,0,0,64,0,
0,0,0,0,0,0,
0,0,0,0,196,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,224,1,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,4,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
224,1,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
24,2,0,0,32,0,
0,0,16,0,0,0,
2,0,0,0,224,1,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,42,2,
0,0,48,0,0,0,
4,0,0,0,0,0,
0,0,68,2,0,0,
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
0,0,214,1,0,0,
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
60,2,0,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
92,0,0,0,3,0,
0,0,8,0,0,0,
80,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
80,0,0,0,1,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,12,0,0,0,
80,0,0,0,2,0,
0,0,0,0,0,0,
3,0,0,0,1,0,
0,0,3,0,0,0,
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
69,88,164,1,0,0,
80,0,0,0,105,0,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
3,0,0,0,90,0,
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
101,0,0,3,242,32,
16,0,0,0,0,0,
104,0,0,2,2,0,
0,0,14,0,0,9,
18,0,16,0,0,0,
0,0,26,128,32,0,
1,0,0,0,2,0,
0,0,26,128,32,0,
1,0,0,0,0,0,
0,0,0,0,0,7,
18,0,16,0,0,0,
0,0,10,0,16,0,
0,0,0,0,1,64,
0,0,189,55,134,53,
65,0,0,5,34,0,
16,0,0,0,0,0,
10,0,16,0,0,0,
0,0,56,0,0,8,
194,0,16,0,0,0,
0,0,6,20,16,0,
0,0,0,0,6,132,
32,0,1,0,0,0,
2,0,0,0,54,0,
0,5,18,0,16,0,
0,0,0,0,1,64,
0,0,0,0,0,64,
14,0,0,7,50,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,26,0,
0,5,50,0,16,0,
0,0,0,0,70,0,
16,0,0,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
242,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,70,126,
16,0,3,0,0,0,
0,96,16,0,3,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
1,0,0,0,70,16,
16,0,0,0,0,0,
70,126,16,0,2,0,
0,0,0,96,16,0,
2,0,0,0,56,0,
0,7,242,32,16,0,
0,0,0,0,70,14,
16,0,0,0,0,0,
70,14,16,0,1,0,
0,0,62,0,0,1,
83,84,65,84,148,0,
0,0,11,0,0,0,
2,0,0,0,0,0,
0,0,2,0,0,0,
7,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,2,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
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
0,0,0,0,0,0
};

}

namespace RetroArch
{
class CrtShadersCrtPotatoShaderFilesCrtPotatoShaderDef : public ShaderDef
{
public:
	CrtShadersCrtPotatoShaderFilesCrtPotatoShaderDef() : ShaderDef{}
	{
		Name = "crt-potato";
		VertexByteCode = RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchCrtShadersCrtPotatoShaderFilesCrtPotatoShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("FrameCount", -1, 48, 4, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("MASK", 3));
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
