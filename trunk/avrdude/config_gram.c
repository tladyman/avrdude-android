/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 22 "config_gram.y" /* yacc.c:339  */


#include "ac_cfg.h"

#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "avrdude.h"

#include "config.h"
#include "lists.h"
#include "par.h"
#include "serbb.h"
#include "pindefs.h"
#include "ppi.h"
#include "pgm.h"
#include "pgm_type.h"
#include "avr.h"

#if defined(WIN32NATIVE)
#define strtok_r( _s, _sep, _lasts ) \
    ( *(_lasts) = strtok( (_s), (_sep) ) )
#endif

int yylex(void);
int yyerror(char * errmsg);

static int assign_pin(int pinno, TOKEN * v, int invert);
static int which_opcode(TOKEN * opcode);
static int parse_cmdbits(OPCODE * op);

static int pin_name;

#line 101 "config_gram.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    K_READ = 258,
    K_WRITE = 259,
    K_READ_LO = 260,
    K_READ_HI = 261,
    K_WRITE_LO = 262,
    K_WRITE_HI = 263,
    K_LOADPAGE_LO = 264,
    K_LOADPAGE_HI = 265,
    K_LOAD_EXT_ADDR = 266,
    K_WRITEPAGE = 267,
    K_CHIP_ERASE = 268,
    K_PGM_ENABLE = 269,
    K_MEMORY = 270,
    K_PAGE_SIZE = 271,
    K_PAGED = 272,
    K_BAUDRATE = 273,
    K_BS2 = 274,
    K_BUFF = 275,
    K_CHIP_ERASE_DELAY = 276,
    K_CONNTYPE = 277,
    K_DEDICATED = 278,
    K_DEFAULT_PARALLEL = 279,
    K_DEFAULT_PROGRAMMER = 280,
    K_DEFAULT_SERIAL = 281,
    K_DEFAULT_BITCLOCK = 282,
    K_DESC = 283,
    K_DEVICECODE = 284,
    K_STK500_DEVCODE = 285,
    K_AVR910_DEVCODE = 286,
    K_EEPROM = 287,
    K_ERRLED = 288,
    K_FLASH = 289,
    K_ID = 290,
    K_IO = 291,
    K_LOADPAGE = 292,
    K_MAX_WRITE_DELAY = 293,
    K_MCU_BASE = 294,
    K_MIN_WRITE_DELAY = 295,
    K_MISO = 296,
    K_MOSI = 297,
    K_NUM_PAGES = 298,
    K_NVM_BASE = 299,
    K_OFFSET = 300,
    K_PAGEL = 301,
    K_PARALLEL = 302,
    K_PARENT = 303,
    K_PART = 304,
    K_PGMLED = 305,
    K_PROGRAMMER = 306,
    K_PSEUDO = 307,
    K_PWROFF_AFTER_WRITE = 308,
    K_RDYLED = 309,
    K_READBACK_P1 = 310,
    K_READBACK_P2 = 311,
    K_READMEM = 312,
    K_RESET = 313,
    K_RETRY_PULSE = 314,
    K_SERIAL = 315,
    K_SCK = 316,
    K_SIGNATURE = 317,
    K_SIZE = 318,
    K_USB = 319,
    K_USBDEV = 320,
    K_USBSN = 321,
    K_USBPID = 322,
    K_USBPRODUCT = 323,
    K_USBVENDOR = 324,
    K_USBVID = 325,
    K_TYPE = 326,
    K_VCC = 327,
    K_VFYLED = 328,
    K_NO = 329,
    K_YES = 330,
    K_TIMEOUT = 331,
    K_STABDELAY = 332,
    K_CMDEXEDELAY = 333,
    K_HVSPCMDEXEDELAY = 334,
    K_SYNCHLOOPS = 335,
    K_BYTEDELAY = 336,
    K_POLLVALUE = 337,
    K_POLLINDEX = 338,
    K_PREDELAY = 339,
    K_POSTDELAY = 340,
    K_POLLMETHOD = 341,
    K_MODE = 342,
    K_DELAY = 343,
    K_BLOCKSIZE = 344,
    K_READSIZE = 345,
    K_HVENTERSTABDELAY = 346,
    K_PROGMODEDELAY = 347,
    K_LATCHCYCLES = 348,
    K_TOGGLEVTG = 349,
    K_POWEROFFDELAY = 350,
    K_RESETDELAYMS = 351,
    K_RESETDELAYUS = 352,
    K_HVLEAVESTABDELAY = 353,
    K_RESETDELAY = 354,
    K_SYNCHCYCLES = 355,
    K_HVCMDEXEDELAY = 356,
    K_CHIPERASEPULSEWIDTH = 357,
    K_CHIPERASEPOLLTIMEOUT = 358,
    K_CHIPERASETIME = 359,
    K_PROGRAMFUSEPULSEWIDTH = 360,
    K_PROGRAMFUSEPOLLTIMEOUT = 361,
    K_PROGRAMLOCKPULSEWIDTH = 362,
    K_PROGRAMLOCKPOLLTIMEOUT = 363,
    K_PP_CONTROLSTACK = 364,
    K_HVSP_CONTROLSTACK = 365,
    K_ALLOWFULLPAGEBITSTREAM = 366,
    K_ENABLEPAGEPROGRAMMING = 367,
    K_HAS_JTAG = 368,
    K_HAS_DW = 369,
    K_HAS_PDI = 370,
    K_HAS_TPI = 371,
    K_IDR = 372,
    K_IS_AT90S1200 = 373,
    K_IS_AVR32 = 374,
    K_RAMPZ = 375,
    K_SPMCR = 376,
    K_EECR = 377,
    K_FLASH_INSTR = 378,
    K_EEPROM_INSTR = 379,
    TKN_COMMA = 380,
    TKN_EQUAL = 381,
    TKN_SEMI = 382,
    TKN_TILDE = 383,
    TKN_NUMBER = 384,
    TKN_STRING = 385
  };
