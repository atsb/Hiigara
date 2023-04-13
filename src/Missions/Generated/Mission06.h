//
//  Mission06.h
//
//  Finite state machine for "Mission06" mission
//
//  Copyright (C) 1998 Relic Entertainment Inc.
//  All rights reserved
//
//  This code was autogenerated from Mission06.kp by KAS2C Version 2.05sdl
//


#ifndef __Mission06_H
#define __Mission06_H


//
//  types and exposed game functions
//
#include <string.h>
#include "AIMoves.h"
#include "AITeam.h"
#include "Attributes.h"
#include "CommandWrap.h"
#include "KASFunc.h"
#include "Objectives.h"
#include "Timer.h"
#include "TradeMgr.h"
#include "Types.h"
#include "Vector.h"
#include "Volume.h"


//
//  level function pointer list
//
extern const void* Mission06_FunctionPointers[];
extern const unsigned int Mission06_FunctionPointerCount;


//
//  FSM prototypes
//
void Init_Mission06_FleetIntel(void);
void Watch_Mission06_FleetIntel(void);
void Init_Mission06_FleetIntel_FCIntro(void);
void Watch_Mission06_FleetIntel_FCIntro(void);
void Init_Mission06_FleetIntel_FIProtectMothershipLBXIn(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipLBXIn(void);
void Init_Mission06_FleetIntel_FIProtectMothershipOpenSensors(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipOpenSensors(void);
void Init_Mission06_FleetIntel_FIProtectMothership(void);
void Watch_Mission06_FleetIntel_FIProtectMothership(void);
void Init_Mission06_FleetIntel_FIProtectMothership2(void);
void Watch_Mission06_FleetIntel_FIProtectMothership2(void);
void Init_Mission06_FleetIntel_FIProtectMothership3(void);
void Watch_Mission06_FleetIntel_FIProtectMothership3(void);
void Init_Mission06_FleetIntel_FIProtectMothershipPING(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipPING(void);
void Init_Mission06_FleetIntel_FIProtectMothershipLBXOut(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipLBXOut(void);
void Init_Mission06_FleetIntel_FIProtectMothershipWAITEND(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipWAITEND(void);
void Init_Mission06_FleetIntel_FIProtectMothershipEND(void);
void Watch_Mission06_FleetIntel_FIProtectMothershipEND(void);
void Init_Mission06_FleetIntel_FIResearchCapShipDrive(void);
void Watch_Mission06_FleetIntel_FIResearchCapShipDrive(void);
void Init_Mission06_FleetIntel_FIResearchIonCannons(void);
void Watch_Mission06_FleetIntel_FIResearchIonCannons(void);
void Init_Mission06_FleetIntel_FIClearedField(void);
void Watch_Mission06_FleetIntel_FIClearedField(void);
void Init_Mission06_FleetIntel_FIBentusiArriving(void);
void Watch_Mission06_FleetIntel_FIBentusiArriving(void);
void Init_Mission06_FleetIntel_TradersHello(void);
void Watch_Mission06_FleetIntel_TradersHello(void);
void Init_Mission06_FleetIntel_TradersBringUpGUI(void);
void Watch_Mission06_FleetIntel_TradersBringUpGUI(void);
void Init_Mission06_FleetIntel_TradersFirstWarning(void);
void Watch_Mission06_FleetIntel_TradersFirstWarning(void);
void Init_Mission06_FleetIntel_FICeaseFire(void);
void Watch_Mission06_FleetIntel_FICeaseFire(void);
void Init_Mission06_FleetIntel_TradersTellPlayer(void);
void Watch_Mission06_FleetIntel_TradersTellPlayer(void);
void Init_Mission06_FleetIntel_FCGiveUsInfo(void);
void Watch_Mission06_FleetIntel_FCGiveUsInfo(void);
void Init_Mission06_FleetIntel_TradersNebulaIsBad(void);
void Watch_Mission06_FleetIntel_TradersNebulaIsBad(void);
void Init_Mission06_FleetIntel_FIModuleCharged(void);
void Watch_Mission06_FleetIntel_FIModuleCharged(void);
void Init_Mission06_FleetIntel_FIIdle(void);
void Watch_Mission06_FleetIntel_FIIdle(void);
void Init_Mission06_Traders(void);
void Watch_Mission06_Traders(void);
void Init_Mission06_Traders_Trading(void);
void Watch_Mission06_Traders_Trading(void);
void Init_Mission06_Traders_Watching(void);
void Watch_Mission06_Traders_Watching(void);
void Init_Mission06_Traders_UnderAttackWatch(void);
void Watch_Mission06_Traders_UnderAttackWatch(void);
void Init_Mission06_Traders_TradersObliteratePlayer(void);
void Watch_Mission06_Traders_TradersObliteratePlayer(void);
void Init_Mission06_Traders_HyperspaceOut(void);
void Watch_Mission06_Traders_HyperspaceOut(void);
void Init_Mission06_Traders_NullState(void);
void Watch_Mission06_Traders_NullState(void);
void Init_Mission06(void);
void Watch_Mission06(void);


#endif
