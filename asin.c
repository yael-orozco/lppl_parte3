/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/asin.y"

#include <stdio.h>
#include <string.h>
#include "header.h"
#include "libtds.h"
#include "libgci.h"

#line 79 "asin.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "asin.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_APAR_ = 3,                      /* APAR_  */
  YYSYMBOL_CPAR_ = 4,                      /* CPAR_  */
  YYSYMBOL_MAS_ = 5,                       /* MAS_  */
  YYSYMBOL_MENOS_ = 6,                     /* MENOS_  */
  YYSYMBOL_POR_ = 7,                       /* POR_  */
  YYSYMBOL_DIV_ = 8,                       /* DIV_  */
  YYSYMBOL_MOD_ = 9,                       /* MOD_  */
  YYSYMBOL_IGUAL_ = 10,                    /* IGUAL_  */
  YYSYMBOL_ALLAVE_ = 11,                   /* ALLAVE_  */
  YYSYMBOL_CLLAVE_ = 12,                   /* CLLAVE_  */
  YYSYMBOL_ACOR_ = 13,                     /* ACOR_  */
  YYSYMBOL_CCOR_ = 14,                     /* CCOR_  */
  YYSYMBOL_COMA_ = 15,                     /* COMA_  */
  YYSYMBOL_PTO_ = 16,                      /* PTO_  */
  YYSYMBOL_PTOCOMA_ = 17,                  /* PTOCOMA_  */
  YYSYMBOL_COMPIG_ = 18,                   /* COMPIG_  */
  YYSYMBOL_COMPDIST_ = 19,                 /* COMPDIST_  */
  YYSYMBOL_COMPMAY_ = 20,                  /* COMPMAY_  */
  YYSYMBOL_COMPMAYIG_ = 21,                /* COMPMAYIG_  */
  YYSYMBOL_COMPMEN_ = 22,                  /* COMPMEN_  */
  YYSYMBOL_COMPMENIG_ = 23,                /* COMPMENIG_  */
  YYSYMBOL_OPAND_ = 24,                    /* OPAND_  */
  YYSYMBOL_OPOR_ = 25,                     /* OPOR_  */
  YYSYMBOL_OPINCRE_ = 26,                  /* OPINCRE_  */
  YYSYMBOL_OPDECRE_ = 27,                  /* OPDECRE_  */
  YYSYMBOL_OPNOT_ = 28,                    /* OPNOT_  */
  YYSYMBOL_MASIG_ = 29,                    /* MASIG_  */
  YYSYMBOL_MENOSIG_ = 30,                  /* MENOSIG_  */
  YYSYMBOL_PORIG_ = 31,                    /* PORIG_  */
  YYSYMBOL_READ_ = 32,                     /* READ_  */
  YYSYMBOL_STRUCT_ = 33,                   /* STRUCT_  */
  YYSYMBOL_PRINT_ = 34,                    /* PRINT_  */
  YYSYMBOL_RETURN_ = 35,                   /* RETURN_  */
  YYSYMBOL_IF_ = 36,                       /* IF_  */
  YYSYMBOL_ELSE_ = 37,                     /* ELSE_  */
  YYSYMBOL_ELSEIF_ = 38,                   /* ELSEIF_  */
  YYSYMBOL_WHILE_ = 39,                    /* WHILE_  */
  YYSYMBOL_DO_ = 40,                       /* DO_  */
  YYSYMBOL_INT_ = 41,                      /* INT_  */
  YYSYMBOL_BOOL_ = 42,                     /* BOOL_  */
  YYSYMBOL_TRUE_ = 43,                     /* TRUE_  */
  YYSYMBOL_FALSE_ = 44,                    /* FALSE_  */
  YYSYMBOL_ID_ = 45,                       /* ID_  */
  YYSYMBOL_CTE_ = 46,                      /* CTE_  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_programa = 48,                  /* programa  */
  YYSYMBOL_49_1 = 49,                      /* @1  */
  YYSYMBOL_listaDeclaraciones = 50,        /* listaDeclaraciones  */
  YYSYMBOL_declaracion = 51,               /* declaracion  */
  YYSYMBOL_declaracionVar = 52,            /* declaracionVar  */
  YYSYMBOL_tipoSimple = 53,                /* tipoSimple  */
  YYSYMBOL_listaCampos = 54,               /* listaCampos  */
  YYSYMBOL_declaracionFunc = 55,           /* declaracionFunc  */
  YYSYMBOL_56_2 = 56,                      /* @2  */
  YYSYMBOL_57_3 = 57,                      /* @3  */
  YYSYMBOL_58_4 = 58,                      /* $@4  */
  YYSYMBOL_paramForm = 59,                 /* paramForm  */
  YYSYMBOL_listaParamForm = 60,            /* listaParamForm  */
  YYSYMBOL_declaracionVarLocal = 61,       /* declaracionVarLocal  */
  YYSYMBOL_listaInst = 62,                 /* listaInst  */
  YYSYMBOL_instruccion = 63,               /* instruccion  */
  YYSYMBOL_instExpre = 64,                 /* instExpre  */
  YYSYMBOL_instEntSal = 65,                /* instEntSal  */
  YYSYMBOL_instSelec = 66,                 /* instSelec  */
  YYSYMBOL_67_5 = 67,                      /* @5  */
  YYSYMBOL_68_6 = 68,                      /* @6  */
  YYSYMBOL_instIter = 69,                  /* instIter  */
  YYSYMBOL_70_7 = 70,                      /* @7  */
  YYSYMBOL_71_8 = 71,                      /* @8  */
  YYSYMBOL_expre = 72,                     /* expre  */
  YYSYMBOL_expreLogic = 73,                /* expreLogic  */
  YYSYMBOL_expreIgual = 74,                /* expreIgual  */
  YYSYMBOL_expreRel = 75,                  /* expreRel  */
  YYSYMBOL_expreAd = 76,                   /* expreAd  */
  YYSYMBOL_expreMul = 77,                  /* expreMul  */
  YYSYMBOL_expreUna = 78,                  /* expreUna  */
  YYSYMBOL_expreSufi = 79,                 /* expreSufi  */
  YYSYMBOL_80_9 = 80,                      /* $@9  */
  YYSYMBOL_const = 81,                     /* const  */
  YYSYMBOL_paramAct = 82,                  /* paramAct  */
  YYSYMBOL_listaParamAct = 83,             /* listaParamAct  */
  YYSYMBOL_84_10 = 84,                     /* $@10  */
  YYSYMBOL_opLogic = 85,                   /* opLogic  */
  YYSYMBOL_opIgual = 86,                   /* opIgual  */
  YYSYMBOL_opRel = 87,                     /* opRel  */
  YYSYMBOL_opAd = 88,                      /* opAd  */
  YYSYMBOL_opMul = 89,                     /* opMul  */
  YYSYMBOL_opUna = 90,                     /* opUna  */
  YYSYMBOL_opIncre = 91                    /* opIncre  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  161

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    45,    45,    45,    63,    66,    76,    77,    82,    90,
     101,   111,   112,   115,   122,   135,   142,   153,   134,   181,
     185,   191,   196,   205,   206,   209,   210,   213,   214,   215,
     216,   217,   220,   221,   224,   232,   241,   248,   241,   258,
     262,   258,   275,   276,   289,   306,   328,   331,   350,   353,
     374,   377,   403,   406,   417,   420,   431,   434,   455,   475,
     480,   484,   490,   509,   526,   538,   538,   563,   567,   573,
     581,   584,   589,   593,   593,   601,   604,   609,   610,   613,
     614,   615,   616,   619,   622,   627,   630,   635,   638,   641,
     646,   647
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "APAR_", "CPAR_",
  "MAS_", "MENOS_", "POR_", "DIV_", "MOD_", "IGUAL_", "ALLAVE_", "CLLAVE_",
  "ACOR_", "CCOR_", "COMA_", "PTO_", "PTOCOMA_", "COMPIG_", "COMPDIST_",
  "COMPMAY_", "COMPMAYIG_", "COMPMEN_", "COMPMENIG_", "OPAND_", "OPOR_",
  "OPINCRE_", "OPDECRE_", "OPNOT_", "MASIG_", "MENOSIG_", "PORIG_",
  "READ_", "STRUCT_", "PRINT_", "RETURN_", "IF_", "ELSE_", "ELSEIF_",
  "WHILE_", "DO_", "INT_", "BOOL_", "TRUE_", "FALSE_", "ID_", "CTE_",
  "$accept", "programa", "@1", "listaDeclaraciones", "declaracion",
  "declaracionVar", "tipoSimple", "listaCampos", "declaracionFunc", "@2",
  "@3", "$@4", "paramForm", "listaParamForm", "declaracionVarLocal",
  "listaInst", "instruccion", "instExpre", "instEntSal", "instSelec", "@5",
  "@6", "instIter", "@7", "@8", "expre", "expreLogic", "expreIgual",
  "expreRel", "expreAd", "expreMul", "expreUna", "expreSufi", "$@9",
  "const", "paramAct", "listaParamAct", "$@10", "opLogic", "opIgual",
  "opRel", "opAd", "opMul", "opUna", "opIncre", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -140,     9,   -25,  -140,    -7,  -140,  -140,   -25,  -140,  -140,
     -32,  -140,     4,  -140,    -6,   -15,   -10,   -11,  -140,    34,
      22,    13,    21,    33,     4,  -140,    53,    60,    64,    39,
      74,  -140,  -140,  -140,  -140,    71,  -140,     4,    72,  -140,
    -140,   -25,  -140,    42,    16,    -6,   144,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,    86,    88,   144,    90,  -140,  -140,
    -140,     2,  -140,  -140,  -140,  -140,  -140,  -140,    80,    29,
      38,     3,    59,    61,  -140,  -140,  -140,   156,    54,    94,
      68,    58,   144,  -140,   144,   102,   144,   144,    63,   103,
    -140,  -140,  -140,  -140,   156,  -140,  -140,   156,  -140,  -140,
    -140,  -140,   156,  -140,  -140,   156,  -140,  -140,   156,   150,
    -140,  -140,  -140,  -140,   106,   115,    99,   116,   144,  -140,
     107,   114,   144,    38,     3,    59,    61,  -140,   144,    77,
     108,   109,   118,  -140,   123,   121,   144,   113,   128,  -140,
     119,  -140,  -140,  -140,  -140,   112,  -140,   144,  -140,  -140,
    -140,  -140,  -140,   112,  -140,   144,    97,  -140,  -140,   112,
    -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,    11,    12,     3,     4,     6,
       0,     7,     0,     5,    15,     0,     0,     0,     8,     0,
       0,     0,     0,     0,    19,    13,     0,     0,     0,     0,
       0,    20,    10,    14,     9,    21,    16,     0,     0,    22,
      23,    25,    24,     0,     0,     0,     0,    87,    88,    25,
      33,    90,    91,    89,     0,     0,     0,     0,    39,    68,
      69,    61,    67,    26,    28,    29,    30,    31,     0,    42,
      46,    48,    50,    52,    54,    56,    59,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
      62,    32,    75,    76,     0,    77,    78,     0,    79,    81,
      80,    82,     0,    83,    84,     0,    85,    86,     0,    61,
      57,    58,    60,    27,     0,     0,     0,     0,     0,    43,
       0,    63,    70,    47,    49,    51,    53,    55,     0,     0,
       0,     0,     0,    36,     0,    64,     0,    72,     0,    71,
       0,    63,    34,    35,    18,     0,    40,     0,    45,    73,
      66,    64,    37,     0,    44,     0,     0,    41,    74,     0,
      38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,  -140,   129,    96,    51,  -140,  -140,  -140,
    -140,  -140,  -140,    98,  -140,    92,  -139,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,   -46,  -140,    48,    46,    43,
      47,   -74,  -140,  -140,  -140,  -140,    -1,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,   -60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,     9,    10,    16,    11,    19,
      38,   116,    30,    31,    41,    44,    63,    64,    65,    66,
     145,   156,    67,    85,   153,    68,    69,    70,    71,    72,
      73,    74,    75,    89,    76,   138,   139,   155,    94,    97,
     102,   105,   108,    77,    78
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    90,    21,   110,    12,   -65,   152,    17,     4,     3,
      83,    18,    86,    14,   157,    87,     5,     6,    88,    46,
     160,    47,    48,    98,    99,   100,   101,    49,    51,    52,
      20,     5,     6,    50,   127,    23,   115,    24,   117,    25,
     119,   120,    51,    52,    53,     5,     6,    28,    54,    90,
      55,    56,    57,    92,    93,    58,    95,    96,    26,    59,
      60,    61,    62,    15,   103,   104,    27,    22,   106,   107,
      32,    46,   134,    47,    48,    29,   137,    33,    36,    49,
     113,    34,   140,    40,    35,    50,    37,    45,    29,    81,
     148,    82,    43,    84,    51,    52,    53,    91,   112,   111,
      54,   154,    55,   114,    57,   118,   122,    58,   121,   137,
     130,    59,    60,    61,    62,    46,   132,    47,    48,   131,
     133,   135,   141,    49,   136,   142,   143,   146,   149,    50,
     144,   147,   150,   151,   159,    39,    13,    42,    51,    52,
      53,    80,   123,   124,    54,   125,    55,    46,    57,    47,
      48,    58,   126,   -65,   158,    59,    60,    61,    62,    46,
       0,    47,    48,   128,     0,     0,   129,     0,     0,     0,
      51,    52,    53,     0,     0,     0,    51,    52,     0,     0,
       0,     0,    51,    52,    53,     0,     0,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,    59,
      60,   109,    62
};

static const yytype_int16 yycheck[] =
{
      46,    61,    12,    77,    11,     3,   145,    13,    33,     0,
      56,    17,    10,    45,   153,    13,    41,    42,    16,     3,
     159,     5,     6,    20,    21,    22,    23,    11,    26,    27,
      45,    41,    42,    17,   108,    46,    82,     3,    84,    17,
      86,    87,    26,    27,    28,    41,    42,    14,    32,   109,
      34,    35,    36,    24,    25,    39,    18,    19,    45,    43,
      44,    45,    46,    12,     5,     6,    45,    16,     7,     8,
      17,     3,   118,     5,     6,    24,   122,    17,     4,    11,
      12,    17,   128,    11,    45,    17,    15,    45,    37,     3,
     136,     3,    41,     3,    26,    27,    28,    17,     4,    45,
      32,   147,    34,    45,    36,     3,     3,    39,    45,   155,
       4,    43,    44,    45,    46,     3,    17,     5,     6,     4,
       4,    14,    45,    11,    10,    17,    17,     4,    15,    17,
      12,    10,     4,    14,    37,    37,     7,    41,    26,    27,
      28,    49,    94,    97,    32,   102,    34,     3,    36,     5,
       6,    39,   105,     3,   155,    43,    44,    45,    46,     3,
      -1,     5,     6,    13,    -1,    -1,    16,    -1,    -1,    -1,
      26,    27,    28,    -1,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    45,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,    33,    41,    42,    50,    51,    52,
      53,    55,    11,    51,    45,    53,    54,    13,    17,    56,
      45,    12,    53,    46,     3,    17,    45,    45,    14,    53,
      59,    60,    17,    17,    17,    45,     4,    15,    57,    60,
      11,    61,    52,    53,    62,    45,     3,     5,     6,    11,
      17,    26,    27,    28,    32,    34,    35,    36,    39,    43,
      44,    45,    46,    63,    64,    65,    66,    69,    72,    73,
      74,    75,    76,    77,    78,    79,    81,    90,    91,    72,
      62,     3,     3,    72,     3,    70,    10,    13,    16,    80,
      91,    17,    24,    25,    85,    18,    19,    86,    20,    21,
      22,    23,    87,     5,     6,    88,     7,     8,    89,    45,
      78,    45,     4,    12,    45,    72,    58,    72,     3,    72,
      72,    45,     3,    74,    75,    76,    77,    78,    13,    16,
       4,     4,    17,     4,    72,    14,    10,    72,    82,    83,
      72,    45,    17,    17,    12,    67,     4,    10,    72,    15,
       4,    14,    63,    71,    72,    84,    68,    63,    83,    37,
      63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    48,    50,    50,    51,    51,    52,    52,
      52,    53,    53,    54,    54,    56,    57,    58,    55,    59,
      59,    60,    60,    61,    61,    62,    62,    63,    63,    63,
      63,    63,    64,    64,    65,    65,    67,    68,    66,    70,
      71,    69,    72,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    79,    81,    81,    81,
      82,    82,    83,    84,    83,    85,    85,    86,    86,    87,
      87,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      91,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     3,     6,
       6,     1,     1,     3,     4,     0,     0,     0,    15,     0,
       1,     2,     4,     0,     2,     0,     2,     3,     1,     1,
       1,     1,     2,     1,     5,     5,     0,     0,     9,     0,
       0,     7,     1,     3,     6,     5,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     2,     1,
       3,     1,     2,     3,     4,     0,     5,     1,     1,     1,
       0,     1,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* @1: %empty  */