#endif
/* Tokens.  */
#define K_READ 258
#define K_WRITE 259
#define K_READ_LO 260
#define K_READ_HI 261
#define K_WRITE_LO 262
#define K_WRITE_HI 263
#define K_LOADPAGE_LO 264
#define K_LOADPAGE_HI 265
#define K_LOAD_EXT_ADDR 266
#define K_WRITEPAGE 267
#define K_CHIP_ERASE 268
#define K_PGM_ENABLE 269
#define K_MEMORY 270
#define K_PAGE_SIZE 271
#define K_PAGED 272
#define K_BAUDRATE 273
#define K_BS2 274
#define K_BUFF 275
#define K_CHIP_ERASE_DELAY 276
#define K_CONNTYPE 277
#define K_DEDICATED 278
#define K_DEFAULT_PARALLEL 279
#define K_DEFAULT_PROGRAMMER 280
#define K_DEFAULT_SERIAL 281
#define K_DEFAULT_BITCLOCK 282
#define K_DESC 283
#define K_DEVICECODE 284
#define K_STK500_DEVCODE 285
#define K_AVR910_DEVCODE 286
#define K_EEPROM 287
#define K_ERRLED 288
#define K_FLASH 289
#define K_ID 290
#define K_IO 291
#define K_LOADPAGE 292
#define K_MAX_WRITE_DELAY 293
#define K_MCU_BASE 294
#define K_MIN_WRITE_DELAY 295
#define K_MISO 296
#define K_MOSI 297
#define K_NUM_PAGES 298
#define K_NVM_BASE 299
#define K_OFFSET 300
#define K_PAGEL 301
#define K_PARALLEL 302
#define K_PARENT 303
#define K_PART 304
#define K_PGMLED 305
#define K_PROGRAMMER 306
#define K_PSEUDO 307
#define K_PWROFF_AFTER_WRITE 308
#define K_RDYLED 309
#define K_READBACK_P1 310
#define K_READBACK_P2 311
#define K_READMEM 312
#define K_RESET 313
#define K_RETRY_PULSE 314
#define K_SERIAL 315
#define K_SCK 316
#define K_SIGNATURE 317
#define K_SIZE 318
#define K_USB 319
#define K_USBDEV 320
#define K_USBSN 321
#define K_USBPID 322
#define K_USBPRODUCT 323
#define K_USBVENDOR 324
#define K_USBVID 325
#define K_TYPE 326
#define K_VCC 327
#define K_VFYLED 328
#define K_NO 329
#define K_YES 330
#define K_TIMEOUT 331
#define K_STABDELAY 332
#define K_CMDEXEDELAY 333
#define K_HVSPCMDEXEDELAY 334
#define K_SYNCHLOOPS 335
#define K_BYTEDELAY 336
#define K_POLLVALUE 337
#define K_POLLINDEX 338
#define K_PREDELAY 339
#define K_POSTDELAY 340
#define K_POLLMETHOD 341
#define K_MODE 342
#define K_DELAY 343
#define K_BLOCKSIZE 344
#define K_READSIZE 345
#define K_HVENTERSTABDELAY 346
#define K_PROGMODEDELAY 347
#define K_LATCHCYCLES 348
#define K_TOGGLEVTG 349
#define K_POWEROFFDELAY 350
#define K_RESETDELAYMS 351
#define K_RESETDELAYUS 352
#define K_HVLEAVESTABDELAY 353
#define K_RESETDELAY 354
#define K_SYNCHCYCLES 355
#define K_HVCMDEXEDELAY 356
#define K_CHIPERASEPULSEWIDTH 357
#define K_CHIPERASEPOLLTIMEOUT 358
#define K_CHIPERASETIME 359
#define K_PROGRAMFUSEPULSEWIDTH 360
#define K_PROGRAMFUSEPOLLTIMEOUT 361
#define K_PROGRAMLOCKPULSEWIDTH 362
#define K_PROGRAMLOCKPOLLTIMEOUT 363
#define K_PP_CONTROLSTACK 364
#define K_HVSP_CONTROLSTACK 365
#define K_ALLOWFULLPAGEBITSTREAM 366
#define K_ENABLEPAGEPROGRAMMING 367
#define K_HAS_JTAG 368
#define K_HAS_DW 369
#define K_HAS_PDI 370
#define K_HAS_TPI 371
#define K_IDR 372
#define K_IS_AT90S1200 373
#define K_IS_AVR32 374
#define K_RAMPZ 375
#define K_SPMCR 376
#define K_EECR 377
#define K_FLASH_INSTR 378
#define K_EEPROM_INSTR 379
#define TKN_COMMA 380
#define TKN_EQUAL 381
#define TKN_SEMI 382
#define TKN_TILDE 383
#define TKN_NUMBER 384
#define TKN_STRING 385

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 412 "config_gram.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  131
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   209,   209,   210,   214,   215,   220,   222,   224,   230,
     236,   242,   250,   282,   288,   306,   371,   377,   396,   397,
     402,   403,   407,   408,   412,   422,   424,   426,   428,   430,
     435,   444,   448,   459,   469,   473,   474,   475,   479,   486,
     492,   498,   505,   512,   522,   524,   526,   530,   547,   553,
     553,   554,   554,   555,   555,   556,   556,   557,   557,   558,
     558,   559,   559,   560,   560,   561,   561,   562,   562,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   582,   583,   588,   588,   592,   592,   596,   596,   600,
     607,   614,   624,   631,   638,   649,   683,   717,   750,   783,
     789,   795,   801,   811,   817,   823,   829,   835,   841,   847,
     853,   859,   865,   871,   877,   883,   889,   895,   901,   907,
     913,   919,   925,   931,   937,   943,   949,   955,   961,   967,
     973,   979,   989,   999,  1009,  1019,  1029,  1039,  1049,  1059,
    1065,  1071,  1077,  1083,  1089,  1095,  1105,  1124,  1148,  1147,
    1167,  1190,  1190,  1195,  1196,  1201,  1207,  1214,  1220,  1226,
    1232,  1238,  1244,  1250,  1256,  1263,  1269,  1275,  1281,  1287,
    1294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "K_READ", "K_WRITE", "K_READ_LO",
  "K_READ_HI", "K_WRITE_LO", "K_WRITE_HI", "K_LOADPAGE_LO",
  "K_LOADPAGE_HI", "K_LOAD_EXT_ADDR", "K_WRITEPAGE", "K_CHIP_ERASE",
  "K_PGM_ENABLE", "K_MEMORY", "K_PAGE_SIZE", "K_PAGED", "K_BAUDRATE",
  "K_BS2", "K_BUFF", "K_CHIP_ERASE_DELAY", "K_CONNTYPE", "K_DEDICATED",
  "K_DEFAULT_PARALLEL", "K_DEFAULT_PROGRAMMER", "K_DEFAULT_SERIAL",
  "K_DEFAULT_BITCLOCK", "K_DESC", "K_DEVICECODE", "K_STK500_DEVCODE",
  "K_AVR910_DEVCODE", "K_EEPROM", "K_ERRLED", "K_FLASH", "K_ID", "K_IO",
  "K_LOADPAGE", "K_MAX_WRITE_DELAY", "K_MCU_BASE", "K_MIN_WRITE_DELAY",
  "K_MISO", "K_MOSI", "K_NUM_PAGES", "K_NVM_BASE", "K_OFFSET", "K_PAGEL",
  "K_PARALLEL", "K_PARENT", "K_PART", "K_PGMLED", "K_PROGRAMMER",
  "K_PSEUDO", "K_PWROFF_AFTER_WRITE", "K_RDYLED", "K_READBACK_P1",
  "K_READBACK_P2", "K_READMEM", "K_RESET", "K_RETRY_PULSE", "K_SERIAL",
  "K_SCK", "K_SIGNATURE", "K_SIZE", "K_USB", "K_USBDEV", "K_USBSN",
  "K_USBPID", "K_USBPRODUCT", "K_USBVENDOR", "K_USBVID", "K_TYPE", "K_VCC",
  "K_VFYLED", "K_NO", "K_YES", "K_TIMEOUT", "K_STABDELAY", "K_CMDEXEDELAY",
  "K_HVSPCMDEXEDELAY", "K_SYNCHLOOPS", "K_BYTEDELAY", "K_POLLVALUE",
  "K_POLLINDEX", "K_PREDELAY", "K_POSTDELAY", "K_POLLMETHOD", "K_MODE",
  "K_DELAY", "K_BLOCKSIZE", "K_READSIZE", "K_HVENTERSTABDELAY",
  "K_PROGMODEDELAY", "K_LATCHCYCLES", "K_TOGGLEVTG", "K_POWEROFFDELAY",
  "K_RESETDELAYMS", "K_RESETDELAYUS", "K_HVLEAVESTABDELAY", "K_RESETDELAY",
  "K_SYNCHCYCLES", "K_HVCMDEXEDELAY", "K_CHIPERASEPULSEWIDTH",
  "K_CHIPERASEPOLLTIMEOUT", "K_CHIPERASETIME", "K_PROGRAMFUSEPULSEWIDTH",
  "K_PROGRAMFUSEPOLLTIMEOUT", "K_PROGRAMLOCKPULSEWIDTH",
  "K_PROGRAMLOCKPOLLTIMEOUT", "K_PP_CONTROLSTACK", "K_HVSP_CONTROLSTACK",
  "K_ALLOWFULLPAGEBITSTREAM", "K_ENABLEPAGEPROGRAMMING", "K_HAS_JTAG",
  "K_HAS_DW", "K_HAS_PDI", "K_HAS_TPI", "K_IDR", "K_IS_AT90S1200",
  "K_IS_AVR32", "K_RAMPZ", "K_SPMCR", "K_EECR", "K_FLASH_INSTR",
  "K_EEPROM_INSTR", "TKN_COMMA", "TKN_EQUAL", "TKN_SEMI", "TKN_TILDE",
  "TKN_NUMBER", "TKN_STRING", "$accept", "configuration", "config", "def",
  "prog_def", "prog_decl", "part_def", "part_decl", "string_list",
  "num_list", "prog_parms", "prog_parm", "prog_parm_type",
  "prog_parm_type_id", "prog_parm_conntype", "prog_parm_conntype_id",
  "prog_parm_usb", "pin_number", "pin_list", "prog_parm_pins", "$@1",
  "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "opcode",
  "part_parms", "reset_disposition", "parallel_modes", "retry_lines",
  "part_parm", "$@11", "yesno", "mem_specs", "mem_spec", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385
};
# endif

#define YYPACT_NINF -247

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-247)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -8,  -111,  -105,   -98,   -97,   -18,   -17,    38,    -8,  -247,
     -85,   236,   -83,    57,   -84,   -82,   -81,   -79,   -78,   -77,
    -247,  -247,  -247,   -75,   -72,   -71,   -70,   -68,   -67,   -53,
     -52,   -51,   -37,   -36,   -35,   -33,   -32,   -29,   -28,   -27,
     -26,   -24,   -20,   -19,   236,   -80,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,   -73,   -16,   -15,   -14,   -13,   -12,    -6,
      -5,    -4,    -3,    -2,    -1,     0,     2,     3,     4,     6,
      18,    19,    20,    21,    56,    58,    59,    60,    61,    62,
      64,    65,    66,    67,    81,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   107,   108,   110,   112,
     113,   114,   115,   116,    57,   -50,   117,   119,   122,   123,
    -247,  -247,   -21,  -247,   -40,    53,  -247,   121,  -247,  -247,
    -247,  -247,  -247,  -247,   127,   129,   -11,   130,   131,   124,
       1,  -247,  -247,   125,  -247,  -247,   133,   134,   135,   137,
     138,   139,   140,   143,   144,   145,   -49,    -9,   -48,   -69,
     147,   154,   155,   156,   158,   159,   160,   162,   163,   164,
     166,   167,   169,   170,   171,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   193,   194,   195,   196,
     196,   -69,   -69,   -69,   -69,   -69,   -69,   197,   -69,   -69,
     198,   199,   200,   196,   196,   121,   203,  -247,  -247,  -247,
    -247,  -247,  -247,   196,  -247,  -247,  -247,  -247,  -247,  -117,
    -247,   118,  -117,  -117,  -117,  -117,  -117,  -117,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,   196,  -117,  -247,
     192,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,   202,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,   207,   207,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,   207,   207,   118,
    -247,   207,  -247,   204,  -247,  -247,   205,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,   208,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   192,   225,   226,   227,  -247,  -247,   228,   -69,   229,
     230,   231,   232,   -69,   233,   234,   235,   237,   238,   239,
     240,   241,   121,   244,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -247,  -247,   118,  -247
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     0,    16,    13,     0,     3,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    25,    28,    27,    26,
       7,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,     0,     0,     0,     0,
      17,    14,     0,    51,     0,     0,    61,     0,    59,    57,
      65,    63,    53,    55,     0,     0,     0,     0,     0,     0,
       0,    49,    67,     0,    22,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     9,     8,
      10,    11,    30,    48,    35,    36,    37,    34,    29,    46,
      18,    24,    46,    46,    46,    46,    46,    46,    38,    41,
      40,    43,    42,    39,    33,    32,    31,    48,    46,    23,
       0,   101,    99,    90,    91,    92,    93,    89,   143,   144,
     100,    86,   152,   151,   146,    85,    83,    84,   102,    87,
      88,   147,   145,     0,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   130,   123,   124,   125,   126,   127,
     128,   129,    20,    95,    96,   137,   138,   131,   132,   133,
     134,   139,   135,   136,   140,   141,   142,    97,    98,   150,
      82,    47,    52,     0,    44,    62,     0,    60,    58,    66,
      64,    54,    56,    50,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,    45,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,    94,    21,   157,   155,   161,
     160,   158,   159,   162,   163,   164,   156,   169,   165,   166,
     167,   168,   170,   154
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -247,  -247,  -247,    37,  -247,  -247,  -247,  -247,  -214,  -191,
    -247,    83,  -247,  -247,  -247,  -247,  -247,  -153,  -138,  -247,
    -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,  -247,
    -246,  -247,  -247,  -247,  -247,   248,  -247,  -169,  -247,   -30
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,    13,   231,   321,
      44,    45,    46,   246,    47,   227,    48,   325,   322,    49,
     247,   223,   236,   237,   233,   232,   229,   235,   234,   248,
     123,   124,   268,   264,   271,   125,   250,   265,   351,   352
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
     272,   319,   244,   261,   350,   262,   263,   224,   303,   304,
     269,   323,   324,   270,   266,    14,     1,     2,     3,     4,
     225,    15,   317,   318,   226,   262,   263,   267,    16,    17,
      18,    19,   305,   306,   307,   308,   309,   310,    20,   312,
     313,     5,    22,     6,    50,    21,   126,   154,   127,   128,
     129,   132,   130,   131,   133,   134,   135,   155,   136,   137,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,   138,   139,   140,    64,   217,    65,   327,
     328,   329,   330,   331,   332,    66,    67,    68,    69,   141,
     142,   143,    70,   144,   145,   334,    71,   146,   147,   148,
     149,    72,   150,    73,    74,   350,   151,   152,   222,   333,
     156,   157,   158,   159,   160,    75,    76,    77,   240,    78,
     161,   162,   163,   164,   165,   166,   167,   153,   168,   169,
     170,   245,   171,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,   172,   173,   174,   175,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   392,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   176,   228,   177,   178,   179,   180,   181,   378,
     182,   183,   184,   185,   383,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,   186,   335,   336,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     337,   207,   338,   208,   209,   339,   210,   340,   211,   212,
     213,   214,   215,   326,   218,   341,   219,   342,   343,   220,
     221,   230,   249,   243,    23,   344,    24,   238,    25,   239,
     241,   242,   251,   252,    26,   253,   254,   255,   256,    27,
     257,    28,   258,   259,   260,   345,   273,    29,    30,   346,
     347,   348,   349,   274,   275,   276,    31,   277,   278,   279,
      32,   280,   281,   282,    33,   283,   284,    34,   285,   286,
     287,    35,    36,    37,    38,    39,    40,    41,    42,    43,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   373,   299,   300,   301,   302,   311,   314,   315,   316,
     320,   353,   354,   355,   357,   356,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,     0,   374,     0,     0,   375,   376,   377,   379,   380,
     381,   382,   384,   385,   386,     0,   387,   388,   389,   390,
     391,   393,   216
};

