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
#line 1 "icg_grammar.y"

	// same as the usual grammar but, I edit it to make the best optimize
	#include<stdio.h>
	#include<string.h>
	#include<bits/stdc++.h>
	using namespace std;
	void yyerror(const char *s);
	extern int yylineno;
	extern char* yytext;
	int yylex();
	//int yywrap();
	
	extern int lineno;
	int list_declr_flag = 0;
	int type;
	int iset=0,fset=0,sset=0,cset=0;
	void reset_globals();
	void check_exists(char* str, int a);

	char* temp_func();
	int temp=0;
	char* ret;
	int label = 0;
	int global_next=0;
	int args_count=0;
	char* label_func();
	char* global_func();
	vector < map<string,string> > v;

#line 101 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    T_INCLUDE = 258,               /* T_INCLUDE  */
    T_IDH = 259,                   /* T_IDH  */
    T_TYPE = 260,                  /* T_TYPE  */
    T_RETURN = 261,                /* T_RETURN  */
    T_COUT = 262,                  /* T_COUT  */
    T_CIN = 263,                   /* T_CIN  */
    T_IDENTIFIER = 264,            /* T_IDENTIFIER  */
    T_ADDEQ = 265,                 /* T_ADDEQ  */
    T_MINEQ = 266,                 /* T_MINEQ  */
    T_MULEQ = 267,                 /* T_MULEQ  */
    T_DIVEQ = 268,                 /* T_DIVEQ  */
    T_FOR = 269,                   /* T_FOR  */
    T_IF = 270,                    /* T_IF  */
    T_ELSE = 271,                  /* T_ELSE  */
    T_LTEQ = 272,                  /* T_LTEQ  */
    T_GTEQ = 273,                  /* T_GTEQ  */
    T_NEQEQ = 274,                 /* T_NEQEQ  */
    T_EQEQ = 275,                  /* T_EQEQ  */
    T_OROR = 276,                  /* T_OROR  */
    T_ANDAND = 277,                /* T_ANDAND  */
    T_OR = 278,                    /* T_OR  */
    T_AND = 279,                   /* T_AND  */
    T_XOR = 280,                   /* T_XOR  */
    T_LRSHIFT = 281,               /* T_LRSHIFT  */
    T_LLSHIFT = 282,               /* T_LLSHIFT  */
    T_WHILE = 283,                 /* T_WHILE  */
    T_MAIN = 284,                  /* T_MAIN  */
    T_STRING = 285,                /* T_STRING  */
    T_STRUCT = 286,                /* T_STRUCT  */
    T_CLASS = 287,                 /* T_CLASS  */
    T_PRIVATE = 288,               /* T_PRIVATE  */
    T_PUBLIC = 289,                /* T_PUBLIC  */
    T_PROTECTED = 290,             /* T_PROTECTED  */
    T_ADDADD = 291,                /* T_ADDADD  */
    T_MINMIN = 292,                /* T_MINMIN  */
    T_STRING_VAL = 293,            /* T_STRING_VAL  */
    T_CHAR_VAL = 294,              /* T_CHAR_VAL  */
    T_INTEGER_VAL = 295,           /* T_INTEGER_VAL  */
    T_FLOAT_VAL = 296              /* T_FLOAT_VAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INCLUDE 258
#define T_IDH 259
#define T_TYPE 260
#define T_RETURN 261
#define T_COUT 262
#define T_CIN 263
#define T_IDENTIFIER 264
#define T_ADDEQ 265
#define T_MINEQ 266
#define T_MULEQ 267
#define T_DIVEQ 268
#define T_FOR 269
#define T_IF 270
#define T_ELSE 271
#define T_LTEQ 272
#define T_GTEQ 273
#define T_NEQEQ 274
#define T_EQEQ 275
#define T_OROR 276
#define T_ANDAND 277
#define T_OR 278
#define T_AND 279
#define T_XOR 280
#define T_LRSHIFT 281
#define T_LLSHIFT 282
#define T_WHILE 283
#define T_MAIN 284
#define T_STRING 285
#define T_STRUCT 286
#define T_CLASS 287
#define T_PRIVATE 288
#define T_PUBLIC 289
#define T_PROTECTED 290
#define T_ADDADD 291
#define T_MINMIN 292
#define T_STRING_VAL 293
#define T_CHAR_VAL 294
#define T_INTEGER_VAL 295
#define T_FLOAT_VAL 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "icg_grammar.y"

    	char cval;
		int ival;
		float fval;
		char *sval;
		//valtypes *allval;
		struct{
			char* next;
			char code[1500];
			char addr[50]; 
			char* true_label;
			char* false_label;
		}node;		

#line 251 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INCLUDE = 3,                  /* T_INCLUDE  */
  YYSYMBOL_T_IDH = 4,                      /* T_IDH  */
  YYSYMBOL_T_TYPE = 5,                     /* T_TYPE  */
  YYSYMBOL_T_RETURN = 6,                   /* T_RETURN  */
  YYSYMBOL_T_COUT = 7,                     /* T_COUT  */
  YYSYMBOL_T_CIN = 8,                      /* T_CIN  */
  YYSYMBOL_T_IDENTIFIER = 9,               /* T_IDENTIFIER  */
  YYSYMBOL_T_ADDEQ = 10,                   /* T_ADDEQ  */
  YYSYMBOL_T_MINEQ = 11,                   /* T_MINEQ  */
  YYSYMBOL_T_MULEQ = 12,                   /* T_MULEQ  */
  YYSYMBOL_T_DIVEQ = 13,                   /* T_DIVEQ  */
  YYSYMBOL_T_FOR = 14,                     /* T_FOR  */
  YYSYMBOL_T_IF = 15,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 16,                    /* T_ELSE  */
  YYSYMBOL_T_LTEQ = 17,                    /* T_LTEQ  */
  YYSYMBOL_T_GTEQ = 18,                    /* T_GTEQ  */
  YYSYMBOL_T_NEQEQ = 19,                   /* T_NEQEQ  */
  YYSYMBOL_T_EQEQ = 20,                    /* T_EQEQ  */
  YYSYMBOL_T_OROR = 21,                    /* T_OROR  */
  YYSYMBOL_T_ANDAND = 22,                  /* T_ANDAND  */
  YYSYMBOL_T_OR = 23,                      /* T_OR  */
  YYSYMBOL_T_AND = 24,                     /* T_AND  */
  YYSYMBOL_T_XOR = 25,                     /* T_XOR  */
  YYSYMBOL_T_LRSHIFT = 26,                 /* T_LRSHIFT  */
  YYSYMBOL_T_LLSHIFT = 27,                 /* T_LLSHIFT  */
  YYSYMBOL_T_WHILE = 28,                   /* T_WHILE  */
  YYSYMBOL_T_MAIN = 29,                    /* T_MAIN  */
  YYSYMBOL_T_STRING = 30,                  /* T_STRING  */
  YYSYMBOL_T_STRUCT = 31,                  /* T_STRUCT  */
  YYSYMBOL_T_CLASS = 32,                   /* T_CLASS  */
  YYSYMBOL_T_PRIVATE = 33,                 /* T_PRIVATE  */
  YYSYMBOL_T_PUBLIC = 34,                  /* T_PUBLIC  */
  YYSYMBOL_T_PROTECTED = 35,               /* T_PROTECTED  */
  YYSYMBOL_T_ADDADD = 36,                  /* T_ADDADD  */
  YYSYMBOL_T_MINMIN = 37,                  /* T_MINMIN  */
  YYSYMBOL_T_STRING_VAL = 38,              /* T_STRING_VAL  */
  YYSYMBOL_T_CHAR_VAL = 39,                /* T_CHAR_VAL  */
  YYSYMBOL_T_INTEGER_VAL = 40,             /* T_INTEGER_VAL  */
  YYSYMBOL_T_FLOAT_VAL = 41,               /* T_FLOAT_VAL  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '+'  */
  YYSYMBOL_45_ = 45,                       /* '*'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '/'  */
  YYSYMBOL_48_ = 48,                       /* '#'  */
  YYSYMBOL_49_ = 49,                       /* '<'  */
  YYSYMBOL_50_ = 50,                       /* '>'  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* ','  */
  YYSYMBOL_53_ = 53,                       /* '['  */
  YYSYMBOL_54_ = 54,                       /* ']'  */
  YYSYMBOL_55_ = 55,                       /* '='  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_58_ = 58,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 59,                  /* $accept  */
  YYSYMBOL_P = 60,                         /* P  */
  YYSYMBOL_program = 61,                   /* program  */
  YYSYMBOL_external_declaration = 62,      /* external_declaration  */
  YYSYMBOL_header_stmt = 63,               /* header_stmt  */
  YYSYMBOL_global_stmt = 64,               /* global_stmt  */
  YYSYMBOL_main_fun = 65,                  /* main_fun  */
  YYSYMBOL_declaration_statement = 66,     /* declaration_statement  */
  YYSYMBOL_list_identifier = 67,           /* list_identifier  */
  YYSYMBOL_variable = 68,                  /* variable  */
  YYSYMBOL_array = 69,                     /* array  */
  YYSYMBOL_init = 70,                      /* init  */
  YYSYMBOL_var_init = 71,                  /* var_init  */
  YYSYMBOL_array_init = 72,                /* array_init  */
  YYSYMBOL_values = 73,                    /* values  */
  YYSYMBOL_constant = 74,                  /* constant  */
  YYSYMBOL_declarator = 75,                /* declarator  */
  YYSYMBOL_fun_declr = 76,                 /* fun_declr  */
  YYSYMBOL_params_list = 77,               /* params_list  */
  YYSYMBOL_params = 78,                    /* params  */
  YYSYMBOL_compound_stmt = 79,             /* compound_stmt  */
  YYSYMBOL_start_paren = 80,               /* start_paren  */
  YYSYMBOL_end_paren = 81,                 /* end_paren  */
  YYSYMBOL_block_item_list = 82,           /* block_item_list  */
  YYSYMBOL_block_item = 83,                /* block_item  */
  YYSYMBOL_user_defined_ds = 84,           /* user_defined_ds  */
  YYSYMBOL_class = 85,                     /* class  */
  YYSYMBOL_structure = 86,                 /* structure  */
  YYSYMBOL_class_body_stmt = 87,           /* class_body_stmt  */
  YYSYMBOL_struct_body_stmt = 88,          /* struct_body_stmt  */
  YYSYMBOL_struct_mems = 89,               /* struct_mems  */
  YYSYMBOL_class_mems = 90,                /* class_mems  */
  YYSYMBOL_struct_mem = 91,                /* struct_mem  */
  YYSYMBOL_class_mem = 92,                 /* class_mem  */
  YYSYMBOL_class_var_declaration = 93,     /* class_var_declaration  */
  YYSYMBOL_access_specifier = 94,          /* access_specifier  */
  YYSYMBOL_statement = 95,                 /* statement  */
  YYSYMBOL_expression_stmt = 96,           /* expression_stmt  */
  YYSYMBOL_if_stack = 97,                  /* if_stack  */
  YYSYMBOL_if_else_stack = 98,             /* if_else_stack  */
  YYSYMBOL_selection_statement = 99,       /* selection_statement  */
  YYSYMBOL_iterative_statement = 100,      /* iterative_statement  */
  YYSYMBOL_for_stack = 101,                /* for_stack  */
  YYSYMBOL_for_loop = 102,                 /* for_loop  */
  YYSYMBOL_for_assgn_stmt = 103,           /* for_assgn_stmt  */
  YYSYMBOL_for_decl_stmt = 104,            /* for_decl_stmt  */
  YYSYMBOL_while_stack = 105,              /* while_stack  */
  YYSYMBOL_while_loop = 106,               /* while_loop  */
  YYSYMBOL_return_stmt = 107,              /* return_stmt  */
  YYSYMBOL_expression = 108,               /* expression  */
  YYSYMBOL_assignment_expression = 109,    /* assignment_expression  */
  YYSYMBOL_unary_exprn = 110,              /* unary_exprn  */
  YYSYMBOL_postfix_expression = 111,       /* postfix_expression  */
  YYSYMBOL_uop_shorthd = 112,              /* uop_shorthd  */
  YYSYMBOL_simple_expression = 113,        /* simple_expression  */
  YYSYMBOL_bitop = 114,                    /* bitop  */
  YYSYMBOL_relop = 115,                    /* relop  */
  YYSYMBOL_logop = 116,                    /* logop  */
  YYSYMBOL_additive_expression = 117,      /* additive_expression  */
  YYSYMBOL_term = 118,                     /* term  */
  YYSYMBOL_factor = 119,                   /* factor  */
  YYSYMBOL_call = 120,                     /* call  */
  YYSYMBOL_args = 121,                     /* args  */
  YYSYMBOL_input_output_statements = 122   /* input_output_statements  */
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
#define YYFINAL  85
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   295

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  244

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
       2,     2,     2,     2,     2,    48,     2,     2,     2,     2,
      42,    43,    45,    44,    52,    46,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,    51,
      49,    55,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    72,    72,    80,    81,    90,    91,    96,   103,   104,
     107,   111,   115,   119,   125,   136,   143,   147,   152,   157,
     164,   170,   178,   183,   190,   194,   200,   209,   215,   219,
     225,   226,   227,   228,   231,   232,   235,   253,   254,   257,
     260,   261,   264,   266,   268,   273,   280,   284,   292,   296,
     302,   307,   309,   310,   313,   314,   317,   318,   321,   322,
     325,   326,   329,   330,   331,   334,   335,   338,   339,   340,
     343,   347,   351,   355,   361,   365,   372,   373,   379,   395,
     411,   416,   423,   441,   450,   464,   479,   483,   489,   497,
     509,   522,   529,   533,   539,   543,   550,   558,   564,   570,
     576,   580,   586,   593,   601,   605,   609,   613,   619,   624,
     641,   658,   677,   681,   685,   689,   693,   699,   703,   707,
     711,   715,   719,   725,   729,   735,   740,   756,   772,   773,
     776,   781,   798,   817,   822,   827,   831,   836,   841,   846,
     853,   857,   864,   869,   876,   877
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
  "\"end of file\"", "error", "\"invalid token\"", "T_INCLUDE", "T_IDH",
  "T_TYPE", "T_RETURN", "T_COUT", "T_CIN", "T_IDENTIFIER", "T_ADDEQ",
  "T_MINEQ", "T_MULEQ", "T_DIVEQ", "T_FOR", "T_IF", "T_ELSE", "T_LTEQ",
  "T_GTEQ", "T_NEQEQ", "T_EQEQ", "T_OROR", "T_ANDAND", "T_OR", "T_AND",
  "T_XOR", "T_LRSHIFT", "T_LLSHIFT", "T_WHILE", "T_MAIN", "T_STRING",
  "T_STRUCT", "T_CLASS", "T_PRIVATE", "T_PUBLIC", "T_PROTECTED",
  "T_ADDADD", "T_MINMIN", "T_STRING_VAL", "T_CHAR_VAL", "T_INTEGER_VAL",
  "T_FLOAT_VAL", "'('", "')'", "'+'", "'*'", "'-'", "'/'", "'#'", "'<'",
  "'>'", "';'", "','", "'['", "']'", "'='", "'{'", "'}'", "':'", "$accept",
  "P", "program", "external_declaration", "header_stmt", "global_stmt",
  "main_fun", "declaration_statement", "list_identifier", "variable",
  "array", "init", "var_init", "array_init", "values", "constant",
  "declarator", "fun_declr", "params_list", "params", "compound_stmt",
  "start_paren", "end_paren", "block_item_list", "block_item",
  "user_defined_ds", "class", "structure", "class_body_stmt",
  "struct_body_stmt", "struct_mems", "class_mems", "struct_mem",
  "class_mem", "class_var_declaration", "access_specifier", "statement",
  "expression_stmt", "if_stack", "if_else_stack", "selection_statement",
  "iterative_statement", "for_stack", "for_loop", "for_assgn_stmt",
  "for_decl_stmt", "while_stack", "while_loop", "return_stmt",
  "expression", "assignment_expression", "unary_exprn",
  "postfix_expression", "uop_shorthd", "simple_expression", "bitop",
  "relop", "logop", "additive_expression", "term", "factor", "call",
  "args", "input_output_statements", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     116,     2,   156,     3,   -10,    16,   -18,    24,    46,    31,
      87,    98,   104,  -126,  -126,  -126,  -126,   210,    97,    97,
     123,  -126,  -126,   127,   116,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,    36,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,    78,  -126,  -126,  -126,  -126,   240,   -28,
    -126,  -126,  -126,   -33,    90,    39,  -126,  -126,  -126,  -126,
    -126,    89,   210,   133,  -126,  -126,  -126,  -126,  -126,  -126,
     197,   210,   210,   109,  -126,  -126,    93,    93,  -126,  -126,
     108,   117,  -126,  -126,     6,  -126,  -126,   152,  -126,  -126,
    -126,    36,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,    -3,    -3,  -126,  -126,
      97,    97,    97,    -3,    -3,    54,   130,   210,    -7,    93,
     120,  -126,   152,  -126,   122,   125,  -126,   119,   134,  -126,
    -126,   169,    73,   128,  -126,   210,   210,     0,   129,    -1,
     135,  -126,  -126,   177,    26,  -126,  -126,   -28,   -28,   -21,
     -21,   -21,  -126,  -126,   178,  -126,   136,   146,   149,  -126,
     165,   153,  -126,    93,  -126,  -126,  -126,  -126,   210,  -126,
     166,   171,  -126,   181,   182,   199,  -126,  -126,  -126,     0,
    -126,  -126,   217,  -126,  -126,  -126,  -126,  -126,    -1,  -126,
     170,  -126,   179,  -126,   226,  -126,  -126,   188,    64,  -126,
    -126,   210,   235,   210,   176,   176,  -126,  -126,   203,    60,
    -126,  -126,  -126,  -126,   244,  -126,  -126,  -126,  -126,  -126,
     -39,  -126,  -126,   200,   221,   257,  -126,  -126,   265,  -126,
      64,  -126,   210,    58,  -126,  -126,  -126,  -126,   258,   232,
     176,   176,  -126,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,   134,     0,     0,     0,     0,
       0,     0,     0,   138,   139,   136,   137,     0,     0,     0,
       0,    76,    42,     0,     2,     3,     5,     6,     7,    10,
      11,    71,     0,    12,    48,    49,    13,    70,    73,    72,
      82,    83,    75,     0,    94,    97,   100,    95,   108,   125,
     130,   135,    74,    20,     0,     0,    19,    18,    24,    25,
      92,     0,     0,     0,   104,   105,   106,   107,   102,   103,
       0,     0,     0,     0,    78,    90,     0,     0,    98,    99,
       0,   134,   128,   129,     0,     1,     4,     0,    43,    46,
      40,     0,    44,    47,    77,   119,   120,   121,   122,   123,
     124,   112,   113,   114,   115,   116,     0,     0,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    15,     0,    93,     0,     0,   140,   142,     0,    96,
     101,     0,     0,     0,    87,     0,     0,     0,     0,     0,
       0,   133,     9,     0,    20,    41,    45,   126,   127,   111,
     109,   110,   131,   132,     0,    34,    39,     0,     0,    26,
       0,     0,    36,     0,    16,    17,   144,   145,     0,   141,
       0,    86,    84,     0,     0,     0,    60,    61,    54,     0,
      56,    51,     0,    67,    68,    69,    63,    52,     0,    58,
       0,    50,     0,    37,     0,    35,    23,     0,     0,    14,
     143,     0,     0,     0,     0,     0,    55,    57,    65,     0,
      53,    59,    64,     8,     0,    22,    31,    32,    30,    33,
       0,    29,    88,     0,     0,    80,    91,    62,     0,    38,
       0,    27,     0,     0,    79,    66,    28,    89,     0,     0,
       0,     0,    81,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   252,  -126,  -126,  -126,   -29,  -126,   155,
    -126,   157,  -126,  -126,  -126,    48,  -126,  -125,  -126,  -126,
     -98,    40,   -90,  -126,   189,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,   102,    94,  -126,  -126,   -30,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    -2,
     212,    50,  -126,  -126,  -126,  -126,  -126,  -126,   -11,    13,
      55,  -126,   124,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    23,    24,    25,    26,    27,    28,    29,    55,    56,
     118,    57,    58,    59,   220,   221,   119,    30,   156,   157,
      31,    32,    90,    91,    92,    33,    34,    35,   140,   138,
     179,   188,   180,   189,   209,   190,    36,    37,   135,   240,
      38,    39,   203,    40,   133,   171,   136,    41,    42,    43,
      44,    45,    46,    72,    47,   110,   111,   112,    48,    49,
      50,    51,   128,    52
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,   145,    93,    89,   182,   175,    81,    82,    83,   115,
     142,    53,   177,   230,   186,    80,    63,   113,   231,   114,
     116,   162,   117,   106,    73,   107,    64,    65,    66,    67,
      62,    54,   183,   184,   185,    13,    14,    15,    16,    17,
      76,    87,     2,     3,     4,     5,   160,   178,   161,   187,
       6,     7,    68,    69,   177,   143,    88,    88,    70,   154,
     124,    93,    89,   186,     8,   199,    74,   238,   127,   129,
     130,    71,    11,    12,    13,    14,    15,    16,    17,   116,
      18,   117,    19,    64,    65,    66,    67,    21,    75,   206,
     121,   122,    22,    88,    11,    12,    77,   155,   210,   149,
     150,   151,   216,   217,   218,   219,    81,    78,   176,    68,
      69,   227,   228,    79,   131,   159,   137,   139,   132,   147,
     148,     1,     2,     3,     4,     5,    84,    85,    71,    94,
       6,     7,   120,   173,   174,    13,    14,    15,    16,    17,
     123,    18,   125,    19,     8,    11,    12,     9,    10,    22,
     176,   141,    11,    12,    13,    14,    15,    16,    17,    70,
      18,   144,    19,   163,    20,     5,   127,    21,   152,   153,
     158,   168,    22,   166,   225,   226,   167,   169,   170,   172,
     181,   192,     2,     3,     4,     5,   191,   193,   194,   195,
       6,     7,    11,    12,    13,    14,    15,    16,    17,   222,
      18,   224,    19,   196,     8,   197,     5,    60,    53,   198,
     242,   243,    11,    12,    13,    14,    15,    16,    17,     5,
      18,   201,    19,   202,   204,   205,   208,    21,   212,   213,
     237,   214,    22,    11,    12,    13,    14,    15,    16,    17,
     126,    18,   215,    19,   223,   115,    11,    12,    13,    14,
      15,    16,    17,   229,    18,   232,    19,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,    64,    65,
      66,    67,   233,   234,   235,   241,    86,   164,   236,   165,
     146,   207,   211,   239,   106,   134,   107,     0,     0,   108,
     109,     0,   200,     0,    68,    69
};

static const yytype_int16 yycheck[] =
{
       2,    91,    32,    32,     5,     5,     9,    18,    19,    42,
       4,     9,   137,    52,   139,    17,    26,    45,    57,    47,
      53,   119,    55,    44,    42,    46,    10,    11,    12,    13,
      27,    29,    33,    34,    35,    38,    39,    40,    41,    42,
       9,     5,     6,     7,     8,     9,    53,   137,    55,   139,
      14,    15,    36,    37,   179,    49,    57,    57,    42,     5,
      62,    91,    91,   188,    28,   163,    42,     9,    70,    71,
      72,    55,    36,    37,    38,    39,    40,    41,    42,    53,
      44,    55,    46,    10,    11,    12,    13,    51,    42,   179,
      51,    52,    56,    57,    36,    37,     9,    43,   188,   110,
     111,   112,    38,    39,    40,    41,     9,     9,   137,    36,
      37,    51,    52,     9,     5,   117,    76,    77,     9,   106,
     107,     5,     6,     7,     8,     9,     3,     0,    55,    51,
      14,    15,    42,   135,   136,    38,    39,    40,    41,    42,
      51,    44,     9,    46,    28,    36,    37,    31,    32,    56,
     179,    43,    36,    37,    38,    39,    40,    41,    42,    42,
      44,     9,    46,    43,    48,     9,   168,    51,   113,   114,
      40,    52,    56,    51,   204,   205,    51,    43,     9,    51,
      51,     4,     6,     7,     8,     9,    51,     9,    52,    43,
      14,    15,    36,    37,    38,    39,    40,    41,    42,   201,
      44,   203,    46,    54,    28,    40,     9,    51,     9,    56,
     240,   241,    36,    37,    38,    39,    40,    41,    42,     9,
      44,    55,    46,    52,    43,    43,     9,    51,    58,    50,
     232,     5,    56,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    54,    46,     9,    42,    36,    37,    38,    39,
      40,    41,    42,     9,    44,    55,    46,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    10,    11,
      12,    13,    51,    16,     9,    43,    24,   122,   230,   122,
      91,   179,   188,   233,    44,    73,    46,    -1,    -1,    49,
      50,    -1,   168,    -1,    36,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    14,    15,    28,    31,
      32,    36,    37,    38,    39,    40,    41,    42,    44,    46,
      48,    51,    56,    60,    61,    62,    63,    64,    65,    66,
      76,    79,    80,    84,    85,    86,    95,    96,    99,   100,
     102,   106,   107,   108,   109,   110,   111,   113,   117,   118,
     119,   120,   122,     9,    29,    67,    68,    70,    71,    72,
      51,   108,    27,    26,    10,    11,    12,    13,    36,    37,
      42,    55,   112,    42,    42,    42,     9,     9,     9,     9,
     108,     9,   117,   117,     3,     0,    62,     5,    57,    66,
      81,    82,    83,    95,    51,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    44,    46,    49,    50,
     114,   115,   116,    45,    47,    42,    53,    55,    69,    75,
      42,    51,    52,    51,   108,     9,    43,   108,   121,   108,
     108,     5,     9,   103,   109,    97,   105,    80,    88,    80,
      87,    43,     4,    49,     9,    81,    83,   118,   118,   117,
     117,   117,   119,   119,     5,    43,    77,    78,    40,   108,
      53,    55,    79,    43,    68,    70,    51,    51,    52,    43,
       9,   104,    51,   108,   108,     5,    66,    76,    81,    89,
      91,    51,     5,    33,    34,    35,    76,    81,    90,    92,
      94,    51,     4,     9,    52,    43,    54,    40,    56,    79,
     121,    55,    52,   101,    43,    43,    81,    91,     9,    93,
      81,    92,    58,    50,     5,    54,    38,    39,    40,    41,
      73,    74,   108,     9,   108,    95,    95,    51,    52,     9,
      52,    57,    55,    51,    16,     9,    74,   108,     9,   110,
      98,    43,    95,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    63,    63,
      64,    64,    64,    64,    65,    66,    67,    67,    67,    67,
      68,    68,    69,    69,    70,    70,    71,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    77,    77,    78,
      79,    79,    80,    81,    82,    82,    83,    83,    84,    84,
      85,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    92,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    97,    98,
      99,    99,   100,   100,   101,   102,   103,   103,   104,   104,
     105,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     110,   110,   111,   111,   112,   112,   112,   112,   113,   113,
     113,   113,   114,   114,   114,   114,   114,   115,   115,   115,
     115,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     118,   118,   118,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     5,     3,
       1,     1,     1,     1,     5,     3,     3,     3,     1,     1,
       1,     2,     4,     3,     1,     1,     3,     6,     3,     1,
       1,     1,     1,     1,     2,     3,     4,     2,     4,     1,
       2,     3,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     4,     2,     3,     2,     3,     1,     2,     1,     2,
       1,     1,     3,     1,     2,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       6,     9,     1,     1,     0,    10,     2,     1,     3,     5,
       0,     6,     2,     3,     1,     1,     3,     1,     2,     2,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     2,
       1,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     1,     3,     4,     4
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
  case 2: /* P: program  */
#line 73 "icg_grammar.y"
        { 
		FILE *fptr = fopen("output/icg_output.txt", "w");
		fprintf(fptr,"%s\n",(yyvsp[0].node).code); 
		fclose(fptr);
	}
#line 1552 "y.tab.c"
    break;

  case 3: /* program: external_declaration  */
#line 80 "icg_grammar.y"
                               {(yyval.node) = (yyvsp[0].node);}
#line 1558 "y.tab.c"
    break;

  case 4: /* program: program external_declaration  */
#line 82 "icg_grammar.y"
                        {
				//ICG
				strcpy((yyval.node).code,(yyvsp[-1].node).code);
				strcat((yyval.node).code,"\n");
				strcat((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1569 "y.tab.c"
    break;

  case 5: /* external_declaration: header_stmt  */
#line 90 "icg_grammar.y"
                                   {}
#line 1575 "y.tab.c"
    break;

  case 6: /* external_declaration: global_stmt  */
#line 92 "icg_grammar.y"
                                                {
					 		//ICG
					 		(yyval.node) = (yyvsp[0].node);
					 	}
#line 1584 "y.tab.c"
    break;

  case 7: /* external_declaration: main_fun  */
#line 97 "icg_grammar.y"
                                                {
					 		//ICG
					 		strcpy((yyval.node).code,(yyvsp[0].node).code);
					 	}
#line 1593 "y.tab.c"
    break;

  case 10: /* global_stmt: declaration_statement  */
#line 108 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1601 "y.tab.c"
    break;

  case 11: /* global_stmt: fun_declr  */
#line 112 "icg_grammar.y"
                    {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1609 "y.tab.c"
    break;

  case 12: /* global_stmt: user_defined_ds  */
#line 116 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1617 "y.tab.c"
    break;

  case 13: /* global_stmt: statement  */
#line 120 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1625 "y.tab.c"
    break;

  case 14: /* main_fun: T_TYPE T_MAIN '(' ')' compound_stmt  */
#line 126 "icg_grammar.y"
                 {
		 	//ICG
		 	strcpy((yyval.node).code,"main:\n");
		 	strcat((yyval.node).code,(yyvsp[0].node).code);
		 	strcat((yyval.node).code,"\n");
		 	//printf("in main_func\n %s",$$.code);
		 }
#line 1637 "y.tab.c"
    break;

  case 15: /* declaration_statement: T_TYPE list_identifier ';'  */
#line 137 "icg_grammar.y"
                                 {
				   		//ICG
				   		sprintf((yyval.node).code,"%s %s",(yyvsp[-2].sval),(yyvsp[-1].node).code);
				   }
#line 1646 "y.tab.c"
    break;

  case 16: /* list_identifier: list_identifier ',' variable  */
#line 144 "icg_grammar.y"
                                 {	//ICG
				 	sprintf((yyval.node).code,"%s,%s",(yyvsp[-2].node).code,(yyvsp[0].node).code);
				 }
#line 1654 "y.tab.c"
    break;

  case 17: /* list_identifier: list_identifier ',' init  */
#line 148 "icg_grammar.y"
                                {
					//ICG
					sprintf((yyval.node).code,"%s,%s",(yyvsp[-2].node).code,(yyvsp[0].node).code);
				}
#line 1663 "y.tab.c"
    break;

  case 18: /* list_identifier: init  */
#line 153 "icg_grammar.y"
                                {
					//ICG
					sprintf((yyval.node).code,"%s",(yyvsp[0].node).code);
				}
#line 1672 "y.tab.c"
    break;

  case 19: /* list_identifier: variable  */
#line 158 "icg_grammar.y"
                                {
					//ICG
					sprintf((yyval.node).code,"%s",(yyvsp[0].node).code);
				}
#line 1681 "y.tab.c"
    break;

  case 20: /* variable: T_IDENTIFIER  */
#line 165 "icg_grammar.y"
                                            {
					    	//ICG
					    	//strcpy($$.addr,$1);
	   						strcpy((yyval.node).code,(yyvsp[0].sval));
					    }
#line 1691 "y.tab.c"
    break;

  case 21: /* variable: T_IDENTIFIER array  */
#line 171 "icg_grammar.y"
                                          {
				          	//ICG
				              //strcpy($$.addr,$1);
							  sprintf((yyval.node).code,"%s %s",(yyvsp[-1].sval),(yyvsp[0].node).code);
				          }
#line 1701 "y.tab.c"
    break;

  case 22: /* array: array '[' T_INTEGER_VAL ']'  */
#line 179 "icg_grammar.y"
          {
	  	//ICG
	  	sprintf((yyval.node).code,"%s [ %s ]",(yyvsp[-3].node).code,(yyvsp[-1].sval));
	  }
#line 1710 "y.tab.c"
    break;

  case 23: /* array: '[' T_INTEGER_VAL ']'  */
#line 184 "icg_grammar.y"
          {
	  	  //ICG
	      sprintf((yyval.node).code,"[ %s ]",(yyvsp[-1].sval));
	  }
#line 1719 "y.tab.c"
    break;

  case 24: /* init: var_init  */
#line 191 "icg_grammar.y"
         { 
	 	strcpy((yyval.node).code,(yyvsp[0].node).code); 
	 }
#line 1727 "y.tab.c"
    break;

  case 25: /* init: array_init  */
#line 195 "icg_grammar.y"
     {
     	strcpy((yyval.node).code,(yyvsp[0].node).code);	
     }
#line 1735 "y.tab.c"
    break;

  case 26: /* var_init: T_IDENTIFIER '=' expression  */
#line 201 "icg_grammar.y"
                {
		 	strcat((yyval.node).code,(yyvsp[0].node).code); 
		   	strcat((yyval.node).code,(yyvsp[-2].sval));
		   	strcat((yyval.node).code," = ");
		   	strcat((yyval.node).code,(yyvsp[0].node).addr);
		   	//strcat($$.code,"\n");
		}
#line 1747 "y.tab.c"
    break;

  case 27: /* array_init: T_IDENTIFIER array '=' '{' values '}'  */
#line 210 "icg_grammar.y"
                        {
				sprintf((yyval.node).code,"%s %s = { %s }",(yyvsp[-5].sval),(yyvsp[-4].node).code,(yyvsp[-1].node).code);
			}
#line 1755 "y.tab.c"
    break;

  case 28: /* values: values ',' constant  */
#line 216 "icg_grammar.y"
                {
			sprintf((yyval.node).code,"%s , %s",(yyvsp[-2].node).code,(yyvsp[0].node).code);
		}
#line 1763 "y.tab.c"
    break;

  case 29: /* values: constant  */
#line 220 "icg_grammar.y"
        {
       		strcpy((yyval.node).code,(yyvsp[0].node).code);
       	}
#line 1771 "y.tab.c"
    break;

  case 30: /* constant: T_INTEGER_VAL  */
#line 225 "icg_grammar.y"
                         {strcpy((yyval.node).code,(yyvsp[0].sval));}
#line 1777 "y.tab.c"
    break;

  case 31: /* constant: T_STRING_VAL  */
#line 226 "icg_grammar.y"
                                {strcpy((yyval.node).code,(yyvsp[0].sval));}
#line 1783 "y.tab.c"
    break;

  case 32: /* constant: T_CHAR_VAL  */
#line 227 "icg_grammar.y"
                              {strcpy((yyval.node).code,(yyvsp[0].sval));}
#line 1789 "y.tab.c"
    break;

  case 33: /* constant: T_FLOAT_VAL  */
#line 228 "icg_grammar.y"
                               {strcpy((yyval.node).code,(yyvsp[0].sval));}
#line 1795 "y.tab.c"
    break;

  case 34: /* declarator: '(' ')'  */
#line 231 "icg_grammar.y"
                     {strcpy((yyval.node).code,"");}
#line 1801 "y.tab.c"
    break;

  case 35: /* declarator: '(' params ')'  */
#line 232 "icg_grammar.y"
                                    {strcpy((yyval.node).code,"");}
#line 1807 "y.tab.c"
    break;

  case 36: /* fun_declr: T_TYPE T_IDENTIFIER declarator compound_stmt  */
#line 236 "icg_grammar.y"
                {
			sprintf((yyval.node).code,"%s:\n%s",(yyvsp[-2].sval),(yyvsp[0].node).code);
		}
#line 1815 "y.tab.c"
    break;

  case 37: /* params_list: T_TYPE T_IDENTIFIER  */
#line 253 "icg_grammar.y"
                                  {strcpy((yyval.node).code,"");}
#line 1821 "y.tab.c"
    break;

  case 38: /* params_list: params_list ',' T_TYPE T_IDENTIFIER  */
#line 254 "icg_grammar.y"
                                                               {strcpy((yyval.node).code,"");}
#line 1827 "y.tab.c"
    break;

  case 39: /* params: params_list  */
#line 257 "icg_grammar.y"
                      {strcpy((yyval.node).code,"");}
#line 1833 "y.tab.c"
    break;

  case 40: /* compound_stmt: start_paren end_paren  */
#line 260 "icg_grammar.y"
                                      {strcpy((yyval.node).code,"");}
#line 1839 "y.tab.c"
    break;

  case 41: /* compound_stmt: start_paren block_item_list end_paren  */
#line 261 "icg_grammar.y"
                                                                  {strcpy((yyval.node).code,(yyvsp[-1].node).code);}
#line 1845 "y.tab.c"
    break;

  case 44: /* block_item_list: block_item  */
#line 269 "icg_grammar.y"
                                {
					strcpy((yyval.node).code,(yyvsp[0].node).code);
					//printf("block item %s",$$.code);
				}
#line 1854 "y.tab.c"
    break;

  case 45: /* block_item_list: block_item_list block_item  */
#line 274 "icg_grammar.y"
                                {
					sprintf((yyval.node).code,"%s\n %s",(yyvsp[-1].node).code,(yyvsp[0].node).code);
					//printf("blocks %s",$$.code);
				}
#line 1863 "y.tab.c"
    break;

  case 46: /* block_item: declaration_statement  */
#line 281 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1871 "y.tab.c"
    break;

  case 47: /* block_item: statement  */
#line 285 "icg_grammar.y"
                   {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
		    }
#line 1879 "y.tab.c"
    break;

  case 48: /* user_defined_ds: class  */
#line 293 "icg_grammar.y"
                                {
					strcpy((yyval.node).code,"");
				}
#line 1887 "y.tab.c"
    break;

  case 49: /* user_defined_ds: structure  */
#line 297 "icg_grammar.y"
                                {
					strcpy((yyval.node).code,"");
				}
#line 1895 "y.tab.c"
    break;

  case 50: /* class: T_CLASS T_IDENTIFIER class_body_stmt ';'  */
#line 303 "icg_grammar.y"
                {
					strcpy((yyval.node).code,"");
		}
#line 1903 "y.tab.c"
    break;

  case 70: /* statement: expression_stmt  */
#line 344 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 1911 "y.tab.c"
    break;

  case 71: /* statement: compound_stmt  */
#line 348 "icg_grammar.y"
                  {
		  	strcpy((yyval.node).code,(yyvsp[0].node).code);
		  }
#line 1919 "y.tab.c"
    break;

  case 72: /* statement: iterative_statement  */
#line 352 "icg_grammar.y"
                  {
  		  	strcpy((yyval.node).code,(yyvsp[0].node).code);
  		  }
#line 1927 "y.tab.c"
    break;

  case 73: /* statement: selection_statement  */
#line 356 "icg_grammar.y"
                  {
  		  	map <string,string> m = v.back();
			v.pop_back();
			sprintf((yyval.node).code,"%s\n%s:\n",(yyvsp[0].node).code,m["next"].c_str());
  		  }
#line 1937 "y.tab.c"
    break;

  case 74: /* statement: input_output_statements  */
#line 362 "icg_grammar.y"
                  {

		  }
#line 1945 "y.tab.c"
    break;

  case 75: /* statement: return_stmt  */
#line 366 "icg_grammar.y"
          {
          	strcpy((yyval.node).code,(yyvsp[0].node).code);
          }
#line 1953 "y.tab.c"
    break;

  case 76: /* expression_stmt: ';'  */
#line 372 "icg_grammar.y"
          {}
#line 1959 "y.tab.c"
    break;

  case 77: /* expression_stmt: expression ';'  */
#line 374 "icg_grammar.y"
    {
    	strcpy((yyval.node).code,(yyvsp[-1].node).code);
    }
#line 1967 "y.tab.c"
    break;

  case 78: /* if_stack: %empty  */
#line 379 "icg_grammar.y"
           {
			map <string,string> m;
			char *begin = label_func();
			m["true"] = string(begin);
			free(begin);
			m["type"] = "if";
			m["false"] = string(global_func());
			m["next"] = m["false"];
			v.push_back(m);
			//printf("if");
			//printf("true %s  false  %s  next  %s",m["true"].c_str(),m["false"].c_str(),m["next"].c_str());

		}
#line 1985 "y.tab.c"
    break;

  case 79: /* if_else_stack: %empty  */
#line 395 "icg_grammar.y"
                        {
				map <string,string> m = v.back();
				v.pop_back();

				//m["next"] = m["false"];
				
				char *begin = label_func();
				m["false"] = string(begin);
				m["type"] = "if_else";
				free(begin);
				v.push_back(m);
				//printf("if else");
				//printf("true %s  false  %s  next  %s",m["true"].c_str(),m["false"].c_str(),m["next"].c_str());
			}
#line 2004 "y.tab.c"
    break;

  case 80: /* selection_statement: T_IF '(' if_stack expression ')' statement  */
#line 412 "icg_grammar.y"
                                        {
						map <string,string> m = v.back();
					sprintf((yyval.node).code,"%s\nif %s goto %s\n goto %s\n%s:\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,m["true"].c_str(),m["false"].c_str(),m["true"].c_str(),(yyvsp[0].node).code);		
					}
#line 2013 "y.tab.c"
    break;

  case 81: /* selection_statement: T_IF '(' if_stack expression ')' statement T_ELSE if_else_stack statement  */
#line 417 "icg_grammar.y"
                    {
                    	map <string,string> m = v.back();
                    	sprintf((yyval.node).code,"%s\nif %s goto %s\ngoto %s\n%s:\n%s\n%s:\n%s",(yyvsp[-5].node).code,(yyvsp[-5].node).addr,m["true"].c_str(),m["false"].c_str(),m["true"].c_str(),(yyvsp[-3].node).code,m["false"].c_str(),(yyvsp[0].node).code);
                    }
#line 2022 "y.tab.c"
    break;

  case 82: /* iterative_statement: for_loop  */
#line 424 "icg_grammar.y"
                                        {
						map <string,string> m = v.back();
						v.pop_back();
						sprintf((yyval.node).code,"%s\n%s:\n",(yyvsp[0].node).code,m["false"].c_str());
						if(!v.empty())
						{
							map <string,string> m = v.back();
							if(m["type"]=="if")
							{
								strcat((yyval.node).code,"\n");
								strcat((yyval.node).code,"goto ");
								strcat((yyval.node).code,m["false"].c_str());
								strcat((yyval.node).code,"\n");
							}
						}

					}
#line 2044 "y.tab.c"
    break;

  case 83: /* iterative_statement: while_loop  */
#line 442 "icg_grammar.y"
                                        {
						map <string,string> m = v.back();
						v.pop_back();
						sprintf((yyval.node).code,"%s\n%s:\n",(yyvsp[0].node).code,m["false"].c_str());
					}
#line 2054 "y.tab.c"
    break;

  case 84: /* for_stack: %empty  */
#line 450 "icg_grammar.y"
                {
			map <string,string> m;
			char *begin = label_func();
			m["begin"] = string(begin);
			m["type"] = "for";
			free(begin);
			m["true"] = string(label_func());
			m["false"] = string(global_func());
			m["next"] = m["begin"];
			v.push_back(m);
			//printf("for loop");
			//printf("true %s  false  %s  next  %s",m["true"].c_str(),m["false"].c_str(),m["next"].c_str());
		}
#line 2072 "y.tab.c"
    break;

  case 85: /* for_loop: T_FOR '(' for_assgn_stmt ';' for_stack expression ';' unary_exprn ')' statement  */
#line 465 "icg_grammar.y"
                        {
				map <string,string> m = v.back();
				/*init 
				  begin: cond.code

				  cond.true: stat.code
				  			 incr
							 goto begin
				  cond.false:
				*/
				sprintf((yyval.node).code,"%s\n%s:\n%sif %s goto %s\ngoto %s\n%s:\n%s\n%s\ngoto %s",(yyvsp[-7].node).code,m["begin"].c_str(),(yyvsp[-4].node).code,(yyvsp[-4].node).addr,m["true"].c_str(),m["false"].c_str(),m["true"].c_str(),(yyvsp[0].node).code,(yyvsp[-2].node).code,m["begin"].c_str());
			}
#line 2089 "y.tab.c"
    break;

  case 86: /* for_assgn_stmt: T_TYPE for_decl_stmt  */
#line 480 "icg_grammar.y"
                                {
					sprintf((yyval.node).code,"%s %s",(yyvsp[-1].sval),(yyvsp[0].node).code);
				}
#line 2097 "y.tab.c"
    break;

  case 87: /* for_assgn_stmt: assignment_expression  */
#line 484 "icg_grammar.y"
                           {
			   	strcpy((yyval.node).code,(yyvsp[0].node).code);
			   }
#line 2105 "y.tab.c"
    break;

  case 88: /* for_decl_stmt: T_IDENTIFIER '=' expression  */
#line 490 "icg_grammar.y"
                                {
					strcat((yyval.node).code,(yyvsp[0].node).code); 
				   	strcat((yyval.node).code,(yyvsp[-2].sval));
				   	strcat((yyval.node).code," = ");
				   	strcat((yyval.node).code,(yyvsp[0].node).addr);
				   	//strcat($$.code,"\n");
				}
#line 2117 "y.tab.c"
    break;

  case 89: /* for_decl_stmt: for_decl_stmt ',' T_IDENTIFIER '=' expression  */
#line 498 "icg_grammar.y"
                          {
			  	sprintf((yyval.node).code,"%s , ",(yyvsp[-4].node).code);
			  	strcat((yyval.node).code,(yyvsp[0].node).code); 
				strcat((yyval.node).code,(yyvsp[-2].sval));
			   	strcat((yyval.node).code," = ");
			   	strcat((yyval.node).code,(yyvsp[0].node).addr);
			   	//strcat($$.code,"\n");
			  }
#line 2130 "y.tab.c"
    break;

  case 90: /* while_stack: %empty  */
#line 509 "icg_grammar.y"
                        {
				map <string,string> m;
				char *begin = label_func();
				m["begin"] = string(begin);
				m["type"] = "while";
				free(begin);
				m["true"] = string(label_func());
				m["false"] = string(global_func());
				m["next"] = m["begin"];
				v.push_back(m);
			}
#line 2146 "y.tab.c"
    break;

  case 91: /* while_loop: T_WHILE '(' while_stack expression ')' statement  */
#line 523 "icg_grammar.y"
                        {
				map <string,string> m = v.back();
				sprintf((yyval.node).code,"%s:\n%sif %s goto %s\ngoto %s\n \n%s:\n%s\ngoto %s",  m["begin"].c_str(), (yyvsp[-2].node).code,  (yyvsp[-2].node).addr,m["true"].c_str(),m["false"].c_str(),  m["true"].c_str(),     (yyvsp[0].node).code,m["begin"].c_str());
			}
#line 2155 "y.tab.c"
    break;

  case 92: /* return_stmt: T_RETURN ';'  */
#line 530 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,"return ");
			}
#line 2163 "y.tab.c"
    break;

  case 93: /* return_stmt: T_RETURN expression ';'  */
#line 534 "icg_grammar.y"
                    {
		    	sprintf((yyval.node).code,"return %s",(yyvsp[-1].node).code);
		    }
#line 2171 "y.tab.c"
    break;

  case 94: /* expression: assignment_expression  */
#line 540 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,(yyvsp[0].node).code);
			}
#line 2179 "y.tab.c"
    break;

  case 95: /* expression: simple_expression  */
#line 544 "icg_grammar.y"
                   { 
		   		strcpy((yyval.node).code,(yyvsp[0].node).code); 
	  		 	strcpy((yyval.node).addr,(yyvsp[0].node).addr); 
	  	   }
#line 2188 "y.tab.c"
    break;

  case 96: /* assignment_expression: T_IDENTIFIER '=' expression  */
#line 551 "icg_grammar.y"
                                                {
							strcat((yyval.node).code,(yyvsp[0].node).code); 
						   	strcat((yyval.node).code,(yyvsp[-2].sval));
						   	strcat((yyval.node).code," = ");
						   	strcat((yyval.node).code,(yyvsp[0].node).addr);
						   	strcat((yyval.node).code,"\n");
						}
#line 2200 "y.tab.c"
    break;

  case 97: /* assignment_expression: unary_exprn  */
#line 559 "icg_grammar.y"
                                  {
	          		  	strcpy((yyval.node).code,(yyvsp[0].node).code);
	          		  }
#line 2208 "y.tab.c"
    break;

  case 98: /* unary_exprn: T_ADDADD T_IDENTIFIER  */
#line 565 "icg_grammar.y"
                        {
				ret = temp_func();
				sprintf((yyval.node).code,"%s = %s + 1\n%s = %s",ret,(yyvsp[0].sval),(yyvsp[0].sval),ret);
				free(ret);
			}
#line 2218 "y.tab.c"
    break;

  case 99: /* unary_exprn: T_MINMIN T_IDENTIFIER  */
#line 571 "icg_grammar.y"
                        {
				ret = temp_func();
				sprintf((yyval.node).code,"%s = %s - 1\n%s = %s",ret,(yyvsp[0].sval),(yyvsp[0].sval),ret);
				free(ret);
			}
#line 2228 "y.tab.c"
    break;

  case 100: /* unary_exprn: postfix_expression  */
#line 577 "icg_grammar.y"
            {
            	strcpy((yyval.node).code,(yyvsp[0].node).code);
            }
#line 2236 "y.tab.c"
    break;

  case 101: /* unary_exprn: T_IDENTIFIER uop_shorthd expression  */
#line 581 "icg_grammar.y"
            {
            	sprintf((yyval.node).code,"%s %s %s",(yyvsp[-2].sval),(yyvsp[-1].node).code,(yyvsp[0].node).code);
            }
#line 2244 "y.tab.c"
    break;

  case 102: /* postfix_expression: T_IDENTIFIER T_ADDADD  */
#line 587 "icg_grammar.y"
                                {
					ret = temp_func();
					sprintf((yyval.node).code,"%s = %s + 1\n%s = %s",ret,(yyvsp[0].sval),(yyvsp[0].sval),ret);
					free(ret);

				}
#line 2255 "y.tab.c"
    break;

  case 103: /* postfix_expression: T_IDENTIFIER T_MINMIN  */
#line 594 "icg_grammar.y"
                                 {
					ret = temp_func();					
					sprintf((yyval.node).code,"%s = %s - 1\n%s = %s",ret,(yyvsp[0].sval),(yyvsp[0].sval),ret);
					free(ret);
				 }
#line 2265 "y.tab.c"
    break;

  case 104: /* uop_shorthd: T_ADDEQ  */
#line 602 "icg_grammar.y"
                        {
				strcpy((yyval.node).code,"+=");
			}
#line 2273 "y.tab.c"
    break;

  case 105: /* uop_shorthd: T_MINEQ  */
#line 606 "icg_grammar.y"
             {
				strcpy((yyval.node).code,"-=");
			 }
#line 2281 "y.tab.c"
    break;

  case 106: /* uop_shorthd: T_MULEQ  */
#line 610 "icg_grammar.y"
             {
				strcpy((yyval.node).code,"*=");
			 }
#line 2289 "y.tab.c"
    break;

  case 107: /* uop_shorthd: T_DIVEQ  */
#line 614 "icg_grammar.y"
             {
				strcpy((yyval.node).code,"/=");
			 }
#line 2297 "y.tab.c"
    break;

  case 108: /* simple_expression: additive_expression  */
#line 620 "icg_grammar.y"
                                        {
						strcpy((yyval.node).code,(yyvsp[0].node).code); 
	  					strcpy((yyval.node).addr,(yyvsp[0].node).addr);
					}
#line 2306 "y.tab.c"
    break;

  case 109: /* simple_expression: additive_expression relop additive_expression  */
#line 625 "icg_grammar.y"
                                  {
				  	ret = temp_func();
					strcpy((yyval.node).addr,ret);
					free(ret);
					strcat((yyval.node).code,(yyvsp[-2].node).code);
					strcat((yyval.node).code,(yyvsp[0].node).code);

					strcat((yyval.node).code,"\n");
					strcat((yyval.node).code,(yyval.node).addr); 
					strcat((yyval.node).code," = ");
					strcat((yyval.node).code,(yyvsp[-2].node).addr);
					strcat((yyval.node).code,(yyvsp[-1].node).addr);
					strcat((yyval.node).code,(yyvsp[0].node).addr);
					strcat((yyval.node).code,"\n"); 
				  	//sprintf($$.code,"%s %s %s",$1.addr,$2.addr,$3.addr);
				  }
#line 2327 "y.tab.c"
    break;

  case 110: /* simple_expression: additive_expression logop additive_expression  */
#line 642 "icg_grammar.y"
                                  {
				  	ret = temp_func();
					strcpy((yyval.node).addr,ret);
					free(ret);
					strcat((yyval.node).code,(yyvsp[-2].node).code);
					strcat((yyval.node).code,(yyvsp[0].node).code);

					strcat((yyval.node).code,"\n");
					strcat((yyval.node).code,(yyval.node).addr); 
					strcat((yyval.node).code," = ");
					strcat((yyval.node).code,(yyvsp[-2].node).addr);
					strcat((yyval.node).code,(yyvsp[-1].node).addr);
					strcat((yyval.node).code,(yyvsp[0].node).addr);
					strcat((yyval.node).code,"\n"); 
				  	//sprintf($$.code,"%s %s %s",$1.addr,$2.addr,$3.addr);
				  }
#line 2348 "y.tab.c"
    break;

  case 111: /* simple_expression: additive_expression bitop additive_expression  */
#line 659 "icg_grammar.y"
                                  {
				  	ret = temp_func();
					strcpy((yyval.node).addr,ret);
					free(ret);
					strcat((yyval.node).code,(yyvsp[-2].node).code);
					strcat((yyval.node).code,(yyvsp[0].node).code);

					strcat((yyval.node).code,"\n");
					strcat((yyval.node).code,(yyval.node).addr); 
					strcat((yyval.node).code," = ");
					strcat((yyval.node).code,(yyvsp[-2].node).addr);
					strcat((yyval.node).code,(yyvsp[-1].node).addr);
					strcat((yyval.node).code,(yyvsp[0].node).addr);
					strcat((yyval.node).code,"\n"); 
				  	//sprintf($$.code,"%s %s %s",$1.addr,$2.addr,$3.addr);
				  }
#line 2369 "y.tab.c"
    break;

  case 112: /* bitop: T_OR  */
#line 678 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"||");
		}
#line 2377 "y.tab.c"
    break;

  case 113: /* bitop: T_AND  */
#line 682 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"&&");
		}
#line 2385 "y.tab.c"
    break;

  case 114: /* bitop: T_XOR  */
#line 686 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"^");
		}
#line 2393 "y.tab.c"
    break;

  case 115: /* bitop: T_LRSHIFT  */
#line 690 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"<<");
		}
