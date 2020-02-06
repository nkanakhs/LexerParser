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

#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    INTEGER_CONST = 259,
    REAL_CONST = 260,
    STRING = 261,
    KW_INT = 262,
    KW_REAL = 263,
    KW_BOOL = 264,
    KW_STRING = 265,
    KW_TRUE = 266,
    KW_FALSE = 267,
    KW_IF = 268,
    KW_THEN = 269,
    KW_ELSE = 270,
    KW_FI = 271,
    KW_WHILE = 272,
    KW_LOOP = 273,
    KW_POOL = 274,
    KW_CONST = 275,
    KW_LET = 276,
    KW_RETURN = 277,
    KW_NOT = 278,
    KW_AND = 279,
    KW_OR = 280,
    KW_START = 281,
    ASSIGN = 282,
    EQUAL_OR_LESS = 283,
    NOT_EQUAL = 284,
    ARROW = 285,
    RDSTRING = 286,
    RDINT = 287,
    RDREAL = 288,
    WRTSTRING = 289,
    WRTINT = 290,
    WRTREAL = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "myparser.y" /* yacc.c:1909  */

	char* crepr;

#line 95 "myparser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */
