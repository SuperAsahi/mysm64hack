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
#include "levels/ttc/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _machine_yay0SegmentRomStart, _machine_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _ttc_segment_7SegmentRomStart, _ttc_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_CUBE, ttc_geo_000240), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_PRISM, ttc_geo_000258), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PENDULUM, ttc_geo_000270), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_TREADMILL, ttc_geo_000288), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_TREADMILL, ttc_geo_0002A8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PUSH_BLOCK, ttc_geo_0002C8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_HEXAGON, ttc_geo_0002E0), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ROTATING_TRIANGLE, ttc_geo_0002F8), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK, ttc_geo_000310), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_PIT_BLOCK_UNUSED, ttc_geo_000328), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_ELEVATOR_PLATFORM, ttc_geo_000340), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_CLOCK_HAND, ttc_geo_000358), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SPINNER, ttc_geo_000370), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_SMALL_GEAR, ttc_geo_000388), 
	LOAD_MODEL_FROM_GEO(MODEL_TTC_LARGE_GEAR, ttc_geo_0003A0), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ttc_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_WMOTR, 0x01, 0x03, WARP_NO_CHECKPOINT),
		WARP_NODE(0x05, LEVEL_TTC, 0x01, 0x06, WARP_NO_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_TTC, 0x01, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x07, LEVEL_TTC, 0x01, 0x08, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_TTC, 0x01, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_TTC, 0x01, 0x02, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_TTC, 0x01, 0x01, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_RR, 0x01, 0x01, WARP_CHECKPOINT),
		OBJECT(MODEL_NONE, 8494, 5491, 2265, 0, -140, 0, 0x00060000, bhvFadingWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 8247, 2556, 1788, 0, -169, 0, 0x00030000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 4562, -5724, 6916, 0, -177, 0, 0x00040000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 4555, -5724, 3527, 0, 4, 0, 0x00070000, bhvDoorWarp),
		OBJECT(MODEL_STAR, 5155, -1809, -1707, 0, -123, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 4502, -5495, 5561, 0, -123, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, -123, 4502, -5495, 5561),
		OBJECT(MODEL_NONE, 7534, 3941, 1071, 0, 57, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, 1352, -5718, 1143, 0, 57, 0, 0x00050000, bhvFadingWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 19610, 10321, -1382, 0, 151, 0, 0x00080000, bhvDoorWarp),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19685, 10495, -102, 0, -70, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19446, 10647, -13, 0, -70, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19205, 10793, 76, 0, -70, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18966, 10945, 165, 0, -70, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18820, 11139, -21, 0, -160, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18732, 11291, -260, 0, -160, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18642, 11438, -501, 0, -160, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18554, 11590, -740, 0, -160, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18696, 11750, -841, 0, 110, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 18935, 11902, -930, 0, 110, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19176, 12048, -1019, 0, 110, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19415, 12200, -1107, 0, 110, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19554, 12391, -961, 0, 20, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19642, 12543, -722, 0, 20, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19731, 12689, -482, 0, 20, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, 19820, 12841, -242, 0, 20, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_NONE, 19761, 12721, -490, 0, 147, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 19807, 12912, -290, 0, 147, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 19761, 12982, -490, 0, 147, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, 19807, 13108, -290, 0, 147, 0, 0x00010000, bhvWarp),
		TERRAIN(ttc_area_1_collision),
		ROOMS(ttc_area_1_collision_rooms),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER2),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -123, 4502, -5495, 5561),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
