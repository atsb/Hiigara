// =============================================================================
//  BMP.h
// =============================================================================
//  Copyright Relic Entertainment, Inc. All rights reserved.
//  Created 1/11/1999 by lmoloney
// =============================================================================

#ifndef ___BMP_H
#define ___BMP_H

#include "Color.h"
#include "File.h"

/*=============================================================================
    Switches:
=============================================================================*/
#ifdef HW_BUILD_FOR_DEBUGGING

#define BMP_ERROR_CHECKING      1               //basic error checking
#define BMP_VERBOSE_LEVEL       1               //control verbose printing

#else

#define BMP_ERROR_CHECKING      0               //basic error checking
#define BMP_VERBOSE_LEVEL       0               //control verbose printing

#endif

/*=============================================================================
    Definitions:
=============================================================================*/
#define BMP_Ident       0x4d42
/*=============================================================================
    Type definitions:
=============================================================================*/

//because these images use structures with 2-byte boundaries, let's set the
//structure packing to words for this file only.
#ifdef _WIN32_FIX_ME
 #pragma warning( disable : 4103 )
 #pragma pack(push, 2)
#endif

//from windows.h, the definition for the header of a .bmp
typedef struct
{
    uword  ident;
    ubyte someMiscCrap[16];
    sdword biWidth;
    sdword biHeight;
    sword  biPlanes;
    sword  biBitCount;
    udword biCompression;
    udword biSizeImage;
    sdword biXPelsPerMeter;
    sdword biYPelsPerMeter;
    udword biClrUsed;
    udword biClrImportant;
} bmpheader;

//because these images use structures with 2-byte boundaries, let's set the
//structure packing to words for this file only.
#ifdef _WIN32_FIX_ME
 #pragma pack(pop)
#endif

/*=============================================================================
    Macros:
=============================================================================*/
#define bmpClose(handle)    fileClose(handle)

/*=============================================================================
    Functions:
=============================================================================*/
filehandle bmpFileOpen(bmpheader *header, char *fileName);
void bmpBodyRead(color *dest, filehandle handle, bmpheader *header);

#endif