#line 45 "src/asin.y"
       {
              dvar = 0;
              niv = 0;
              si = 0;
              cargaContexto(niv);
              (yyval.p).varglo = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgNul());
              (yyval.p).main = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
              
       }
#line 1294 "asin.c"
    break;

  case 3: /* programa: @1 listaDeclaraciones  */
#line 56 "src/asin.y"
                         {
              completaLans((yyvsp[-1].p).varglo, crArgEnt(dvar));
              completaLans((yyvsp[-1].p).main, crArgEtq((yyvsp[0].p).main));
              descargaContexto(niv);
       }
#line 1304 "asin.c"
    break;

  case 4: /* listaDeclaraciones: declaracion  */
#line 63 "src/asin.y"
                    {
              (yyval.p) = (yyvsp[0].p);
       }
#line 1312 "asin.c"
    break;

  case 5: /* listaDeclaraciones: listaDeclaraciones declaracion  */
#line 66 "src/asin.y"
                                       {
              if((yyvsp[0].p).main > 0){
                     (yyval.p).main = (yyvsp[0].p).main;
              }
              else{
                     (yyval.p).main = (yyvsp[-1].p).main;
              }
       }
#line 1325 "asin.c"
    break;

  case 7: /* declaracion: declaracionFunc  */
#line 77 "src/asin.y"
                        {
              (yyval.p) = (yyvsp[0].p);
       }
