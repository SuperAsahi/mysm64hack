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
		OBJECT(MODEL_NONE, 4563, 5558, -3173, 0, -17, 0, 0x00060000, bhvFadingWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 4300, 2623, -2705, 0, -45, 0, 0x00030000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 10610, -5657, -2447, 0, -54, 0, 0x00040000, bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 7800, -5633, -588, 0, 127, 0, 0x00070000, bhvDoorWarp),
		OBJECT(MODEL_STAR, 3082, -1742, 1800, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_NONE, 9511, -5428, -1652, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 9511, -5428, -1652),
		OBJECT(MODEL_NONE, 4094, 4008, -1715, 0, -180, 0, 0x00020000, bhvWarp),
		OBJECT(MODEL_NONE, 7554, -5651, 3409, 0, -180, 0, 0x00050000, bhvFadingWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -4596, 10388, -10451, 0, -86, 0, 0x00080000, bhvDoorWarp),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3568, 10562, -11219, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3363, 10714, -11068, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3156, 10860, -10916, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -2950, 11012, -10765, 0, 54, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3025, 11206, -10541, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3176, 11358, -10335, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3328, 11505, -10128, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3479, 11657, -9923, 0, -36, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3642, 11817, -9986, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3847, 11969, -10137, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4054, 12116, -10289, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4260, 12267, -10440, 0, -126, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4214, 12458, -10636, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -4063, 12610, -10841, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3911, 12756, -11048, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_TTC_ELEVATOR_PLATFORM, -3760, 12908, -11254, 0, 144, 0, 0x00000000, bhvTTCElevator),
		OBJECT(MODEL_NONE, -3935, 12788, -11069, 0, -90, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, -3792, 12979, -11216, 0, -90, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, -3935, 13049, -11069, 0, -90, 0, 0x00010000, bhvWarp),
		OBJECT(MODEL_NONE, -3792, 13175, -11216, 0, -90, 0, 0x00010000, bhvWarp),
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
