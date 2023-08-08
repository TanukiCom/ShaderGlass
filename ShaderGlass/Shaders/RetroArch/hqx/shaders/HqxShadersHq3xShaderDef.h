/*
ShaderGlass shader hqx-shaders\hq3x imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/6f921ee4815a7894a33855974285b04545a4fa42/hqx/shaders/hq3x.slang
See original file for full credits and usage license with excerpts below. 
This file is auto-generated, do not modify directly.


* Copyright (C) 2003 Maxim Stepin ( maxst@hiend3d.com )
*
* Copyright (C) 2010 Cameron Zemek ( grom@zeminvaders.net )
*
* Copyright (C) 2014 Jules Blok ( jules@aerix.nl )
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA


* Copyright (C) 2003 Maxim Stepin ( maxst@hiend3d.com )
*
* Copyright (C) 2010 Cameron Zemek ( grom@zeminvaders.net )
*
* Copyright (C) 2014 Jules Blok ( jules@aerix.nl )
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this program; if not, write to the Free Software
* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA


*/

#pragma once

namespace RetroArchHqxShadersHq3xShaderDefs
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
68,88,66,67,69,177,
56,207,199,6,42,108,
245,15,174,96,210,79,
57,106,1,0,0,0,
124,8,0,0,5,0,
0,0,52,0,0,0,
204,2,0,0,0,3,
0,0,52,3,0,0,
224,7,0,0,82,68,
69,70,144,2,0,0,
1,0,0,0,108,1,
0,0,7,0,0,0,
60,0,0,0,0,5,
255,255,0,129,0,0,
104,2,0,0,82,68,
49,49,60,0,0,0,
24,0,0,0,32,0,
0,0,40,0,0,0,
36,0,0,0,12,0,
0,0,0,0,0,0,
28,1,0,0,3,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,2,0,0,0,
1,0,0,0,1,0,
0,0,44,1,0,0,
3,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,3,0,
0,0,1,0,0,0,
1,0,0,0,57,1,
0,0,3,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
4,0,0,0,1,0,
0,0,1,0,0,0,
78,1,0,0,2,0,
0,0,5,0,0,0,
4,0,0,0,255,255,
255,255,2,0,0,0,
1,0,0,0,13,0,
0,0,85,1,0,0,
2,0,0,0,5,0,
0,0,4,0,0,0,
255,255,255,255,3,0,
0,0,1,0,0,0,
13,0,0,0,89,1,
0,0,2,0,0,0,
5,0,0,0,4,0,
0,0,255,255,255,255,
4,0,0,0,1,0,
0,0,13,0,0,0,
101,1,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,1,0,0,0,
1,0,0,0,0,0,
0,0,95,83,111,117,
114,99,101,95,115,97,
109,112,108,101,114,0,
95,76,85,84,95,115,
97,109,112,108,101,114,
0,95,104,113,120,95,
114,101,102,112,97,115,
115,95,115,97,109,112,
108,101,114,0,83,111,
117,114,99,101,0,76,
85,84,0,104,113,120,
95,114,101,102,112,97,
115,115,0,80,117,115,
104,0,171,171,101,1,
0,0,3,0,0,0,
132,1,0,0,48,0,
0,0,0,0,0,0,
0,0,0,0,252,1,
0,0,0,0,0,0,
16,0,0,0,2,0,
0,0,24,2,0,0,
0,0,0,0,255,255,
255,255,0,0,0,0,
255,255,255,255,0,0,
0,0,60,2,0,0,
16,0,0,0,16,0,
0,0,0,0,0,0,
24,2,0,0,0,0,
0,0,255,255,255,255,
0,0,0,0,255,255,
255,255,0,0,0,0,
83,2,0,0,32,0,
0,0,16,0,0,0,
0,0,0,0,24,2,
0,0,0,0,0,0,
255,255,255,255,0,0,
0,0,255,255,255,255,
0,0,0,0,114,101,
103,105,115,116,101,114,
115,95,83,111,117,114,
99,101,83,105,122,101,
0,102,108,111,97,116,
52,0,1,0,3,0,
1,0,4,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,17,2,
0,0,114,101,103,105,
115,116,101,114,115,95,
79,114,105,103,105,110,
97,108,83,105,122,101,
0,114,101,103,105,115,
116,101,114,115,95,79,
117,116,112,117,116,83,
105,122,101,0,77,105,
99,114,111,115,111,102,
116,32,40,82,41,32,
72,76,83,76,32,83,
104,97,100,101,114,32,
67,111,109,112,105,108,
101,114,32,49,48,46,
49,0,73,83,71,78,
44,0,0,0,1,0,
0,0,8,0,0,0,
32,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,3,0,0,
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
69,88,164,4,0,0,
80,0,0,0,41,1,
0,0,106,8,0,1,
89,0,0,4,70,142,
32,0,1,0,0,0,
1,0,0,0,90,0,
0,3,0,96,16,0,
2,0,0,0,90,0,
0,3,0,96,16,0,
3,0,0,0,90,0,
0,3,0,96,16,0,
4,0,0,0,88,24,
0,4,0,112,16,0,
2,0,0,0,85,85,
0,0,88,24,0,4,
0,112,16,0,3,0,
0,0,85,85,0,0,
88,24,0,4,0,112,
16,0,4,0,0,0,
85,85,0,0,98,16,
0,3,50,16,16,0,
0,0,0,0,101,0,
0,3,242,32,16,0,
0,0,0,0,104,0,
0,2,4,0,0,0,
56,0,0,8,50,0,
16,0,0,0,0,0,
70,16,16,0,0,0,
0,0,70,128,32,0,
1,0,0,0,0,0,
0,0,26,0,0,5,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,0,0,
0,10,194,0,16,0,
0,0,0,0,6,4,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,191,0,0,
0,191,56,0,0,10,
50,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,0,0,64,64,
0,0,64,64,0,0,
0,0,0,0,0,0,
65,0,0,5,50,0,
16,0,0,0,0,0,
70,0,16,0,0,0,
0,0,15,0,0,10,
18,0,16,0,0,0,
0,0,70,0,16,0,
0,0,0,0,2,64,
0,0,0,0,128,63,
0,0,64,64,0,0,
0,0,0,0,0,0,
49,0,0,10,50,0,
16,0,1,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,230,10,16,0,
0,0,0,0,49,0,
0,10,98,0,16,0,
0,0,0,0,166,11,
16,0,0,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,30,0,0,8,
98,0,16,0,0,0,
0,0,6,1,16,128,
65,0,0,0,1,0,
0,0,86,6,16,0,
0,0,0,0,43,0,
0,5,98,0,16,0,
0,0,0,0,86,6,
16,0,0,0,0,0,
50,0,0,10,50,0,
16,0,1,0,0,0,
230,138,32,0,1,0,
0,0,0,0,0,0,
150,5,16,0,0,0,
0,0,70,16,16,0,
0,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,1,0,0,0,
70,0,16,0,1,0,
0,0,70,126,16,0,
4,0,0,0,0,96,
16,0,4,0,0,0,
69,0,0,139,194,0,
0,128,67,85,21,0,
50,0,16,0,2,0,
0,0,70,16,16,0,
0,0,0,0,70,126,
16,0,2,0,0,0,
0,96,16,0,2,0,
0,0,50,0,0,9,
34,0,16,0,2,0,
0,0,26,0,16,0,
2,0,0,0,1,64,
0,0,0,0,7,67,
10,0,16,0,0,0,
0,0,50,0,0,15,
146,0,16,0,0,0,
0,0,6,4,16,0,
2,0,0,0,2,64,
0,0,0,0,127,63,
0,0,0,0,0,0,
0,0,57,142,227,59,
2,64,0,0,0,0,
0,59,0,0,0,0,
0,0,0,0,57,142,
99,59,69,0,0,139,
194,0,0,128,67,85,
21,0,242,0,16,0,
2,0,0,0,198,0,
16,0,0,0,0,0,
70,126,16,0,3,0,
0,0,0,96,16,0,
3,0,0,0,17,0,
0,10,18,0,16,0,
0,0,0,0,70,14,
16,0,2,0,0,0,
2,64,0,0,0,0,
128,63,0,0,128,63,
0,0,128,63,0,0,
128,63,14,0,0,7,
242,0,16,0,2,0,
0,0,70,14,16,0,
2,0,0,0,6,0,
16,0,0,0,0,0,
56,0,0,7,114,0,
16,0,1,0,0,0,
70,2,16,0,1,0,
0,0,86,5,16,0,
2,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,3,0,0,0,
70,16,16,0,0,0,
0,0,70,126,16,0,
4,0,0,0,0,96,
16,0,4,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,6,0,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
54,0,0,6,146,0,
16,0,3,0,0,0,
166,142,32,0,1,0,
0,0,0,0,0,0,
54,0,0,8,98,0,
16,0,3,0,0,0,
2,64,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,50,0,0,9,
242,0,16,0,0,0,
0,0,70,14,16,0,
3,0,0,0,150,9,
16,0,0,0,0,0,
70,20,16,0,0,0,
0,0,69,0,0,139,
194,0,0,128,67,85,
21,0,114,0,16,0,
3,0,0,0,70,0,
16,0,0,0,0,0,
70,126,16,0,4,0,
0,0,0,96,16,0,
4,0,0,0,69,0,
0,139,194,0,0,128,
67,85,21,0,114,0,
16,0,0,0,0,0,
230,10,16,0,0,0,
0,0,70,126,16,0,
4,0,0,0,0,96,
16,0,4,0,0,0,
50,0,0,9,114,0,
16,0,1,0,0,0,
70,2,16,0,3,0,
0,0,166,10,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
50,0,0,9,114,32,
16,0,0,0,0,0,
70,2,16,0,0,0,
0,0,246,15,16,0,
2,0,0,0,70,2,
16,0,1,0,0,0,
54,0,0,5,130,32,
16,0,0,0,0,0,
1,64,0,0,0,0,
128,63,62,0,0,1,
83,84,65,84,148,0,
0,0,30,0,0,0,
4,0,0,0,0,0,
0,0,2,0,0,0,
18,0,0,0,1,0,
0,0,0,0,0,0,
1,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,6,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
0,0,0,0,0,0,
3,0,0,0,0,0,
0,0,3,0,0,0,
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
class HqxShadersHq3xShaderDef : public ShaderDef
{
public:
	HqxShadersHq3xShaderDef() : ShaderDef{}
	{
		Name = "hq3x";
		VertexByteCode = RetroArchHqxShadersHq3xShaderDefs::sVertexByteCode;
		VertexLength = sizeof(RetroArchHqxShadersHq3xShaderDefs::sVertexByteCode);
		FragmentByteCode = RetroArchHqxShadersHq3xShaderDefs::sFragmentByteCode;
		FragmentLength = sizeof(RetroArchHqxShadersHq3xShaderDefs::sFragmentByteCode);
		Params.push_back(ShaderParam("MVP", 0, 0, 64, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("SourceSize", -1, 0, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OriginalSize", -1, 16, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Params.push_back(ShaderParam("OutputSize", -1, 32, 16, 0.000000f, 0.000000f, 0.000000f, 0.000000f, ""));
		Samplers.push_back(ShaderSampler("hqx_refpass", 4));
		Samplers.push_back(ShaderSampler("Source", 2));
		Samplers.push_back(ShaderSampler("LUT", 3));
/*
VertexSource = %*VERTEX_SOURCE*%;
*/
/*
FragmentSource = %*FRAGMENT_SOURCE*%;
*/
	}
};
}