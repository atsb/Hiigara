/*=============================================================================
    REGKEY.H: Registry key definitions for Homeworld.

    Created Sept 1999 by Janik Joire
=============================================================================*/

#ifndef ___REGKEY_H
#define ___REGKEY_H

// Do not change these registry key definitions! The installer depends on them...
#if defined(HW_GAME_DEMO)

    #define BASEKEYNAME "SOFTWARE\\Sierra On-Line\\Homeworld Downloadable"
    #define CONFIGDIR ".homeworldDownloadable"

#elif defined(HW_GAME_RAIDER_RETREAT)

    #define BASEKEYNAME "SOFTWARE\\Sierra On-Line\\Homeworld OEM"
	#define CONFIGDIR "Library/Application Support/Homeworld"

#else

    #define BASEKEYNAME "SOFTWARE\\Sierra On-Line\\Homeworld"
    #define CONFIGDIR "Library/Application Support/Homeworld"

#endif

#endif