static const yytype_int16 yycheck[] =
{
     169,   215,     1,    52,   250,    74,    75,    47,   199,   200,
      58,   128,   129,    61,    23,   126,    24,    25,    26,    27,
      60,   126,   213,   214,    64,    74,    75,    36,   126,   126,
      48,    48,   201,   202,   203,   204,   205,   206,     0,   208,
     209,    49,   127,    51,   127,     8,   130,   127,   130,   130,
     129,   126,   130,   130,   126,   126,   126,   130,   126,   126,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,   126,   126,   126,    19,   127,    21,   232,
     233,   234,   235,   236,   237,    28,    29,    30,    31,   126,
     126,   126,    35,   126,   126,   248,    39,   126,   126,   126,
     126,    44,   126,    46,    47,   351,   126,   126,   129,   247,
     126,   126,   126,   126,   126,    58,    59,    60,   129,    62,
     126,   126,   126,   126,   126,   126,   126,    44,   126,   126,
     126,   130,   126,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,   126,   126,   126,   126,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   372,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   126,   130,   126,   126,   126,   126,   126,   358,
     126,   126,   126,   126,   363,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,   126,    16,    17,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
      38,   126,    40,   126,   126,    43,   126,    45,   126,   126,
     126,   126,   126,   125,   127,    53,   127,    55,    56,   127,
     127,   130,   127,   129,    18,    63,    20,   130,    22,   130,
     130,   130,   129,   129,    28,   130,   129,   129,   129,    33,
     130,    35,   129,   129,   129,    83,   129,    41,    42,    87,
      88,    89,    90,   129,   129,   129,    50,   129,   129,   129,
      54,   129,   129,   129,    58,   129,   129,    61,   129,   129,
     129,    65,    66,    67,    68,    69,    70,    71,    72,    73,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   351,   129,   129,   129,   129,   129,   129,   129,   129,
     127,   129,   125,   129,   126,   130,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,    -1,   127,    -1,    -1,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,    -1,   129,   129,   129,   129,
     129,   127,   124
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    25,    26,    27,    49,    51,   132,   133,   134,
     135,   136,   137,   138,   126,   126,   126,   126,    48,    48,
       0,   134,   127,    18,    20,    22,    28,    33,    35,    41,
      42,    50,    54,    58,    61,    65,    66,    67,    68,    69,
      70,    71,    72,    73,   141,   142,   143,   145,   147,   150,
     127,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    19,    21,    28,    29,    30,    31,
      35,    39,    44,    46,    47,    58,    59,    60,    62,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   161,   162,   166,   130,   130,   130,   129,
     130,   130,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   142,   127,   130,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   166,   127,   127,   127,
     127,   127,   129,   152,    47,    60,    64,   146,   130,   157,
     130,   139,   156,   155,   159,   158,   153,   154,   130,   130,
     129,   130,   130,   129,     1,   130,   144,   151,   160,   127,
     167,   129,   129,   130,   129,   129,   129,   130,   129,   129,
     129,    52,    74,    75,   164,   168,    23,    36,   163,    58,
      61,   165,   168,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   140,   140,   168,   168,   168,   168,   168,
     168,   129,   168,   168,   129,   129,   129,   140,   140,   139,
     127,   140,   149,   128,   129,   148,   125,   148,   148,   148,
     148,   148,   148,   149,   148,    16,    17,    38,    40,    43,
      45,    53,    55,    56,    63,    83,    87,    88,    89,    90,
     161,   169,   170,   129,   125,   129,   130,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   170,   127,   129,   129,   129,   168,   129,
     129,   129,   129,   168,   129,   129,   129,   129,   129,   129,
     129,   129,   139,   127
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   131,   132,   132,   133,   133,   134,   134,   134,   134,
     134,   134,   135,   136,   136,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   143,   144,   144,   145,   146,   146,   146,   147,   147,
     147,   147,   147,   147,   148,   148,   148,   149,   149,   151,
     150,   152,   150,   153,   150,   154,   150,   155,   150,   156,
     150,   157,   150,   158,   150,   159,   150,   160,   150,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   167,   166,
     166,   168,   168,   169,   169,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     2,     4,     4,
       4,     4,     2,     1,     3,     2,     1,     3,     1,     3,
       1,     3,     2,     3,     3,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     2,     0,     1,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     0,     4,
       3,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 8:
#line 224 "config_gram.y" /* yacc.c:1646  */
    {
    strncpy(default_programmer, (yyvsp[-1])->value.string, MAX_STR_CONST);
    default_programmer[MAX_STR_CONST-1] = 0;
    free_token((yyvsp[-1]));
  }
#line 1790 "config_gram.c" /* yacc.c:1646  */
    break;

  case 9:
#line 230 "config_gram.y" /* yacc.c:1646  */
    {
    strncpy(default_parallel, (yyvsp[-1])->value.string, PATH_MAX);
    default_parallel[PATH_MAX-1] = 0;
    free_token((yyvsp[-1]));
  }
#line 1800 "config_gram.c" /* yacc.c:1646  */
    break;

  case 10:
#line 236 "config_gram.y" /* yacc.c:1646  */
    {
    strncpy(default_serial, (yyvsp[-1])->value.string, PATH_MAX);
    default_serial[PATH_MAX-1] = 0;
    free_token((yyvsp[-1]));
  }
#line 1810 "config_gram.c" /* yacc.c:1646  */
    break;

  case 11:
#line 242 "config_gram.y" /* yacc.c:1646  */
    {
    default_bitclock = (yyvsp[-1])->value.number;
    free_token((yyvsp[-1]));
  }
#line 1819 "config_gram.c" /* yacc.c:1646  */
    break;

  case 12:
#line 251 "config_gram.y" /* yacc.c:1646  */
    {
      PROGRAMMER * existing_prog;
      char * id;
      if (lsize(current_prog->id) == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      if (current_prog->initpgm == NULL) {
        fprintf(stderr, "%s: error at %s:%d: programmer type not specified\n",
                progname, infile, lineno);
        exit(1);
      }
      id = ldata(lfirst(current_prog->id));
      existing_prog = locate_programmer(programmers, id);
      if (existing_prog) {
        fprintf(stderr, "%s: warning at %s:%d: programmer %s overwrites "
                "previous definition %s:%d.\n",
                progname, infile, current_prog->lineno,
                id, existing_prog->config_file, existing_prog->lineno);
        lrmv_d(programmers, existing_prog);
        pgm_free(existing_prog);
      }
      PUSH(programmers, current_prog);
      current_prog = NULL;
    }
#line 1851 "config_gram.c" /* yacc.c:1646  */
    break;

  case 13:
#line 283 "config_gram.y" /* yacc.c:1646  */
    { current_prog = pgm_new();
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
    }
#line 1860 "config_gram.c" /* yacc.c:1646  */
    break;

  case 14:
#line 289 "config_gram.y" /* yacc.c:1646  */
    {
      struct programmer_t * pgm = locate_programmer(programmers, (yyvsp[0])->value.string);
      if (pgm == NULL) {
        fprintf(stderr,
                "%s: error at %s:%d: parent programmer %s not found\n",
                progname, infile, lineno, (yyvsp[0])->value.string);
        exit(1);
      }
      current_prog = pgm_dup(pgm);
      strcpy(current_prog->config_file, infile);
      current_prog->lineno = lineno;
      free_token((yyvsp[0]));
    }
#line 1878 "config_gram.c" /* yacc.c:1646  */
    break;

  case 15:
#line 307 "config_gram.y" /* yacc.c:1646  */
    { 
      LNODEID ln;
      AVRMEM * m;
      AVRPART * existing_part;

      if (current_part->id[0] == 0) {
        fprintf(stderr,
                "%s: error at %s:%d: required parameter id not specified\n",
                progname, infile, lineno);
        exit(1);
      }

      /*
       * perform some sanity checking, and compute the number of bits
       * to shift a page for constructing the page address for
       * page-addressed memories.
       */
      for (ln=lfirst(current_part->mem); ln; ln=lnext(ln)) {
        m = ldata(ln);
        if (m->paged) {
          if (m->page_size == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify page_size for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->num_pages == 0) {
            fprintf(stderr, 
                    "%s: error at %s:%d: must specify num_pages for paged "
                    "memory\n",
                    progname, infile, lineno);
            exit(1);
          }
          if (m->size != m->page_size * m->num_pages) {
            fprintf(stderr, 
                    "%s: error at %s:%d: page size (%u) * num_pages (%u) = "
                    "%u does not match memory size (%u)\n",
                    progname, infile, lineno,
                    m->page_size, 
                    m->num_pages, 
                    m->page_size * m->num_pages,
                    m->size);
            exit(1);
          }

        }
      }

      existing_part = locate_part(part_list, current_part->id);
      if (existing_part) {
        fprintf(stderr, "%s: warning at %s:%d: part %s overwrites "
                "previous definition %s:%d.\n",
                progname, infile, current_part->lineno, current_part->id,
                existing_part->config_file, existing_part->lineno);
        lrmv_d(part_list, existing_part);
        avr_free_part(existing_part);
      }
      PUSH(part_list, current_part); 
      current_part = NULL; 
    }
#line 1944 "config_gram.c" /* yacc.c:1646  */
    break;

  case 16:
#line 372 "config_gram.y" /* yacc.c:1646  */
    {
      current_part = avr_new_part();
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;
    }
#line 1954 "config_gram.c" /* yacc.c:1646  */
    break;

  case 17:
#line 378 "config_gram.y" /* yacc.c:1646  */
    {
      AVRPART * parent_part = locate_part(part_list, (yyvsp[0])->value.string);
      if (parent_part == NULL) {
        fprintf(stderr, 
              "%s: error at %s:%d: can't find parent part",
              progname, infile, lineno);
        exit(1);
      }

      current_part = avr_dup_part(parent_part);
      strcpy(current_part->config_file, infile);
      current_part->lineno = lineno;

      free_token((yyvsp[0]));
    }
#line 1974 "config_gram.c" /* yacc.c:1646  */
    break;

  case 18:
#line 396 "config_gram.y" /* yacc.c:1646  */
    { ladd(string_list, (yyvsp[0])); }
#line 1980 "config_gram.c" /* yacc.c:1646  */
    break;

  case 19:
#line 397 "config_gram.y" /* yacc.c:1646  */
    { ladd(string_list, (yyvsp[0])); }
#line 1986 "config_gram.c" /* yacc.c:1646  */
    break;

  case 20:
#line 402 "config_gram.y" /* yacc.c:1646  */
    { ladd(number_list, (yyvsp[0])); }
#line 1992 "config_gram.c" /* yacc.c:1646  */
    break;

  case 21:
#line 403 "config_gram.y" /* yacc.c:1646  */
    { ladd(number_list, (yyvsp[0])); }
#line 1998 "config_gram.c" /* yacc.c:1646  */
    break;

  case 24:
#line 412 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      while (lsize(string_list)) {
        t = lrmv_n(string_list, 1);
        ladd(current_prog->id, dup_string(t->value.string));
        free_token(t);
      }
    }
  }
