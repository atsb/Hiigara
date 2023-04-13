// =============================================================================
//  FlightManDefs.h
// =============================================================================
//  Copyright Relic Entertainment, Inc. All rights reserved.
// =============================================================================

#ifndef ___FLIGHTMANDEFS_H
#define ___FLIGHTMANDEFS_H

#define FLIGHTMAN_NULL                  0

#define FLIGHTMAN_DONOTHING             1
#define FLIGHTMAN_FLIPTURN              2
#define FLIGHTMAN_HARDBANK              3
#define FLIGHTMAN_IMMELMAN              4
#define FLIGHTMAN_SPLIT_S               5
#define FLIGHTMAN_CORKSCREW             6
#define FLIGHTMAN_ENDOVER               7

#define FLIGHTMAN_NO_AIP                8
#define FLIGHTMAN_BARREL_ROLL           9
#define FLIGHTMAN_WHIP_STRAFE           10
#define FLIGHTMAN_CELEB_FLIP            11
#define FLIGHTMAN_BARRELROLL_OUT        12
#define FLIGHTMAN_SWARMER_BARRELROLL    13
#define FLIGHTMAN_ROLL180               14

#define FLIGHTMAN_ROLLAWAY              15
#define FLIGHTMAN_SOFTBANK              16
#define FLIGHTMAN_SPLITS_EVASIVE        17
#define FLIGHTMAN_SLALOM                18
#define FLIGHTMAN_SIDESTEP              19
#define FLIGHTMAN_LOYOYO                20
#define FLIGHTMAN_HIYOYO                21
#define FLIGHTMAN_SPEEDBRAKE            22

#define FLIGHTMAN_SANDWICH              23
#define FLIGHTMAN_DEFENSIVE_SPLIT       24
#define FLIGHTMAN_INWARD_TURNABOUT      25

#define NUM_FLIGHTMANEUVERS             26


#define FLIGHTMAN_TYPE_TURNAROUND_START FLIGHTMAN_DONOTHING
#define FLIGHTMAN_TYPE_TURNAROUND_END   FLIGHTMAN_ENDOVER
#define FLIGHTMAN_TYPE_TURNAROUND_NUM (FLIGHTMAN_TYPE_TURNAROUND_END - FLIGHTMAN_TYPE_TURNAROUND_START + 1)

#define FLIGHTMAN_TYPE_AIP_START        FLIGHTMAN_NO_AIP
#define FLIGHTMAN_TYPE_AIP_END          FLIGHTMAN_ROLL180
#define FLIGHTMAN_TYPE_AIP_NUM (FLIGHTMAN_TYPE_AIP_END - FLIGHTMAN_TYPE_AIP_START + 1)

#define FLIGHTMAN_TYPE_EVASIVE_START    FLIGHTMAN_ROLLAWAY
#define FLIGHTMAN_TYPE_EVASIVE_END      FLIGHTMAN_SPEEDBRAKE
#define FLIGHTMAN_TYPE_EVASIVE_NUM (FLIGHTMAN_TYPE_EVASIVE_END - FLIGHTMAN_TYPE_EVASIVE_START + 1)

#define FLIGHTMAN_TYPE_DUAL_START       FLIGHTMAN_SANDWICH
#define FLIGHTMAN_TYPE_DUAL_END         FLIGHTMAN_INWARD_TURNABOUT
#define FLIGHTMAN_TYPE_DUAL_NUM (FLIGHTMAN_TYPE_DUAL_END - FLIGHTMAN_TYPE_DUAL_START + 1)

#endif
