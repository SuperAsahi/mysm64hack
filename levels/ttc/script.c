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
	LOAD_MODEL_FROM_GEO(MODEL_WMOTR_WOODEN_DOOR, wooden_door_geo), 

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
		WARP_NODE(0x03, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 4563, 10138, -3173, 0, -17, 0, 0x00060000, bhvFadingWarp),
		OBJECT(MODEL_WMOTR_WOODEN_DOOR, 4292, 7237, -2696, 0, -45, 0, 0x00030000, bhvDoorWarp),
		OBJECT(MODEL_WMOTR_WOODEN_DOOR, 10604, -5651, -2444, 0, -54, 0, 0x00040000, bhvDoorWarp),
		OBJECT(MODEL_WMOTR_WOODEN_DOOR, 7800, -5633, -588, 0, 127, 0, 0x00070000, bhvDoorWarp),
		OBJECT(MODEL_GOOMBA, 5694, -5610, 1466, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, 4523, -5610, -1718, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_GOOMBA, 7905, -5610, -2275, 0, 0, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_NONE, 9511, -5428, -1652, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 9511, -5428, -1652),
		OBJECT(MODEL_NONE, 4101, 8587, -1696, 0, -180, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, 7554, -5651, 3409, 0, -180, 0, 0x00050000, bhvFadingWarp),
		OBJECT(MODEL_WMOTR_WOODEN_DOOR, -4527, 10474, -10443, 0, -86, 0, 0x00080000, bhvDoorWarp),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3568, 10591, -11219, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3363, 10743, -11068, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3156, 10890, -10916, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -2950, 11042, -10765, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3025, 11236, -10541, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3176, 11387, -10335, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3328, 11534, -10128, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3479, 11686, -9923, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3642, 11846, -9986, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3847, 11998, -10137, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4054, 12145, -10289, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4260, 12297, -10440, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4214, 12487, -10636, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4063, 12639, -10841, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3911, 12786, -11048, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3760, 12938, -11254, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_NONE, -3935, 12863, -11069, 0, -90, 0, 0x00010000, bhvWarp),
		TERRAIN(ttc_area_1_collision),
		ROOMS(ttc_area_1_collision_rooms),
		MACRO_OBJECTS(ttc_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_WATER2),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 9511, -5428, -1652),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
