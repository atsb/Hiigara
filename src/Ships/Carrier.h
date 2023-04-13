// =============================================================================
//  Carrier.h
// =============================================================================
//  Copyright Relic Entertainment, Inc. All rights reserved.
//  Created 6/30/1997 by gshaw
// =============================================================================

#ifndef ___CARRIER_H
#define ___CARRIER_H

#include "SpaceObj.h"
#include "Types.h"

typedef struct
{
    udword dummy;
    SpaceObjRotImpTargGuidanceShipDerelict *droptarget[MAX_NUM_DROP];
    sdword dropstate[MAX_NUM_DROP];
    sdword dockindex[MAX_NUM_DROP];
    sdword CAP_NumInBuildCue;
    sdword CAPshiptype[SALVAGE_MAX_CAPTURABLE];
    sdword CAPshiprace[SALVAGE_MAX_CAPTURABLE];
    real32 CAPTimeToBuildShip[SALVAGE_MAX_CAPTURABLE];
    ubyte CAPcolorScheme[SALVAGE_MAX_CAPTURABLE];
    ubyte pad[3];
} CarrierSpec;

extern CustShipHeader CarrierHeader;

#endif