#line 2013 "config_gram.c" /* yacc.c:1646  */
    break;

  case 29:
#line 430 "config_gram.y" /* yacc.c:1646  */
    {
    strncpy(current_prog->desc, (yyvsp[0])->value.string, PGM_DESCLEN);
    current_prog->desc[PGM_DESCLEN-1] = 0;
    free_token((yyvsp[0]));
  }
#line 2023 "config_gram.c" /* yacc.c:1646  */
    break;

  case 30:
#line 435 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_prog->baudrate = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
  }
#line 2034 "config_gram.c" /* yacc.c:1646  */
    break;

  case 32:
#line 448 "config_gram.y" /* yacc.c:1646  */
    {
  const struct programmer_type_t * pgm_type = locate_programmer_type((yyvsp[0])->value.string);
    if (pgm_type == NULL) {
        fprintf(stderr,
                "%s: error at %s:%d: programmer type %s not found\n",
                progname, infile, lineno, (yyvsp[0])->value.string);
        exit(1);
    }
    current_prog->initpgm = pgm_type->initpgm;
    free_token((yyvsp[0])); 
}
#line 2050 "config_gram.c" /* yacc.c:1646  */
    break;

  case 33:
#line 460 "config_gram.y" /* yacc.c:1646  */
    {
        fprintf(stderr,
                "%s: error at %s:%d: programmer type must be written as \"id_type\"\n",
                progname, infile, lineno);
        exit(1);
}
#line 2061 "config_gram.c" /* yacc.c:1646  */
    break;

  case 35:
#line 473 "config_gram.y" /* yacc.c:1646  */
    { current_prog->conntype = CONNTYPE_PARALLEL; }
#line 2067 "config_gram.c" /* yacc.c:1646  */
    break;

  case 36:
#line 474 "config_gram.y" /* yacc.c:1646  */
    { current_prog->conntype = CONNTYPE_SERIAL; }
#line 2073 "config_gram.c" /* yacc.c:1646  */
    break;

  case 37:
#line 475 "config_gram.y" /* yacc.c:1646  */
    { current_prog->conntype = CONNTYPE_USB; }
#line 2079 "config_gram.c" /* yacc.c:1646  */
    break;

  case 38:
#line 479 "config_gram.y" /* yacc.c:1646  */
    {
    {
      strncpy(current_prog->usbdev, (yyvsp[0])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbdev[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[0]));
    }
  }
#line 2091 "config_gram.c" /* yacc.c:1646  */
    break;

  case 39:
#line 486 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_prog->usbvid = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
  }
#line 2102 "config_gram.c" /* yacc.c:1646  */
    break;

  case 40:
#line 492 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_prog->usbpid = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
  }
#line 2113 "config_gram.c" /* yacc.c:1646  */
    break;

  case 41:
#line 498 "config_gram.y" /* yacc.c:1646  */
    {
    {
      strncpy(current_prog->usbsn, (yyvsp[0])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbsn[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[0]));
    }
  }
#line 2125 "config_gram.c" /* yacc.c:1646  */
    break;

  case 42:
