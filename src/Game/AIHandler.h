// =============================================================================
//  AIHandler.h
// =============================================================================
//  Copyright Relic Entertainment, Inc. All rights reserved.
//  Created 6/19/1998 by fpoiker
// =============================================================================

#ifndef ___AIHANDLER_H
#define ___AIHANDLER_H

#include "AITeam.h"

#define GENERIC_STRENGTHRATIO   1.5

/*=============================================================================
    Function Prototypes:
=============================================================================*/
void aihGenericEmptyFuelHandler(AITeam *team);
void aihSwarmerEmptyFuelHandler(AITeam *team);
void aihGenericFuelLowHandler(AITeam *team);
void aihHarassNumbersLowHandler(AITeam *team);
void aihHarassFiringSingleShipHandler(AITeam *team);
void aihHarassDisengageSingleShipHandler(AITeam *team);
void aihKamikazeHealthLowHandler(AITeam *team);
void aihFastDefenseNumbersLowHandler(AITeam *team);
void aihSlowDefenseNumbersLowHandler(AITeam *team);
void aihGenericGettingRockedHandler(AITeam *team, SelectCommand *ships);
void aihPatrolEnemyNearbyHandler(AITeam *team, SelectCommand *ships);
void aihGravWellEnemyNearbyHandler(AITeam *team, SelectCommand *ships);
void aihGravWellEnemyNotNearbyHandler(AITeam *team);
void aihFastDefenseDistressHandler(AITeam *team, udword *intvar);
void aihSlowDefenseDistressHandler(AITeam *team, udword *intvar);

//team died handlers
void aihFastDefenseTeamDiedHandler(AITeam *team);
void aihSlowDefenseTeamDiedHandler(AITeam *team);
void aihGuardShipsTeamDiedHandler(AITeam *team);
void aihReconaissanceTeamDiedHandler(AITeam *team);
void aihReconShipTeamDiedHandler(AITeam *team);
void aihHarassTeamDiedHandler(AITeam *team);
void aihPatrolTeamDiedHandler(AITeam *team);
void aihRemoveTeamDiedHandler(AITeam *team);


#endif
