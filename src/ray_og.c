#include "ultra64.h"
#include "global.h"

u64 ray_og_reflection_lower_sd_i8[] = {
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffffffffffffe, 0xffffffffffffffff, 0xfffffffffffffff5, 0xf5ffffffffffffff, 0xffffffffffffffff, 0xfeffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffec, 0xffffffffffffffff, 0xfffffffffffffccc, 0xccfcffffffffffff, 0xffffffffffffffff, 0xecffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffffffffffeb8, 0xfcffffffffffffff, 0xffffffffffffdd7a, 0x7addffffffffffff, 0xfffffffffffffffc, 0xb8feffffffffffff, 0xffffffffffffffff, 
	0xfffffce1f7ffffff, 0xfffffffffffff65a, 0xf4ffffffffffffff, 0xfffffff9fde3a100, 0x00a1e3fdf9ffffff, 0xfffffffffffffff4, 0x5af6ffffffffffff, 0xfffffff7e1fcffff, 
	0xfffff3b9cffcffff, 0xffffffffffffde00, 0xdbffffffffffffff, 0xffffffd7cab20000, 0x0000b2cad7ffffff, 0xffffffffffffffdb, 0x00deffffffffffff, 0xfffffccfb9f3ffff, 
	0xffffe3007ae0ffff, 0xffffffffffffb300, 0xc0ffffffffffffff, 0xfffffe9889000000, 0x0000008998feffff, 0xffffffffffffffc0, 0x00b3ffffffffffff, 0xffffe07a00e3ffff, 
	0xffffe20000a6f6ff, 0xfffffffffffe7900, 0x91feffffffffffff, 0xffffffe549000000, 0x00000049e5ffffff, 0xfffffffffffffe91, 0x0079feffffffffff, 0xfff6a60000e2ffff, 
	0xfffff632002dd5ff, 0xfffffffffff82a00, 0x4ff1ffffffffffff, 0xffffffffe86c0000, 0x00006ce8ffffffff, 0xfffffffffffff14f, 0x002af8ffffffffff, 0xffd52d0032f6ffff, 
	0xffffff9b00008ff3, 0xffffffffffed0d00, 0x00c5fbffffffffff, 0xfffffffffff67c00, 0x007cf6ffffffffff, 0xfffffffffffbc500, 0x000dedffffffffff, 0xf38f00009bffffff, 
	0xffffffde0d0000d0, 0xffffffffffe20000, 0x007ed1f4ffffffff, 0xffffffffffffec35, 0x35ecffffffffffff, 0xfffffffff4d17e00, 0x0000e2ffffffffff, 0xd000000ddeffffff, 
	0xfffffffd6d000089, 0xf2ffffffffe20000, 0x000095c6ddf7ffff, 0xffffffffffffffab, 0xabffffffffffffff, 0xfffff7ddc6950000, 0x0000e2fffffffff2, 0x8900006dfdffffff, 
	0xffffffffc3000000, 0xceffffffffeb1600, 0x00000063b3c7ddf9, 0xffffffffffffffea, 0xeaffffffffffffff, 0xf9ddc7b363000000, 0x0016ebffffffffce, 0x000000c3ffffffff, 
	0xfffffffff53b0000, 0x87f3fffffffe9100, 0x000000000070b5cb, 0xf4ffffffffffffff, 0xfffffffffffffff4, 0xcbb5700000000000, 0x0091fefffffff387, 0x00003bf5ffffffff, 
	0xffffffffffa30000, 0x00d0fffffffff9a4, 0x1600000000000085, 0xcaf8ffffffffffff, 0xfffffffffffff8ca, 0x8500000000000016, 0xa4f9ffffffffd000, 0x0000a3ffffffffff, 
	0xffffffffffe51600, 0x008af4fffffffffe, 0xd256000000000000, 0x74d5feffffffffff, 0xfffffffffffed574, 0x00000000000056d2, 0xfefffffffff48a00, 0x0016e5ffffffffff, 
	0xfffffffffffe7e00, 0x0000d4ffffffffff, 0xfff4a72600000000, 0x0094edffffffffff, 0xffffffffffed9400, 0x0000000026a7f4ff, 0xffffffffffd40000, 0x007efeffffffffff, 
	0xffffffffffffcf00, 0x000091f6ffffffff, 0xffffffe077000000, 0x0000c5feffffffff, 0xfffffffffec50000, 0x00000077e0ffffff, 0xfffffffff6910000, 0x00cfffffffffffff, 
	0xfffffffffffffa56, 0x00001cd9ffffffff, 0xfffffffffbc03b00, 0x000077f2ffffffff, 0xfffffffff2770000, 0x003bc0fbffffffff, 0xffffffffd91c0000, 0x56faffffffffffff, 
	0xffffffffffffffb7, 0x0000009af8ffffff, 0xffffffffffffe86c, 0x000000d4ffffffff, 0xffffffffd4000000, 0x6ce8ffffffffffff, 0xfffffff89a000000, 0xb7ffffffffffffff, 
	0xfffffffffffffff0, 0x2e000036dfffffff, 0xffffffffffffffef, 0x3d00009afeffffff, 0xfffffffe9a00003d, 0xefffffffffffffff, 0xffffffdf3600002e, 0xf0ffffffffffffff, 
	0xffffffffffffffff, 0x9c000000a3faffff, 0xffffffffffffffff, 0xa2000051f6ffffff, 0xfffffff6510000a2, 0xffffffffffffffff, 0xfffffaa30000009c, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xe216000047e3ffff, 0xffffffffffffffff, 0xd0000000e6ffffff, 0xffffffe6000000d0, 0xffffffffffffffff, 0xffffe347000016e2, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfe7f000000adfcff, 0xffffffffffffffff, 0xe70d0000ccffffff, 0xffffffcc00000de7, 0xffffffffffffffff, 0xfffcad0000007ffe, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffd20000005ae8ff, 0xffffffffffffffff, 0xf7220000b1ffffff, 0xffffffb1000022f7, 0xffffffffffffffff, 0xffe85a000000d2ff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffb65000000b6fd, 0xffffffffffffffff, 0xfd2a00009dffffff, 0xffffff9d00002afd, 0xffffffffffffffff, 0xfdb600000065fbff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffc300000067eb, 0xffffffffffffffff, 0xfd2a000090ffffff, 0xffffff9000002afd, 0xffffffffffffffff, 0xeb67000000c3ffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffff74d000000bf, 0xfeffffffffffffff, 0xfb2200008effffff, 0xffffff8e000022fb, 0xfffffffffffffffe, 0xbf0000004df7ffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffb800000073, 0xedffffffffffffff, 0xf416000092ffffff, 0xffffff92000016f4, 0xffffffffffffffed, 0x73000000b8ffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffff340000000, 0xc4feffffffffffff, 0xe10000009fffffff, 0xffffff9f000000e1, 0xfffffffffffffec4, 0x00000040f3ffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffb0000000, 0x78e8ffffffffffff, 0xc3000000b6ffffff, 0xffffffb6000000c3, 0xffffffffffffe878, 0x000000b0ffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffffff1380000, 0x00b6effffffffff7, 0x8d000000cdffffff, 0xffffffcd0000008d, 0xf7ffffffffefb600, 0x000038f1ffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffae0000, 0x004fc2e0f4f8ebc9, 0x3d00000de8ffffff, 0xffffffe80d00003d, 0xc9ebf8f4e0c24f00, 0x0000aeffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffffffff24200, 0x000057b8c5c6c27f, 0x0000005ffdffffff, 0xfffffffd5f000000, 0x7fc2c6c5b8570000, 0x0042f2ffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffbb00, 0x0000000061723100, 0x000000b6ffffffec, 0xecffffffb6000000, 0x0031726100000000, 0x00bbffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xfffffffffffff968, 0x0000000000000000, 0x000053f4fffff6bf, 0xbff6fffff4530000, 0x0000000000000000, 0x68f9ffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffde, 0x2a00000000000000, 0x002ed8fffffccd5c, 0x5ccdfcffffd82e00, 0x000000000000002a, 0xdeffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xd042000000000000, 0x4dd5ffffffdb8500, 0x0085dbffffffd54d, 0x00000000000042d0, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffefb4734b4b75b6, 0xf2ffffffe8a30000, 0x0000a3e8fffffff2, 0xb6754b4b73b4efff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffefbfbfeff, 0xfffffff3b9000000, 0x000000b9f3ffffff, 0xfffefbfbfeffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffffaca4d000000, 0x0000004dcafaffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffed77800000000, 0x0000000078d7feff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffe39a0000000000, 0x00000000009ae3ff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xefb2000000000000, 0x000000000000b2ef, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffffffa, 0xc439000000000000, 0x00000000000039c4, 0xfaffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffffff2, 0x6a00000000000000, 0x000000000000006a, 0xf2ffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffffff1, 0x2e00000000000000, 0x000000000000002e, 0xf1ffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffffff3, 0x3200000000000000, 0x0000000000000032, 0xf3ffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xad00000000000000, 0x00000000000000ad, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xf656000000000000, 0x00000000000056f6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffcd0d0000000000, 0x00000000000dcdff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffd820000000000, 0x000000000082fdff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffe52600000000, 0x0000000026e5ffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffaa00000000, 0x00000000aaffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffffff553000000, 0x00000053f5ffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffcb0d0000, 0x00000dcbffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffd800000, 0x000080fdffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffe52600, 0x0026e5ffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffaa00, 0x00aaffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffff553, 0x53f5ffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffca, 0xcaffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xfffffffffffffffe, 0xfeffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 
	
};