#line 1333 "asin.c"
    break;

  case 8: /* declaracionVar: tipoSimple ID_ PTOCOMA_  */
#line 82 "src/asin.y"
                                 {
              if(!insTdS((yyvsp[-1].ident), VARIABLE, (yyvsp[-2].t), niv, dvar, -1)){
                     yyerror("Identificador repetido");
              }
              else{
                     dvar += TALLA_TIPO_SIMPLE;   
              }       
       }
#line 1346 "asin.c"
    break;

  case 9: /* declaracionVar: tipoSimple ID_ ACOR_ CTE_ CCOR_ PTOCOMA_  */
#line 90 "src/asin.y"
                                                  {
              int numelem = (yyvsp[-2].cent);
              if ( (yyvsp[-2].cent) <= 0) {
                     yyerror("Talla inapropiada del array");
                     numelem = 0;
              }
              int refe = insTdA( (yyvsp[-5].t), numelem);
              if ( !insTdS( (yyvsp[-4].ident), VARIABLE, T_ARRAY, niv, dvar, refe) )
                     yyerror ("Identificador repetido");
              else dvar += numelem * TALLA_TIPO_SIMPLE;
       }
#line 1362 "asin.c"
    break;

  case 10: /* declaracionVar: STRUCT_ ALLAVE_ listaCampos CLLAVE_ ID_ PTOCOMA_  */