#line 2401 "y.tab.c"
    break;

  case 116: /* bitop: T_LLSHIFT  */
#line 694 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,">>");
		}
#line 2409 "y.tab.c"
    break;

  case 117: /* relop: '<'  */
#line 700 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"<");
		}
#line 2417 "y.tab.c"
    break;

  case 118: /* relop: '>'  */
#line 704 "icg_grammar.y"
      {
			strcpy((yyval.node).addr,">");
	   }
#line 2425 "y.tab.c"
    break;

  case 119: /* relop: T_LTEQ  */
#line 708 "icg_grammar.y"
          {
			strcpy((yyval.node).addr,"<=");
	  }
#line 2433 "y.tab.c"
    break;

  case 120: /* relop: T_GTEQ  */
#line 712 "icg_grammar.y"
          {
			strcpy((yyval.node).addr,">=");
	  }
#line 2441 "y.tab.c"
    break;

  case 121: /* relop: T_NEQEQ  */
#line 716 "icg_grammar.y"
          {
			strcpy((yyval.node).addr,"!=");
	  }
#line 2449 "y.tab.c"
    break;

  case 122: /* relop: T_EQEQ  */
#line 720 "icg_grammar.y"
          {
			strcpy((yyval.node).addr,"==");
	  }
#line 2457 "y.tab.c"
    break;

  case 123: /* logop: T_OROR  */
