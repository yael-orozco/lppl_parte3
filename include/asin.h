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

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
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
    APAR_ = 258,                   /* APAR_  */
    CPAR_ = 259,                   /* CPAR_  */
    MAS_ = 260,                    /* MAS_  */
    MENOS_ = 261,                  /* MENOS_  */
    POR_ = 262,                    /* POR_  */
    DIV_ = 263,                    /* DIV_  */
    MOD_ = 264,                    /* MOD_  */
    IGUAL_ = 265,                  /* IGUAL_  */
    ALLAVE_ = 266,                 /* ALLAVE_  */
    CLLAVE_ = 267,                 /* CLLAVE_  */
    ACOR_ = 268,                   /* ACOR_  */
    CCOR_ = 269,                   /* CCOR_  */
    COMA_ = 270,                   /* COMA_  */
    PTO_ = 271,                    /* PTO_  */
    PTOCOMA_ = 272,                /* PTOCOMA_  */
    COMPIG_ = 273,                 /* COMPIG_  */
    COMPDIST_ = 274,               /* COMPDIST_  */
    COMPMAY_ = 275,                /* COMPMAY_  */
    COMPMAYIG_ = 276,              /* COMPMAYIG_  */
    COMPMEN_ = 277,                /* COMPMEN_  */
    COMPMENIG_ = 278,              /* COMPMENIG_  */
    OPAND_ = 279,                  /* OPAND_  */
    OPOR_ = 280,                   /* OPOR_  */
    OPINCRE_ = 281,                /* OPINCRE_  */
    OPDECRE_ = 282,                /* OPDECRE_  */
    OPNOT_ = 283,                  /* OPNOT_  */
    MASIG_ = 284,                  /* MASIG_  */
    MENOSIG_ = 285,                /* MENOSIG_  */
    PORIG_ = 286,                  /* PORIG_  */
    READ_ = 287,                   /* READ_  */
    STRUCT_ = 288,                 /* STRUCT_  */
    PRINT_ = 289,                  /* PRINT_  */
    RETURN_ = 290,                 /* RETURN_  */
    IF_ = 291,                     /* IF_  */
    ELSE_ = 292,                   /* ELSE_  */
    ELSEIF_ = 293,                 /* ELSEIF_  */
    WHILE_ = 294,                  /* WHILE_  */
    DO_ = 295,                     /* DO_  */
    INT_ = 296,                    /* INT_  */
    BOOL_ = 297,                   /* BOOL_  */
    TRUE_ = 298,                   /* TRUE_  */
    FALSE_ = 299,                  /* FALSE_  */
    ID_ = 300,                     /* ID_  */
    CTE_ = 301                     /* CTE_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "src/asin.y"

       char *ident;
       int cent;
       int t;
       struct PARAM r;
       struct STRUCT_MENOSC s;
       struct EXPRE e;
       int u;

       struct PROGRAMA p;
       struct IFW i;

#line 123 "asin.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_ASIN_H_INCLUDED  */
