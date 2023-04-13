/*=============================================================================
    Name    : Tracking.h
    Purpose : Definitions to visually track numbers on-screen.

    Created 7/21/1999 by lmoloney
    Copyright Relic Entertainment, Inc.  All rights reserved.
=============================================================================*/

#ifndef ___TRACKING_H
#define ___TRACKING_H

#include "Color.h"
#include "Types.h"

/*=============================================================================
    Switches:
=============================================================================*/

#ifdef HW_BUILD_FOR_DEBUGGING

#define NUMBER_TRACKING             1           //this module is enabled
#define TRK_ERROR_CHECKING          1           //general error checking
#define TRK_VERBOSE_LEVEL           3           //control specific output code

#else

#define NUMBER_TRACKING             0           //this module is enabled
#define TRK_ERROR_CHECKING          0           //general error checking
#define TRK_VERBOSE_LEVEL           0           //control specific output code

#endif

/*=============================================================================
    Definitions:
=============================================================================*/
#define TRK_NumberTracks            32
#define TRK_ToggleKey               NUMSTARKEY
#define TRK_TrackWidth              200

/*=============================================================================
    Type defintions:
=============================================================================*/
#if NUMBER_TRACKING
typedef struct
{
    real32 *value;
    real32 *timer;
    real32 lastValue;
    real32 lastTime;
    char *name;
    color c;
}
trackvalue;
#endif

/*=============================================================================
    Macros:
=============================================================================*/
//abstract all functions to be called through macrs
#if NUMBER_TRACKING
#define trkTrackValueAdd(name, number, timer, c)   trkTrackValueAddFn(name, number, timer, c)
#define trkTrackValueRemove(name)           trkTrackValueRemoveFn(name)
#define trkTrackValueRemoveAll()            trkTrackValueRemoveAllFn()
#define trkTrackValuesDisplay()             trkTrackValuesDisplayFn()
#else
#define trkTrackValueAdd(name, number, timer, c)
#define trkTrackValueRemove(name)
#define trkTrackValueRemoveAll()
#define trkTrackValuesDisplay()
#endif

/*=============================================================================
    Functions:
=============================================================================*/
#if NUMBER_TRACKING
void trkTrackValueAddFn(char *name, real32 *number, real32 *timer, color c);
void trkTrackValueRemoveFn(char *name);
void trkTrackValueRemoveAllFn(void);
void trkTrackValuesDisplayFn(void);
#endif


#endif
