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

#ifndef YY_YY_BC_H_INCLUDED
# define YY_YY_BC_H_INCLUDED
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
    ENDOFLINE = 258,               /* ENDOFLINE  */
    AND = 259,                     /* AND  */
    OR = 260,                      /* OR  */
    NOT = 261,                     /* NOT  */
    STRING = 262,                  /* STRING  */
    NAME = 263,                    /* NAME  */
    NUMBER = 264,                  /* NUMBER  */
    ASSIGN_OP = 265,               /* ASSIGN_OP  */
    REL_OP = 266,                  /* REL_OP  */
    INCR_DECR = 267,               /* INCR_DECR  */
    Define = 268,                  /* Define  */
    Break = 269,                   /* Break  */
    Quit = 270,                    /* Quit  */
    Length = 271,                  /* Length  */
    Return = 272,                  /* Return  */
    For = 273,                     /* For  */
    If = 274,                      /* If  */
    While = 275,                   /* While  */
    Sqrt = 276,                    /* Sqrt  */
    Else = 277,                    /* Else  */
    Scale = 278,                   /* Scale  */
    Ibase = 279,                   /* Ibase  */
    Obase = 280,                   /* Obase  */
    Auto = 281,                    /* Auto  */
    Read = 282,                    /* Read  */
    Random = 283,                  /* Random  */
    Warranty = 284,                /* Warranty  */
    Halt = 285,                    /* Halt  */
    Last = 286,                    /* Last  */
    Continue = 287,                /* Continue  */
    Print = 288,                   /* Print  */
    Limits = 289,                  /* Limits  */
    UNARY_MINUS = 290,             /* UNARY_MINUS  */
    HistoryVar = 291,              /* HistoryVar  */
    Void = 292                     /* Void  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ENDOFLINE 258
#define AND 259
#define OR 260
#define NOT 261
#define STRING 262
#define NAME 263
#define NUMBER 264
#define ASSIGN_OP 265
#define REL_OP 266
#define INCR_DECR 267
#define Define 268
#define Break 269
#define Quit 270
#define Length 271
#define Return 272
#define For 273
#define If 274
#define While 275
#define Sqrt 276
#define Else 277
#define Scale 278
#define Ibase 279
#define Obase 280
#define Auto 281
#define Read 282
#define Random 283
#define Warranty 284
#define Halt 285
#define Last 286
#define Continue 287
#define Print 288
#define Limits 289
#define UNARY_MINUS 290
#define HistoryVar 291
#define Void 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 52 "bc.y"

	char	 *s_value;
	char	  c_value;
	int	  i_value;
	arg_list *a_value;
       

#line 149 "bc.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BC_H_INCLUDED  */