#line 101 "src/asin.y"
                                                         {
              if(!insTdS((yyvsp[-1].ident), VARIABLE, T_RECORD, niv, dvar, (yyvsp[-3].s).refe)){
                     yyerror("identificador estructura repetido");
              }
              else{
                     dvar += (yyvsp[-3].s).talla;
              }
       }
#line 1375 "asin.c"
    break;

  case 11: /* tipoSimple: INT_  */
#line 111 "src/asin.y"
              { (yyval.t) = T_ENTERO; }
#line 1381 "asin.c"
    break;

  case 12: /* tipoSimple: BOOL_  */
#line 112 "src/asin.y"
               { (yyval.t) = T_LOGICO; }
#line 1387 "asin.c"
    break;

  case 13: /* listaCampos: tipoSimple ID_ PTOCOMA_  */
#line 115 "src/asin.y"
                                {
              int refe = insTdR(-1, (yyvsp[-1].ident), (yyvsp[-2].t), 0);
              if(refe != -1){
                     (yyval.s).talla = TALLA_TIPO_SIMPLE;
              }
              (yyval.s).refe = refe;
       }
#line 1399 "asin.c"
    break;

  case 14: /* listaCampos: listaCampos tipoSimple ID_ PTOCOMA_  */
#line 122 "src/asin.y"
                                            {
              int refe = insTdR((yyvsp[-3].s).refe, (yyvsp[-1].ident), (yyvsp[-2].t), (yyvsp[-3].s).talla);
              if(refe != -1){
                     (yyval.s).refe = refe;
                     (yyval.s).talla = (yyvsp[-3].s).talla + TALLA_TIPO_SIMPLE;
              }
              else{
                     yyerror("Nombre de campo repetido");
              }
       }
#line 1414 "asin.c"
    break;

  case 15: /* @2: %empty  */
#line 135 "src/asin.y"
       {      
              niv++;
              cargaContexto(niv);
              (yyval.cent) = dvar;
              dvar = 0;
       }
#line 1425 "asin.c"
    break;

  case 16: /* @3: %empty  */
#line 142 "src/asin.y"
       {
              int refe = (yyvsp[-1].r).refe;
              if(!insTdS((yyvsp[-4].ident), FUNCION, (yyvsp[-5].t), niv-1, si, refe)){
                     yyerror("identificador de funcion repetido");
              }
              (yyval.e).v = si;
              emite(PUSHFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPTOP, crArgNul(), crArgNul(), crArgNul());
              (yyval.e).d = creaLans(si);
              emite(INCTOP, crArgNul(), crArgNul(), crArgNul());    
       }
#line 1441 "asin.c"
    break;

  case 17: /* $@4: %empty  */
#line 153 "src/asin.y"
                                                          {
              if((yyvsp[0].e).t != (yyvsp[-11].t)){
                     yyerror("error de tipos en el return");
              }
       }
#line 1451 "asin.c"
    break;

  case 18: /* declaracionFunc: tipoSimple ID_ @2 APAR_ paramForm CPAR_ @3 ALLAVE_ declaracionVarLocal listaInst RETURN_ expre $@4 PTOCOMA_ CLLAVE_  */
#line 158 "src/asin.y"
                        {
              int dvr = TALLA_SEGENLACES + (yyvsp[-10].r).talla + TALLA_TIPO_SIMPLE;
              emite(EASIG, crArgPos(niv, (yyvsp[-3].e).d), crArgNul(), crArgPos(niv, -dvr));
              completaLans((yyvsp[-8].e).d, crArgEnt(dvar));
              emite(TOPFP, crArgNul(), crArgNul(), crArgNul());
              emite(FPPOP, crArgNul(), crArgNul(), crArgNul());
              if(strcmp((yyvsp[-13].ident), "main") == 0){
                (yyval.p).main = (yyvsp[-8].e).v;
                emite(FIN, crArgNul(), crArgNul(), crArgNul());
              }
              else{
                emite(RET, crArgNul(), crArgNul(), crArgNul());
              }

              if(verTdS){
                     mostrarTdS();
              }
              descargaContexto(niv);
              niv--;
              dvar = (yyvsp[-12].cent);
       }
#line 1477 "asin.c"
    break;

  case 19: /* paramForm: %empty  */
#line 181 "src/asin.y"
         {
              (yyval.r).refe = insTdD(-1, T_VACIO);
              (yyval.r).talla = 0;
       }
#line 1486 "asin.c"
    break;

  case 20: /* paramForm: listaParamForm  */
#line 185 "src/asin.y"
                        {
              (yyval.r).refe = (yyvsp[0].r).refe;
              (yyval.r).talla = (yyvsp[0].r).talla - TALLA_SEGENLACES;  
       }
#line 1495 "asin.c"
    break;

  case 21: /* listaParamForm: tipoSimple ID_  */
#line 191 "src/asin.y"
                        {
              (yyval.r).refe = insTdD(-1, (yyvsp[-1].t));
              (yyval.r).talla = TALLA_SEGENLACES + TALLA_TIPO_SIMPLE;
              insTdS((yyvsp[0].ident), PARAMETRO, (yyvsp[-1].t), niv, -(yyval.r).talla, -1);
       }
#line 1505 "asin.c"
    break;

  case 22: /* listaParamForm: tipoSimple ID_ COMA_ listaParamForm  */
#line 196 "src/asin.y"
                                            {
              (yyval.r).refe = insTdD((yyvsp[0].r).refe, (yyvsp[-3].t));
              (yyval.r).talla = (yyvsp[0].r).talla + TALLA_TIPO_SIMPLE;
              if(!insTdS((yyvsp[-2].ident), PARAMETRO, (yyvsp[-3].t), niv, -(yyval.r).talla, -1)){
                     yyerror("nombre de parametro repetido");
              }
       }
#line 1517 "asin.c"
    break;

  case 34: /* instEntSal: READ_ APAR_ ID_ CPAR_ PTOCOMA_  */
#line 224 "src/asin.y"
                                       {
              SIMB sim = obtTdS((yyvsp[-2].ident));
              if(sim.t != T_ENTERO){
                     yyerror("argumento de read debe ser entero");
              }

              emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.n, sim.d));
       }
#line 1530 "asin.c"
    break;

  case 35: /* instEntSal: PRINT_ APAR_ expre CPAR_ PTOCOMA_  */
#line 232 "src/asin.y"
                                          {
              if((yyvsp[-2].e).t != T_ENTERO){
                     yyerror("argumento de print debe ser entero");
              }

              emite(EWRITE, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[-2].e).d));
       }
#line 1542 "asin.c"
    break;

  case 36: /* @5: %empty  */
#line 241 "src/asin.y"
                              {
              if((yyvsp[-1].e).t != T_LOGICO && (yyvsp[-1].e).t != T_ERROR){
                     yyerror("la expresion del if debe ser de tipo logico");
              }
              (yyval.i).ifw = creaLans(si);
              emite(EIGUAL, crArgPos(niv, (yyvsp[-1].e).d), crArgEnt(0), crArgNul());
       }
#line 1554 "asin.c"
    break;

  case 37: /* @6: %empty  */
#line 248 "src/asin.y"
                  {
              (yyval.i).fin = creaLans(si);
              emite(GOTOS, crArgNul(), crArgNul(), crArgNul());
              completaLans((yyvsp[-1].i).ifw, crArgEnt(si));
       }
#line 1564 "asin.c"
    break;

  case 38: /* instSelec: IF_ APAR_ expre CPAR_ @5 instruccion @6 ELSE_ instruccion  */
#line 253 "src/asin.y"
                        {
              completaLans((yyvsp[-2].i).fin, crArgEtq(si));
       }
#line 1572 "asin.c"
    break;

  case 39: /* @7: %empty  */
#line 258 "src/asin.y"
                {
              (yyval.i).ini = si;
       }
#line 1580 "asin.c"
    break;

  case 40: /* @8: %empty  */
#line 262 "src/asin.y"
       {
              if((yyvsp[-1].e).t != T_LOGICO){
                     yyerror("argumento de while debe ser logico");
              }
              (yyval.i).ifw = creaLans(si);
              emite(EIGUAL, crArgEnt(0), crArgPos(niv, (yyvsp[-1].e).d), crArgNul());
       }
#line 1592 "asin.c"
    break;

  case 41: /* instIter: WHILE_ @7 APAR_ expre CPAR_ @8 instruccion  */
#line 269 "src/asin.y"
                  {
              emite(GOTOS, crArgNul(), crArgNul(), crArgEtq((yyvsp[-5].i).ini));
              completaLans((yyvsp[-1].i).ifw, crArgEtq(si));
       }
#line 1601 "asin.c"
    break;

  case 43: /* expre: ID_ IGUAL_ expre  */
#line 276 "src/asin.y"
                         {
              SIMB sim = obtTdS((yyvsp[-2].ident));
              if(sim.t == T_ERROR){
                     yyerror("objeto no declarado");
              }
              else if((yyvsp[0].e).t != sim.t && (yyvsp[0].e).t != T_ERROR){
                     yyerror("error de tipos en asignacion");
              }
              else {
                     (yyval.e) = (yyvsp[0].e);
                     emite(EASIG, crArgPos(niv, (yyvsp[0].e).d), crArgNul(), crArgPos(sim.n, sim.d));
              }
       }
#line 1619 "asin.c"
    break;

  case 44: /* expre: ID_ ACOR_ expre CCOR_ IGUAL_ expre  */
#line 289 "src/asin.y"
                                           {
              SIMB sim = obtTdS((yyvsp[-5].ident));
              if(sim.t != T_ARRAY){
                     yyerror("variable debe ser de tipo array");
              }
              else if((yyvsp[-3].e).t != T_ENTERO){
                     yyerror("indice de array debe ser entero");
              }
              else if(obtTdA(sim.ref).telem != (yyvsp[0].e).t){
                     yyerror("error de tipos en asignacion de array");
              }
              else {
                     (yyval.e).t = (yyvsp[0].e).t;
                     emite(EMULT, crArgPos(niv, (yyvsp[-3].e).d), crArgEnt(TALLA_TIPO_SIMPLE), crArgPos(niv, (yyvsp[-3].e).d));
                     emite(EVA, crArgPos(sim.n, sim.d), crArgPos(niv, (yyvsp[-3].e).d), crArgPos(niv, (yyvsp[0].e).d));
              }
       }
