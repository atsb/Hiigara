/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    QSTRING = 258,                 /* QSTRING  */
    ID = 259,                      /* ID  */
    COMMENT2 = 260,                /* COMMENT2  */
    FSM = 261,                     /* FSM  */
    ENDF = 262,                    /* ENDF  */
    STATES = 263,                  /* STATES  */
    WATCH = 264,                   /* WATCH  */
    ENDW = 265,                    /* ENDW  */
    STATE = 266,                   /* STATE  */
    ENDS = 267,                    /* ENDS  */
    INITIALIZE = 268,              /* INITIALIZE  */
    ENDI = 269,                    /* ENDI  */
    IF = 270,                      /* IF  */
    ELSEIF = 271,                  /* ELSEIF  */
    ELSE = 272,                    /* ELSE  */
    ENDIF = 273,                   /* ENDIF  */
    IFONCE = 274,                  /* IFONCE  */
    ENDIFONCE = 275,               /* ENDIFONCE  */
    NUMBER = 276,                  /* NUMBER  */
    AND = 277,                     /* AND  */
    OR = 278,                      /* OR  */
    NOT = 279,                     /* NOT  */
    TEAM = 280,                    /* TEAM  */
    SHIPS = 281,                   /* SHIPS  */
    TEAMSHIPS = 282,               /* TEAMSHIPS  */
    SHIPSPOINT = 283,              /* SHIPSPOINT  */
    TEAMSPOINT = 284,              /* TEAMSPOINT  */
    VOLUMEPOINT = 285,             /* VOLUMEPOINT  */
    PATH = 286,                    /* PATH  */
    POINT = 287,                   /* POINT  */
    VOLUME = 288,                  /* VOLUME  */
    THISTEAM = 289,                /* THISTEAM  */
    THISTEAMSHIPS = 290,           /* THISTEAMSHIPS  */
    THISTEAMSPOINT = 291,          /* THISTEAMSPOINT  */
    JUMP = 292,                    /* JUMP  */
    TRUE = 293,                    /* TRUE  */
    FALSE = 294,                   /* FALSE  */
    LT = 295,                      /* LT  */
    LTE = 296,                     /* LTE  */
    EQ = 297,                      /* EQ  */
    NEQ = 298,                     /* NEQ  */
    GTE = 299,                     /* GTE  */
    GT = 300,                      /* GT  */
    FSMCREATE = 301,               /* FSMCREATE  */
    LOCALIZATION = 302,            /* LOCALIZATION  */
    ENDL = 303,                    /* ENDL  */
    LSTRING = 304,                 /* LSTRING  */
    BANG = 305,                    /* BANG  */
    UMINUS = 306                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "../../../tools/kas2c/parser.y"

    char    *string;    /* string buffer */
    int     number;     /* numeric value */

#line 174 "parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
