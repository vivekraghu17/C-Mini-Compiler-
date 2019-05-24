/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT = 258,
    FLOAT = 259,
    CHAR = 260,
    DOUBLE = 261,
    VOID = 262,
    WHILE = 263,
    IF = 264,
    ELSE = 265,
    PRINTF = 266,
    STRUCT = 267,
    CLASS = 268,
    NUM = 269,
    ID = 270,
    INCLUDE = 271,
    DOT = 272,
    COUTSTR = 273,
    COUT = 274,
    ENDL = 275,
    COUTOP = 276,
    CIN = 277,
    CINOP = 278,
    ACCESS = 279,
    CUSTOM = 280,
    FNAME = 281,
    NFNAM = 282,
    AND = 283,
    OR = 284,
    LE = 285,
    GE = 286,
    EQ = 287,
    NE = 288,
    LT = 289,
    GT = 290
  };
#endif
/* Tokens.  */
#define INT 258
#define FLOAT 259
#define CHAR 260
#define DOUBLE 261
#define VOID 262
#define WHILE 263
#define IF 264
#define ELSE 265
#define PRINTF 266
#define STRUCT 267
#define CLASS 268
#define NUM 269
#define ID 270
#define INCLUDE 271
#define DOT 272
#define COUTSTR 273
#define COUT 274
#define ENDL 275
#define COUTOP 276
#define CIN 277
#define CINOP 278
#define ACCESS 279
#define CUSTOM 280
#define FNAME 281
#define NFNAM 282
#define AND 283
#define OR 284
#define LE 285
#define GE 286
#define EQ 287
#define NE 288
#define LT 289
#define GT 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