#line 726 "icg_grammar.y"
                {
			strcpy((yyval.node).addr,"||");
		}
#line 2465 "y.tab.c"
    break;

  case 124: /* logop: T_ANDAND  */
#line 730 "icg_grammar.y"
          {
	  	strcpy((yyval.node).addr,"&&");
	  }
#line 2473 "y.tab.c"
    break;

  case 125: /* additive_expression: term  */
#line 736 "icg_grammar.y"
                                        {
						strcpy((yyval.node).code,(yyvsp[0].node).code); 
	  					strcpy((yyval.node).addr,(yyvsp[0].node).addr);
					}
#line 2482 "y.tab.c"
    break;

  case 126: /* additive_expression: additive_expression '+' term  */
#line 741 "icg_grammar.y"
                                        {
						ret = temp_func();
					  	strcpy((yyval.node).addr,ret);
					  	free(ret);
					  	strcat((yyval.node).code,(yyvsp[-2].node).code);
					  	strcat((yyval.node).code,(yyvsp[0].node).code);

					  	strcat((yyval.node).code,"\n");
					  	strcat((yyval.node).code,(yyval.node).addr); 
					  	strcat((yyval.node).code," = ");
					  	strcat((yyval.node).code,(yyvsp[-2].node).addr);
					  	strcat((yyval.node).code," + ");
					  	strcat((yyval.node).code,(yyvsp[0].node).addr);
					  	strcat((yyval.node).code,"\n"); 
					}
#line 2502 "y.tab.c"
    break;

  case 127: /* additive_expression: additive_expression '-' term  */
#line 757 "icg_grammar.y"
                                        {
						ret = temp_func();
					  	strcpy((yyval.node).addr,ret);
					  	free(ret);
					  	strcat((yyval.node).code,(yyvsp[-2].node).code);
					  	strcat((yyval.node).code,(yyvsp[0].node).code);

					  	strcat((yyval.node).code,"\n");
					  	strcat((yyval.node).code,(yyval.node).addr); 
					  	strcat((yyval.node).code," = ");
					  	strcat((yyval.node).code,(yyvsp[-2].node).addr);
					  	strcat((yyval.node).code," - ");
					  	strcat((yyval.node).code,(yyvsp[0].node).addr);
					  	strcat((yyval.node).code,"\n"); 
					}
#line 2522 "y.tab.c"
    break;

  case 128: /* additive_expression: '+' additive_expression  */
#line 772 "icg_grammar.y"
                                                                            {}
#line 2528 "y.tab.c"
    break;

  case 129: /* additive_expression: '-' additive_expression  */
#line 773 "icg_grammar.y"
                                                                            {}
#line 2534 "y.tab.c"
    break;

  case 130: /* term: factor  */
#line 777 "icg_grammar.y"
         {
	 	strcpy((yyval.node).code,(yyvsp[0].node).code); 
	  	strcpy((yyval.node).addr,(yyvsp[0].node).addr);
	 }