#line 1641 "asin.c"
    break;

  case 45: /* expre: ID_ PTO_ ID_ IGUAL_ expre  */
#line 306 "src/asin.y"
                                  {
              SIMB sim = obtTdS((yyvsp[-4].ident));
              if(sim.t != T_RECORD){
                     yyerror("identificador debe ser struct");
                     (yyval.e).t = T_ERROR;
              }
              else {
                     CAMP cmp = obtTdR(sim.ref, (yyvsp[-2].ident));
                     if(cmp.t != (yyvsp[0].e).t){
                            yyerror("error en asignacion a struct");
                            (yyval.e).t = T_ERROR;
                     }
                     else {
                            (yyval.e).t = (yyvsp[0].e).t;
                            int desp = sim.d + cmp.d;
                            emite(EASIG, crArgPos(niv, (yyvsp[0].e).d), crArgNul(), crArgPos(sim.n, desp));
                     }
              }
              
       }
#line 1666 "asin.c"
    break;

  case 46: /* expreLogic: expreIgual  */
#line 328 "src/asin.y"
                   {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1674 "asin.c"
    break;

  case 47: /* expreLogic: expreLogic opLogic expreIgual  */
#line 331 "src/asin.y"
                                      {
              if(((yyvsp[0].e).t != T_LOGICO || (yyvsp[-2].e).t != T_LOGICO) && ((yyvsp[-2].e).t != T_ERROR && (yyvsp[0].e).t != T_ERROR)){
                     yyerror("error en expresion logica");
                     (yyval.e).t = T_ERROR;
              }

              if((yyvsp[-1].u) == 1){
                     (yyval.e).d = creaVarTemp();
                     emite(EMULT, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
              }
              if((yyvsp[-1].u) == 2){
                     (yyval.e).d = creaVarTemp();
                     emite(ESUM, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
                     emite(EMENEQ, crArgPos(niv, (yyval.e).d), crArgEnt(1), crArgEtq(si + 2));
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.e).d));
              }
       }
#line 1696 "asin.c"
    break;

  case 48: /* expreIgual: expreRel  */
#line 350 "src/asin.y"
                 {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1704 "asin.c"
    break;

  case 49: /* expreIgual: expreIgual opIgual expreRel  */
#line 353 "src/asin.y"
                                    {
              if((yyvsp[0].e).t != (yyvsp[-2].e).t && ((yyvsp[-2].e).t != T_ERROR && (yyvsp[0].e).t != T_ERROR)){
                     yyerror("error en expresion de igualdad");
                     (yyval.e).t = T_ERROR;
              }
              else{
                     (yyval.e).t = T_LOGICO;
                     (yyval.e).d = creaVarTemp();
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.e).d));
                     if((yyvsp[-1].u) == 1){
                            emite(EIGUAL, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     if((yyvsp[-1].u) == 2){
                            emite(EDIST, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.e).d));

              }
       }
#line 1728 "asin.c"
    break;

  case 50: /* expreRel: expreAd  */