#line 505 "config_gram.y" /* yacc.c:1646  */
    {
    {
      strncpy(current_prog->usbvendor, (yyvsp[0])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbvendor[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[0]));
    }
  }
#line 2137 "config_gram.c" /* yacc.c:1646  */
    break;

  case 43:
#line 512 "config_gram.y" /* yacc.c:1646  */
    {
    {
      strncpy(current_prog->usbproduct, (yyvsp[0])->value.string, PGM_USBSTRINGLEN);
      current_prog->usbproduct[PGM_USBSTRINGLEN-1] = 0;
      free_token((yyvsp[0]));
    }
  }
#line 2149 "config_gram.c" /* yacc.c:1646  */
    break;

  case 44:
#line 522 "config_gram.y" /* yacc.c:1646  */
    { assign_pin(pin_name, (yyvsp[0]), 0);  }
#line 2155 "config_gram.c" /* yacc.c:1646  */
    break;

  case 45:
#line 524 "config_gram.y" /* yacc.c:1646  */
    { assign_pin(pin_name, (yyvsp[0]), 1); }
#line 2161 "config_gram.c" /* yacc.c:1646  */
    break;

  case 46:
#line 526 "config_gram.y" /* yacc.c:1646  */
    { current_prog->pinno[pin_name] = 0; }
#line 2167 "config_gram.c" /* yacc.c:1646  */
    break;

  case 47:
#line 530 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      int pin;

      current_prog->pinno[pin_name] = 0;

      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
        pin = t->value.number;
        current_prog->pinno[pin_name] |= (1 << pin);

        free_token(t);
      }
    }
  }
#line 2188 "config_gram.c" /* yacc.c:1646  */
    break;

  case 48:
#line 547 "config_gram.y" /* yacc.c:1646  */
    {
    current_prog->pinno[pin_name] = 0;
  }
#line 2196 "config_gram.c" /* yacc.c:1646  */
    break;

  case 49:
#line 553 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PPI_AVR_VCC;  }
#line 2202 "config_gram.c" /* yacc.c:1646  */
    break;

  case 51:
#line 554 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PPI_AVR_BUFF; }
#line 2208 "config_gram.c" /* yacc.c:1646  */
    break;

  case 53:
#line 555 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_AVR_RESET;}
#line 2214 "config_gram.c" /* yacc.c:1646  */
    break;

  case 54:
#line 555 "config_gram.y" /* yacc.c:1646  */
    { free_token((yyvsp[-3])); }
#line 2220 "config_gram.c" /* yacc.c:1646  */
    break;

  case 55:
#line 556 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_AVR_SCK;  }
#line 2226 "config_gram.c" /* yacc.c:1646  */
    break;

  case 56:
#line 556 "config_gram.y" /* yacc.c:1646  */
    { free_token((yyvsp[-3])); }
#line 2232 "config_gram.c" /* yacc.c:1646  */
    break;

  case 57:
#line 557 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_AVR_MOSI; }
#line 2238 "config_gram.c" /* yacc.c:1646  */
    break;

  case 59:
#line 558 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_AVR_MISO; }
#line 2244 "config_gram.c" /* yacc.c:1646  */
    break;

  case 61:
#line 559 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_LED_ERR;  }
#line 2250 "config_gram.c" /* yacc.c:1646  */
    break;

  case 63:
#line 560 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_LED_RDY;  }
#line 2256 "config_gram.c" /* yacc.c:1646  */
    break;

  case 65:
#line 561 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_LED_PGM;  }
#line 2262 "config_gram.c" /* yacc.c:1646  */
    break;

  case 67:
#line 562 "config_gram.y" /* yacc.c:1646  */
    {pin_name = PIN_LED_VFY;  }
#line 2268 "config_gram.c" /* yacc.c:1646  */
    break;

  case 89:
#line 601 "config_gram.y" /* yacc.c:1646  */
    {
      strncpy(current_part->id, (yyvsp[0])->value.string, AVR_IDLEN);
      current_part->id[AVR_IDLEN-1] = 0;
      free_token((yyvsp[0]));
    }
#line 2278 "config_gram.c" /* yacc.c:1646  */
    break;

  case 90:
#line 608 "config_gram.y" /* yacc.c:1646  */
    {
      strncpy(current_part->desc, (yyvsp[0])->value.string, AVR_DESCLEN);
      current_part->desc[AVR_DESCLEN-1] = 0;
      free_token((yyvsp[0]));
    }
#line 2288 "config_gram.c" /* yacc.c:1646  */
    break;

  case 91:
#line 614 "config_gram.y" /* yacc.c:1646  */
    {
    {
      fprintf(stderr, 
              "%s: error at %s:%d: devicecode is deprecated, use "
              "stk500_devcode instead\n",
              progname, infile, lineno);
      exit(1);
    }
  }
#line 2302 "config_gram.c" /* yacc.c:1646  */
    break;

  case 92:
#line 624 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_part->stk500_devcode = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
  }
#line 2313 "config_gram.c" /* yacc.c:1646  */
    break;

  case 93:
#line 631 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_part->avr910_devcode = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
  }
#line 2324 "config_gram.c" /* yacc.c:1646  */
    break;

  case 94:
#line 638 "config_gram.y" /* yacc.c:1646  */
    {
    {
      current_part->signature[0] = (yyvsp[-2])->value.number;
      current_part->signature[1] = (yyvsp[-1])->value.number;
      current_part->signature[2] = (yyvsp[0])->value.number;
      free_token((yyvsp[-2]));
      free_token((yyvsp[-1]));
      free_token((yyvsp[0]));
    }
  }
#line 2339 "config_gram.c" /* yacc.c:1646  */
    break;

  case 95:
#line 649 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_PP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in control stack\n",
                  progname, lineno, infile);
        }
    }
  }
#line 2377 "config_gram.c" /* yacc.c:1646  */
    break;

  case 96:
#line 683 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      current_part->ctl_stack_type = CTL_STACK_HVSP;
      nbytes = 0;
      ok = 1;

      memset(current_part->controlstack, 0, CTL_STACK_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < CTL_STACK_SIZE)
	  {
	    current_part->controlstack[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in control stack\n",
                  progname, lineno, infile);
        }
    }
  }
#line 2415 "config_gram.c" /* yacc.c:1646  */
    break;

  case 97:
#line 717 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->flash_instr, 0, FLASH_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < FLASH_INSTR_SIZE)
	  {
	    current_part->flash_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in flash instructions\n",
                  progname, lineno, infile);
        }
    }
  }
#line 2452 "config_gram.c" /* yacc.c:1646  */
    break;

  case 98:
#line 750 "config_gram.y" /* yacc.c:1646  */
    {
    {
      TOKEN * t;
      unsigned nbytes;
      int ok;

      nbytes = 0;
      ok = 1;

      memset(current_part->eeprom_instr, 0, EEPROM_INSTR_SIZE);
      while (lsize(number_list)) {
        t = lrmv_n(number_list, 1);
	if (nbytes < EEPROM_INSTR_SIZE)
	  {
	    current_part->eeprom_instr[nbytes] = t->value.number;
	    nbytes++;
	  }
	else
	  {
	    ok = 0;
	  }
        free_token(t);
      }
      if (!ok)
	{
	  fprintf(stderr,
                  "%s: Warning: line %d of %s: "
		  "too many bytes in EEPROM instructions\n",
                  progname, lineno, infile);
        }
    }
  }