#line 2543 "y.tab.c"
    break;

  case 131: /* term: term '*' factor  */
#line 782 "icg_grammar.y"
         {
	 	ret = temp_func();
	  	strcpy((yyval.node).addr,ret);
	  	free(ret);

	  	strcat((yyval.node).code,(yyvsp[-2].node).code);
	  	strcat((yyval.node).code,(yyvsp[0].node).code);

	  	strcat((yyval.node).code,"\n");
	  	strcat((yyval.node).code,(yyval.node).addr); 
	  	strcat((yyval.node).code," = ");
	  	strcat((yyval.node).code,(yyvsp[-2].node).addr);
	  	strcat((yyval.node).code," * ");
	  	strcat((yyval.node).code,(yyvsp[0].node).addr);
	  	strcat((yyval.node).code,"\n"); 
	 }
#line 2564 "y.tab.c"
    break;

  case 132: /* term: term '/' factor  */
#line 799 "icg_grammar.y"
     {
	 	ret = temp_func();
	  	strcpy((yyval.node).addr,ret);
	  	free(ret);

	  	strcat((yyval.node).code,(yyvsp[-2].node).code);
	  	strcat((yyval.node).code,(yyvsp[0].node).code);

	  	strcat((yyval.node).code,"\n");
	  	strcat((yyval.node).code,(yyval.node).addr); 
	  	strcat((yyval.node).code," = ");
	  	strcat((yyval.node).code,(yyvsp[-2].node).addr);
	  	strcat((yyval.node).code," / ");
	  	strcat((yyval.node).code,(yyvsp[0].node).addr);
	  	strcat((yyval.node).code,"\n"); 
	 }
