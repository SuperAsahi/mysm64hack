Lights1 test_f3d_material_lights = gdSPDefLights1(
	0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x28, 0x28, 0x28);

Vtx test_Plane_mesh_vtx_0[4] = {
	{{{2037, 0, -2037},0, {-16, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2037, 0, -2037},0, {1008, 1008},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{-2037, 0, 2037},0, {1008, -16},{0x0, 0x7F, 0x0, 0xFF}}},
	{{{2037, 0, 2037},0, {-16, -16},{0x0, 0x7F, 0x0, 0xFF}}},
};

Gfx test_Plane_mesh_tri_0[] = {
	gsSPVertex(test_Plane_mesh_vtx_0 + 0, 4, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_test_f3d_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPSetLights1(test_f3d_material_lights),
	gsSPEndDisplayList(),
};

Gfx test_Plane_mesh[] = {
	gsSPDisplayList(mat_test_f3d_material),
	gsSPDisplayList(test_Plane_mesh_tri_0),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