#line 2489 "config_gram.c" /* yacc.c:1646  */
    break;

  case 99:
#line 784 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->chip_erase_delay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2498 "config_gram.c" /* yacc.c:1646  */
    break;

  case 100:
#line 790 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->pagel = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2507 "config_gram.c" /* yacc.c:1646  */
    break;

  case 101:
#line 796 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->bs2 = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2516 "config_gram.c" /* yacc.c:1646  */
    break;

  case 102:
#line 802 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_DEDICATED)
        current_part->reset_disposition = RESET_DEDICATED;
      else if ((yyvsp[0])->primary == K_IO)
        current_part->reset_disposition = RESET_IO;

      free_tokens(2, (yyvsp[-2]), (yyvsp[0]));
    }
#line 2529 "config_gram.c" /* yacc.c:1646  */
    break;

  case 103:
#line 812 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->timeout = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2538 "config_gram.c" /* yacc.c:1646  */
    break;

  case 104:
#line 818 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->stabdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2547 "config_gram.c" /* yacc.c:1646  */
    break;

  case 105:
#line 824 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->cmdexedelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2556 "config_gram.c" /* yacc.c:1646  */
    break;

  case 106:
#line 830 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->hvspcmdexedelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2565 "config_gram.c" /* yacc.c:1646  */
    break;

  case 107:
#line 836 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->synchloops = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2574 "config_gram.c" /* yacc.c:1646  */
    break;

  case 108:
#line 842 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->bytedelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2583 "config_gram.c" /* yacc.c:1646  */
    break;

  case 109:
#line 848 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->pollvalue = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2592 "config_gram.c" /* yacc.c:1646  */
    break;

  case 110:
#line 854 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->pollindex = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2601 "config_gram.c" /* yacc.c:1646  */
    break;

  case 111:
#line 860 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->predelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2610 "config_gram.c" /* yacc.c:1646  */
    break;

  case 112:
#line 866 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->postdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2619 "config_gram.c" /* yacc.c:1646  */
    break;

  case 113:
#line 872 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->pollmethod = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2628 "config_gram.c" /* yacc.c:1646  */
    break;

  case 114:
#line 878 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->hventerstabdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2637 "config_gram.c" /* yacc.c:1646  */
    break;

  case 115:
#line 884 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->progmodedelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2646 "config_gram.c" /* yacc.c:1646  */
    break;

  case 116:
#line 890 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->latchcycles = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2655 "config_gram.c" /* yacc.c:1646  */
    break;

  case 117:
#line 896 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->togglevtg = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2664 "config_gram.c" /* yacc.c:1646  */
    break;

  case 118:
#line 902 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->poweroffdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2673 "config_gram.c" /* yacc.c:1646  */
    break;

  case 119:
#line 908 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->resetdelayms = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2682 "config_gram.c" /* yacc.c:1646  */
    break;

  case 120:
#line 914 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->resetdelayus = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2691 "config_gram.c" /* yacc.c:1646  */
    break;

  case 121:
#line 920 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->hvleavestabdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2700 "config_gram.c" /* yacc.c:1646  */
    break;

  case 122:
#line 926 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->resetdelay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2709 "config_gram.c" /* yacc.c:1646  */
    break;

  case 123:
#line 932 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->chiperasepulsewidth = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2718 "config_gram.c" /* yacc.c:1646  */
    break;

  case 124:
#line 938 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->chiperasepolltimeout = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2727 "config_gram.c" /* yacc.c:1646  */
    break;

  case 125:
#line 944 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->chiperasetime = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2736 "config_gram.c" /* yacc.c:1646  */
    break;

  case 126:
#line 950 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->programfusepulsewidth = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2745 "config_gram.c" /* yacc.c:1646  */
    break;

  case 127:
#line 956 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->programfusepolltimeout = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2754 "config_gram.c" /* yacc.c:1646  */
    break;

  case 128:
#line 962 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->programlockpulsewidth = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2763 "config_gram.c" /* yacc.c:1646  */
    break;

  case 129:
#line 968 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->programlockpolltimeout = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2772 "config_gram.c" /* yacc.c:1646  */
    break;

  case 130:
#line 974 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->synchcycles = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2781 "config_gram.c" /* yacc.c:1646  */
    break;

  case 131:
#line 980 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_JTAG;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_JTAG;

      free_token((yyvsp[0]));
    }
#line 2794 "config_gram.c" /* yacc.c:1646  */
    break;

  case 132:
#line 990 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_DW;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_DW;

      free_token((yyvsp[0]));
    }
#line 2807 "config_gram.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1000 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_PDI;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_PDI;

      free_token((yyvsp[0]));
    }
#line 2820 "config_gram.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1010 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_HAS_TPI;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_HAS_TPI;

      free_token((yyvsp[0]));
    }
#line 2833 "config_gram.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1020 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_IS_AT90S1200;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_IS_AT90S1200;

      free_token((yyvsp[0]));
    }
#line 2846 "config_gram.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1030 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_AVR32;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_AVR32;

      free_token((yyvsp[0]));
    }
#line 2859 "config_gram.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1040 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_ALLOWFULLPAGEBITSTREAM;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_ALLOWFULLPAGEBITSTREAM;

      free_token((yyvsp[0]));
    }
#line 2872 "config_gram.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1050 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_ENABLEPAGEPROGRAMMING;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_ENABLEPAGEPROGRAMMING;

      free_token((yyvsp[0]));
    }
#line 2885 "config_gram.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1060 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->idr = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2894 "config_gram.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1066 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->rampz = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2903 "config_gram.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1072 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->spmcr = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2912 "config_gram.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1078 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->eecr = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2921 "config_gram.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1084 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->mcu_base = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2930 "config_gram.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1090 "config_gram.y" /* yacc.c:1646  */
    {
      current_part->nvm_base = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 2939 "config_gram.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1096 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES)
        current_part->flags |= AVRPART_SERIALOK;
      else if ((yyvsp[0])->primary == K_NO)
        current_part->flags &= ~AVRPART_SERIALOK;

      free_token((yyvsp[0]));
    }
#line 2952 "config_gram.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1106 "config_gram.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0])->primary == K_YES) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if ((yyvsp[0])->primary == K_NO) {
        current_part->flags &= ~AVRPART_PARALLELOK;
        current_part->flags &= ~AVRPART_PSEUDOPARALLEL;
      }
      else if ((yyvsp[0])->primary == K_PSEUDO) {
        current_part->flags |= AVRPART_PARALLELOK;
        current_part->flags |= AVRPART_PSEUDOPARALLEL;
      }


      free_token((yyvsp[0]));
    }
#line 2974 "config_gram.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1125 "config_gram.y" /* yacc.c:1646  */
    {
      switch ((yyvsp[0])->primary) {
        case K_RESET :
          current_part->retry_pulse = PIN_AVR_RESET;
          break;
        case K_SCK :
          current_part->retry_pulse = PIN_AVR_SCK;
          break;
      }

      free_token((yyvsp[-2]));
    }
#line 2991 "config_gram.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1148 "config_gram.y" /* yacc.c:1646  */
    { 
      current_mem = avr_new_memtype(); 
      strncpy(current_mem->desc, (yyvsp[0])->value.string, AVR_MEMDESCLEN); 
      current_mem->desc[AVR_MEMDESCLEN-1] = 0;
      free_token((yyvsp[0])); 
    }