#line 2585 "y.tab.c"
    break;

  case 133: /* factor: '(' expression ')'  */
#line 818 "icg_grammar.y"
                {
			strcpy((yyval.node).code,(yyvsp[-1].node).code); 
			strcpy((yyval.node).addr,(yyvsp[-1].node).addr);
		}
#line 2594 "y.tab.c"
    break;

  case 134: /* factor: T_IDENTIFIER  */
#line 823 "icg_grammar.y"
           {
	   	strcpy((yyval.node).addr,(yyvsp[0].sval));
	   	strcpy((yyval.node).code,"");
	   }
#line 2603 "y.tab.c"
    break;

  case 135: /* factor: call  */
#line 828 "icg_grammar.y"
           {
	   	strcpy((yyval.node).code,(yyvsp[0].node).code);
	   }
#line 2611 "y.tab.c"
    break;

  case 136: /* factor: T_INTEGER_VAL  */
#line 832 "icg_grammar.y"
           {
	   	strcpy((yyval.node).addr,(yyvsp[0].sval));
	   	strcpy((yyval.node).code,"");
	   }
#line 2620 "y.tab.c"
    break;

  case 137: /* factor: T_FLOAT_VAL  */
#line 837 "icg_grammar.y"
           {
	   strcpy((yyval.node).addr,(yyvsp[0].sval));
	   	strcpy((yyval.node).code,"");
	   }
