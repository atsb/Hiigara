// =============================================================================
//  Clamp.h
// =============================================================================
//  Copyright Relic Entertainment, Inc. All rights reserved.
//  Created 5/8/1998 by bpasechn
// =============================================================================

#ifndef ___CLAMP_H
#define ___CLAMP_H

#include "SpaceObj.h"

// to expand clamping to others than just ships, must modify line
// in univupdate to check for more than just ships with clamp status

void clampObjToObj(SpaceObjRotImpTargGuidance *obj,SpaceObjRotImpTargGuidance *dest);
void unClampObj(SpaceObjRotImpTargGuidance *obj);
void updateClampedObject(SpaceObjRotImpTargGuidance *obj);

#endif