#line 3002 "config_gram.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1155 "config_gram.y" /* yacc.c:1646  */
    { 
      AVRMEM * existing_mem;

      existing_mem = avr_locate_mem(current_part, current_mem->desc);
      if (existing_mem != NULL) {
        lrmv_d(current_part->mem, existing_mem);
        avr_free_mem(existing_mem);
      }
      ladd(current_part->mem, current_mem); 
      current_mem = NULL; 
    }
#line 3018 "config_gram.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1167 "config_gram.y" /* yacc.c:1646  */
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode((yyvsp[-2]));
      op = avr_new_opcode();
      parse_cmdbits(op);
      if (current_part->op[opnum] != NULL) {
        /*fprintf(stderr,
              "%s: warning at %s:%d: operation redefined\n",
              progname, infile, lineno);*/
        avr_free_opcode(current_part->op[opnum]);
      }
      current_part->op[opnum] = op;

      free_token((yyvsp[-2]));
    }
  }
#line 3042 "config_gram.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1202 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->paged = (yyvsp[0])->primary == K_YES ? 1 : 0;
      free_token((yyvsp[0]));
    }
#line 3051 "config_gram.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1208 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->size = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3060 "config_gram.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1215 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->page_size = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3069 "config_gram.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1221 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->num_pages = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3078 "config_gram.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1227 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->offset = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3087 "config_gram.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1233 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->min_write_delay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3096 "config_gram.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1239 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->max_write_delay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3105 "config_gram.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1245 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->pwroff_after_write = (yyvsp[0])->primary == K_YES ? 1 : 0;
      free_token((yyvsp[0]));
    }
#line 3114 "config_gram.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1251 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->readback[0] = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3123 "config_gram.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1257 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->readback[1] = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3132 "config_gram.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1264 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->mode = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3141 "config_gram.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1270 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->delay = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3150 "config_gram.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1276 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->blocksize = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3159 "config_gram.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1282 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->readsize = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3168 "config_gram.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1288 "config_gram.y" /* yacc.c:1646  */
    {
      current_mem->pollindex = (yyvsp[0])->value.number;
      free_token((yyvsp[0]));
    }
#line 3177 "config_gram.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1294 "config_gram.y" /* yacc.c:1646  */
    {
    { 
      int opnum;
      OPCODE * op;

      opnum = which_opcode((yyvsp[-2]));
      op = avr_new_opcode();
      parse_cmdbits(op);
      if (current_mem->op[opnum] != NULL) {
        /*fprintf(stderr,
              "%s: warning at %s:%d: operation redefined\n",
              progname, infile, lineno);*/
        avr_free_opcode(current_mem->op[opnum]);
      }
      current_mem->op[opnum] = op;

      free_token((yyvsp[-2]));
    }
  }
#line 3201 "config_gram.c" /* yacc.c:1646  */
    break;


#line 3205 "config_gram.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
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
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1316 "config_gram.y" /* yacc.c:1906  */


#if 0
static char * vtypestr(int type)
{
  switch (type) {
    case V_NUM : return "NUMERIC";
    case V_STR : return "STRING";
    default:
      return "<UNKNOWN>";
  }
}
#endif


static int assign_pin(int pinno, TOKEN * v, int invert)
{
  int value;

  value = v->value.number;
  free_token(v);

  if ((value <= 0) || (value >= 18)) {
    fprintf(stderr, 
            "%s: error at line %d of %s: pin must be in the "
            "range 1-17\n",
            progname, lineno, infile);
    exit(1);
  }
  if (invert)
    value |= PIN_INVERSE;

  current_prog->pinno[pinno] = value;

  return 0;
}

static int which_opcode(TOKEN * opcode)
{
  switch (opcode->primary) {
    case K_READ        : return AVR_OP_READ; break;
    case K_WRITE       : return AVR_OP_WRITE; break;
    case K_READ_LO     : return AVR_OP_READ_LO; break;
    case K_READ_HI     : return AVR_OP_READ_HI; break;
    case K_WRITE_LO    : return AVR_OP_WRITE_LO; break;
    case K_WRITE_HI    : return AVR_OP_WRITE_HI; break;
    case K_LOADPAGE_LO : return AVR_OP_LOADPAGE_LO; break;
    case K_LOADPAGE_HI : return AVR_OP_LOADPAGE_HI; break;
    case K_LOAD_EXT_ADDR : return AVR_OP_LOAD_EXT_ADDR; break;
    case K_WRITEPAGE   : return AVR_OP_WRITEPAGE; break;
    case K_CHIP_ERASE  : return AVR_OP_CHIP_ERASE; break;
    case K_PGM_ENABLE  : return AVR_OP_PGM_ENABLE; break;
    default :
      fprintf(stderr, 
              "%s: error at %s:%d: invalid opcode\n",
              progname, infile, lineno);
      exit(1);
      break;
  }
}


static int parse_cmdbits(OPCODE * op)
{
  TOKEN * t;
  int bitno;
  char ch;
  char * e;
  char * q;
  int len;
  char * s, *brkt = NULL;

  bitno = 32;
  while (lsize(string_list)) {

    t = lrmv_n(string_list, 1);

    s = strtok_r(t->value.string, " ", &brkt);
    while (s != NULL) {

      bitno--;
      if (bitno < 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: too many opcode bits for instruction\n",
                progname, infile, lineno);
        exit(1);
      }

      len = strlen(s);

      if (len == 0) {
        fprintf(stderr, 
                "%s: error at %s:%d: invalid bit specifier \"\"\n",
                progname, infile, lineno);
        exit(1);
      }

      ch = s[0];

      if (len == 1) {
        switch (ch) {
          case '1':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 1;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case '0':
            op->bit[bitno].type  = AVR_CMDBIT_VALUE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'x':
            op->bit[bitno].type  = AVR_CMDBIT_IGNORE;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'a':
            op->bit[bitno].type  = AVR_CMDBIT_ADDRESS;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = 8*(bitno/8) + bitno % 8;
            break;
          case 'i':
            op->bit[bitno].type  = AVR_CMDBIT_INPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          case 'o':
            op->bit[bitno].type  = AVR_CMDBIT_OUTPUT;
            op->bit[bitno].value = 0;
            op->bit[bitno].bitno = bitno % 8;
            break;
          default :
            fprintf(stderr, 
                    "%s: error at %s:%d: invalid bit specifier '%c'\n",
                    progname, infile, lineno, ch);
            exit(1);
            break;
        }
      }
      else {
        if (ch == 'a') {
          q = &s[1];
          op->bit[bitno].bitno = strtol(q, &e, 0);
          if ((e == q)||(*e != 0)) {
            fprintf(stderr, 
                    "%s: error at %s:%d: can't parse bit number from \"%s\"\n",
                    progname, infile, lineno, q);
            exit(1);
          }
          op->bit[bitno].type = AVR_CMDBIT_ADDRESS;
          op->bit[bitno].value = 0;
        }
        else {
          fprintf(stderr, 
                  "%s: error at %s:%d: invalid bit specifier \"%s\"\n",
                  progname, infile, lineno, s);
          exit(1);
        }
      }

      s = strtok_r(NULL, " ", &brkt);
    }

    free_token(t);

  }  /* while */

  return 0;
}


