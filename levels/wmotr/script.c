#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/wmotr/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wmotr_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _cloud_floor_skybox_yay0SegmentRomStart, _cloud_floor_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _sky_yay0SegmentRomStart, _sky_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wmotr_segment_7SegmentRomStart, _wmotr_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wmotr_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_TTC, 0x01, 0x04, WARP_CHECKPOINT),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -2157, -8419, 3670, 0, 165, 0, (03 << 16), bhvDoorWarp),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 1945, -8413, 6521, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3501, -8415, 5966, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -10315, -8429, 7587, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -9173, -8463, 1950, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -7184, -8364, -1108, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 5269, -8407, 3866, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3501, -8415, 1655, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, 3353, -8431, 10129, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -9800, -8417, 6040, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -7921, -8470, 8729, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -6963, -8421, 4234, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -5415, -8423, -2213, 0, -90, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, -3919, -8353, 11244, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, -3919, -8353, 11244),
		TERRAIN(wmotr_area_1_collision),
		MACRO_OBJECTS(wmotr_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_SOUND_PLAYER),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -3919, -8353, 11244),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