Vtx ray_og_ray_og_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1529, -804, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1529, -804, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1529, 905, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1529, 905, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {851, -804, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {851, -804, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {851, 905, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {851, 905, 0}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx ray_og_ray_og_mesh_layer_Opaque_vtx_0[8] = {
	{{ {-529, 905, 0}, 0, {3030, -721}, {172, 172, 172, 172} }},
	{{ {640, 727, 0}, 0, {2609, 1605}, {172, 172, 172, 172} }},
	{{ {-172, 50, 0}, 0, {1011, -10}, {172, 172, 172, 172} }},
	{{ {640, -626, 0}, 0, {-585, 1605}, {172, 172, 172, 172} }},
	{{ {-529, -804, 0}, 0, {-1006, -721}, {172, 172, 172, 172} }},
	{{ {851, 50, 0}, 0, {1011, 2025}, {172, 172, 172, 172} }},
	{{ {640, -626, 0}, 0, {-585, 1605}, {172, 172, 172, 172} }},
	{{ {640, 727, 0}, 0, {2609, 1605}, {172, 172, 172, 172} }},
};

Gfx ray_og_ray_og_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(ray_og_ray_og_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
	gsSP2Triangles(2, 5, 6, 0, 7, 5, 2, 0),
	gsSPEndDisplayList(),
};

Vtx ray_og_ray_og_mesh_layer_Opaque_vtx_1[4] = {
	{{ {-172, 50, 0}, 0, {999, -656}, {172, 172, 172, 172} }},
	{{ {-1529, 50, 0}, 0, {999, 2268}, {172, 172, 172, 172} }},
	{{ {-529, 905, 0}, 0, {2004, 113}, {172, 172, 172, 172} }},
	{{ {-529, -804, 0}, 0, {-4, 113}, {172, 172, 172, 172} }},
};

Gfx ray_og_ray_og_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(ray_og_ray_og_mesh_layer_Opaque_vtx_1 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSPEndDisplayList(),
};
extern u64 gMirrorShieldReflectionSwappableTexture[];
Gfx mat_ray_og_reflection_upper[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, gMirrorShieldReflectionSwappableTexture),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx mat_ray_og_reflection_lower[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 3, G_AC_NONE | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, ray_og_reflection_lower_sd_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 252),
	gsSPEndDisplayList(),
};

Gfx ray_og[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(ray_og_ray_og_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_ray_og_reflection_upper),
	gsSPDisplayList(ray_og_ray_og_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_ray_og_reflection_lower),
	gsSPDisplayList(ray_og_ray_og_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

