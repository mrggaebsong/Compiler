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
    INTEGER = 258,
    STRING = 259,
    CHARACTER = 260,
    VARIABLE = 261,
    WHILE = 262,
    IF = 263,
    RETURN = 264,
    PUTI = 265,
    PUTH = 266,
    PUTC = 267,
    PUTS = 268,
    PUTI_ = 269,
    PUTH_ = 270,
    PUTC_ = 271,
    PUTS_ = 272,
    GETI = 273,
    GETC = 274,
    GETS = 275,
    ARRAY = 276,
    ARRAY_DECLARE = 277,
    PARAM_ARRAY_DECLARE = 278,
    STRING_ARRAY_DECLARE = 279,
    IFX = 280,
    ELSE = 281,
    AND = 282,
    OR = 283,
    GE = 284,
    LE = 285,
    EQ = 286,
    NE = 287,
    UMINUS = 288
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define STRING 259
#define CHARACTER 260
#define VARIABLE 261
#define WHILE 262
#define IF 263
#define RETURN 264
#define PUTI 265
#define PUTH 266
#define PUTC 267
#define PUTS 268
#define PUTI_ 269
#define PUTH_ 270
#define PUTC_ 271
#define PUTS_ 272
#define GETI 273
#define GETC 274
#define GETS 275
#define ARRAY 276
#define ARRAY_DECLARE 277
#define PARAM_ARRAY_DECLARE 278
#define STRING_ARRAY_DECLARE 279
#define IFX 280
#define ELSE 281
#define AND 282
#define OR 283
#define GE 284
#define LE 285
#define EQ 286
#define NE 287
#define UMINUS 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "c6.y" /* yacc.c:1909  */

    int iValue;                 /* integer value */
    char *sValue;		/* address of the string */
    char *vName;                /* symbol table index */
    nodeType *nPtr;             /* node pointer */

#line 127 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