#line 374 "src/asin.y"
                {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1736 "asin.c"
    break;

  case 51: /* expreRel: expreRel opRel expreAd  */
#line 377 "src/asin.y"
                               {
              if(((yyvsp[-2].e).t != T_ENTERO || (yyvsp[0].e).t != T_ENTERO) && ((yyvsp[-2].e).t != T_ERROR && (yyvsp[0].e).t != T_ERROR)){
                     yyerror("error en expresion relacional");
                     (yyval.e).t = T_ERROR;
              }
              else {
                     (yyval.e).t = T_LOGICO;
                     (yyval.e).d = creaVarTemp();
                     emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.e).d));
                     if((yyvsp[-1].u) == 1){
                            emite(EMAY, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     if((yyvsp[-1].u) == 2){
                            emite(EMEN, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     if((yyvsp[-1].u) == 3){
                            emite(EMAYEQ, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     if((yyvsp[-1].u) == 4){
                            emite(EMENEQ, crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgEtq(si + 2));
                     }
                     emite(EASIG, crArgEnt(0), crArgNul(), crArgPos(niv, (yyval.e).d));
              }
       }
#line 1765 "asin.c"
    break;

  case 52: /* expreAd: expreMul  */
#line 403 "src/asin.y"
                 {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1773 "asin.c"
    break;

  case 53: /* expreAd: expreAd opAd expreMul  */
#line 406 "src/asin.y"
                              {
              (yyval.e).t = T_ENTERO;
              if(((yyvsp[0].e).t != T_ENTERO || (yyvsp[-2].e).t != T_ENTERO) && ((yyvsp[-2].e).t != T_ERROR && (yyvsp[0].e).t != T_ERROR)){
                     yyerror("error en expresion aditiva");
              }

              (yyval.e).d = creaVarTemp();
              emite((yyvsp[-1].u), crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
       }
#line 1787 "asin.c"
    break;

  case 54: /* expreMul: expreUna  */
#line 417 "src/asin.y"
                 {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1795 "asin.c"
    break;

  case 55: /* expreMul: expreMul opMul expreUna  */
#line 420 "src/asin.y"
                                {
              (yyval.e).t = T_ENTERO;
              if(((yyvsp[0].e).t != T_ENTERO || (yyvsp[-2].e).t != T_ENTERO) && ((yyvsp[-2].e).t != T_ERROR && (yyvsp[0].e).t != T_ERROR)){
                     yyerror("error en expresion multiplicativa");
              }

              (yyval.e).d = creaVarTemp();
              emite((yyvsp[-1].u), crArgPos(niv, (yyvsp[-2].e).d), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
       }
#line 1809 "asin.c"
    break;

  case 56: /* expreUna: expreSufi  */
#line 431 "src/asin.y"
                  {
              (yyval.e) = (yyvsp[0].e);
       }
#line 1817 "asin.c"
    break;

  case 57: /* expreUna: opUna expreUna  */
#line 434 "src/asin.y"
                       {
              if((yyvsp[0].e).t != T_ENTERO && (yyvsp[-1].u) == 0){
                     yyerror("error en expresion unaria");
                     (yyval.e).t = T_ERROR;
              }
              else if((yyvsp[0].e).t != T_LOGICO && (yyvsp[-1].u) == 1){
                     yyerror("error en expresion unaria");
                     (yyval.e).t = T_ERROR;
              }
              else {
                     (yyval.e).t = (yyvsp[0].e).t;
                     if((yyvsp[-1].u) == 1){
                            (yyval.e).d = creaVarTemp();
                            emite(EDIF, crArgEnt(1), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
                     }
                     if((yyvsp[-1].u) == 2){
                            (yyval.e).d = creaVarTemp();
                            emite(EDIF, crArgEnt(0), crArgPos(niv, (yyvsp[0].e).d), crArgPos(niv, (yyval.e).d));
                     }
              }
       }
#line 1843 "asin.c"
    break;

  case 58: /* expreUna: opIncre ID_  */
#line 455 "src/asin.y"
                    {
              SIMB sim = obtTdS((yyvsp[0].ident));
              if(sim.t != T_ENTERO){
                     yyerror("error en operador prefijo");
              }
              else{
                     (yyval.e).t = T_ENTERO;
                     if((yyvsp[-1].u) == 1){
                            emite(ESUM, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                            (yyval.e).d = sim.d;
                     }
                     if((yyvsp[-1].u) == 2){
                            emite(EDIF, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                            (yyval.e).d = sim.d;
                     }
              }

       }
#line 1866 "asin.c"
    break;

  case 59: /* expreSufi: const  */
#line 475 "src/asin.y"
              {
              (yyval.e).t = (yyvsp[0].e).t;
              (yyval.e).d = creaVarTemp();
              emite(EASIG, crArgEnt((yyvsp[0].e).v), crArgNul(), crArgPos(niv, (yyval.e).d));
       }
#line 1876 "asin.c"
    break;

  case 60: /* expreSufi: APAR_ expre CPAR_  */
#line 480 "src/asin.y"
                          {
              (yyval.e) = (yyvsp[-1].e);
              
       }
#line 1885 "asin.c"
    break;

  case 61: /* expreSufi: ID_  */
#line 484 "src/asin.y"
            {
              SIMB sim = obtTdS((yyvsp[0].ident));
              (yyval.e).t = sim.t;
              (yyval.e).d = creaVarTemp();
              emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, (yyval.e).d));
       }
#line 1896 "asin.c"
    break;

  case 62: /* expreSufi: ID_ opIncre  */
#line 490 "src/asin.y"
                    {
              SIMB sim = obtTdS((yyvsp[-1].ident));
              if(sim.t != T_ENTERO){
                     yyerror("el identificador debe ser entero");
              }
              else{
                     (yyval.e).t = T_ENTERO;
                     if((yyvsp[0].u) == 1){
                            (yyval.e).d = creaVarTemp();
                            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, (yyval.e).d));
                            emite(ESUM, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                     }
                     if((yyvsp[0].u) == 2){
                            (yyval.e).d = creaVarTemp();
                            emite(EASIG, crArgPos(sim.n, sim.d), crArgNul(), crArgPos(niv, (yyval.e).d));
                            emite(EDIF, crArgPos(sim.n, sim.d), crArgEnt(1), crArgPos(sim.n, sim.d));
                     }
              }
       }
#line 1920 "asin.c"
    break;

  case 63: /* expreSufi: ID_ PTO_ ID_  */
#line 509 "src/asin.y"
                     {
              SIMB sim = obtTdS((yyvsp[-2].ident));
              if(sim.t != T_RECORD){
                     yyerror("identificador debe ser struct");
                     (yyval.e).t = T_ERROR;
              }
              else{
                     CAMP cmp = obtTdR(sim.ref, (yyvsp[0].ident));
                     if(cmp.t == T_ERROR){
                            yyerror("campo no declarado");
                     }
                     (yyval.e).t = cmp.t;
                     int desp = sim.d + cmp.d;
                     (yyval.e).d = creaVarTemp();
                     emite(EASIG, crArgPos(sim.n, desp), crArgNul(), crArgPos(niv, (yyval.e).d));
              }
       }
#line 1942 "asin.c"
    break;

  case 64: /* expreSufi: ID_ ACOR_ expre CCOR_  */
#line 526 "src/asin.y"
                              {
              if((yyvsp[-1].e).t != T_ENTERO){
                     yyerror("indice de array debe ser entero");
                     (yyval.e).t = T_ERROR;
              }
              SIMB sim = obtTdS((yyvsp[-3].ident));
              DIM vect = obtTdA(sim.ref);
              (yyval.e).t = vect.telem;
              emite(EMULT, crArgPos(niv, (yyvsp[-1].e).d), crArgEnt(TALLA_TIPO_SIMPLE), crArgPos(niv, (yyvsp[-1].e).d));
              (yyval.e).d = creaVarTemp();
              emite(EAV, crArgPos(sim.n, sim.d), crArgPos(niv, (yyvsp[-1].e).d), crArgPos(niv, (yyval.e).d));
       }
#line 1959 "asin.c"
    break;

  case 65: /* $@9: %empty  */
#line 538 "src/asin.y"
             {
              emite(INCTOP, crArgNul(), crArgNul(), crArgEnt(TALLA_TIPO_SIMPLE));
       }
#line 1967 "asin.c"
    break;

  case 66: /* expreSufi: ID_ $@9 APAR_ paramAct CPAR_  */
#line 541 "src/asin.y"
                           {
              SIMB sim = obtTdS((yyvsp[-4].ident));
              if(sim.c != FUNCION){
                     yyerror("variable debe ser una funcion");
                     (yyval.e).t = T_ERROR;
              }
              else if(cmpDom(sim.ref, (yyvsp[-1].r).refe) != 1){
                     yyerror("error en el dominio de los parametros actuales");
                     (yyval.e).t = T_ERROR;
              }
              else {
                     (yyval.e).t = sim.t;
                     INF tdd = obtTdD(sim.ref);
                     //emite(EPUSH, crArgNul(), crArgNul(), crArgEnt(si + 2));
                     emite(CALL, crArgNul(), crArgNul(), crArgEtq(sim.d));
                     emite(DECTOP, crArgNul(), crArgNul(), crArgEnt(tdd.tsp));
                     (yyval.e).d = creaVarTemp();
                     emite(EPOP, crArgNul(), crArgNul(), crArgPos(niv, (yyval.e).d));
              }
       }
#line 1992 "asin.c"
    break;

  case 67: /* const: CTE_  */
#line 563 "src/asin.y"
             {
              (yyval.e).t = T_ENTERO;
              (yyval.e).v = yylval.cent;
       }
#line 2001 "asin.c"
    break;

  case 68: /* const: TRUE_  */
#line 567 "src/asin.y"
              {
              (yyval.e).t = T_LOGICO;
              (yyval.e).d = creaVarTemp();
              (yyval.e).v = 1;
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.e).d));
       }
#line 2012 "asin.c"
    break;

  case 69: /* const: FALSE_  */
#line 573 "src/asin.y"
               {
              (yyval.e).t = T_LOGICO;
              (yyval.e).d = creaVarTemp();
              (yyval.e).v = 0;
              emite(EASIG, crArgEnt(1), crArgNul(), crArgPos(niv, (yyval.e).d));
       }
#line 2023 "asin.c"
    break;

  case 70: /* paramAct: %empty  */
#line 581 "src/asin.y"
         {
             (yyval.r).refe = insTdD(-1, T_VACIO); 
       }
#line 2031 "asin.c"
    break;

  case 71: /* paramAct: listaParamAct  */
#line 584 "src/asin.y"
                      {
              (yyval.r).refe = (yyvsp[0].r).refe;
       }
#line 2039 "asin.c"
    break;

  case 72: /* listaParamAct: expre  */
#line 589 "src/asin.y"
              {
              (yyval.r).refe = insTdD(-1, (yyvsp[0].e).t);
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[0].e).d));
       }
#line 2048 "asin.c"
    break;

  case 73: /* $@10: %empty  */
#line 593 "src/asin.y"
                     {
              emite(EPUSH, crArgNul(), crArgNul(), crArgPos(niv, (yyvsp[-1].e).d));
       }
#line 2056 "asin.c"
    break;

  case 74: /* listaParamAct: expre COMA_ $@10 listaParamAct  */
#line 596 "src/asin.y"
                    {
              (yyval.r).refe = insTdD((yyvsp[0].r).refe, (yyvsp[-3].e).t);
       }
#line 2064 "asin.c"
    break;

  case 75: /* opLogic: OPAND_  */
#line 601 "src/asin.y"
                {
              (yyval.u) = 1;
       }
#line 2072 "asin.c"
    break;

  case 76: /* opLogic: OPOR_  */
#line 604 "src/asin.y"
               {
              (yyval.u) = 2;
       }
#line 2080 "asin.c"
    break;

  case 77: /* opIgual: COMPIG_  */
#line 609 "src/asin.y"
                 {(yyval.u) = 1;}
#line 2086 "asin.c"
    break;

  case 78: /* opIgual: COMPDIST_  */
#line 610 "src/asin.y"
                   {(yyval.u) = 2;}
#line 2092 "asin.c"
    break;

  case 79: /* opRel: COMPMAY_  */
#line 613 "src/asin.y"
                  {(yyval.u) = 1;}
#line 2098 "asin.c"
    break;

  case 80: /* opRel: COMPMEN_  */
#line 614 "src/asin.y"
                  {(yyval.u) = 2;}
#line 2104 "asin.c"
    break;

  case 81: /* opRel: COMPMAYIG_  */
#line 615 "src/asin.y"
                    {(yyval.u) = 3;}
#line 2110 "asin.c"
    break;

  case 82: /* opRel: COMPMENIG_  */
#line 616 "src/asin.y"
                    {(yyval.u) = 4;}
#line 2116 "asin.c"
    break;

  case 83: /* opAd: MAS_  */
#line 619 "src/asin.y"
              {
            (yyval.u) = ESUM;
       }
#line 2124 "asin.c"
    break;

  case 84: /* opAd: MENOS_  */
#line 622 "src/asin.y"
                {
            (yyval.u) = EDIF;
       }
#line 2132 "asin.c"
    break;

  case 85: /* opMul: POR_  */
#line 627 "src/asin.y"
              {
              (yyval.u) = EMULT;
       }
#line 2140 "asin.c"
    break;

  case 86: /* opMul: DIV_  */
#line 630 "src/asin.y"
              {
              (yyval.u) = EDIVI;
       }
#line 2148 "asin.c"
    break;

  case 87: /* opUna: MAS_  */
#line 635 "src/asin.y"
             {
              (yyval.u) = 0;
       }
#line 2156 "asin.c"
    break;

  case 88: /* opUna: MENOS_  */
#line 638 "src/asin.y"
               {
              (yyval.u) = 2;
       }
#line 2164 "asin.c"
    break;

  case 89: /* opUna: OPNOT_  */
#line 641 "src/asin.y"
               {
              (yyval.u) = 1;
       }
#line 2172 "asin.c"
    break;

  case 90: /* opIncre: OPINCRE_  */
#line 646 "src/asin.y"
                  {(yyval.u) = 1;}
#line 2178 "asin.c"
    break;

  case 91: /* opIncre: OPDECRE_  */
#line 647 "src/asin.y"
                  {(yyval.u) = 2;}
#line 2184 "asin.c"
    break;


#line 2188 "asin.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

