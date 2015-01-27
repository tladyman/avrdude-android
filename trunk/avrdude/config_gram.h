/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_CONFIG_GRAM_H_INCLUDED
# define YY_YY_CONFIG_GRAM_H_INCLUDED
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

#endif /* !YY_YY_CONFIG_GRAM_H_INCLUDED  */