#line 2629 "y.tab.c"
    break;

  case 138: /* factor: T_STRING_VAL  */
#line 842 "icg_grammar.y"
           {
	   	strcpy((yyval.node).addr,(yyvsp[0].sval));
	   	strcpy((yyval.node).code,"");
	   }
#line 2638 "y.tab.c"
    break;

  case 139: /* factor: T_CHAR_VAL  */
#line 847 "icg_grammar.y"
           {
	   	strcpy((yyval.node).addr,(yyvsp[0].sval));
	   	strcpy((yyval.node).code,"");
	   }
#line 2647 "y.tab.c"
    break;

  case 140: /* call: T_IDENTIFIER '(' ')'  */
#line 854 "icg_grammar.y"
        {
		sprintf((yyval.node).code,"call(%s,0)",(yyvsp[-2].sval));
	}
#line 2655 "y.tab.c"
    break;

  case 141: /* call: T_IDENTIFIER '(' args ')'  */
#line 858 "icg_grammar.y"
         {
	 	sprintf((yyval.node).code,"%s\ncall(%s,%d)",(yyvsp[-1].node).code,(yyvsp[-3].sval),args_count);
	 	args_count=0;	
	 }
#line 2664 "y.tab.c"
    break;

  case 142: /* args: expression  */
#line 865 "icg_grammar.y"
         {
	 	sprintf((yyval.node).code,"%s\nparam %s",(yyvsp[0].node).code,(yyvsp[0].node).addr);
	 	args_count+=1;
	 }
#line 2673 "y.tab.c"
    break;

  case 143: /* args: expression ',' args  */
#line 870 "icg_grammar.y"
         {
	 	args_count+=1;
	 	sprintf((yyval.node).code,"%s\nparam %s\n%s",(yyvsp[-2].node).code,(yyvsp[-2].node).addr,(yyvsp[0].node).code);
	 }
#line 2682 "y.tab.c"
    break;


#line 2686 "y.tab.c"

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

#line 880 "icg_grammar.y"


void yyerror(const char *str)
{
	printf("line no :%d  %s near %s\n", yylineno, str, yytext );
}

extern FILE *yyin;

int main(int argc, char *argv[])
{

    ++argv, --argc;  /* Skip over program name. */
    if (argc > 0) {
        yyin = fopen(argv[0], "r");
    } else {
        yyin = stdin;
    }

    if(yyparse() == 0) { printf("Parsing successful!\n");}

	//LevelOrderTraversal(root);
    return 0;
}

char* temp_func()
{
	char *ret_temp = (char*)malloc(sizeof(char)*10);
	sprintf(ret_temp,"t%d",temp);
	temp+=1;
	return ret_temp;
}

char* label_func()
{
	char *ret_temp = (char*)malloc(sizeof(char)*10);
	sprintf(ret_temp,"L%d",label);
	label+=1;
	return ret_temp;
}

char* global_func()
{
	char *ret_temp = (char*)malloc(sizeof(char)*10);
	sprintf(ret_temp,"G%d",global_next);
	global_next +=1;
	return ret_temp;
}
