/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     QSTRING = 258,
     ID = 259,
     COMMENT2 = 260,
     FSM = 261,
     ENDF = 262,
     STATES = 263,
     WATCH = 264,
     ENDW = 265,
     STATE = 266,
     ENDS = 267,
     INITIALIZE = 268,
     ENDI = 269,
     IF = 270,
     ELSEIF = 271,
     ELSE = 272,
     ENDIF = 273,
     IFONCE = 274,
     ENDIFONCE = 275,
     NUMBER = 276,
     AND = 277,
     OR = 278,
     NOT = 279,
     TEAM = 280,
     SHIPS = 281,
     TEAMSHIPS = 282,
     SHIPSPOINT = 283,
     TEAMSPOINT = 284,
     VOLUMEPOINT = 285,
     PATH = 286,
     POINT = 287,
     VOLUME = 288,
     THISTEAM = 289,
     THISTEAMSHIPS = 290,
     THISTEAMSPOINT = 291,
     JUMP = 292,
     TRUE = 293,
     FALSE = 294,
     LT = 295,
     LTE = 296,
     EQ = 297,
     NEQ = 298,
     GTE = 299,
     GT = 300,
     FSMCREATE = 301,
     LOCALIZATION = 302,
     ENDL = 303,
     LSTRING = 304,
     BANG = 305,
     UMINUS = 306
   };
#endif
/* Tokens.  */
#define QSTRING 258
#define ID 259
#define COMMENT2 260
#define FSM 261
#define ENDF 262
#define STATES 263
#define WATCH 264
#define ENDW 265
#define STATE 266
#define ENDS 267
#define INITIALIZE 268
#define ENDI 269
#define IF 270
#define ELSEIF 271
#define ELSE 272
#define ENDIF 273
#define IFONCE 274
#define ENDIFONCE 275
#define NUMBER 276
#define AND 277
#define OR 278
#define NOT 279
#define TEAM 280
#define SHIPS 281
#define TEAMSHIPS 282
#define SHIPSPOINT 283
#define TEAMSPOINT 284
#define VOLUMEPOINT 285
#define PATH 286
#define POINT 287
#define VOLUME 288
#define THISTEAM 289
#define THISTEAMSHIPS 290
#define THISTEAMSPOINT 291
#define JUMP 292
#define TRUE 293
#define FALSE 294
#define LT 295
#define LTE 296
#define EQ 297
#define NEQ 298
#define GTE 299
#define GT 300
#define FSMCREATE 301
#define LOCALIZATION 302
#define ENDL 303
#define LSTRING 304
#define BANG 305
#define UMINUS 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 47 "parser.y"
{
    char    *string;    /* string buffer */
    int     number;     /* numeric value */
}
/* Line 1529 of yacc.c.  */
#line 156 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

