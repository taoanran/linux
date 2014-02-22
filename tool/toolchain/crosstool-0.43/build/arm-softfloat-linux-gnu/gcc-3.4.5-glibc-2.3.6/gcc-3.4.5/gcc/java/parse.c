/* A Bison parser, made by GNU Bison 1.875.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* If NAME_PREFIX is specified substitute the variables and functions
   names.  */
#define yyparse java_parse
#define yylex   java_lex
#define yyerror java_error
#define yylval  java_lval
#define yychar  java_char
#define yydebug java_debug
#define yynerrs java_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS_TK = 258,
     MINUS_TK = 259,
     MULT_TK = 260,
     DIV_TK = 261,
     REM_TK = 262,
     LS_TK = 263,
     SRS_TK = 264,
     ZRS_TK = 265,
     AND_TK = 266,
     XOR_TK = 267,
     OR_TK = 268,
     BOOL_AND_TK = 269,
     BOOL_OR_TK = 270,
     EQ_TK = 271,
     NEQ_TK = 272,
     GT_TK = 273,
     GTE_TK = 274,
     LT_TK = 275,
     LTE_TK = 276,
     PLUS_ASSIGN_TK = 277,
     MINUS_ASSIGN_TK = 278,
     MULT_ASSIGN_TK = 279,
     DIV_ASSIGN_TK = 280,
     REM_ASSIGN_TK = 281,
     LS_ASSIGN_TK = 282,
     SRS_ASSIGN_TK = 283,
     ZRS_ASSIGN_TK = 284,
     AND_ASSIGN_TK = 285,
     XOR_ASSIGN_TK = 286,
     OR_ASSIGN_TK = 287,
     PUBLIC_TK = 288,
     PRIVATE_TK = 289,
     PROTECTED_TK = 290,
     STATIC_TK = 291,
     FINAL_TK = 292,
     SYNCHRONIZED_TK = 293,
     VOLATILE_TK = 294,
     TRANSIENT_TK = 295,
     NATIVE_TK = 296,
     PAD_TK = 297,
     ABSTRACT_TK = 298,
     STRICT_TK = 299,
     MODIFIER_TK = 300,
     DECR_TK = 301,
     INCR_TK = 302,
     DEFAULT_TK = 303,
     IF_TK = 304,
     THROW_TK = 305,
     BOOLEAN_TK = 306,
     DO_TK = 307,
     IMPLEMENTS_TK = 308,
     THROWS_TK = 309,
     BREAK_TK = 310,
     IMPORT_TK = 311,
     ELSE_TK = 312,
     INSTANCEOF_TK = 313,
     RETURN_TK = 314,
     VOID_TK = 315,
     CATCH_TK = 316,
     INTERFACE_TK = 317,
     CASE_TK = 318,
     EXTENDS_TK = 319,
     FINALLY_TK = 320,
     SUPER_TK = 321,
     WHILE_TK = 322,
     CLASS_TK = 323,
     SWITCH_TK = 324,
     CONST_TK = 325,
     TRY_TK = 326,
     FOR_TK = 327,
     NEW_TK = 328,
     CONTINUE_TK = 329,
     GOTO_TK = 330,
     PACKAGE_TK = 331,
     THIS_TK = 332,
     ASSERT_TK = 333,
     BYTE_TK = 334,
     SHORT_TK = 335,
     INT_TK = 336,
     LONG_TK = 337,
     CHAR_TK = 338,
     INTEGRAL_TK = 339,
     FLOAT_TK = 340,
     DOUBLE_TK = 341,
     FP_TK = 342,
     ID_TK = 343,
     REL_QM_TK = 344,
     REL_CL_TK = 345,
     NOT_TK = 346,
     NEG_TK = 347,
     ASSIGN_ANY_TK = 348,
     ASSIGN_TK = 349,
     OP_TK = 350,
     CP_TK = 351,
     OCB_TK = 352,
     CCB_TK = 353,
     OSB_TK = 354,
     CSB_TK = 355,
     SC_TK = 356,
     C_TK = 357,
     DOT_TK = 358,
     STRING_LIT_TK = 359,
     CHAR_LIT_TK = 360,
     INT_LIT_TK = 361,
     FP_LIT_TK = 362,
     TRUE_TK = 363,
     FALSE_TK = 364,
     BOOL_LIT_TK = 365,
     NULL_TK = 366
   };
#endif
#define PLUS_TK 258
#define MINUS_TK 259
#define MULT_TK 260
#define DIV_TK 261
#define REM_TK 262
#define LS_TK 263
#define SRS_TK 264
#define ZRS_TK 265
#define AND_TK 266
#define XOR_TK 267
#define OR_TK 268
#define BOOL_AND_TK 269
#define BOOL_OR_TK 270
#define EQ_TK 271
#define NEQ_TK 272
#define GT_TK 273
#define GTE_TK 274
#define LT_TK 275
#define LTE_TK 276
#define PLUS_ASSIGN_TK 277
#define MINUS_ASSIGN_TK 278
#define MULT_ASSIGN_TK 279
#define DIV_ASSIGN_TK 280
#define REM_ASSIGN_TK 281
#define LS_ASSIGN_TK 282
#define SRS_ASSIGN_TK 283
#define ZRS_ASSIGN_TK 284
#define AND_ASSIGN_TK 285
#define XOR_ASSIGN_TK 286
#define OR_ASSIGN_TK 287
#define PUBLIC_TK 288
#define PRIVATE_TK 289
#define PROTECTED_TK 290
#define STATIC_TK 291
#define FINAL_TK 292
#define SYNCHRONIZED_TK 293
#define VOLATILE_TK 294
#define TRANSIENT_TK 295
#define NATIVE_TK 296
#define PAD_TK 297
#define ABSTRACT_TK 298
#define STRICT_TK 299
#define MODIFIER_TK 300
#define DECR_TK 301
#define INCR_TK 302
#define DEFAULT_TK 303
#define IF_TK 304
#define THROW_TK 305
#define BOOLEAN_TK 306
#define DO_TK 307
#define IMPLEMENTS_TK 308
#define THROWS_TK 309
#define BREAK_TK 310
#define IMPORT_TK 311
#define ELSE_TK 312
#define INSTANCEOF_TK 313
#define RETURN_TK 314
#define VOID_TK 315
#define CATCH_TK 316
#define INTERFACE_TK 317
#define CASE_TK 318
#define EXTENDS_TK 319
#define FINALLY_TK 320
#define SUPER_TK 321
#define WHILE_TK 322
#define CLASS_TK 323
#define SWITCH_TK 324
#define CONST_TK 325
#define TRY_TK 326
#define FOR_TK 327
#define NEW_TK 328
#define CONTINUE_TK 329
#define GOTO_TK 330
#define PACKAGE_TK 331
#define THIS_TK 332
#define ASSERT_TK 333
#define BYTE_TK 334
#define SHORT_TK 335
#define INT_TK 336
#define LONG_TK 337
#define CHAR_TK 338
#define INTEGRAL_TK 339
#define FLOAT_TK 340
#define DOUBLE_TK 341
#define FP_TK 342
#define ID_TK 343
#define REL_QM_TK 344
#define REL_CL_TK 345
#define NOT_TK 346
#define NEG_TK 347
#define ASSIGN_ANY_TK 348
#define ASSIGN_TK 349
#define OP_TK 350
#define CP_TK 351
#define OCB_TK 352
#define CCB_TK 353
#define OSB_TK 354
#define CSB_TK 355
#define SC_TK 356
#define C_TK 357
#define DOT_TK 358
#define STRING_LIT_TK 359
#define CHAR_LIT_TK 360
#define INT_LIT_TK 361
#define FP_LIT_TK 362
#define TRUE_TK 363
#define FALSE_TK 364
#define BOOL_LIT_TK 365
#define NULL_TK 366




/* Copy the first part of user declarations.  */
#line 49 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include <dirent.h>
#include "tree.h"
#include "rtl.h"
#include "real.h"
#include "obstack.h"
#include "toplev.h"
#include "flags.h"
#include "java-tree.h"
#include "jcf.h"
#include "lex.h"
#include "parse.h"
#include "zipfile.h"
#include "convert.h"
#include "buffer.h"
#include "xref.h"
#include "function.h"
#include "except.h"
#include "ggc.h"
#include "debug.h"
#include "tree-inline.h"
#include "cgraph.h"

/* Local function prototypes */
static char *java_accstring_lookup (int);
static void  classitf_redefinition_error (const char *,tree, tree, tree);
static void  variable_redefinition_error (tree, tree, tree, int);
static tree  create_class (int, tree, tree, tree);
static tree  create_interface (int, tree, tree);
static void  end_class_declaration (int);
static tree  find_field (tree, tree);
static tree lookup_field_wrapper (tree, tree);
static int   duplicate_declaration_error_p (tree, tree, tree);
static void  register_fields (int, tree, tree);
static tree parser_qualified_classname (tree);
static int  parser_check_super (tree, tree, tree);
static int  parser_check_super_interface (tree, tree, tree);
static void check_modifiers_consistency (int);
static tree lookup_cl (tree);
static tree lookup_java_method2 (tree, tree, int);
static tree method_header (int, tree, tree, tree);
static void fix_method_argument_names (tree ,tree);
static tree method_declarator (tree, tree);
static void parse_warning_context (tree cl, const char *msg, ...)
  ATTRIBUTE_PRINTF_2;
static void issue_warning_error_from_context (tree, const char *msg, va_list)
  ATTRIBUTE_PRINTF (2, 0);
static void parse_ctor_invocation_error (void);
static tree parse_jdk1_1_error (const char *);
static void complete_class_report_errors (jdep *);
static int process_imports (void);
static void read_import_dir (tree);
static int find_in_imports_on_demand (tree, tree);
static void find_in_imports (tree, tree);
static void check_inner_class_access (tree, tree, tree);
static int check_pkg_class_access (tree, tree, bool);
static void register_package (tree);
static tree resolve_package (tree, tree *, tree *);
static tree resolve_class (tree, tree, tree, tree);
static void declare_local_variables (int, tree, tree);
static void dump_java_tree (enum tree_dump_index, tree);
static void source_start_java_method (tree);
static void source_end_java_method (void);
static tree find_name_in_single_imports (tree);
static void check_abstract_method_header (tree);
static tree lookup_java_interface_method2 (tree, tree);
static tree resolve_expression_name (tree, tree *);
static tree maybe_create_class_interface_decl (tree, tree, tree, tree);
static int check_class_interface_creation (int, int, tree, tree, tree, tree);
static tree patch_method_invocation (tree, tree, tree, int, int *, tree *);
static int breakdown_qualified (tree *, tree *, tree);
static int in_same_package (tree, tree);
static tree resolve_and_layout (tree, tree);
static tree qualify_and_find (tree, tree, tree);
static tree resolve_no_layout (tree, tree);
static int invocation_mode (tree, int);
static tree find_applicable_accessible_methods_list (int, tree, tree, tree);
static void search_applicable_methods_list (int, tree, tree, tree, tree *, tree *);
static tree find_most_specific_methods_list (tree);
static int argument_types_convertible (tree, tree);
static tree patch_invoke (tree, tree, tree);
static int maybe_use_access_method (int, tree *, tree *);
static tree lookup_method_invoke (int, tree, tree, tree, tree);
static tree register_incomplete_type (int, tree, tree, tree);
static tree check_inner_circular_reference (tree, tree);
static tree check_circular_reference (tree);
static tree obtain_incomplete_type (tree);
static tree java_complete_lhs (tree);
static tree java_complete_tree (tree);
static tree maybe_generate_pre_expand_clinit (tree);
static int analyze_clinit_body (tree, tree);
static int maybe_yank_clinit (tree);
static void java_complete_expand_method (tree);
static void java_expand_method_bodies (tree);
static int  unresolved_type_p (tree, tree *);
static void create_jdep_list (struct parser_ctxt *);
static tree build_expr_block (tree, tree);
static tree enter_block (void);
static tree exit_block (void);
static tree lookup_name_in_blocks (tree);
static void maybe_absorb_scoping_blocks (void);
static tree build_method_invocation (tree, tree);
static tree build_new_invocation (tree, tree);
static tree build_assignment (int, int, tree, tree);
static tree build_binop (enum tree_code, int, tree, tree);
static tree patch_assignment (tree, tree);
static tree patch_binop (tree, tree, tree);
static tree build_unaryop (int, int, tree);
static tree build_incdec (int, int, tree, int);
static tree patch_unaryop (tree, tree);
static tree build_cast (int, tree, tree);
static tree build_null_of_type (tree);
static tree patch_cast (tree, tree);
static int valid_ref_assignconv_cast_p (tree, tree, int);
static int valid_builtin_assignconv_identity_widening_p (tree, tree);
static int valid_cast_to_p (tree, tree);
static int valid_method_invocation_conversion_p (tree, tree);
static tree try_builtin_assignconv (tree, tree, tree);
static tree try_reference_assignconv (tree, tree);
static tree build_unresolved_array_type (tree);
static int build_type_name_from_array_name (tree, tree *);
static tree build_array_from_name (tree, tree, tree, tree *);
static tree build_array_ref (int, tree, tree);
static tree patch_array_ref (tree);
static tree make_qualified_name (tree, tree, int);
static tree merge_qualified_name (tree, tree);
static tree make_qualified_primary (tree, tree, int);
static int resolve_qualified_expression_name (tree, tree *, tree *, tree *);
static void qualify_ambiguous_name (tree);
static tree resolve_field_access (tree, tree *, tree *);
static tree build_newarray_node (tree, tree, int);
static tree patch_newarray (tree);
static tree resolve_type_during_patch (tree);
static tree build_this (int);
static tree build_wfl_wrap (tree, int);
static tree build_return (int, tree);
static tree patch_return (tree);
static tree maybe_access_field (tree, tree, tree);
static int complete_function_arguments (tree);
static int check_for_static_method_reference (tree, tree, tree, tree, tree);
static int not_accessible_p (tree, tree, tree, int);
static void check_deprecation (tree, tree);
static int class_in_current_package (tree);
static tree build_if_else_statement (int, tree, tree, tree);
static tree patch_if_else_statement (tree);
static tree add_stmt_to_compound (tree, tree, tree);
static tree add_stmt_to_block (tree, tree, tree);
static tree patch_exit_expr (tree);
static tree build_labeled_block (int, tree);
static tree finish_labeled_statement (tree, tree);
static tree build_bc_statement (int, int, tree);
static tree patch_bc_statement (tree);
static tree patch_loop_statement (tree);
static tree build_new_loop (tree);
static tree build_loop_body (int, tree, int);
static tree finish_loop_body (int, tree, tree, int);
static tree build_debugable_stmt (int, tree);
static tree finish_for_loop (int, tree, tree, tree);
static tree patch_switch_statement (tree);
static tree string_constant_concatenation (tree, tree);
static tree build_string_concatenation (tree, tree);
static tree patch_string_cst (tree);
static tree patch_string (tree);
static tree encapsulate_with_try_catch (int, tree, tree, tree);
static tree build_assertion (int, tree, tree);
static tree build_try_statement (int, tree, tree);
static tree build_try_finally_statement (int, tree, tree);
static tree patch_try_statement (tree);
static tree patch_synchronized_statement (tree, tree);
static tree patch_throw_statement (tree, tree);
static void check_thrown_exceptions (int, tree, tree);
static int check_thrown_exceptions_do (tree);
static void purge_unchecked_exceptions (tree);
static bool ctors_unchecked_throws_clause_p (tree);
static void check_concrete_throws_clauses (tree, tree, tree, tree);
static void check_throws_clauses (tree, tree, tree);
static void finish_method_declaration (tree);
static tree build_super_invocation (tree);
static int verify_constructor_circularity (tree, tree);
static char *constructor_circularity_msg (tree, tree);
static tree build_this_super_qualified_invocation (int, tree, tree, int, int);
static const char *get_printable_method_name (tree);
static tree patch_conditional_expr (tree, tree, tree);
static tree generate_finit (tree);
static tree generate_instinit (tree);
static tree build_instinit_invocation (tree);
static void fix_constructors (tree);
static tree build_alias_initializer_parameter_list (int, tree, tree, int *);
static tree craft_constructor (tree, tree);
static int verify_constructor_super (tree);
static tree create_artificial_method (tree, int, tree, tree, tree);
static void start_artificial_method_body (tree);
static void end_artificial_method_body (tree);
static int check_method_redefinition (tree, tree);
static int check_method_types_complete (tree);
static bool hack_is_accessible_p (tree, tree);
static void java_check_regular_methods (tree);
static void check_interface_throws_clauses (tree, tree);
static void java_check_abstract_methods (tree);
static void unreachable_stmt_error (tree);
static int not_accessible_field_error (tree, tree);
static tree find_expr_with_wfl (tree);
static void missing_return_error (tree);
static tree build_new_array_init (int, tree);
static tree patch_new_array_init (tree, tree);
static tree maybe_build_array_element_wfl (tree);
static int array_constructor_check_entry (tree, tree);
static const char *purify_type_name (const char *);
static tree fold_constant_for_init (tree, tree);
static jdeplist *reverse_jdep_list (struct parser_ctxt *);
static void static_ref_err (tree, tree, tree);
static void parser_add_interface (tree, tree, tree);
static void add_superinterfaces (tree, tree);
static tree jdep_resolve_class (jdep *);
static int note_possible_classname (const char *, int);
static void java_complete_expand_classes (void);
static void java_complete_expand_class (tree);
static void java_complete_expand_methods (tree);
static tree cut_identifier_in_qualified (tree);
static tree java_stabilize_reference (tree);
static tree do_unary_numeric_promotion (tree);
static char * operator_string (tree);
static tree do_merge_string_cste (tree, const char *, int, int);
static tree merge_string_cste (tree, tree, int);
static tree java_refold (tree);
static int java_decl_equiv (tree, tree);
static int binop_compound_p (enum tree_code);
static tree search_loop (tree);
static int labeled_block_contains_loop_p (tree, tree);
static int check_abstract_method_definitions (int, tree, tree);
static void java_check_abstract_method_definitions (tree);
static void java_debug_context_do (int);
static void java_parser_context_push_initialized_field (void);
static void java_parser_context_pop_initialized_field (void);
static tree reorder_static_initialized (tree);
static void java_parser_context_suspend (void);
static void java_parser_context_resume (void);
static int pop_current_osb (struct parser_ctxt *);

/* JDK 1.1 work. FIXME */

static tree maybe_make_nested_class_name (tree);
static int make_nested_class_name (tree);
static void set_nested_class_simple_name_value (tree, int);
static void link_nested_class_to_enclosing (void);
static tree resolve_inner_class (htab_t, tree, tree *, tree *, tree);
static tree find_as_inner_class (tree, tree, tree);
static tree find_as_inner_class_do (tree, tree);
static int check_inner_class_redefinition (tree, tree);

static tree build_thisn_assign (void);
static tree build_current_thisn (tree);
static tree build_access_to_thisn (tree, tree, int);
static tree maybe_build_thisn_access_method (tree);

static tree build_outer_field_access (tree, tree);
static tree build_outer_field_access_methods (tree);
static tree build_outer_field_access_expr (int, tree, tree,
						  tree, tree);
static tree build_outer_method_access_method (tree);
static tree build_new_access_id (void);
static tree build_outer_field_access_method (tree, tree, tree,
						    tree, tree);

static int outer_field_access_p (tree, tree);
static int outer_field_expanded_access_p (tree, tree *,
						 tree *, tree *);
static tree outer_field_access_fix (tree, tree, tree);
static tree build_incomplete_class_ref (int, tree);
static tree patch_incomplete_class_ref (tree);
static tree create_anonymous_class (int, tree);
static void patch_anonymous_class (tree, tree, tree);
static void add_inner_class_fields (tree, tree);

static tree build_dot_class_method (tree);
static tree build_dot_class_method_invocation (tree, tree);
static void create_new_parser_context (int);
static tree maybe_build_class_init_for_field (tree, tree);

static int attach_init_test_initialization_flags (void **, void *);
static int emit_test_initialization (void **, void *);

static char *string_convert_int_cst (tree);

/* Number of error found so far. */
int java_error_count;
/* Number of warning found so far. */
int java_warning_count;
/* Tell when not to fold, when doing xrefs */
int do_not_fold;
/* Cyclic inheritance report, as it can be set by layout_class */
const char *cyclic_inheritance_report;

/* The current parser context */
struct parser_ctxt *ctxp;

/* List of things that were analyzed for which code will be generated */
struct parser_ctxt *ctxp_for_generation = NULL;

/* binop_lookup maps token to tree_code. It is used where binary
   operations are involved and required by the parser. RDIV_EXPR
   covers both integral/floating point division. The code is changed
   once the type of both operator is worked out.  */

static const enum tree_code binop_lookup[19] =
  {
    PLUS_EXPR, MINUS_EXPR, MULT_EXPR, RDIV_EXPR, TRUNC_MOD_EXPR,
    LSHIFT_EXPR, RSHIFT_EXPR, URSHIFT_EXPR,
    BIT_AND_EXPR, BIT_XOR_EXPR, BIT_IOR_EXPR,
    TRUTH_ANDIF_EXPR, TRUTH_ORIF_EXPR,
    EQ_EXPR, NE_EXPR, GT_EXPR, GE_EXPR, LT_EXPR, LE_EXPR,
   };
#define BINOP_LOOKUP(VALUE) 						\
  binop_lookup [((VALUE) - PLUS_TK) % ARRAY_SIZE (binop_lookup)]

/* This is the end index for binary operators that can also be used
   in compound assignments. */
#define BINOP_COMPOUND_CANDIDATES 11

/* The "$L" identifier we use to create labels.  */
static GTY(()) tree label_id;

/* The "StringBuffer" identifier used for the String `+' operator. */
static GTY(()) tree wfl_string_buffer;

/* The "append" identifier used for String `+' operator.  */
static GTY(()) tree wfl_append;

/* The "toString" identifier used for String `+' operator. */
static GTY(()) tree wfl_to_string;

/* The "java.lang" import qualified name.  */
static GTY(()) tree java_lang_id;

/* The generated `inst$' identifier used for generated enclosing
   instance/field access functions.  */
static GTY(()) tree inst_id;

/* Context and flag for static blocks */
static GTY(()) tree current_static_block;

/* The generated `write_parm_value$' identifier.  */
static GTY(()) tree wpv_id;

/* The list of all packages we've seen so far */
static GTY(()) tree package_list;

/* Hold THIS for the scope of the current method decl.  */
static GTY(()) tree current_this;

/* Hold a list of catch clauses list. The first element of this list is
   the list of the catch clauses of the currently analyzed try block. */
static GTY(()) tree currently_caught_type_list;

/* This holds a linked list of all the case labels for the current
   switch statement.  It is only used when checking to see if there
   are duplicate labels.  FIXME: probably this should just be attached
   to the switch itself; then it could be referenced via
   `ctxp->current_loop'.  */
static GTY(()) tree case_label_list;

/* Anonymous class counter. Will be reset to 1 every time a non
   anonymous class gets created. */
static int anonymous_class_counter = 1;

static GTY(()) tree src_parse_roots[1];

/* All classes seen from source code */
#define gclass_list src_parse_roots[0]

/* Check modifiers. If one doesn't fit, retrieve it in its declaration
   line and point it out.  */
/* Should point out the one that don't fit. ASCII/unicode, going
   backward. FIXME */

#define check_modifiers(__message, __value, __mask) do {	\
  if ((__value) & ~(__mask))					\
    {								\
      size_t i, remainder = (__value) & ~(__mask);	       	\
      for (i = 0; i < ARRAY_SIZE (ctxp->modifier_ctx); i++)	\
        if ((1 << i) & remainder)				\
	  parse_error_context (ctxp->modifier_ctx [i], (__message), \
			       java_accstring_lookup (1 << i)); \
    }								\
} while (0)



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 441 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
typedef union YYSTYPE {
  tree node;
  int sub_token;
  struct {
    int token;
    int location;
  } operator;
  int value;
} YYSTYPE;
/* Line 191 of yacc.c.  */
#line 708 "java/parse.c"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 451 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"

#include "lex.c"


/* Line 214 of yacc.c.  */
#line 723 "java/parse.c"

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# if YYSTACK_USE_ALLOCA
#  define YYSTACK_ALLOC alloca
# else
#  ifndef YYSTACK_USE_ALLOCA
#   if defined (alloca) || defined (_ALLOCA_H)
#    define YYSTACK_ALLOC alloca
#   else
#    ifdef __GNUC__
#     define YYSTACK_ALLOC __builtin_alloca
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC malloc
#  define YYSTACK_FREE free
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short) + sizeof (YYSTYPE))				\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5590

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  164
/* YYNRULES -- Number of rules. */
#define YYNRULES  510
/* YYNRULES -- Number of states. */
#define YYNSTATES  785

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   366

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    43,    45,    47,    49,    53,    55,    56,    58,    60,
      62,    65,    68,    71,    75,    77,    80,    82,    85,    89,
      92,    96,    98,   100,   104,   107,   111,   117,   122,   128,
     130,   132,   134,   136,   138,   141,   142,   150,   151,   158,
     162,   165,   169,   174,   175,   178,   182,   185,   186,   189,
     192,   194,   198,   202,   205,   209,   211,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   236,   241,   243,
     247,   251,   253,   257,   261,   266,   268,   272,   275,   279,
     283,   285,   287,   288,   292,   295,   299,   303,   308,   313,
     316,   320,   323,   327,   330,   334,   339,   343,   347,   351,
     353,   357,   361,   364,   368,   371,   375,   377,   378,   381,
     384,   386,   390,   394,   396,   398,   401,   403,   404,   408,
     411,   415,   419,   424,   427,   431,   435,   440,   442,   447,
     453,   461,   468,   470,   472,   473,   478,   479,   485,   486,
     492,   493,   500,   504,   509,   512,   516,   519,   523,   526,
     530,   532,   535,   537,   539,   541,   543,   545,   548,   551,
     554,   558,   562,   567,   569,   573,   577,   580,   584,   586,
     588,   590,   593,   595,   597,   599,   602,   605,   609,   611,
     613,   615,   617,   619,   621,   623,   625,   627,   629,   631,
     633,   635,   637,   639,   641,   643,   645,   647,   649,   651,
     653,   655,   657,   660,   663,   666,   669,   672,   675,   678,
     681,   685,   690,   695,   701,   706,   712,   719,   727,   734,
     736,   738,   740,   742,   744,   746,   748,   754,   757,   761,
     766,   774,   782,   783,   787,   792,   795,   799,   805,   808,
     812,   816,   821,   823,   826,   829,   831,   834,   838,   841,
     844,   848,   851,   856,   859,   862,   866,   871,   874,   876,
     884,   892,   899,   903,   909,   914,   922,   929,   932,   935,
     939,   942,   943,   945,   947,   950,   951,   953,   955,   959,
     963,   966,   970,   973,   977,   980,   984,   987,   991,   994,
     998,  1001,  1005,  1009,  1012,  1016,  1022,  1026,  1029,  1033,
    1039,  1045,  1048,  1053,  1057,  1059,  1063,  1067,  1072,  1075,
    1077,  1080,  1083,  1088,  1091,  1095,  1100,  1103,  1106,  1108,
    1110,  1112,  1114,  1118,  1120,  1122,  1124,  1126,  1128,  1132,
    1136,  1140,  1144,  1148,  1152,  1156,  1160,  1164,  1170,  1175,
    1177,  1182,  1188,  1194,  1201,  1205,  1209,  1214,  1220,  1223,
    1227,  1228,  1236,  1237,  1244,  1248,  1252,  1254,  1258,  1262,
    1266,  1270,  1275,  1280,  1285,  1290,  1294,  1298,  1300,  1303,
    1307,  1311,  1314,  1317,  1321,  1325,  1329,  1333,  1336,  1340,
    1345,  1351,  1358,  1364,  1371,  1376,  1381,  1386,  1391,  1395,
    1400,  1404,  1409,  1411,  1413,  1415,  1417,  1420,  1423,  1425,
    1427,  1430,  1432,  1435,  1437,  1440,  1443,  1446,  1449,  1452,
    1455,  1457,  1460,  1463,  1465,  1468,  1471,  1477,  1482,  1487,
    1493,  1498,  1501,  1507,  1512,  1518,  1520,  1524,  1528,  1532,
    1536,  1540,  1544,  1546,  1550,  1554,  1558,  1562,  1564,  1568,
    1572,  1576,  1580,  1584,  1588,  1590,  1594,  1598,  1602,  1606,
    1610,  1614,  1618,  1622,  1626,  1630,  1632,  1636,  1640,  1644,
    1648,  1650,  1654,  1658,  1660,  1664,  1668,  1670,  1674,  1678,
    1680,  1684,  1688,  1690,  1694,  1698,  1700,  1706,  1711,  1715,
    1721,  1723,  1725,  1729,  1733,  1735,  1737,  1739,  1741,  1743,
    1745
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short yyrhs[] =
{
     113,     0,    -1,   126,    -1,   106,    -1,   107,    -1,   110,
      -1,   105,    -1,   104,    -1,   111,    -1,   116,    -1,   117,
      -1,    84,    -1,    87,    -1,    51,    -1,   118,    -1,   121,
      -1,   122,    -1,   118,    -1,   118,    -1,   116,   246,    -1,
     122,   246,    -1,   123,    -1,   124,    -1,   125,    -1,   122,
     103,   125,    -1,    88,    -1,    -1,   129,    -1,   127,    -1,
     128,    -1,   129,   127,    -1,   129,   128,    -1,   127,   128,
      -1,   129,   127,   128,    -1,   130,    -1,   127,   130,    -1,
     133,    -1,   128,   133,    -1,    76,   122,   101,    -1,    76,
       1,    -1,    76,   122,     1,    -1,   131,    -1,   132,    -1,
      56,   122,   101,    -1,    56,     1,    -1,    56,   122,     1,
      -1,    56,   122,   103,     5,   101,    -1,    56,   122,   103,
       1,    -1,    56,   122,   103,     5,     1,    -1,   135,    -1,
     170,    -1,   193,    -1,     1,    -1,    45,    -1,   134,    45,
      -1,    -1,   134,    68,   125,   138,   139,   136,   141,    -1,
      -1,    68,   125,   138,   139,   137,   141,    -1,   134,    68,
       1,    -1,    68,     1,    -1,    68,   125,     1,    -1,   134,
      68,   125,     1,    -1,    -1,    64,   119,    -1,    64,   119,
       1,    -1,    64,     1,    -1,    -1,    53,   140,    -1,    53,
       1,    -1,   120,    -1,   140,   102,   120,    -1,   140,   102,
       1,    -1,    97,    98,    -1,    97,   142,    98,    -1,   143,
      -1,   142,   143,    -1,   144,    -1,   160,    -1,   162,    -1,
     183,    -1,   145,    -1,   150,    -1,   135,    -1,   170,    -1,
     193,    -1,   115,   146,   101,    -1,   134,   115,   146,   101,
      -1,   147,    -1,   146,   102,   147,    -1,   146,   102,     1,
      -1,   148,    -1,   148,    94,   149,    -1,   148,    94,     1,
      -1,   148,    94,   149,     1,    -1,   125,    -1,   148,    99,
     100,    -1,   125,     1,    -1,   148,    99,     1,    -1,   148,
     100,     1,    -1,   274,    -1,   181,    -1,    -1,   152,   151,
     159,    -1,   152,     1,    -1,   115,   153,   157,    -1,    60,
     153,   157,    -1,   134,   115,   153,   157,    -1,   134,    60,
     153,   157,    -1,   115,     1,    -1,   134,   115,     1,    -1,
      60,     1,    -1,   134,    60,     1,    -1,   134,     1,    -1,
     125,    95,    96,    -1,   125,    95,   154,    96,    -1,   153,
      99,   100,    -1,   125,    95,     1,    -1,   153,    99,     1,
      -1,   155,    -1,   154,   102,   155,    -1,   154,   102,     1,
      -1,   115,   148,    -1,   156,   115,   148,    -1,   115,     1,
      -1,   156,   115,     1,    -1,   134,    -1,    -1,    54,   158,
      -1,    54,     1,    -1,   119,    -1,   158,   102,   119,    -1,
     158,   102,     1,    -1,   183,    -1,   101,    -1,   161,   183,
      -1,   134,    -1,    -1,   164,   163,   166,    -1,   165,   157,
      -1,   134,   165,   157,    -1,   123,    95,    96,    -1,   123,
      95,   154,    96,    -1,   184,   167,    -1,   184,   168,   167,
      -1,   184,   186,   167,    -1,   184,   168,   186,   167,    -1,
     185,    -1,   169,    95,    96,   101,    -1,   169,    95,   242,
      96,   101,    -1,   122,   103,    66,    95,   242,    96,   101,
      -1,   122,   103,    66,    95,    96,   101,    -1,    77,    -1,
      66,    -1,    -1,    62,   125,   171,   176,    -1,    -1,   134,
      62,   125,   172,   176,    -1,    -1,    62,   125,   175,   173,
     176,    -1,    -1,   134,    62,   125,   175,   174,   176,    -1,
      62,   125,     1,    -1,   134,    62,   125,     1,    -1,    64,
     120,    -1,   175,   102,   120,    -1,    64,     1,    -1,   175,
     102,     1,    -1,    97,    98,    -1,    97,   177,    98,    -1,
     178,    -1,   177,   178,    -1,   179,    -1,   180,    -1,   135,
      -1,   170,    -1,   145,    -1,   152,   101,    -1,   152,     1,
      -1,    97,    98,    -1,    97,   102,    98,    -1,    97,   182,
      98,    -1,    97,   182,   102,    98,    -1,   149,    -1,   182,
     102,   149,    -1,   182,   102,     1,    -1,   184,   185,    -1,
     184,   186,   185,    -1,    97,    -1,    98,    -1,   187,    -1,
     186,   187,    -1,   188,    -1,   190,    -1,   135,    -1,   189,
     101,    -1,   115,   146,    -1,   156,   115,   146,    -1,   192,
      -1,   195,    -1,   199,    -1,   200,    -1,   211,    -1,   215,
      -1,   192,    -1,   196,    -1,   201,    -1,   212,    -1,   216,
      -1,   183,    -1,   193,    -1,   197,    -1,   202,    -1,   214,
      -1,   222,    -1,   223,    -1,   224,    -1,   227,    -1,   225,
      -1,   229,    -1,   226,    -1,   101,    -1,   125,    90,    -1,
     194,   190,    -1,   125,     1,    -1,   194,   191,    -1,   198,
     101,    -1,     1,   101,    -1,     1,    97,    -1,     1,    98,
      -1,   169,    95,     1,    -1,   169,    95,    96,     1,    -1,
     169,    95,   242,     1,    -1,   169,    95,   242,    96,     1,
      -1,   122,   103,    66,     1,    -1,   122,   103,    66,    95,
       1,    -1,   122,   103,    66,    95,   242,     1,    -1,   122,
     103,    66,    95,   242,    96,     1,    -1,   122,   103,    66,
      95,    96,     1,    -1,   271,    -1,   255,    -1,   256,    -1,
     251,    -1,   252,    -1,   248,    -1,   237,    -1,    49,    95,
     274,    96,   190,    -1,    49,     1,    -1,    49,    95,     1,
      -1,    49,    95,   274,     1,    -1,    49,    95,   274,    96,
     191,    57,   190,    -1,    49,    95,   274,    96,   191,    57,
     191,    -1,    -1,   204,   203,   205,    -1,    69,    95,   274,
      96,    -1,    69,     1,    -1,    69,    95,     1,    -1,    69,
      95,   274,    96,     1,    -1,    97,    98,    -1,    97,   208,
      98,    -1,    97,   206,    98,    -1,    97,   206,   208,    98,
      -1,   207,    -1,   206,   207,    -1,   208,   186,    -1,   209,
      -1,   208,   209,    -1,    63,   275,    90,    -1,    48,    90,
      -1,    63,     1,    -1,    63,   275,     1,    -1,    48,     1,
      -1,    67,    95,   274,    96,    -1,   210,   190,    -1,    67,
       1,    -1,    67,    95,     1,    -1,    67,    95,   274,     1,
      -1,   210,   191,    -1,    52,    -1,   213,   190,    67,    95,
     274,    96,   101,    -1,   218,   101,   274,   101,   220,    96,
     190,    -1,   218,   101,   101,   220,    96,   190,    -1,   218,
     101,     1,    -1,   218,   101,   274,   101,     1,    -1,   218,
     101,   101,     1,    -1,   218,   101,   274,   101,   220,    96,
     191,    -1,   218,   101,   101,   220,    96,   191,    -1,    72,
      95,    -1,    72,     1,    -1,    72,    95,     1,    -1,   217,
     219,    -1,    -1,   221,    -1,   189,    -1,   221,     1,    -1,
      -1,   221,    -1,   198,    -1,   221,   102,   198,    -1,   221,
     102,     1,    -1,    55,   101,    -1,    55,   125,   101,    -1,
      55,     1,    -1,    55,   125,     1,    -1,    74,   101,    -1,
      74,   125,   101,    -1,    74,     1,    -1,    74,   125,     1,
      -1,    59,   101,    -1,    59,   274,   101,    -1,    59,     1,
      -1,    59,   274,     1,    -1,    50,   274,   101,    -1,    50,
       1,    -1,    50,   274,     1,    -1,    78,   274,    90,   274,
     101,    -1,    78,   274,   101,    -1,    78,     1,    -1,    78,
     274,     1,    -1,   228,    95,   274,    96,   183,    -1,   228,
      95,   274,    96,     1,    -1,   228,     1,    -1,   228,    95,
       1,    96,    -1,   228,    95,     1,    -1,   134,    -1,    71,
     183,   230,    -1,    71,   183,   233,    -1,    71,   183,   230,
     233,    -1,    71,     1,    -1,   231,    -1,   230,   231,    -1,
     232,   183,    -1,    61,    95,   155,    96,    -1,    61,     1,
      -1,    61,    95,     1,    -1,    61,    95,     1,    96,    -1,
      65,   183,    -1,    65,     1,    -1,   235,    -1,   243,    -1,
     114,    -1,    77,    -1,    95,   274,    96,    -1,   237,    -1,
     247,    -1,   248,    -1,   249,    -1,   236,    -1,   122,   103,
      77,    -1,    95,   274,     1,    -1,   122,   103,     1,    -1,
     116,   103,     1,    -1,    60,   103,     1,    -1,   122,   103,
      68,    -1,   121,   103,    68,    -1,   116,   103,    68,    -1,
      60,   103,    68,    -1,    73,   119,    95,   242,    96,    -1,
      73,   119,    95,    96,    -1,   238,    -1,   241,   125,    95,
      96,    -1,   241,   125,    95,    96,   141,    -1,   241,   125,
      95,   242,    96,    -1,   241,   125,    95,   242,    96,   141,
      -1,    73,     1,   101,    -1,    73,   119,     1,    -1,    73,
     119,    95,     1,    -1,    73,   119,    95,   242,     1,    -1,
     241,     1,    -1,   241,   125,     1,    -1,    -1,    73,   119,
      95,   242,    96,   239,   141,    -1,    -1,    73,   119,    95,
      96,   240,   141,    -1,   122,   103,    73,    -1,   234,   103,
      73,    -1,   274,    -1,   242,   102,   274,    -1,   242,   102,
       1,    -1,    73,   116,   244,    -1,    73,   118,   244,    -1,
      73,   116,   244,   246,    -1,    73,   118,   244,   246,    -1,
      73,   118,   246,   181,    -1,    73,   116,   246,   181,    -1,
      73,     1,   100,    -1,    73,     1,    99,    -1,   245,    -1,
     244,   245,    -1,    99,   274,   100,    -1,    99,   274,     1,
      -1,    99,     1,    -1,    99,   100,    -1,   246,    99,   100,
      -1,   246,    99,     1,    -1,   234,   103,   125,    -1,    66,
     103,   125,    -1,    66,     1,    -1,   122,    95,    96,    -1,
     122,    95,   242,    96,    -1,   234,   103,   125,    95,    96,
      -1,   234,   103,   125,    95,   242,    96,    -1,    66,   103,
     125,    95,    96,    -1,    66,   103,   125,    95,   242,    96,
      -1,    66,   103,     1,    96,    -1,    66,   103,     1,   103,
      -1,   122,    99,   274,   100,    -1,   235,    99,   274,   100,
      -1,   122,    99,     1,    -1,   122,    99,   274,     1,    -1,
     235,    99,     1,    -1,   235,    99,   274,     1,    -1,   234,
      -1,   122,    -1,   251,    -1,   252,    -1,   250,    47,    -1,
     250,    46,    -1,   255,    -1,   256,    -1,     3,   254,    -1,
     257,    -1,     3,     1,    -1,   253,    -1,     4,   253,    -1,
       4,     1,    -1,    47,   254,    -1,    47,     1,    -1,    46,
     254,    -1,    46,     1,    -1,   250,    -1,    91,   254,    -1,
      92,   254,    -1,   258,    -1,    91,     1,    -1,    92,     1,
      -1,    95,   116,   246,    96,   254,    -1,    95,   116,    96,
     254,    -1,    95,   274,    96,   257,    -1,    95,   122,   246,
      96,   257,    -1,    95,   116,    99,     1,    -1,    95,     1,
      -1,    95,   116,   246,    96,     1,    -1,    95,   116,    96,
       1,    -1,    95,   122,   246,    96,     1,    -1,   254,    -1,
     259,     5,   254,    -1,   259,     6,   254,    -1,   259,     7,
     254,    -1,   259,     5,     1,    -1,   259,     6,     1,    -1,
     259,     7,     1,    -1,   259,    -1,   260,     3,   259,    -1,
     260,     4,   259,    -1,   260,     3,     1,    -1,   260,     4,
       1,    -1,   260,    -1,   261,     8,   260,    -1,   261,     9,
     260,    -1,   261,    10,   260,    -1,   261,     8,     1,    -1,
     261,     9,     1,    -1,   261,    10,     1,    -1,   261,    -1,
     262,    20,   261,    -1,   262,    18,   261,    -1,   262,    21,
     261,    -1,   262,    19,   261,    -1,   262,    58,   117,    -1,
     262,    20,     1,    -1,   262,    18,     1,    -1,   262,    21,
       1,    -1,   262,    19,     1,    -1,   262,    58,     1,    -1,
     262,    -1,   263,    16,   262,    -1,   263,    17,   262,    -1,
     263,    16,     1,    -1,   263,    17,     1,    -1,   263,    -1,
     264,    11,   263,    -1,   264,    11,     1,    -1,   264,    -1,
     265,    12,   264,    -1,   265,    12,     1,    -1,   265,    -1,
     266,    13,   265,    -1,   266,    13,     1,    -1,   266,    -1,
     267,    14,   266,    -1,   267,    14,     1,    -1,   267,    -1,
     268,    15,   267,    -1,   268,    15,     1,    -1,   268,    -1,
     268,    89,   274,    90,   269,    -1,   268,    89,    90,     1,
      -1,   268,    89,     1,    -1,   268,    89,   274,    90,     1,
      -1,   269,    -1,   271,    -1,   272,   273,   270,    -1,   272,
     273,     1,    -1,   122,    -1,   247,    -1,   249,    -1,    93,
      -1,    94,    -1,   270,    -1,   274,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short yyrline[] =
{
       0,   602,   602,   608,   609,   610,   611,   612,   613,   618,
     619,   623,   624,   625,   629,   630,   634,   638,   642,   646,
     654,   666,   667,   671,   675,   680,   685,   686,   687,   688,
     689,   690,   691,   692,   696,   700,   707,   708,   712,   717,
     719,   724,   725,   729,   755,   757,   762,   780,   782,   787,
     789,   791,   792,   803,   807,   824,   823,   828,   827,   831,
     833,   835,   840,   845,   846,   848,   850,   855,   856,   858,
     866,   871,   876,   881,   889,   900,   901,   905,   906,   907,
     908,   919,   920,   921,   923,   925,   930,   932,   944,   945,
     947,   952,   954,   961,   967,   976,   977,   979,   981,   986,
     991,   992,   998,   997,  1008,  1013,  1015,  1017,  1019,  1021,
    1026,  1031,  1036,  1041,  1049,  1054,  1056,  1065,  1067,  1072,
    1076,  1081,  1086,  1090,  1095,  1100,  1108,  1118,  1119,  1121,
    1126,  1128,  1130,  1135,  1136,  1141,  1150,  1167,  1166,  1176,
    1178,  1183,  1188,  1196,  1201,  1203,  1205,  1210,  1215,  1221,
    1229,  1231,  1236,  1242,  1254,  1253,  1258,  1257,  1262,  1261,
    1266,  1265,  1269,  1271,  1276,  1281,  1286,  1288,  1293,  1295,
    1300,  1301,  1305,  1306,  1307,  1309,  1314,  1318,  1323,  1329,
    1331,  1333,  1335,  1340,  1345,  1349,  1355,  1357,  1362,  1367,
    1381,  1382,  1386,  1387,  1389,  1397,  1401,  1403,  1408,  1409,
    1410,  1411,  1412,  1413,  1418,  1419,  1420,  1421,  1422,  1427,
    1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,  1436,  1437,
    1438,  1442,  1460,  1471,  1473,  1478,  1485,  1494,  1499,  1504,
    1509,  1511,  1516,  1518,  1523,  1525,  1527,  1529,  1531,  1536,
    1537,  1538,  1539,  1540,  1541,  1542,  1546,  1551,  1553,  1555,
    1560,  1565,  1571,  1570,  1586,  1591,  1593,  1595,  1603,  1605,
    1607,  1609,  1614,  1615,  1619,  1623,  1624,  1628,  1634,  1640,
    1642,  1644,  1649,  1657,  1659,  1661,  1663,  1668,  1673,  1682,
    1687,  1693,  1700,  1702,  1704,  1709,  1711,  1721,  1727,  1729,
    1734,  1747,  1748,  1754,  1760,  1765,  1766,  1771,  1773,  1775,
    1780,  1782,  1784,  1786,  1791,  1793,  1795,  1797,  1802,  1804,
    1806,  1808,  1813,  1818,  1820,  1825,  1829,  1833,  1835,  1840,
    1846,  1848,  1850,  1852,  1857,  1869,  1871,  1873,  1878,  1883,
    1884,  1892,  1901,  1926,  1928,  1933,  1938,  1940,  1946,  1947,
    1951,  1952,  1954,  1956,  1957,  1958,  1959,  1960,  1964,  1969,
    1971,  1973,  1975,  1980,  1982,  1984,  1986,  1994,  1996,  1998,
    2002,  2008,  2009,  2015,  2016,  2018,  2020,  2022,  2024,  2026,
    2037,  2036,  2070,  2069,  2087,  2089,  2094,  2099,  2104,  2109,
    2111,  2113,  2115,  2119,  2130,  2139,  2141,  2146,  2148,  2153,
    2163,  2165,  2174,  2200,  2202,  2207,  2211,  2217,  2222,  2224,
    2226,  2237,  2248,  2253,  2262,  2264,  2269,  2271,  2273,  2278,
    2283,  2288,  2296,  2297,  2298,  2299,  2303,  2308,  2313,  2314,
    2315,  2317,  2318,  2323,  2328,  2330,  2335,  2337,  2342,  2344,
    2349,  2350,  2352,  2354,  2355,  2357,  2362,  2370,  2372,  2374,
    2388,  2390,  2395,  2397,  2399,  2404,  2405,  2410,  2415,  2420,
    2422,  2424,  2429,  2430,  2435,  2440,  2442,  2447,  2448,  2453,
    2458,  2463,  2465,  2467,  2472,  2473,  2478,  2483,  2488,  2493,
    2495,  2497,  2499,  2501,  2503,  2508,  2509,  2514,  2519,  2521,
    2526,  2527,  2532,  2537,  2538,  2543,  2548,  2549,  2554,  2559,
    2560,  2565,  2570,  2571,  2576,  2581,  2582,  2587,  2593,  2595,
    2600,  2601,  2605,  2607,  2615,  2616,  2617,  2621,  2622,  2626,
    2630
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PLUS_TK", "MINUS_TK", "MULT_TK", "DIV_TK", 
  "REM_TK", "LS_TK", "SRS_TK", "ZRS_TK", "AND_TK", "XOR_TK", "OR_TK", 
  "BOOL_AND_TK", "BOOL_OR_TK", "EQ_TK", "NEQ_TK", "GT_TK", "GTE_TK", 
  "LT_TK", "LTE_TK", "PLUS_ASSIGN_TK", "MINUS_ASSIGN_TK", 
  "MULT_ASSIGN_TK", "DIV_ASSIGN_TK", "REM_ASSIGN_TK", "LS_ASSIGN_TK", 
  "SRS_ASSIGN_TK", "ZRS_ASSIGN_TK", "AND_ASSIGN_TK", "XOR_ASSIGN_TK", 
  "OR_ASSIGN_TK", "PUBLIC_TK", "PRIVATE_TK", "PROTECTED_TK", "STATIC_TK", 
  "FINAL_TK", "SYNCHRONIZED_TK", "VOLATILE_TK", "TRANSIENT_TK", 
  "NATIVE_TK", "PAD_TK", "ABSTRACT_TK", "STRICT_TK", "MODIFIER_TK", 
  "DECR_TK", "INCR_TK", "DEFAULT_TK", "IF_TK", "THROW_TK", "BOOLEAN_TK", 
  "DO_TK", "IMPLEMENTS_TK", "THROWS_TK", "BREAK_TK", "IMPORT_TK", 
  "ELSE_TK", "INSTANCEOF_TK", "RETURN_TK", "VOID_TK", "CATCH_TK", 
  "INTERFACE_TK", "CASE_TK", "EXTENDS_TK", "FINALLY_TK", "SUPER_TK", 
  "WHILE_TK", "CLASS_TK", "SWITCH_TK", "CONST_TK", "TRY_TK", "FOR_TK", 
  "NEW_TK", "CONTINUE_TK", "GOTO_TK", "PACKAGE_TK", "THIS_TK", 
  "ASSERT_TK", "BYTE_TK", "SHORT_TK", "INT_TK", "LONG_TK", "CHAR_TK", 
  "INTEGRAL_TK", "FLOAT_TK", "DOUBLE_TK", "FP_TK", "ID_TK", "REL_QM_TK", 
  "REL_CL_TK", "NOT_TK", "NEG_TK", "ASSIGN_ANY_TK", "ASSIGN_TK", "OP_TK", 
  "CP_TK", "OCB_TK", "CCB_TK", "OSB_TK", "CSB_TK", "SC_TK", "C_TK", 
  "DOT_TK", "STRING_LIT_TK", "CHAR_LIT_TK", "INT_LIT_TK", "FP_LIT_TK", 
  "TRUE_TK", "FALSE_TK", "BOOL_LIT_TK", "NULL_TK", "$accept", "goal", 
  "literal", "type", "primitive_type", "reference_type", 
  "class_or_interface_type", "class_type", "interface_type", "array_type", 
  "name", "simple_name", "qualified_name", "identifier", 
  "compilation_unit", "import_declarations", "type_declarations", 
  "package_declaration", "import_declaration", 
  "single_type_import_declaration", "type_import_on_demand_declaration", 
  "type_declaration", "modifiers", "class_declaration", "@1", "@2", 
  "super", "interfaces", "interface_type_list", "class_body", 
  "class_body_declarations", "class_body_declaration", 
  "class_member_declaration", "field_declaration", "variable_declarators", 
  "variable_declarator", "variable_declarator_id", "variable_initializer", 
  "method_declaration", "@3", "method_header", "method_declarator", 
  "formal_parameter_list", "formal_parameter", "final", "throws", 
  "class_type_list", "method_body", "static_initializer", "static", 
  "constructor_declaration", "@4", "constructor_header", 
  "constructor_declarator", "constructor_body", "constructor_block_end", 
  "explicit_constructor_invocation", "this_or_super", 
  "interface_declaration", "@5", "@6", "@7", "@8", "extends_interfaces", 
  "interface_body", "interface_member_declarations", 
  "interface_member_declaration", "constant_declaration", 
  "abstract_method_declaration", "array_initializer", 
  "variable_initializers", "block", "block_begin", "block_end", 
  "block_statements", "block_statement", 
  "local_variable_declaration_statement", "local_variable_declaration", 
  "statement", "statement_nsi", "statement_without_trailing_substatement", 
  "empty_statement", "label_decl", "labeled_statement", 
  "labeled_statement_nsi", "expression_statement", "statement_expression", 
  "if_then_statement", "if_then_else_statement", 
  "if_then_else_statement_nsi", "switch_statement", "@9", 
  "switch_expression", "switch_block", "switch_block_statement_groups", 
  "switch_block_statement_group", "switch_labels", "switch_label", 
  "while_expression", "while_statement", "while_statement_nsi", 
  "do_statement_begin", "do_statement", "for_statement", 
  "for_statement_nsi", "for_header", "for_begin", "for_init", 
  "for_update", "statement_expression_list", "break_statement", 
  "continue_statement", "return_statement", "throw_statement", 
  "assert_statement", "synchronized_statement", "synchronized", 
  "try_statement", "catches", "catch_clause", "catch_clause_parameter", 
  "finally", "primary", "primary_no_new_array", "type_literals", 
  "class_instance_creation_expression", "anonymous_class_creation", "@10", 
  "@11", "something_dot_new", "argument_list", 
  "array_creation_expression", "dim_exprs", "dim_expr", "dims", 
  "field_access", "method_invocation", "array_access", 
  "postfix_expression", "post_increment_expression", 
  "post_decrement_expression", "trap_overflow_corner_case", 
  "unary_expression", "pre_increment_expression", 
  "pre_decrement_expression", "unary_expression_not_plus_minus", 
  "cast_expression", "multiplicative_expression", "additive_expression", 
  "shift_expression", "relational_expression", "equality_expression", 
  "and_expression", "exclusive_or_expression", "inclusive_or_expression", 
  "conditional_and_expression", "conditional_or_expression", 
  "conditional_expression", "assignment_expression", "assignment", 
  "left_hand_side", "assignment_operator", "expression", 
  "constant_expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short yytoknum[] =
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
     365,   366
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short yyr1[] =
{
       0,   112,   113,   114,   114,   114,   114,   114,   114,   115,
     115,   116,   116,   116,   117,   117,   118,   119,   120,   121,
     121,   122,   122,   123,   124,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   131,   132,   132,   132,   133,
     133,   133,   133,   134,   134,   136,   135,   137,   135,   135,
     135,   135,   135,   138,   138,   138,   138,   139,   139,   139,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   144,   144,   144,   144,   144,   145,   145,   146,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   148,   148,
     149,   149,   151,   150,   150,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   153,   153,   153,   153,   153,   154,
     154,   154,   155,   155,   155,   155,   156,   157,   157,   157,
     158,   158,   158,   159,   159,   160,   161,   163,   162,   164,
     164,   165,   165,   166,   166,   166,   166,   167,   168,   168,
     168,   168,   169,   169,   171,   170,   172,   170,   173,   170,
     174,   170,   170,   170,   175,   175,   175,   175,   176,   176,
     177,   177,   178,   178,   178,   178,   179,   180,   180,   181,
     181,   181,   181,   182,   182,   182,   183,   183,   184,   185,
     186,   186,   187,   187,   187,   188,   189,   189,   190,   190,
     190,   190,   190,   190,   191,   191,   191,   191,   191,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   194,   195,   195,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   198,
     198,   198,   198,   198,   198,   198,   199,   199,   199,   199,
     200,   201,   203,   202,   204,   204,   204,   204,   205,   205,
     205,   205,   206,   206,   207,   208,   208,   209,   209,   209,
     209,   209,   210,   211,   211,   211,   211,   212,   213,   214,
     215,   215,   215,   215,   215,   216,   216,   217,   217,   217,
     218,   219,   219,   219,   219,   220,   220,   221,   221,   221,
     222,   222,   222,   222,   223,   223,   223,   223,   224,   224,
     224,   224,   225,   225,   225,   226,   226,   226,   226,   227,
     227,   227,   227,   227,   228,   229,   229,   229,   229,   230,
     230,   231,   232,   232,   232,   232,   233,   233,   234,   234,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   236,   236,   236,   236,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     239,   238,   240,   238,   241,   241,   242,   242,   242,   243,
     243,   243,   243,   243,   243,   243,   243,   244,   244,   245,
     245,   245,   246,   246,   246,   247,   247,   247,   248,   248,
     248,   248,   248,   248,   248,   248,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   250,   251,   252,   253,   253,
     253,   253,   253,   254,   254,   254,   255,   255,   256,   256,
     257,   257,   257,   257,   257,   257,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   259,   259,   259,   259,   259,
     259,   259,   260,   260,   260,   260,   260,   261,   261,   261,
     261,   261,   261,   261,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   263,   263,   263,   263,   263,
     264,   264,   264,   265,   265,   265,   266,   266,   266,   267,
     267,   267,   268,   268,   268,   269,   269,   269,   269,   269,
     270,   270,   271,   271,   272,   272,   272,   273,   273,   274,
     275
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     3,     1,     0,     1,     1,     1,
       2,     2,     2,     3,     1,     2,     1,     2,     3,     2,
       3,     1,     1,     3,     2,     3,     5,     4,     5,     1,
       1,     1,     1,     1,     2,     0,     7,     0,     6,     3,
       2,     3,     4,     0,     2,     3,     2,     0,     2,     2,
       1,     3,     3,     2,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     1,     3,
       3,     1,     3,     3,     4,     1,     3,     2,     3,     3,
       1,     1,     0,     3,     2,     3,     3,     4,     4,     2,
       3,     2,     3,     2,     3,     4,     3,     3,     3,     1,
       3,     3,     2,     3,     2,     3,     1,     0,     2,     2,
       1,     3,     3,     1,     1,     2,     1,     0,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     4,     5,
       7,     6,     1,     1,     0,     4,     0,     5,     0,     5,
       0,     6,     3,     4,     2,     3,     2,     3,     2,     3,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     3,     4,     1,     3,     3,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     4,     4,     5,     4,     5,     6,     7,     6,     1,
       1,     1,     1,     1,     1,     1,     5,     2,     3,     4,
       7,     7,     0,     3,     4,     2,     3,     5,     2,     3,
       3,     4,     1,     2,     2,     1,     2,     3,     2,     2,
       3,     2,     4,     2,     2,     3,     4,     2,     1,     7,
       7,     6,     3,     5,     4,     7,     6,     2,     2,     3,
       2,     0,     1,     1,     2,     0,     1,     1,     3,     3,
       2,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     3,     2,     3,     5,     3,     2,     3,     5,
       5,     2,     4,     3,     1,     3,     3,     4,     2,     1,
       2,     2,     4,     2,     3,     4,     2,     2,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     5,     4,     1,
       4,     5,     5,     6,     3,     3,     4,     5,     2,     3,
       0,     7,     0,     6,     3,     3,     1,     3,     3,     3,
       3,     4,     4,     4,     4,     3,     3,     1,     2,     3,
       3,     2,     2,     3,     3,     3,     3,     2,     3,     4,
       5,     6,     5,     6,     4,     4,     4,     4,     3,     4,
       3,     4,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     1,     2,     2,     5,     4,     4,     5,
       4,     2,     5,     4,     5,     1,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     5,     4,     3,     5,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short yydefact[] =
{
       0,    52,    53,     0,     0,     0,     0,   221,     0,     2,
       0,     0,     0,    34,    41,    42,    36,     0,    49,    50,
      51,    44,    25,     0,    21,    22,    23,     0,    60,     0,
      39,     0,     1,     0,    35,    37,     0,     0,    54,     0,
       0,    45,    43,     0,   162,     0,     0,   158,    61,     0,
      67,    40,    38,     0,     0,     0,    59,     0,    47,     0,
      24,   166,    18,   164,    16,     0,   155,     0,     0,    66,
      17,     0,     0,    57,   163,     0,   160,    62,    67,    48,
      46,    13,     0,    11,    12,   168,     0,     9,    10,    14,
      15,    16,     0,   174,   176,     0,   175,     0,   170,   172,
     173,   167,   165,   159,    65,    69,    70,    68,     0,   157,
       0,    55,   111,     0,   127,   109,     0,     0,    88,    91,
     127,     0,    19,    20,   113,     0,     0,   178,   177,   169,
     171,     0,     0,    58,   161,     0,     0,     0,     0,   106,
      97,    86,     0,     0,     0,     0,   105,   392,     0,   112,
     127,   110,     0,   127,    72,    71,   188,    73,    21,     0,
      83,     0,    75,    77,    81,    82,     0,    78,     0,    79,
     137,   127,    84,    80,     0,    85,    56,   117,   114,     0,
     126,     0,   119,     0,   129,   130,   128,   118,   116,    90,
       0,    89,    93,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     7,     6,     3,     4,     5,
       8,   340,     0,     0,   413,     0,   101,   412,   338,   347,
     343,   359,     0,   339,   344,   345,   346,   430,   414,   415,
     423,   445,   418,   419,   421,   433,   452,   457,   464,   475,
     480,   483,   486,   489,   492,   495,   500,   509,   501,     0,
     100,    98,    96,    99,   394,   393,   108,    87,   107,     0,
     127,    74,    76,   104,     0,   135,     0,   139,     0,     0,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,   189,     0,     9,    15,   413,     0,   126,
     194,     0,     0,   209,   186,     0,   190,   192,     0,   193,
     198,   210,     0,   199,   211,     0,   200,   201,   212,   252,
       0,   202,     0,   213,   203,   291,     0,   214,   215,   216,
     218,   220,   217,     0,   219,   245,   244,     0,   242,   243,
     240,   241,   239,   124,   122,   115,     0,     0,     0,   422,
     413,   344,   346,   420,   425,   424,   429,   428,   427,   426,
       0,   397,     0,     0,     0,    17,     0,   434,   431,   435,
     432,   441,     0,   413,     0,   179,     0,   183,     0,     0,
       0,     0,     0,     0,    94,     0,     0,   368,     0,   417,
     416,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   507,   508,     0,   141,     0,   140,   134,   103,
     133,   138,     0,   228,   229,   227,   247,     0,   313,     0,
     302,   300,     0,   310,   308,     0,   274,     0,   255,     0,
     328,     0,   288,     0,   306,   304,     0,   317,     0,     0,
     196,     0,   224,   222,     0,     0,   187,   191,   195,   413,
     324,   223,   226,     0,   273,     0,   413,   293,   297,   290,
       0,     0,   321,     0,   121,   120,   125,   123,   132,   131,
     352,   356,     0,   396,   386,   385,   364,     0,   379,   387,
       0,   380,     0,   365,     0,     0,     0,    19,    20,   349,
     342,   180,   181,     0,   351,   355,   354,   398,     0,   376,
     408,     0,   350,   353,   374,   348,   375,   395,   410,     0,
     369,     0,   449,   446,   450,   447,   451,   448,   455,   453,
     456,   454,   461,   458,   462,   459,   463,   460,   471,   466,
     473,   468,   470,   465,   472,   467,   474,     0,   469,   478,
     476,   479,   477,   482,   481,   485,   484,   488,   487,   491,
     490,   494,   493,   498,     0,     0,   503,   502,   142,   413,
     143,     0,     0,   147,     0,   248,     0,   314,   312,   303,
     301,   311,   309,   275,     0,   256,     0,     0,     0,   325,
     329,     0,   326,   289,   307,   305,   318,     0,   316,   342,
       0,   197,   230,     0,     0,     0,   253,     0,   294,     0,
     282,     0,     0,   323,     0,   404,   405,     0,   391,     0,
     388,   381,   384,   382,   383,   366,   358,     0,   443,   437,
     440,     0,     0,   438,   185,   182,   184,   399,     0,   409,
     406,     0,   411,   407,   360,     0,   497,     0,     0,   144,
       0,     0,   145,   249,     0,   276,   272,     0,   333,     0,
     337,   336,   330,   327,   331,     0,   234,     0,   231,   232,
       0,     0,     0,   258,     0,   262,     0,   265,     0,   299,
     298,   284,     0,   296,     0,   322,     0,   402,     0,   390,
     389,     0,   367,   357,   442,   436,   444,   439,   378,   377,
     400,     0,   361,   362,   499,   496,     0,   146,     0,     0,
       0,   246,     0,   198,     0,   205,   206,     0,   207,   208,
       0,   257,   334,     0,   315,   235,     0,     0,   233,   271,
     268,   269,   510,     0,   260,   263,     0,   259,     0,   266,
       0,     0,   283,     0,   320,   319,   403,   373,     0,   401,
     363,     0,   148,     0,     0,     0,   225,   277,     0,   335,
     332,   238,   236,     0,   270,   267,   261,     0,   281,     0,
     371,     0,     0,   149,     0,   250,     0,     0,   237,   279,
     280,   151,     0,     0,     0,     0,   150,     0,     0,     0,
       0,   286,     0,   251,   285
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short yydefgoto[] =
{
      -1,     8,   211,   284,   212,    88,    89,    71,    63,   213,
     214,    24,    25,    26,     9,    10,    11,    12,    13,    14,
      15,    16,   450,   290,   135,   108,    50,    73,   107,   133,
     161,   162,   163,    94,   117,   118,   119,   215,   165,   264,
      95,   114,   181,   182,   291,   139,   186,   409,   167,   168,
     169,   266,   170,   171,   411,   560,   561,   292,    19,    46,
      75,    68,   110,    47,    66,    97,    98,    99,   100,   216,
     368,   293,   174,   563,   728,   296,   297,   298,   299,   702,
     300,   301,   302,   303,   705,   304,   305,   306,   307,   706,
     308,   453,   309,   596,   664,   665,   666,   667,   310,   311,
     708,   312,   313,   314,   709,   315,   316,   459,   672,   673,
     317,   318,   319,   320,   321,   322,   323,   324,   579,   580,
     581,   582,   217,   218,   219,   220,   221,   738,   681,   222,
     498,   223,   478,   479,   123,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   404,   499,   723
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -564
static const short yypact[] =
{
     185,  -564,  -564,    25,   -60,   234,   437,  -564,    52,  -564,
     422,   473,   527,  -564,  -564,  -564,  -564,   451,  -564,  -564,
    -564,  -564,  -564,    16,  -564,  -564,  -564,   169,  -564,   419,
    -564,    22,  -564,   621,  -564,  -564,   532,   623,  -564,   -60,
     442,  -564,  -564,   289,  -564,   480,   -15,    -9,  -564,   488,
      57,  -564,  -564,   -60,   631,   278,  -564,   585,  -564,    75,
    -564,  -564,  -564,  -564,   137,  1277,  -564,   505,   -15,  -564,
    -564,     6,   541,  -564,  -564,   -15,    -9,  -564,    57,  -564,
    -564,  -564,   552,  -564,  -564,  -564,   579,   146,  -564,  -564,
    -564,   499,   971,  -564,  -564,   104,  -564,  1325,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,   191,   205,  -564,
     -15,  -564,  -564,   305,   -18,  -564,   619,   469,  -564,   740,
     -18,   307,   251,   251,  -564,   600,   604,  -564,  -564,  -564,
    -564,   608,  1108,  -564,  -564,   205,   735,   609,    24,  -564,
    -564,  -564,   638,  2004,    97,   433,  -564,  -564,   148,  -564,
     -18,  -564,   667,   -18,  -564,  -564,  -564,  -564,   356,  1103,
    -564,  1259,  -564,  -564,  -564,  -564,    62,  -564,   367,  -564,
    -564,   472,  -564,  -564,  1724,  -564,  -564,  -564,  -564,   646,
     511,   -11,  -564,   954,  -564,  -564,   510,  -564,  -564,  -564,
     268,  -564,  -564,  2712,  1429,  2764,  2830,   523,    33,   867,
    -564,  2882,  2948,  3000,  5100,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,   682,   545,  1139,    42,  -564,   566,   591,  -564,
    -564,  -564,   679,  -564,   743,  -564,   763,   863,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  1003,   927,  1041,  1071,
     919,   704,   666,   717,   724,   338,  -564,  -564,  -564,   854,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,   992,
     472,  -564,  -564,  -564,   752,  -564,   367,  -564,   802,   336,
    3066,  -564,    34,  2056,    17,   407,   429,    64,   439,   114,
     650,  3118,  5402,  -564,   -60,   682,   545,  1086,   235,   402,
    -564,   954,   681,  -564,  -564,  1724,  -564,  -564,   701,  -564,
    -564,  -564,  1793,  -564,  -564,   741,  -564,  -564,  -564,  -564,
    1793,  -564,  1793,  -564,  -564,  5454,   746,  -564,  -564,  -564,
    -564,  -564,  -564,   449,  -564,   613,   713,   863,   910,   913,
    -564,  -564,  -564,  -564,   875,  -564,   807,   683,   685,  -564,
     655,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
      28,  -564,   702,   961,   760,   760,   453,  -564,  -564,  -564,
    -564,  -564,   784,  1139,    18,  -564,   766,  -564,   768,    36,
     801,  5166,  2122,   809,  -564,   326,  3184,  -564,   454,  -564,
    -564,  3236,  3302,  3354,  3420,  3472,  3538,  3590,  3656,  3708,
    3774,  3826,  3892,   907,  3944,  4010,  4062,  4128,  4180,  4246,
    4298,  2174,  -564,  -564,  4364,  -564,   199,  -564,  -564,  -564,
    -564,  -564,  1724,  -564,  -564,  -564,  -564,  4416,  -564,   174,
    -564,  -564,   188,  -564,  -564,   230,  -564,  4482,  -564,  4534,
    -564,   823,  -564,  4955,  -564,  -564,   231,  -564,   225,   218,
     769,   716,  -564,  -564,   -60,  2240,  -564,  -564,  -564,  1178,
     511,  -564,  -564,   799,  -564,   814,  1123,  -564,  -564,  -564,
      46,  2292,  -564,  4600,  -564,  -564,  -564,   875,  -564,  -564,
    -564,  -564,   -48,   803,  -564,  -564,  -564,  2358,   760,  -564,
     565,   760,   565,  -564,  2410,  4652,   168,   357,   396,  -564,
    5479,  -564,  -564,  1938,  -564,  -564,  -564,  -564,   515,  -564,
    -564,   243,  -564,  -564,  -564,  -564,  -564,   820,  -564,   271,
    -564,  5218,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  1003,
    -564,  1003,  -564,   927,  -564,   927,  -564,   927,  -564,  1041,
    -564,  1041,  -564,  1041,  -564,  1041,  -564,   146,  -564,  -564,
    1071,  -564,  1071,  -564,   919,  -564,   704,  -564,   666,  -564,
     717,  -564,   724,  -564,   932,   838,  -564,  -564,  -564,  1136,
    -564,  1724,   843,  -564,  1724,  -564,   228,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,   276,  -564,   848,   467,    86,   823,
    -564,   367,  -564,  -564,  -564,  -564,  -564,  5402,  -564,  -564,
     484,   769,  -564,   964,    49,     3,  -564,   882,  -564,  5048,
    -564,  4980,   878,   890,   902,  -564,  -564,  5284,  -564,   273,
    -564,   251,  -564,   251,  -564,  -564,   903,    76,  -564,  -564,
    -564,  4718,  1051,  -564,  -564,  -564,  -564,  -564,  4770,  -564,
    -564,  5336,  -564,  -564,   205,   641,  -564,  4836,   726,  -564,
    1724,  2476,  -564,  -564,  1860,  -564,  -564,   348,  -564,   942,
    -564,  -564,  -564,  -564,  -564,   911,  -564,  2528,  -564,  -564,
    1002,    26,  4888,  -564,   757,  -564,  1502,  -564,  5402,  -564,
    -564,  -564,   917,   915,  5023,  -564,   351,  -564,   722,  -564,
    -564,   205,  -564,   922,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,   730,  -564,   205,  -564,  -564,   504,  -564,   250,   125,
     519,  -564,   967,   975,  1860,  -564,  -564,  1860,  -564,  -564,
     920,  -564,   939,   940,  -564,  -564,  1027,   141,  -564,  -564,
    -564,  -564,  -564,   375,  -564,  -564,  1581,  -564,  1655,  -564,
     944,  1793,  -564,   950,  -564,  -564,  -564,  -564,   205,  -564,
    -564,  2594,  -564,   253,  4416,  1793,  -564,  -564,  2646,  -564,
    -564,  -564,  -564,  1052,  -564,  -564,  -564,   953,  -564,  1793,
    -564,   254,   161,  -564,   316,  -564,  4980,   955,  -564,  -564,
    -564,  -564,   257,  1860,   968,  5023,  -564,  1000,  1860,   969,
    1860,  -564,  1860,  -564,  -564
};

/* YYPGOTO[NTERM-NUM].  */
static const short yypgoto[] =
{
    -564,  -564,  -564,   -52,   -53,   677,    23,  -121,   633,     5,
      -3,   656,  -564,   134,  -564,  1065,   500,  -564,   255,  -564,
    -564,   796,    21,   213,  -564,  -564,  1024,  1005,  -564,  -130,
    -564,   923,  -564,  -108,  -117,   945,  -169,  -189,  -564,  -564,
     -94,   -26,   834,  -330,  -132,   -79,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,   936,  -564,   -73,  -564,   684,   361,  -564,
    -564,  -564,  -564,  1043,   634,  -564,  1004,  -564,  -564,   275,
    -564,  -112,   837,  -163,  -160,  -293,  -564,   790,   219,    94,
    -434,   729,  -341,  -564,  -564,  -564,  -314,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,   444,   445,  -251,  -279,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,  -228,  -564,  -563,   795,
    -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,  -564,   546,
    -564,   547,  -564,  -564,  -564,  -101,  -564,  -564,  -564,  -564,
    -423,  -564,   772,   103,   -57,  1053,   147,  1074,   245,   340,
     341,   918,   209,   533,   622,  -482,  -564,   598,   687,   578,
     594,   734,   736,   733,   737,   744,  -564,   503,   745,   651,
    -564,  -564,   334,  -564
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -507
static const short yytable[] =
{
      23,   458,   447,    31,   183,   176,   465,   104,   623,   152,
     334,   294,    87,    86,   295,   367,   185,    41,   351,   489,
     173,    17,   594,    51,   164,   187,    21,   719,    22,   470,
     122,    17,    17,    17,   351,   420,   137,   494,   166,    87,
     126,   146,    64,   374,    87,    86,    64,   598,   605,   173,
     659,   661,    32,   164,    17,   606,   265,    17,    17,   -64,
     120,   617,    91,   263,    64,   430,   662,   166,    62,    64,
      90,   256,    70,   325,   258,    17,    79,   682,   356,    87,
      86,   138,    65,    87,   179,   335,    92,   650,   635,    91,
      62,   336,   267,    67,    91,    62,   471,    90,   251,   150,
     153,   663,    90,   -64,   495,   127,    87,   126,    87,    86,
      72,   733,  -153,    22,   490,   434,   720,    42,    92,    43,
     352,   285,    22,    52,   188,    53,   659,   183,    64,    91,
      87,   337,   446,    91,    64,   421,   352,    90,    27,    29,
     687,    90,   752,   -92,   -92,   660,   354,  -292,   599,   254,
     362,   628,   410,   159,    62,   122,    91,   180,    91,  -102,
      70,   156,   752,  -102,    90,   431,    90,   440,   467,   620,
      44,   287,   683,    55,    57,   567,    80,    60,   628,   286,
      91,   407,   159,   156,   678,   -26,     1,    60,    90,   569,
     340,   340,   340,   340,   325,   289,    64,   252,   340,   340,
     363,   325,    22,   774,   183,   128,    87,   179,   691,   325,
     703,   325,   779,    18,   325,   435,   113,   469,   699,   489,
     116,   743,   355,    18,    18,    18,   586,   628,   122,   643,
       2,   571,   584,    45,   717,    28,   442,   753,    87,   444,
      53,     3,   285,   628,   629,   121,    18,     4,   255,    18,
      18,   658,   564,     5,   718,   751,    91,   772,   768,   113,
     116,     6,   285,   628,    90,    34,  -154,    18,   147,   140,
     703,   447,   632,   703,   679,   568,   190,   645,    93,    74,
     180,   -23,   -23,    87,   179,   670,     7,   458,    91,   570,
      58,    34,   287,   131,    59,   558,    90,   480,   482,   449,
     286,   336,   132,   704,   626,   487,   488,   449,   288,   449,
      93,   325,   456,   190,   589,   587,   289,   643,   762,   713,
     286,   326,    22,   -23,   644,   443,   588,   591,   -23,   -23,
     -23,   572,   585,    91,   -23,    64,   180,   416,   -23,   703,
     537,    90,    45,   630,   703,   160,   703,   447,   703,   711,
     148,   742,   734,   400,   763,   771,   378,   180,   776,   285,
     458,    70,   -95,   704,   -95,   707,   704,   -95,   -95,   -95,
     -95,   633,   646,   680,   160,  -156,   754,    22,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
      91,   340,   340,   340,   340,   340,   340,   340,    90,   506,
     136,   640,   343,  -324,   347,   349,   422,   147,   426,   559,
     358,   360,   773,   436,    22,   729,   710,   286,   190,   327,
      48,   611,   -28,     1,   613,   707,    96,   401,   707,   288,
     428,   417,   704,   289,   253,   447,   288,   704,    30,   704,
     432,   704,   326,    56,   288,  -254,   288,    38,   156,   326,
     462,   259,   458,   621,   483,   510,   148,   326,    96,   326,
     325,   458,   326,   325,   156,   755,   651,     2,   648,   654,
      40,   190,   -63,   -29,     1,   729,   710,   250,     3,   710,
     122,    61,   340,    49,     4,   656,   473,   340,   639,    69,
       5,   642,   622,   172,   707,   148,    38,  -324,   325,   707,
     325,   707,   427,   707,   692,   656,   101,    60,   285,   507,
      33,   285,    37,    39,   328,   329,   -63,   183,     2,    40,
     416,   451,   172,     7,   429,    22,   137,   -27,     1,   454,
      22,   455,   -30,     1,   433,     4,    54,   364,   250,   325,
     327,     5,   105,   325,   463,   710,   288,   327,   484,   511,
     710,   737,   710,   112,   710,   327,    38,   327,   287,   326,
     327,   287,   649,   740,   735,   325,   286,   697,    22,   286,
     141,   142,     2,   325,     7,    60,    22,     2,   190,   657,
     115,   610,   289,     3,   610,   289,    77,   285,     3,     4,
     513,   515,   517,    22,     4,     5,    87,   179,   121,   741,
       5,   149,    53,   325,   419,   151,   325,   425,   760,   154,
     184,   627,   338,   285,   744,   438,   439,   628,   340,   340,
     140,   -32,     1,   -31,     1,   325,   350,   325,     7,    22,
     325,   -33,     1,     7,   340,   328,   329,   287,   -63,   189,
      22,   449,   328,   329,   325,   286,    91,   333,   370,    49,
     328,   329,   328,   329,    90,   328,   329,   327,   325,  -343,
    -343,   289,   204,   287,   148,   325,     2,    22,     2,   375,
     180,   286,   325,   285,   325,   285,     2,   325,   397,   325,
     377,   325,   -63,     4,   466,     4,   468,   289,    22,     5,
     376,     5,    22,     4,   619,   288,    22,    22,   288,     5,
     102,   449,   103,   472,   449,   106,   501,   330,   326,   109,
     509,   326,  -343,   -95,   136,   396,  -343,   502,   -95,   -95,
     -95,   -95,     7,   287,     7,   287,    22,   502,   449,    20,
     398,   286,     7,   286,    22,   555,   177,   693,   399,    20,
      20,    20,   449,   628,   134,  -152,   326,   289,   326,   289,
     371,   566,   328,   329,   372,   612,   449,   614,   373,  -345,
    -345,   574,    20,   576,   155,    20,    20,    22,   257,   142,
     449,    22,    60,    22,   288,   449,   445,   449,   288,   449,
       2,   121,   590,    20,   503,   369,    81,   326,   158,   504,
      22,   326,   696,   505,   503,   602,   331,   604,   746,   504,
     288,   747,   448,   505,    22,   661,   327,    35,   464,   327,
     502,   609,  -345,   326,    22,   158,  -345,   158,   736,    83,
     662,   326,    84,    22,   628,   332,   739,   250,   330,    35,
     685,   178,   628,    35,   143,   330,  -505,  -505,   288,   144,
     145,   288,   452,   330,   327,   330,   327,   461,   330,   156,
      35,   326,     2,   408,   326,   724,  -506,  -506,    81,   477,
     288,   175,   288,   701,   491,   288,   492,   777,   353,   496,
     493,   142,   781,   326,   783,   326,   784,   503,   326,   288,
     485,   597,   504,   486,   577,   327,   505,   369,   578,   327,
     175,    83,   326,   288,    84,    22,   595,    22,   607,   413,
     414,   328,   329,   415,   328,   329,   326,   288,   536,   379,
     380,   327,   288,   326,   288,   631,   288,   331,    81,   327,
     326,   655,   326,   451,   331,   326,   454,   326,   637,   326,
     384,   385,   331,   636,   331,   394,   395,   331,   641,   328,
     329,   328,   329,   712,   647,   330,   332,   402,   403,   327,
     758,    83,   327,   332,    84,    22,  -414,  -414,    81,  -415,
    -415,   332,   689,   332,   765,   658,   332,   529,   531,   533,
     535,   327,   124,   327,   144,   145,   327,   668,   770,   674,
     328,   329,   519,   521,   328,   329,   675,     2,   540,   542,
     327,    83,   701,    81,    84,    22,   722,   758,   676,   765,
    -372,   770,   730,   718,   327,    81,   328,   329,   381,   382,
     383,   327,   714,   731,   328,   329,    38,   599,   327,  -370,
     327,   748,    81,   327,   745,   327,    83,   327,   751,    84,
      22,   125,  -204,    39,   331,   749,   750,     2,    83,    40,
     757,    84,    22,    81,   328,   329,   759,   328,   329,   386,
     387,   388,   686,   768,   769,    83,   775,   780,    84,    22,
     474,   475,   476,   332,   778,   782,   328,   329,   328,   329,
     538,   328,   329,   523,   525,   527,    83,    36,   764,    84,
      22,    78,   767,   111,   262,   328,   329,   191,   405,   389,
     390,   391,   392,   406,   330,   260,   562,   330,    76,   328,
     329,   130,    81,   412,   124,   457,   328,   329,   725,   726,
     460,   197,   345,   328,   329,   328,   329,   198,   328,   329,
     328,   329,   328,   329,   199,   652,   653,   481,   200,   393,
     544,   548,   330,   546,   330,    83,   550,     0,    84,    22,
     695,     0,   201,   202,   552,     0,   203,     0,    38,   557,
       0,     0,     0,     2,    81,   205,   206,   207,   208,    81,
       0,   209,   210,   125,     0,    39,     0,     0,    82,     0,
       4,    40,     0,   330,   -16,     0,     5,   330,     0,  -504,
    -504,   371,     0,   331,     0,   372,   331,    83,     0,   441,
      84,    22,    83,     0,     0,    84,    22,     0,     0,   330,
    -136,     0,     0,     0,     0,   156,   157,   330,     0,     7,
       0,   -16,   332,     0,     0,   332,  -504,  -504,   371,     0,
       0,   331,   372,   331,   -16,     0,   373,     0,     0,  -504,
    -504,   371,  -504,  -504,   371,   372,     0,   330,   372,   638,
     330,     0,   373,     0,     0,     0,   341,   341,   341,   341,
     332,     0,   332,     0,   341,   341,     0,     0,     0,   330,
       0,   330,   331,     0,   330,     0,   331,   342,   342,   342,
     342,  -504,  -504,   371,     0,   342,   342,   372,   330,     0,
       0,   441,     0,     0,     0,     0,     0,     0,   331,     0,
       0,   332,   330,     0,     0,   332,   331,     0,     0,   330,
       0,     0,     0,     0,     2,     0,   330,     0,   330,     0,
      81,   330,     0,   330,     0,   330,     0,   332,     0,    82,
       0,     4,     2,     0,     0,   332,   331,     5,    81,   331,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     4,
       0,     0,     0,    83,     0,     5,    84,    22,   331,     0,
     331,     0,     0,   331,     0,   332,   156,   261,   332,     0,
       7,    83,     0,     0,    84,    22,     0,   331,     0,     0,
       2,     0,     0,     0,     0,    85,    81,   332,     0,   332,
       0,   331,   332,     0,     0,    82,     0,     4,   331,     0,
       0,     0,     0,     5,     0,   331,   332,   331,     0,     0,
     331,     0,   331,     0,   331,     0,     0,     0,     0,    83,
     332,     0,    84,    22,     0,     0,     0,   332,     0,     0,
       0,     0,     0,   129,   332,     0,   332,     0,     0,   332,
     344,   332,   193,   332,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,     0,   341,   341,   341,
     341,   341,   341,   341,     0,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,     0,   342,   342,
     342,   342,   342,   342,   342,   195,   196,     0,     0,     0,
      81,     0,     0,     0,     0,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,   198,     0,     0,     0,     0,
       0,     0,   199,   268,     0,     0,   200,     0,     0,     0,
       0,     0,     0,    83,     0,     0,    84,    22,     0,     0,
     201,   202,     0,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   206,   207,   208,     0,   341,   209,
     210,     0,     0,   341,     0,     0,     0,     2,   195,   196,
     661,   269,   270,    81,   271,     0,     0,   272,     0,   342,
       0,   273,   197,     0,   342,   662,     0,     0,   274,   275,
       5,   276,     0,   277,   278,   199,   279,     0,     0,   280,
     281,     0,   268,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,     0,     0,     0,     0,   282,     0,   156,
     727,     0,     0,     7,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   195,   196,   661,
     269,   270,    81,   271,     0,     0,   272,     0,     0,     0,
     273,   197,     0,     0,   662,     0,     0,   274,   275,     5,
     276,     0,   277,   278,   199,   279,   268,     0,   280,   281,
       0,     0,     0,     0,     0,    83,     0,     0,    84,    22,
       0,     0,     0,     0,   341,   341,   282,     0,   156,   756,
       0,     0,     7,     0,     0,   205,   206,   207,   208,     0,
     341,   209,   210,     0,     0,   342,   342,     0,     0,     0,
       2,   195,   196,  -264,   269,   270,    81,   271,     0,     0,
     272,   342,     0,     0,   273,   197,     0,     0,  -264,     0,
       0,   274,   275,     5,   276,   268,   277,   278,   199,   279,
       0,     0,   280,   281,     0,     0,     0,     0,     0,    83,
       0,     0,    84,    22,     0,     0,     0,     0,     0,     0,
     282,     0,   156,  -264,     0,     0,     7,     0,     0,   205,
     206,   207,   208,     0,     0,   209,   210,     0,     0,     2,
     195,   196,     0,   269,   270,    81,   271,     0,     0,   272,
       0,     0,     0,   273,   197,     0,     0,     0,     0,     0,
     274,   275,     5,   276,   268,   277,   278,   199,   279,     0,
       0,   280,   281,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,     0,     0,     0,     0,   282,
       0,   156,   283,     0,     0,     7,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,     0,     0,     2,   195,
     196,     0,   269,   270,    81,   271,     0,     0,   272,     0,
       0,     0,   273,   197,     0,     0,     0,     0,     0,   274,
     275,   268,   276,     0,   277,   278,   199,   279,     0,     0,
     280,   281,     0,     0,     0,     0,     0,    83,     0,     0,
      84,    22,     0,     0,     0,     0,     0,     0,   282,     0,
     156,     0,     0,     0,     7,     0,     0,   205,   206,   207,
     208,     0,     0,   209,   210,     2,   195,   196,     0,   700,
     270,    81,   271,     0,     0,   272,     0,     0,     0,   273,
     197,     0,     0,     0,     0,     0,   274,   275,     0,   276,
       0,   277,   278,   199,   279,     0,     0,   280,   281,   624,
       0,   193,   194,     0,    83,     0,     0,    84,    22,     0,
       0,     0,     0,     0,     0,   282,     0,   156,     0,     0,
       0,     7,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   195,   196,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,   192,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,   204,   625,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,   423,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,   204,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,   500,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,   424,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,   553,     0,   193,   194,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
     195,   196,   147,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,   592,     0,   193,   194,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,   554,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,   195,   196,     0,     0,
       0,    81,     0,   600,     0,   193,   194,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,   593,     0,   195,   196,
       0,     0,     0,    81,   205,   206,   207,   208,     0,     0,
     209,   210,   197,     0,     0,     0,     0,     0,   198,   608,
       0,   193,   194,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,   601,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,   195,   196,     0,     0,     0,    81,
       0,   615,     0,   193,   194,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,   195,   196,   147,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,   592,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,   616,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,   715,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,   698,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,   715,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,   716,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,   600,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
     761,     0,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,   339,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,   766,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,   346,     0,   193,   194,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
     195,   196,     0,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,   348,     0,   193,   194,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,   195,   196,     0,     0,
       0,    81,     0,   357,     0,   193,   194,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,   195,   196,
       0,     0,     0,    81,   205,   206,   207,   208,     0,     0,
     209,   210,   197,     0,     0,     0,     0,     0,   198,   359,
       0,   193,   194,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,   195,   196,     0,     0,     0,    81,
       0,   361,     0,   193,   194,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,   195,   196,     0,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,   418,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,   437,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,   508,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,   512,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,   514,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,   516,     0,   193,   194,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
     195,   196,     0,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,   518,     0,   193,   194,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,   195,   196,     0,     0,
       0,    81,     0,   520,     0,   193,   194,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,   195,   196,
       0,     0,     0,    81,   205,   206,   207,   208,     0,     0,
     209,   210,   197,     0,     0,     0,     0,     0,   198,   522,
       0,   193,   194,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,   195,   196,     0,     0,     0,    81,
       0,   524,     0,   193,   194,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,   195,   196,     0,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,   526,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,   528,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,   530,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,   532,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,   534,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,   539,     0,   193,   194,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
     195,   196,     0,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,   541,     0,   193,   194,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,   195,   196,     0,     0,
       0,    81,     0,   543,     0,   193,   194,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,   195,   196,
       0,     0,     0,    81,   205,   206,   207,   208,     0,     0,
     209,   210,   197,     0,     0,     0,     0,     0,   198,   545,
       0,   193,   194,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,   195,   196,     0,     0,     0,    81,
       0,   547,     0,   193,   194,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,   195,   196,     0,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,   549,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,   551,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,   556,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,   565,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,   573,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,   575,     0,   193,   194,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
     195,   196,     0,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,   603,     0,   193,   194,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   205,   206,
     207,   208,     0,     0,   209,   210,   195,   196,     0,     0,
       0,    81,     0,   618,     0,   193,   194,     0,     0,     0,
     197,     0,     0,     0,     0,     0,   198,     0,     0,     0,
       0,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,   195,   196,
       0,     0,     0,    81,   205,   206,   207,   208,     0,     0,
     209,   210,   197,     0,     0,     0,     0,     0,   198,   684,
       0,   193,   194,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   205,   206,   207,   208,
       0,     0,   209,   210,   195,   196,     0,     0,     0,    81,
       0,   688,     0,   193,   194,     0,     0,     0,   197,     0,
       0,     0,     0,     0,   198,     0,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,     0,     0,   195,   196,     0,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,   694,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,     0,     0,     0,
       0,     0,     0,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,   721,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,     0,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,     0,   583,     0,     0,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,   671,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
    -287,  -287,  -287,     0,     0,     0,  -287,     0,     0,     0,
       0,     0,     0,     0,     0,  -287,     0,     0,     0,     0,
       0,  -287,     0,     0,   732,     0,   195,   196,  -287,     0,
       0,    81,  -287,     0,     0,     0,     0,     0,     0,  -287,
     197,     0,  -287,  -287,     0,     0,   198,     0,     0,   669,
    -287,     0,     0,   199,     0,     0,  -287,   200,     0,  -287,
    -287,  -287,  -287,     0,    83,  -287,  -287,    84,    22,   195,
     196,     0,     0,     0,    81,   282,  -295,     0,     0,     0,
       0,     0,     0,   197,   205,   206,   207,   208,     0,   198,
     209,   210,     0,     0,   195,   196,   199,     0,     0,    81,
     200,     0,     0,   193,   194,     0,     0,    83,   197,     0,
      84,    22,     0,     0,   198,     0,     0,     0,   282,  -295,
       0,   199,     0,     0,     0,   200,     0,   205,   206,   207,
     208,     0,    83,   209,   210,    84,    22,     0,     0,     0,
       0,     0,     0,   282,     0,     0,   195,   196,     0,     0,
       0,    81,   205,   206,   207,   208,     0,     0,   209,   210,
     197,     0,     0,     0,     0,     0,   198,     0,     0,   193,
     194,     0,     0,   199,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,    83,     0,     0,    84,    22,     0,
       0,   201,   202,     0,     0,   203,     0,   204,   365,     0,
       0,     0,   366,     0,   205,   206,   207,   208,     0,     0,
     209,   210,   195,   196,     0,     0,     0,    81,     0,     0,
       0,   193,   194,     0,     0,     0,   197,     0,     0,     0,
       0,     0,   198,     0,     0,     0,     0,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,   497,     0,   195,   196,     0,     0,     0,    81,
     205,   206,   207,   208,     0,     0,   209,   210,   197,     0,
       0,     0,     0,     0,   198,     0,     0,   193,   194,     0,
       0,   199,     0,     0,     0,   200,     0,     0,     0,     0,
       0,     0,    83,     0,     0,    84,    22,     0,     0,   201,
     202,     0,     0,   203,   634,     0,     0,     0,     0,     0,
       0,     0,   205,   206,   207,   208,     0,     0,   209,   210,
     195,   196,     0,     0,     0,    81,     0,     0,     0,   193,
     194,     0,     0,     0,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,   200,     0,     0,     0,     0,     0,     0,    83,     0,
       0,    84,    22,     0,     0,   201,   202,     0,     0,   203,
     677,     0,   195,   196,     0,     0,     0,    81,   205,   206,
     207,   208,     0,     0,   209,   210,   197,     0,     0,     0,
       0,     0,   198,     0,     0,   193,   194,     0,     0,   199,
       0,     0,     0,   200,     0,     0,     0,     0,     0,     0,
      83,     0,     0,    84,    22,     0,     0,   201,   202,     0,
       0,   203,   690,     0,     0,     0,     0,     0,     0,     0,
     205,   206,   207,   208,     0,     0,   209,   210,   195,   196,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,   197,     0,     0,     0,     0,     0,   198,     0,
       0,     0,     0,     0,     0,   199,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,    83,     0,     0,    84,
      22,     0,     0,   201,   202,     0,     0,   203,     0,     2,
     195,   196,     0,     0,     0,    81,   205,   206,   207,   208,
       0,     0,   209,   210,   197,     0,     0,     0,     0,     0,
     198,     0,     0,     0,     0,     0,     0,   199,     0,     0,
      81,   200,     0,     0,     0,     0,     0,     0,    83,   197,
       0,    84,    22,     0,     0,   198,     0,     0,     0,   282,
       0,     0,   199,     0,     0,     0,   200,     0,   205,   206,
     207,   208,     0,    83,   209,   210,    84,    22,     0,     0,
     201,   202,     0,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   206,   207,   208,     0,     0,   209,
     210
};

static const short yycheck[] =
{
       3,   315,   295,     6,   136,   135,   336,     1,   490,   126,
     179,   174,    65,    65,   174,   204,   137,     1,     1,     1,
     132,     0,   445,     1,   132,     1,     1,     1,    88,     1,
      87,    10,    11,    12,     1,     1,    54,     1,   132,    92,
      92,   120,    45,     1,    97,    97,    49,     1,    96,   161,
       1,    48,     0,   161,    33,   103,   168,    36,    37,    53,
      86,   484,    65,     1,    67,     1,    63,   161,    45,    72,
      65,   150,    49,   174,   153,    54,     1,     1,   199,   132,
     132,    99,    97,   136,   136,    96,    65,     1,   511,    92,
      67,   102,   171,   102,    97,    72,    68,    92,     1,   125,
     126,    98,    97,    97,    68,     1,   159,   159,   161,   161,
      53,   674,    95,    88,    96,     1,    90,   101,    97,   103,
     103,   174,    88,   101,   100,   103,     1,   259,   131,   132,
     183,   183,   295,   136,   137,   101,   103,   132,     4,     5,
     622,   136,     1,   101,   102,    96,   199,   101,   102,     1,
     203,   102,   264,   132,   131,   212,   159,   136,   161,    97,
     137,    97,     1,   101,   159,   277,   161,   284,   337,     1,
       1,   174,    96,    39,    40,     1,   101,    43,   102,   174,
     183,   260,   161,    97,   607,     0,     1,    53,   183,     1,
     193,   194,   195,   196,   295,   174,   199,   100,   201,   202,
     203,   302,    88,   766,   336,   101,   259,   259,   631,   310,
     644,   312,   775,     0,   315,   101,    82,   338,   641,     1,
      86,    96,   199,    10,    11,    12,     1,   102,   285,     1,
      45,     1,     1,    64,   657,     1,     1,    96,   291,   291,
     103,    56,   295,   102,     1,    99,    33,    62,   100,    36,
      37,     1,   412,    68,     1,     1,   259,    96,     1,   125,
     126,    76,   315,   102,   259,    10,    97,    54,   100,     1,
     704,   564,     1,   707,     1,   101,   142,     1,    65,     1,
     259,    46,    47,   336,   336,   599,   101,   601,   291,   101,
       1,    36,   295,   102,     5,    96,   291,   354,   355,   302,
     295,   102,    97,   644,   493,   362,   363,   310,   174,   312,
      97,   412,   315,   179,    96,    90,   295,     1,   741,   649,
     315,   174,    88,    88,    96,    90,   101,   444,    93,    94,
      95,   101,   101,   336,    99,   338,   315,     1,   103,   773,
     393,   336,    64,   100,   778,   132,   780,   640,   782,     1,
      99,   101,     1,    15,   101,   101,   222,   336,   101,   412,
     674,   338,    94,   704,    96,   644,   707,    99,   100,   101,
     102,   100,    96,   100,   161,    97,     1,    88,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   393,    73,
      95,   561,   193,     1,   195,   196,   272,   100,     1,   412,
     201,   202,    96,   279,    88,   666,   644,   412,   284,   174,
       1,   478,     0,     1,   481,   704,    65,    89,   707,   295,
       1,    95,   773,   412,     1,   728,   302,   778,     1,   780,
       1,   782,   295,     1,   310,    97,   312,    45,    97,   302,
       1,    95,   766,    96,     1,     1,    99,   310,    97,   312,
     561,   775,   315,   564,    97,    90,   578,    45,     1,   581,
      68,   337,    53,     0,     1,   726,   704,   143,    56,   707,
     537,     1,   485,    64,    62,     1,   352,   490,   561,     1,
      68,   564,    96,   132,   773,    99,    45,    95,   599,   778,
     601,   780,    95,   782,   634,     1,     1,   373,   561,   375,
      10,   564,    12,    62,   174,   174,    97,   649,    45,    68,
       1,   302,   161,   101,    95,    88,    54,     0,     1,   310,
      88,   312,     0,     1,    95,    62,    36,   203,   204,   640,
     295,    68,     1,   644,    95,   773,   412,   302,    95,    95,
     778,   681,   780,     1,   782,   310,    45,   312,   561,   412,
     315,   564,    95,   693,   676,   666,   561,   640,    88,   564,
     101,   102,    45,   674,   101,   441,    88,    45,   444,    95,
       1,   478,   561,    56,   481,   564,     1,   640,    56,    62,
     381,   382,   383,    88,    62,    68,   649,   649,    99,    95,
      68,     1,   103,   704,   270,     1,   707,   273,   738,     1,
       1,    96,   102,   666,    95,   281,   282,   102,   621,   622,
       1,     0,     1,     0,     1,   726,   103,   728,   101,    88,
     731,     0,     1,   101,   637,   295,   295,   640,    53,     1,
      88,   644,   302,   302,   745,   640,   649,     1,   103,    64,
     310,   310,   312,   312,   649,   315,   315,   412,   759,    46,
      47,   640,    97,   666,    99,   766,    45,    88,    45,   103,
     649,   666,   773,   726,   775,   728,    45,   778,    12,   780,
       1,   782,    97,    62,     1,    62,     1,   666,    88,    68,
      99,    68,    88,    62,   485,   561,    88,    88,   564,    68,
      67,   704,    68,     1,   707,    72,   372,   174,   561,    75,
     376,   564,    99,    94,    95,    11,   103,     1,    99,   100,
     101,   102,   101,   726,   101,   728,    88,     1,   731,     0,
      13,   726,   101,   728,    88,   401,     1,    96,    14,    10,
      11,    12,   745,   102,   110,    95,   599,   726,   601,   728,
      95,   417,   412,   412,    99,   480,   759,   482,   103,    46,
      47,   427,    33,   429,   131,    36,    37,    88,   101,   102,
     773,    88,   638,    88,   640,   778,    95,   780,   644,   782,
      45,    99,    66,    54,    68,   103,    51,   640,   132,    73,
      88,   644,    66,    77,    68,   461,   174,   463,   704,    73,
     666,   707,   101,    77,    88,    48,   561,    11,     1,   564,
       1,   477,    99,   666,    88,   159,   103,   161,    96,    84,
      63,   674,    87,    88,   102,   174,    96,   493,   295,    33,
     621,    96,   102,    37,    94,   302,    93,    94,   704,    99,
     100,   707,   101,   310,   599,   312,   601,   101,   315,    97,
      54,   704,    45,   101,   707,    98,    93,    94,    51,    99,
     726,   132,   728,   644,    98,   731,    98,   773,     1,    68,
     102,   102,   778,   726,   780,   728,   782,    68,   731,   745,
      96,    67,    73,    99,    61,   640,    77,   103,    65,   644,
     161,    84,   745,   759,    87,    88,    97,    88,    95,    97,
      98,   561,   561,   101,   564,   564,   759,   773,     1,    46,
      47,   666,   778,   766,   780,    95,   782,   295,    51,   674,
     773,   587,   775,   704,   302,   778,   707,   780,    90,   782,
       3,     4,   310,     1,   312,    16,    17,   315,    95,   599,
     599,   601,   601,     1,    96,   412,   295,    93,    94,   704,
     731,    84,   707,   302,    87,    88,    46,    47,    51,    46,
      47,   310,   628,   312,   745,     1,   315,   389,   390,   391,
     392,   726,     1,   728,    99,   100,   731,    95,   759,   101,
     640,   640,   384,   385,   644,   644,    96,    45,   394,   395,
     745,    84,   773,    51,    87,    88,   662,   778,    96,   780,
      97,   782,   668,     1,   759,    51,   666,   666,     5,     6,
       7,   766,   101,    96,   674,   674,    45,   102,   773,    97,
     775,   101,    51,   778,    57,   780,    84,   782,     1,    87,
      88,    60,    57,    62,   412,    96,    96,    45,    84,    68,
      96,    87,    88,    51,   704,   704,    96,   707,   707,     8,
       9,    10,     1,     1,   101,    84,   101,    57,    87,    88,
      99,   100,   101,   412,    96,    96,   726,   726,   728,   728,
     393,   731,   731,   386,   387,   388,    84,    12,   744,    87,
      88,    57,   748,    78,   161,   745,   745,   142,    96,    18,
      19,    20,    21,   259,   561,   159,   412,   564,    55,   759,
     759,    97,    51,   266,     1,   315,   766,   766,   664,   664,
     315,    60,   194,   773,   773,   775,   775,    66,   778,   778,
     780,   780,   782,   782,    73,   579,   579,   355,    77,    58,
     396,   398,   599,   397,   601,    84,   399,    -1,    87,    88,
     637,    -1,    91,    92,   400,    -1,    95,    -1,    45,   404,
      -1,    -1,    -1,    45,    51,   104,   105,   106,   107,    51,
      -1,   110,   111,    60,    -1,    62,    -1,    -1,    60,    -1,
      62,    68,    -1,   640,    88,    -1,    68,   644,    -1,    93,
      94,    95,    -1,   561,    -1,    99,   564,    84,    -1,   103,
      87,    88,    84,    -1,    -1,    87,    88,    -1,    -1,   666,
      97,    -1,    -1,    -1,    -1,    97,    98,   674,    -1,   101,
      -1,    88,   561,    -1,    -1,   564,    93,    94,    95,    -1,
      -1,   599,    99,   601,    88,    -1,   103,    -1,    -1,    93,
      94,    95,    93,    94,    95,    99,    -1,   704,    99,   103,
     707,    -1,   103,    -1,    -1,    -1,   193,   194,   195,   196,
     599,    -1,   601,    -1,   201,   202,    -1,    -1,    -1,   726,
      -1,   728,   640,    -1,   731,    -1,   644,   193,   194,   195,
     196,    93,    94,    95,    -1,   201,   202,    99,   745,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,   666,    -1,
      -1,   640,   759,    -1,    -1,   644,   674,    -1,    -1,   766,
      -1,    -1,    -1,    -1,    45,    -1,   773,    -1,   775,    -1,
      51,   778,    -1,   780,    -1,   782,    -1,   666,    -1,    60,
      -1,    62,    45,    -1,    -1,   674,   704,    68,    51,   707,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    62,
      -1,    -1,    -1,    84,    -1,    68,    87,    88,   726,    -1,
     728,    -1,    -1,   731,    -1,   704,    97,    98,   707,    -1,
     101,    84,    -1,    -1,    87,    88,    -1,   745,    -1,    -1,
      45,    -1,    -1,    -1,    -1,    98,    51,   726,    -1,   728,
      -1,   759,   731,    -1,    -1,    60,    -1,    62,   766,    -1,
      -1,    -1,    -1,    68,    -1,   773,   745,   775,    -1,    -1,
     778,    -1,   780,    -1,   782,    -1,    -1,    -1,    -1,    84,
     759,    -1,    87,    88,    -1,    -1,    -1,   766,    -1,    -1,
      -1,    -1,    -1,    98,   773,    -1,   775,    -1,    -1,   778,
       1,   780,     3,   782,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,    -1,   394,   395,   396,
     397,   398,   399,   400,    -1,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,    -1,   394,   395,
     396,   397,   398,   399,   400,    46,    47,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,     1,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,
      91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,    -1,   485,   110,
     111,    -1,    -1,   490,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    -1,    -1,    55,    -1,   485,
      -1,    59,    60,    -1,   490,    63,    -1,    -1,    66,    67,
      68,    69,    -1,    71,    72,    73,    74,    -1,    -1,    77,
      78,    -1,     1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,    97,
      98,    -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,    -1,    66,    67,    68,
      69,    -1,    71,    72,    73,    74,     1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,   621,   622,    95,    -1,    97,    98,
      -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,
     637,   110,   111,    -1,    -1,   621,   622,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    -1,    -1,
      55,   637,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,
      -1,    66,    67,    68,    69,     1,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,
     105,   106,   107,    -1,    -1,   110,   111,    -1,    -1,    45,
      46,    47,    -1,    49,    50,    51,    52,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      66,    67,    68,    69,     1,    71,    72,    73,    74,    -1,
      -1,    77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    97,    98,    -1,    -1,   101,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    -1,    -1,    45,    46,
      47,    -1,    49,    50,    51,    52,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    66,
      67,     1,    69,    -1,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      97,    -1,    -1,    -1,   101,    -1,    -1,   104,   105,   106,
     107,    -1,    -1,   110,   111,    45,    46,    47,    -1,    49,
      50,    51,    52,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    66,    67,    -1,    69,
      -1,    71,    72,    73,    74,    -1,    -1,    77,    78,     1,
      -1,     3,     4,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    -1,    97,    -1,    -1,
      -1,   101,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,     1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    97,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,     1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      46,    47,   100,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,     1,    -1,     3,     4,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    90,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    46,    47,    -1,    -1,
      -1,    51,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    96,    -1,    46,    47,
      -1,    -1,    -1,    51,   104,   105,   106,   107,    -1,    -1,
     110,   111,    60,    -1,    -1,    -1,    -1,    -1,    66,     1,
      -1,     3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    46,    47,    -1,    -1,    -1,    51,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    46,    47,   100,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,     1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,     1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,     1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      96,    -1,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,     1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,     1,    -1,     3,     4,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    46,    47,    -1,    -1,
      -1,    51,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,   104,   105,   106,   107,    -1,    -1,
     110,   111,    60,    -1,    -1,    -1,    -1,    -1,    66,     1,
      -1,     3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    46,    47,    -1,    -1,    -1,    51,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,     1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,     1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,     1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,     1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,     1,    -1,     3,     4,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    46,    47,    -1,    -1,
      -1,    51,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,   104,   105,   106,   107,    -1,    -1,
     110,   111,    60,    -1,    -1,    -1,    -1,    -1,    66,     1,
      -1,     3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    46,    47,    -1,    -1,    -1,    51,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,     1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,     1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,     1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,     1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,     1,    -1,     3,     4,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    46,    47,    -1,    -1,
      -1,    51,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,   104,   105,   106,   107,    -1,    -1,
     110,   111,    60,    -1,    -1,    -1,    -1,    -1,    66,     1,
      -1,     3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    46,    47,    -1,    -1,    -1,    51,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,     1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,     1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,     1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,     1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,     1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,     1,    -1,     3,     4,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      46,    47,    -1,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,     1,    -1,     3,     4,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   104,   105,
     106,   107,    -1,    -1,   110,   111,    46,    47,    -1,    -1,
      -1,    51,    -1,     1,    -1,     3,     4,    -1,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    46,    47,
      -1,    -1,    -1,    51,   104,   105,   106,   107,    -1,    -1,
     110,   111,    60,    -1,    -1,    -1,    -1,    -1,    66,     1,
      -1,     3,     4,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   104,   105,   106,   107,
      -1,    -1,   110,   111,    46,    47,    -1,    -1,    -1,    51,
      -1,     1,    -1,     3,     4,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,     1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,     1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    -1,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,     1,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,     1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      45,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,     1,    -1,    46,    47,    73,    -1,
      -1,    51,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      60,    -1,    87,    88,    -1,    -1,    66,    -1,    -1,     1,
      95,    -1,    -1,    73,    -1,    -1,   101,    77,    -1,   104,
     105,   106,   107,    -1,    84,   110,   111,    87,    88,    46,
      47,    -1,    -1,    -1,    51,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    60,   104,   105,   106,   107,    -1,    66,
     110,   111,    -1,    -1,    46,    47,    73,    -1,    -1,    51,
      77,    -1,    -1,     3,     4,    -1,    -1,    84,    60,    -1,
      87,    88,    -1,    -1,    66,    -1,    -1,    -1,    95,    96,
      -1,    73,    -1,    -1,    -1,    77,    -1,   104,   105,   106,
     107,    -1,    84,   110,   111,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    -1,    -1,    46,    47,    -1,    -1,
      -1,    51,   104,   105,   106,   107,    -1,    -1,   110,   111,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,     3,
       4,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    -1,    -1,    95,    -1,    97,    98,    -1,
      -1,    -1,   102,    -1,   104,   105,   106,   107,    -1,    -1,
     110,   111,    46,    47,    -1,    -1,    -1,    51,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    -1,    46,    47,    -1,    -1,    -1,    51,
     104,   105,   106,   107,    -1,    -1,   110,   111,    60,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,     3,     4,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    -1,    87,    88,    -1,    -1,    91,
      92,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,   111,
      46,    47,    -1,    -1,    -1,    51,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    -1,    -1,    95,
      96,    -1,    46,    47,    -1,    -1,    -1,    51,   104,   105,
     106,   107,    -1,    -1,   110,   111,    60,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,     3,     4,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     104,   105,   106,   107,    -1,    -1,   110,   111,    46,    47,
      -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,
      88,    -1,    -1,    91,    92,    -1,    -1,    95,    -1,    45,
      46,    47,    -1,    -1,    -1,    51,   104,   105,   106,   107,
      -1,    -1,   110,   111,    60,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      51,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    60,
      -1,    87,    88,    -1,    -1,    66,    -1,    -1,    -1,    95,
      -1,    -1,    73,    -1,    -1,    -1,    77,    -1,   104,   105,
     106,   107,    -1,    84,   110,   111,    87,    88,    -1,    -1,
      91,    92,    -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   104,   105,   106,   107,    -1,    -1,   110,
     111
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short yystos[] =
{
       0,     1,    45,    56,    62,    68,    76,   101,   113,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   170,
     193,     1,    88,   122,   123,   124,   125,   125,     1,   125,
       1,   122,     0,   128,   130,   133,   127,   128,    45,    62,
      68,     1,   101,   103,     1,    64,   171,   175,     1,    64,
     138,     1,   101,   103,   128,   125,     1,   125,     1,     5,
     125,     1,   118,   120,   122,    97,   176,   102,   173,     1,
     118,   119,    53,   139,     1,   172,   175,     1,   138,     1,
     101,    51,    60,    84,    87,    98,   115,   116,   117,   118,
     121,   122,   134,   135,   145,   152,   170,   177,   178,   179,
     180,     1,   120,   176,     1,     1,   120,   140,   137,   176,
     174,   139,     1,   125,   153,     1,   125,   146,   147,   148,
     153,    99,   246,   246,     1,    60,   115,     1,   101,    98,
     178,   102,    97,   141,   176,   136,    95,    54,    99,   157,
       1,   101,   102,    94,    99,   100,   157,   100,    99,     1,
     153,     1,   146,   153,     1,   120,    97,    98,   123,   134,
     135,   142,   143,   144,   145,   150,   152,   160,   161,   162,
     164,   165,   170,   183,   184,   193,   141,     1,    96,   115,
     134,   154,   155,   156,     1,   119,   158,     1,   100,     1,
     125,   147,     1,     3,     4,    46,    47,    60,    66,    73,
      77,    91,    92,    95,    97,   104,   105,   106,   107,   110,
     111,   114,   116,   121,   122,   149,   181,   234,   235,   236,
     237,   238,   241,   243,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     274,     1,   100,     1,     1,   100,   157,   101,   157,    95,
     165,    98,   143,     1,   151,   183,   163,   157,     1,    49,
      50,    52,    55,    59,    66,    67,    69,    71,    72,    74,
      77,    78,    95,    98,   115,   116,   121,   122,   125,   134,
     135,   156,   169,   183,   185,   186,   187,   188,   189,   190,
     192,   193,   194,   195,   197,   198,   199,   200,   202,   204,
     210,   211,   213,   214,   215,   217,   218,   222,   223,   224,
     225,   226,   227,   228,   229,   237,   248,   250,   251,   252,
     255,   256,   271,     1,   148,    96,   102,   115,   102,     1,
     122,   247,   249,   254,     1,   253,     1,   254,     1,   254,
     103,     1,   103,     1,   116,   118,   119,     1,   254,     1,
     254,     1,   116,   122,   274,    98,   102,   149,   182,   103,
     103,    95,    99,   103,     1,   103,    99,     1,   125,    46,
      47,     5,     6,     7,     3,     4,     8,     9,    10,    18,
      19,    20,    21,    58,    16,    17,    11,    12,    13,    14,
      15,    89,    93,    94,   273,    96,   154,   157,   101,   159,
     183,   166,   184,    97,    98,   101,     1,    95,     1,   274,
       1,   101,   125,     1,   101,   274,     1,    95,     1,    95,
       1,   183,     1,    95,     1,   101,   125,     1,   274,   274,
     146,   103,     1,    90,   115,    95,   185,   187,   101,   122,
     134,   190,   101,   203,   190,   190,   122,   189,   198,   219,
     221,   101,     1,    95,     1,   155,     1,   148,     1,   119,
       1,    68,     1,   125,    99,   100,   101,    99,   244,   245,
     246,   244,   246,     1,    95,    96,    99,   246,   246,     1,
      96,    98,    98,   102,     1,    68,    68,    96,   242,   274,
       1,   274,     1,    68,    73,    77,    73,   125,     1,   274,
       1,    95,     1,   254,     1,   254,     1,   254,     1,   259,
       1,   259,     1,   260,     1,   260,     1,   260,     1,   261,
       1,   261,     1,   261,     1,   261,     1,   116,   117,     1,
     262,     1,   262,     1,   263,     1,   264,     1,   265,     1,
     266,     1,   267,     1,    90,   274,     1,   270,    96,   122,
     167,   168,   169,   185,   186,     1,   274,     1,   101,     1,
     101,     1,   101,     1,   274,     1,   274,    61,    65,   230,
     231,   232,   233,     1,     1,   101,     1,    90,   101,    96,
      66,   146,     1,    96,   242,    97,   205,    67,     1,   102,
       1,   101,   274,     1,   274,    96,   103,    95,     1,   274,
     245,   246,   181,   246,   181,     1,    96,   242,     1,   254,
       1,    96,    96,   257,     1,    98,   149,    96,   102,     1,
     100,    95,     1,   100,    96,   242,     1,    90,   103,   167,
     186,    95,   167,     1,    96,     1,    96,    96,     1,    95,
       1,   183,   231,   233,   183,   274,     1,    95,     1,     1,
      96,    48,    63,    98,   206,   207,   208,   209,    95,     1,
     198,     1,   220,   221,   101,    96,    96,    96,   242,     1,
     100,   240,     1,    96,     1,   254,     1,   257,     1,   274,
      96,   242,   141,    96,     1,   269,    66,   167,    96,   242,
      49,   190,   191,   192,   194,   196,   201,   210,   212,   216,
     218,     1,     1,   155,   101,     1,    96,   242,     1,     1,
      90,     1,   274,   275,    98,   207,   208,    98,   186,   209,
     274,    96,     1,   220,     1,   183,    96,   141,   239,    96,
     141,    95,   101,    96,    95,    57,   191,   191,   101,    96,
      96,     1,     1,    96,     1,    90,    98,    96,   190,    96,
     141,    96,   242,   101,   274,   190,   101,   274,     1,   101,
     190,   101,    96,    96,   220,   101,   101,   191,    96,   220,
      57,   191,    96,   191,   191
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrlab1

/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)         \
  Current.first_line   = Rhs[1].first_line;      \
  Current.first_column = Rhs[1].first_column;    \
  Current.last_line    = Rhs[N].last_line;       \
  Current.last_column  = Rhs[N].last_column;
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (cinluded).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short *bottom, short *top)
#else
static void
yy_stack_print (bottom, top)
    short *bottom;
    short *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylineno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylineno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  /* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short	yyssa[YYINITDEPTH];
  short *yyss = yyssa;
  register short *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 603 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {;}
    break;

  case 19:
#line 647 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  int osb = pop_current_osb (ctxp);
		  tree t = build_java_array_type ((yyvsp[-1].node), -1);
		  while (--osb)
		    t = build_unresolved_array_type (t);
		  yyval.node = t;
		;}
    break;

  case 20:
#line 655 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  int osb = pop_current_osb (ctxp);
		  tree t = yyvsp[-1].node;
		  while (osb--)
		    t = build_unresolved_array_type (t);
		  yyval.node = t;
		;}
    break;

  case 24:
#line 676 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = make_qualified_name (yyvsp[-2].node, yyvsp[0].node, yyvsp[-1].operator.location); ;}
    break;

  case 26:
#line 685 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = NULL;;}
    break;

  case 34:
#line 697 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = NULL;
		;}
    break;

  case 35:
#line 701 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = NULL;
		;}
    break;

  case 38:
#line 713 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->package = EXPR_WFL_NODE (yyvsp[-1].node);
		  register_package (ctxp->package);
		;}
    break;

  case 39:
#line 718 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing name"); RECOVER;;}
    break;

  case 40:
#line 720 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 43:
#line 730 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree name = EXPR_WFL_NODE (yyvsp[-1].node), last_name;
		  int   i = IDENTIFIER_LENGTH (name)-1;
		  const char *last = &IDENTIFIER_POINTER (name)[i];
		  while (last != IDENTIFIER_POINTER (name))
		    {
		      if (last [0] == '.')
			break;
		      last--;
		    }
		  last_name = get_identifier (++last);
		  if (IS_A_SINGLE_IMPORT_CLASSFILE_NAME_P (last_name))
		    {
		      tree err = find_name_in_single_imports (last_name);
		      if (err && err != name)
			parse_error_context
			  (yyvsp[-1].node, "Ambiguous class: `%s' and `%s'",
			   IDENTIFIER_POINTER (name),
			   IDENTIFIER_POINTER (err));
		      else
			REGISTER_IMPORT (yyvsp[-1].node, last_name);
		    }
		  else
		    REGISTER_IMPORT (yyvsp[-1].node, last_name);
		;}
    break;

  case 44:
#line 756 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing name"); RECOVER;;}
    break;

  case 45:
#line 758 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 46:
#line 763 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree name = EXPR_WFL_NODE (yyvsp[-3].node);
		  tree it;
		  /* Search for duplicates. */
		  for (it = ctxp->import_demand_list; it; it = TREE_CHAIN (it))
		    if (EXPR_WFL_NODE (TREE_PURPOSE (it)) == name)
		      break;
		  /* Don't import the same thing more than once, just ignore
		     duplicates (7.5.2) */
		  if (! it)
		    {
		      read_import_dir (yyvsp[-3].node);
		      ctxp->import_demand_list =
			chainon (ctxp->import_demand_list,
				 build_tree_list (yyvsp[-3].node, NULL_TREE));
		    }
		;}
    break;

  case 47:
#line 781 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'*' expected"); RECOVER;;}
    break;

  case 48:
#line 783 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 49:
#line 788 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (0); ;}
    break;

  case 50:
#line 790 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (0); ;}
    break;

  case 52:
#line 793 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYERROR_NOW;
		  yyerror ("Class or interface declaration expected");
		;}
    break;

  case 53:
#line 804 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.value = (1 << yyvsp[0].value);
		;}
    break;

  case 54:
#line 808 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  int acc = (1 << yyvsp[0].value);
		  if (yyval.value & acc)
		    parse_error_context
		      (ctxp->modifier_ctx [yyvsp[0].value], "Modifier `%s' declared twice",
		       java_accstring_lookup (acc));
		  else
		    {
		      yyval.value |= acc;
		    }
		;}
    break;

  case 55:
#line 824 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_class (yyvsp[-4].value, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 56:
#line 826 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {;;}
    break;

  case 57:
#line 828 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_class (0, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 58:
#line 830 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {;;}
    break;

  case 59:
#line 832 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("Missing class name"); RECOVER; ;}
    break;

  case 60:
#line 834 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("Missing class name"); RECOVER; ;}
    break;

  case 61:
#line 836 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (!ctxp->class_err) yyerror ("'{' expected");
		  DRECOVER(class1);
		;}
    break;

  case 62:
#line 841 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { if (!ctxp->class_err) yyerror ("'{' expected"); RECOVER; ;}
    break;

  case 63:
#line 845 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL; ;}
    break;

  case 64:
#line 847 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 65:
#line 849 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'{' expected"); ctxp->class_err=1;;}
    break;

  case 66:
#line 851 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing super class name"); ctxp->class_err=1;;}
    break;

  case 67:
#line 855 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 68:
#line 857 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 69:
#line 859 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->class_err=1;
		  yyerror ("Missing interface name");
		;}
    break;

  case 70:
#line 867 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->interface_number = 1;
		  yyval.node = build_tree_list (yyvsp[0].node, NULL_TREE);
		;}
    break;

  case 71:
#line 872 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->interface_number++;
		  yyval.node = chainon (yyvsp[-2].node, build_tree_list (yyvsp[0].node, NULL_TREE));
		;}
    break;

  case 72:
#line 877 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing interface name"); RECOVER;;}
    break;

  case 73:
#line 882 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* Store the location of the `}' when doing xrefs */
		  if (flag_emit_xref)
		    DECL_END_SOURCE_LINE (GET_CPC ()) =
		      EXPR_WFL_ADD_COL (yyvsp[0].operator.location, 1);
		  yyval.node = GET_CPC ();
		;}
    break;

  case 74:
#line 890 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* Store the location of the `}' when doing xrefs */
		  if (flag_emit_xref)
		    DECL_END_SOURCE_LINE (GET_CPC ()) =
		      EXPR_WFL_ADD_COL (yyvsp[0].operator.location, 1);
		  yyval.node = GET_CPC ();
		;}
    break;

  case 80:
#line 909 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (yyvsp[0].node != empty_stmt_node)
		    {
		      TREE_CHAIN (yyvsp[0].node) = CPC_INSTANCE_INITIALIZER_STMT (ctxp);
		      SET_CPC_INSTANCE_INITIALIZER_STMT (ctxp, yyvsp[0].node);
		    }
		;}
    break;

  case 83:
#line 922 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (1); ;}
    break;

  case 84:
#line 924 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (1); ;}
    break;

  case 86:
#line 931 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { register_fields (0, yyvsp[-2].node, yyvsp[-1].node); ;}
    break;

  case 87:
#line 933 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  check_modifiers
		    ("Illegal modifier `%s' for field declaration",
		     yyvsp[-3].value, FIELD_MODIFIERS);
		  check_modifiers_consistency (yyvsp[-3].value);
		  register_fields (yyvsp[-3].value, yyvsp[-2].node, yyvsp[-1].node);
		;}
    break;

  case 89:
#line 946 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = chainon (yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 90:
#line 948 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 91:
#line 953 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_tree_list (yyvsp[0].node, NULL_TREE); ;}
    break;

  case 92:
#line 955 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (java_error_count)
		    yyvsp[0].node = NULL_TREE;
		  yyval.node = build_tree_list
		    (yyvsp[-2].node, build_assignment (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[-2].node, yyvsp[0].node));
		;}
    break;

  case 93:
#line 962 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing variable initializer");
		  yyval.node = build_tree_list (yyvsp[-2].node, NULL_TREE);
		  RECOVER;
		;}
    break;

  case 94:
#line 968 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("';' expected");
		  yyval.node = build_tree_list (yyvsp[-3].node, NULL_TREE);
		  RECOVER;
		;}
    break;

  case 96:
#line 978 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_unresolved_array_type (yyvsp[-2].node); ;}
    break;

  case 97:
#line 980 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid declaration"); DRECOVER(vdi);;}
    break;

  case 98:
#line 982 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("']' expected");
		  DRECOVER(vdi);
		;}
    break;

  case 99:
#line 987 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Unbalanced ']'"); DRECOVER(vdi);;}
    break;

  case 102:
#line 998 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  current_function_decl = yyvsp[0].node;
		  if (current_function_decl
		      && TREE_CODE (current_function_decl) == FUNCTION_DECL)
		    source_start_java_method (current_function_decl);
		  else
		    current_function_decl = NULL_TREE;
		;}
    break;

  case 103:
#line 1007 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { finish_method_declaration (yyvsp[0].node); ;}
    break;

  case 104:
#line 1009 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {YYNOT_TWICE yyerror ("'{' expected"); RECOVER;;}
    break;

  case 105:
#line 1014 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (0, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 106:
#line 1016 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (0, void_type_node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 107:
#line 1018 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (yyvsp[-3].value, yyvsp[-2].node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 108:
#line 1020 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (yyvsp[-3].value, void_type_node, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 109:
#line 1022 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Invalid method declaration, method name required");
		  RECOVER;
		;}
    break;

  case 110:
#line 1027 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Identifier expected");
		  RECOVER;
		;}
    break;

  case 111:
#line 1032 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Identifier expected");
		  RECOVER;
		;}
    break;

  case 112:
#line 1037 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Identifier expected");
		  RECOVER;
		;}
    break;

  case 113:
#line 1042 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Invalid method declaration, return type required");
		  RECOVER;
		;}
    break;

  case 114:
#line 1050 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->formal_parameter_number = 0;
		  yyval.node = method_declarator (yyvsp[-2].node, NULL_TREE);
		;}
    break;

  case 115:
#line 1055 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_declarator (yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 116:
#line 1057 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  EXPR_WFL_LINECOL (wfl_operator) = yyvsp[-1].operator.location;
		  TREE_PURPOSE (yyvsp[-2].node) =
		    build_unresolved_array_type (TREE_PURPOSE (yyvsp[-2].node));
		  parse_warning_context
		    (wfl_operator,
		     "Discouraged form of returned type specification");
		;}
    break;

  case 117:
#line 1066 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); DRECOVER(method_declarator);;}
    break;

  case 118:
#line 1068 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("']' expected"); RECOVER;;}
    break;

  case 119:
#line 1073 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->formal_parameter_number = 1;
		;}
    break;

  case 120:
#line 1077 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->formal_parameter_number += 1;
		  yyval.node = chainon (yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 121:
#line 1082 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("Missing formal parameter term"); RECOVER; ;}
    break;

  case 122:
#line 1087 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_tree_list (yyvsp[0].node, yyvsp[-1].node);
		;}
    break;

  case 123:
#line 1091 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_tree_list (yyvsp[0].node, yyvsp[-1].node);
		  ARG_FINAL_P (yyval.node) = 1;
		;}
    break;

  case 124:
#line 1096 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing identifier"); RECOVER;
		  yyval.node = NULL_TREE;
		;}
    break;

  case 125:
#line 1101 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing identifier"); RECOVER;
		  yyval.node = NULL_TREE;
		;}
    break;

  case 126:
#line 1109 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  check_modifiers ("Illegal modifier `%s'. Only `final' was expected here",
				   yyvsp[0].value, ACC_FINAL);
		  if (yyvsp[0].value != ACC_FINAL)
		    MODIFIER_WFL (FINAL_TK) = build_wfl_node (NULL_TREE);
		;}
    break;

  case 127:
#line 1118 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 128:
#line 1120 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 129:
#line 1122 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing class type term"); RECOVER;;}
    break;

  case 130:
#line 1127 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_tree_list (yyvsp[0].node, yyvsp[0].node); ;}
    break;

  case 131:
#line 1129 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = tree_cons (yyvsp[0].node, yyvsp[0].node, yyvsp[-2].node); ;}
    break;

  case 132:
#line 1131 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing class type term"); RECOVER;;}
    break;

  case 134:
#line 1136 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 135:
#line 1142 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  TREE_CHAIN (yyvsp[0].node) = CPC_STATIC_INITIALIZER_STMT (ctxp);
		  SET_CPC_STATIC_INITIALIZER_STMT (ctxp, yyvsp[0].node);
		  current_static_block = NULL_TREE;
		;}
    break;

  case 136:
#line 1151 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  check_modifiers ("Illegal modifier `%s' for static initializer", yyvsp[0].value, ACC_STATIC);
		  /* Can't have a static initializer in an innerclass */
		  if (yyvsp[0].value | ACC_STATIC &&
		      GET_CPC_LIST () && !TOPLEVEL_CLASS_DECL_P (GET_CPC ()))
		    parse_error_context
		      (MODIFIER_WFL (STATIC_TK),
		       "Can't define static initializer in class `%s'. Static initializer can only be defined in top-level classes",
		       IDENTIFIER_POINTER (DECL_NAME (GET_CPC ())));
		  SOURCE_FRONTEND_DEBUG (("Modifiers: %d", yyvsp[0].value));
		;}
    break;

  case 137:
#line 1167 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  current_function_decl = yyvsp[0].node;
		  source_start_java_method (current_function_decl);
		;}
    break;

  case 138:
#line 1172 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { finish_method_declaration (yyvsp[0].node); ;}
    break;

  case 139:
#line 1177 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (0, NULL_TREE, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 140:
#line 1179 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_header (yyvsp[-2].value, NULL_TREE, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 141:
#line 1184 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->formal_parameter_number = 0;
		  yyval.node = method_declarator (yyvsp[-2].node, NULL_TREE);
		;}
    break;

  case 142:
#line 1189 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = method_declarator (yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 143:
#line 1197 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  BLOCK_EXPR_BODY (yyvsp[0].node) = empty_stmt_node;
		  yyval.node = yyvsp[0].node;
		;}
    break;

  case 144:
#line 1202 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 145:
#line 1204 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 146:
#line 1206 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 148:
#line 1216 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_method_invocation (yyvsp[-3].node, NULL_TREE);
		  yyval.node = build_debugable_stmt (EXPR_WFL_LINECOL (yyvsp[-3].node), yyval.node);
		  yyval.node = java_method_add_stmt (current_function_decl, yyval.node);
		;}
    break;

  case 149:
#line 1222 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_method_invocation (yyvsp[-4].node, yyvsp[-2].node);
		  yyval.node = build_debugable_stmt (EXPR_WFL_LINECOL (yyvsp[-4].node), yyval.node);
		  yyval.node = java_method_add_stmt (current_function_decl, yyval.node);
		;}
    break;

  case 150:
#line 1230 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = parse_jdk1_1_error ("explicit constructor invocation"); ;}
    break;

  case 151:
#line 1232 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = parse_jdk1_1_error ("explicit constructor invocation"); ;}
    break;

  case 152:
#line 1237 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree wfl = build_wfl_node (this_identifier_node);
		  EXPR_WFL_LINECOL (wfl) = yyvsp[0].operator.location;
		  yyval.node = wfl;
		;}
    break;

  case 153:
#line 1243 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree wfl = build_wfl_node (super_identifier_node);
		  EXPR_WFL_LINECOL (wfl) = yyvsp[0].operator.location;
		  yyval.node = wfl;
		;}
    break;

  case 154:
#line 1254 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_interface (0, yyvsp[0].node, NULL_TREE); ;}
    break;

  case 155:
#line 1256 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { ; ;}
    break;

  case 156:
#line 1258 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_interface (yyvsp[-2].value, yyvsp[0].node, NULL_TREE); ;}
    break;

  case 157:
#line 1260 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { ; ;}
    break;

  case 158:
#line 1262 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_interface (0, yyvsp[-1].node, yyvsp[0].node);	;}
    break;

  case 159:
#line 1264 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { ; ;}
    break;

  case 160:
#line 1266 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_interface (yyvsp[-3].value, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 161:
#line 1268 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { ; ;}
    break;

  case 162:
#line 1270 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("'{' expected"); RECOVER; ;}
    break;

  case 163:
#line 1272 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("'{' expected"); RECOVER; ;}
    break;

  case 164:
#line 1277 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->interface_number = 1;
		  yyval.node = build_tree_list (yyvsp[0].node, NULL_TREE);
		;}
    break;

  case 165:
#line 1282 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->interface_number++;
		  yyval.node = chainon (yyvsp[-2].node, build_tree_list (yyvsp[0].node, NULL_TREE));
		;}
    break;

  case 166:
#line 1287 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid interface type"); RECOVER;;}
    break;

  case 167:
#line 1289 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 168:
#line 1294 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 169:
#line 1296 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 174:
#line 1308 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (1); ;}
    break;

  case 175:
#line 1310 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { end_class_declaration (1); ;}
    break;

  case 177:
#line 1319 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  check_abstract_method_header (yyvsp[-1].node);
		  current_function_decl = NULL_TREE; /* FIXME ? */
		;}
    break;

  case 178:
#line 1324 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 179:
#line 1330 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_array_init (yyvsp[-1].operator.location, NULL_TREE); ;}
    break;

  case 180:
#line 1332 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_array_init (yyvsp[-2].operator.location, NULL_TREE); ;}
    break;

  case 181:
#line 1334 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_array_init (yyvsp[-2].operator.location, yyvsp[-1].node); ;}
    break;

  case 182:
#line 1336 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_array_init (yyvsp[-3].operator.location, yyvsp[-2].node); ;}
    break;

  case 183:
#line 1341 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = tree_cons (maybe_build_array_element_wfl (yyvsp[0].node),
				  yyvsp[0].node, NULL_TREE);
		;}
    break;

  case 184:
#line 1346 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = tree_cons (maybe_build_array_element_wfl (yyvsp[0].node), yyvsp[0].node, yyvsp[-2].node);
		;}
    break;

  case 185:
#line 1350 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 186:
#line 1356 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 187:
#line 1358 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 188:
#line 1363 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { enter_block (); ;}
    break;

  case 189:
#line 1368 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  maybe_absorb_scoping_blocks ();
		  /* Store the location of the `}' when doing xrefs */
		  if (current_function_decl && flag_emit_xref)
		    DECL_END_SOURCE_LINE (current_function_decl) =
		      EXPR_WFL_ADD_COL (yyvsp[0].operator.location, 1);
		  yyval.node = exit_block ();
		  if (!BLOCK_SUBBLOCKS (yyval.node))
		    BLOCK_SUBBLOCKS (yyval.node) = empty_stmt_node;
		;}
    break;

  case 193:
#line 1388 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { java_method_add_stmt (current_function_decl, yyvsp[0].node); ;}
    break;

  case 194:
#line 1390 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  LOCAL_CLASS_P (TREE_TYPE (GET_CPC ())) = 1;
		  end_class_declaration (1);
		;}
    break;

  case 196:
#line 1402 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { declare_local_variables (0, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 197:
#line 1404 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { declare_local_variables (yyvsp[-2].value, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 203:
#line 1414 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = exit_block (); ;}
    break;

  case 208:
#line 1423 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = exit_block (); ;}
    break;

  case 221:
#line 1443 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (flag_extraneous_semicolon
		      && ! current_static_block
		      && (! current_function_decl ||
			  /* Verify we're not in a inner class declaration */
			  (GET_CPC () != TYPE_NAME
			   (DECL_CONTEXT (current_function_decl)))))

		    {
		      EXPR_WFL_SET_LINECOL (wfl_operator, input_line, -1);
		      parse_warning_context (wfl_operator, "An empty declaration is a deprecated feature that should not be used");
		    }
		  yyval.node = empty_stmt_node;
		;}
    break;

  case 222:
#line 1461 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_labeled_block (EXPR_WFL_LINECOL (yyvsp[-1].node),
					    EXPR_WFL_NODE (yyvsp[-1].node));
		  pushlevel (2);
		  push_labeled_block (yyval.node);
		  PUSH_LABELED_BLOCK (yyval.node);
		;}
    break;

  case 223:
#line 1472 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_labeled_statement (yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 224:
#line 1474 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("':' expected"); RECOVER;;}
    break;

  case 225:
#line 1479 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_labeled_statement (yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 226:
#line 1486 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* We have a statement. Generate a WFL around it so
		     we can debug it */
		  yyval.node = build_expr_wfl (yyvsp[-1].node, input_filename, input_line, 0);
		  /* We know we have a statement, so set the debug
                     info to be eventually generate here. */
		  yyval.node = JAVA_MAYBE_GENERATE_DEBUG_INFO (yyval.node);
		;}
    break;

  case 227:
#line 1495 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYNOT_TWICE yyerror ("Invalid expression statement");
		  DRECOVER (expr_stmt);
		;}
    break;

  case 228:
#line 1500 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYNOT_TWICE yyerror ("Invalid expression statement");
		  DRECOVER (expr_stmt);
		;}
    break;

  case 229:
#line 1505 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYNOT_TWICE yyerror ("Invalid expression statement");
		  DRECOVER (expr_stmt);
		;}
    break;

  case 230:
#line 1510 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 231:
#line 1512 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  parse_ctor_invocation_error ();
		  RECOVER;
		;}
    break;

  case 232:
#line 1517 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 233:
#line 1519 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  parse_ctor_invocation_error ();
		  RECOVER;
		;}
    break;

  case 234:
#line 1524 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 235:
#line 1526 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 236:
#line 1528 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 237:
#line 1530 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 238:
#line 1532 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 246:
#line 1547 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_if_else_statement (yyvsp[-3].operator.location, yyvsp[-2].node,
						yyvsp[0].node, NULL_TREE);
		;}
    break;

  case 247:
#line 1552 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 248:
#line 1554 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 249:
#line 1556 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 250:
#line 1561 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_if_else_statement (yyvsp[-5].operator.location, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 251:
#line 1566 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_if_else_statement (yyvsp[-5].operator.location, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 252:
#line 1571 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  enter_block ();
		;}
    break;

  case 253:
#line 1575 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* Make into "proper list" of COMPOUND_EXPRs.
		     I.e. make the last statement also have its own
		     COMPOUND_EXPR. */
		  maybe_absorb_scoping_blocks ();
		  TREE_OPERAND (yyvsp[-2].node, 1) = exit_block ();
		  yyval.node = build_debugable_stmt (EXPR_WFL_LINECOL (yyvsp[-2].node), yyvsp[-2].node);
		;}
    break;

  case 254:
#line 1587 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build (SWITCH_EXPR, NULL_TREE, yyvsp[-1].node, NULL_TREE);
		  EXPR_WFL_LINECOL (yyval.node) = yyvsp[-2].operator.location;
		;}
    break;

  case 255:
#line 1592 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 256:
#line 1594 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term or ')'"); DRECOVER(switch_statement);;}
    break;

  case 257:
#line 1596 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'{' expected"); RECOVER;;}
    break;

  case 258:
#line 1604 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 259:
#line 1606 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 260:
#line 1608 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 261:
#line 1610 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = NULL_TREE; ;}
    break;

  case 267:
#line 1629 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree lab = build1 (CASE_EXPR, NULL_TREE, yyvsp[-1].node);
		  EXPR_WFL_LINECOL (lab) = yyvsp[-2].operator.location;
		  java_method_add_stmt (current_function_decl, lab);
		;}
    break;

  case 268:
#line 1635 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree lab = build (DEFAULT_EXPR, NULL_TREE, NULL_TREE);
		  EXPR_WFL_LINECOL (lab) = yyvsp[-1].operator.location;
		  java_method_add_stmt (current_function_decl, lab);
		;}
    break;

  case 269:
#line 1641 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing or invalid constant expression"); RECOVER;;}
    break;

  case 270:
#line 1643 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("':' expected"); RECOVER;;}
    break;

  case 271:
#line 1645 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("':' expected"); RECOVER;;}
    break;

  case 272:
#line 1650 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree body = build_loop_body (yyvsp[-2].operator.location, yyvsp[-1].node, 0);
		  yyval.node = build_new_loop (body);
		;}
    break;

  case 273:
#line 1658 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_loop_body (0, NULL_TREE, yyvsp[0].node, 0); ;}
    break;

  case 274:
#line 1660 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {YYERROR_NOW; yyerror ("'(' expected"); RECOVER;;}
    break;

  case 275:
#line 1662 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term and ')' expected"); RECOVER;;}
    break;

  case 276:
#line 1664 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 277:
#line 1669 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_loop_body (0, NULL_TREE, yyvsp[0].node, 0); ;}
    break;

  case 278:
#line 1674 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree body = build_loop_body (0, NULL_TREE, 1);
		  yyval.node = build_new_loop (body);
		;}
    break;

  case 279:
#line 1683 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_loop_body (yyvsp[-3].operator.location, yyvsp[-2].node, yyvsp[-5].node, 1); ;}
    break;

  case 280:
#line 1688 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (TREE_CODE_CLASS (TREE_CODE (yyvsp[-4].node)) == 'c')
		    yyvsp[-4].node = build_wfl_node (yyvsp[-4].node);
		  yyval.node = finish_for_loop (EXPR_WFL_LINECOL (yyvsp[-4].node), yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 281:
#line 1694 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = finish_for_loop (0, NULL_TREE, yyvsp[-2].node, yyvsp[0].node);
		  /* We have not condition, so we get rid of the EXIT_EXPR */
		  LOOP_EXPR_BODY_CONDITION_EXPR (LOOP_EXPR_BODY (yyval.node), 0) =
		    empty_stmt_node;
		;}
    break;

  case 282:
#line 1701 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid control expression"); RECOVER;;}
    break;

  case 283:
#line 1703 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid update expression"); RECOVER;;}
    break;

  case 284:
#line 1705 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid update expression"); RECOVER;;}
    break;

  case 285:
#line 1710 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = finish_for_loop (EXPR_WFL_LINECOL (yyvsp[-4].node), yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);;}
    break;

  case 286:
#line 1712 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = finish_for_loop (0, NULL_TREE, yyvsp[-2].node, yyvsp[0].node);
		  /* We have not condition, so we get rid of the EXIT_EXPR */
		  LOOP_EXPR_BODY_CONDITION_EXPR (LOOP_EXPR_BODY (yyval.node), 0) =
		    empty_stmt_node;
		;}
    break;

  case 287:
#line 1722 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* This scope defined for local variable that may be
                     defined within the scope of the for loop */
		  enter_block ();
		;}
    break;

  case 288:
#line 1728 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); DRECOVER(for_1);;}
    break;

  case 289:
#line 1730 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid init statement"); RECOVER;;}
    break;

  case 290:
#line 1735 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* We now declare the loop body. The loop is
                     declared as a for loop. */
		  tree body = build_loop_body (0, NULL_TREE, 0);
		  yyval.node =  build_new_loop (body);
		  FOR_LOOP_P (yyval.node) = 1;
		  /* The loop is added to the current block the for
                     statement is defined within */
		  java_method_add_stmt (current_function_decl, yyval.node);
		;}
    break;

  case 291:
#line 1747 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = empty_stmt_node; ;}
    break;

  case 292:
#line 1749 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* Init statement recorded within the previously
                     defined block scope */
		  yyval.node = java_method_add_stmt (current_function_decl, yyvsp[0].node);
		;}
    break;

  case 293:
#line 1755 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* Local variable are recorded within the previously
		     defined block scope */
		  yyval.node = NULL_TREE;
		;}
    break;

  case 294:
#line 1761 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); DRECOVER(for_init_1);;}
    break;

  case 295:
#line 1765 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = empty_stmt_node;;}
    break;

  case 296:
#line 1767 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_debugable_stmt (BUILD_LOCATION (), yyvsp[0].node); ;}
    break;

  case 297:
#line 1772 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = add_stmt_to_compound (NULL_TREE, NULL_TREE, yyvsp[0].node); ;}
    break;

  case 298:
#line 1774 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = add_stmt_to_compound (yyvsp[-2].node, NULL_TREE, yyvsp[0].node); ;}
    break;

  case 299:
#line 1776 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 300:
#line 1781 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_bc_statement (yyvsp[-1].operator.location, 1, NULL_TREE); ;}
    break;

  case 301:
#line 1783 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_bc_statement (yyvsp[-2].operator.location, 1, yyvsp[-1].node); ;}
    break;

  case 302:
#line 1785 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 303:
#line 1787 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 304:
#line 1792 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_bc_statement (yyvsp[-1].operator.location, 0, NULL_TREE); ;}
    break;

  case 305:
#line 1794 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_bc_statement (yyvsp[-2].operator.location, 0, yyvsp[-1].node); ;}
    break;

  case 306:
#line 1796 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 307:
#line 1798 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 308:
#line 1803 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_return (yyvsp[-1].operator.location, NULL_TREE); ;}
    break;

  case 309:
#line 1805 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_return (yyvsp[-2].operator.location, yyvsp[-1].node); ;}
    break;

  case 310:
#line 1807 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 311:
#line 1809 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 312:
#line 1814 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build1 (THROW_EXPR, NULL_TREE, yyvsp[-1].node);
		  EXPR_WFL_LINECOL (yyval.node) = yyvsp[-2].operator.location;
		;}
    break;

  case 313:
#line 1819 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 314:
#line 1821 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 315:
#line 1826 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_assertion (yyvsp[-4].operator.location, yyvsp[-3].node, yyvsp[-1].node);
		;}
    break;

  case 316:
#line 1830 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_assertion (yyvsp[-2].operator.location, yyvsp[-1].node, NULL_TREE);
		;}
    break;

  case 317:
#line 1834 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 318:
#line 1836 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("';' expected"); RECOVER;;}
    break;

  case 319:
#line 1841 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build (SYNCHRONIZED_EXPR, NULL_TREE, yyvsp[-2].node, yyvsp[0].node);
		  EXPR_WFL_LINECOL (yyval.node) =
		    EXPR_WFL_LINECOL (MODIFIER_WFL (SYNCHRONIZED_TK));
		;}
    break;

  case 320:
#line 1847 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'{' expected"); RECOVER;;}
    break;

  case 321:
#line 1849 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 322:
#line 1851 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 323:
#line 1853 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 324:
#line 1858 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  check_modifiers (
             "Illegal modifier `%s'. Only `synchronized' was expected here",
				   yyvsp[0].value, ACC_SYNCHRONIZED);
		  if (yyvsp[0].value != ACC_SYNCHRONIZED)
		    MODIFIER_WFL (SYNCHRONIZED_TK) =
		      build_wfl_node (NULL_TREE);
		;}
    break;

  case 325:
#line 1870 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_try_statement (yyvsp[-2].operator.location, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 326:
#line 1872 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_try_finally_statement (yyvsp[-2].operator.location, yyvsp[-1].node, yyvsp[0].node); ;}
    break;

  case 327:
#line 1874 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_try_finally_statement
		    (yyvsp[-3].operator.location, build_try_statement (yyvsp[-3].operator.location,
						       yyvsp[-2].node, yyvsp[-1].node), yyvsp[0].node);
		;}
    break;

  case 328:
#line 1879 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'{' expected"); DRECOVER (try_statement);;}
    break;

  case 330:
#line 1885 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  TREE_CHAIN (yyvsp[0].node) = yyvsp[-1].node;
		  yyval.node = yyvsp[0].node;
		;}
    break;

  case 331:
#line 1893 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  java_method_add_stmt (current_function_decl, yyvsp[0].node);
		  exit_block ();
		  yyval.node = yyvsp[-1].node;
		;}
    break;

  case 332:
#line 1902 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  /* We add a block to define a scope for
		     formal_parameter (CCBP). The formal parameter is
		     declared initialized by the appropriate function
		     call */
                  tree ccpb;
                  tree init;
                  if (yyvsp[-1].node)
                    {
                      ccpb = enter_block ();
                      init = build_assignment
                        (ASSIGN_TK, yyvsp[-2].operator.location, TREE_PURPOSE (yyvsp[-1].node),
                         build (JAVA_EXC_OBJ_EXPR, ptr_type_node));
                      declare_local_variables (0, TREE_VALUE (yyvsp[-1].node),
                                               build_tree_list 
					       (TREE_PURPOSE (yyvsp[-1].node), init));
                      yyval.node = build1 (CATCH_EXPR, NULL_TREE, ccpb);
                      EXPR_WFL_LINECOL (yyval.node) = yyvsp[-3].operator.location;
                    }
                  else
                    {
                      yyval.node = error_mark_node;
                    }
		;}
    break;

  case 333:
#line 1927 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER; yyval.node = NULL_TREE;;}
    break;

  case 334:
#line 1929 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing term or ')' expected");
		  RECOVER; yyval.node = NULL_TREE;
		;}
    break;

  case 335:
#line 1934 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER; yyval.node = NULL_TREE;;}
    break;

  case 336:
#line 1939 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[0].node; ;}
    break;

  case 337:
#line 1941 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'{' expected"); RECOVER; ;}
    break;

  case 341:
#line 1953 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_this (yyvsp[0].operator.location); ;}
    break;

  case 342:
#line 1955 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = yyvsp[-1].node;;}
    break;

  case 348:
#line 1965 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree wfl = build_wfl_node (this_identifier_node);
		  yyval.node = make_qualified_primary (yyvsp[-2].node, wfl, EXPR_WFL_LINECOL (yyvsp[-2].node));
		;}
    break;

  case 349:
#line 1970 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 350:
#line 1972 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'class' or 'this' expected" ); RECOVER;;}
    break;

  case 351:
#line 1974 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'class' expected" ); RECOVER;;}
    break;

  case 352:
#line 1976 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'class' expected" ); RECOVER;;}
    break;

  case 353:
#line 1981 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_incomplete_class_ref (yyvsp[-1].operator.location, yyvsp[-2].node); ;}
    break;

  case 354:
#line 1983 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_incomplete_class_ref (yyvsp[-1].operator.location, yyvsp[-2].node); ;}
    break;

  case 355:
#line 1985 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_incomplete_class_ref (yyvsp[-1].operator.location, yyvsp[-2].node); ;}
    break;

  case 356:
#line 1987 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
                   yyval.node = build_incomplete_class_ref (yyvsp[-1].operator.location,
                                                   void_type_node);
                ;}
    break;

  case 357:
#line 1995 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_invocation (yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 358:
#line 1997 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_new_invocation (yyvsp[-2].node, NULL_TREE); ;}
    break;

  case 360:
#line 2003 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree ctor = build_new_invocation (yyvsp[-2].node, NULL_TREE);
		  yyval.node = make_qualified_primary (yyvsp[-3].node, ctor,
					       EXPR_WFL_LINECOL (yyvsp[-3].node));
		;}
    break;

  case 362:
#line 2010 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree ctor = build_new_invocation (yyvsp[-3].node, yyvsp[-1].node);
		  yyval.node = make_qualified_primary (yyvsp[-4].node, ctor,
					       EXPR_WFL_LINECOL (yyvsp[-4].node));
		;}
    break;

  case 364:
#line 2017 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); DRECOVER(new_1);;}
    break;

  case 365:
#line 2019 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 366:
#line 2021 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' or term expected"); RECOVER;;}
    break;

  case 367:
#line 2023 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("')' expected"); RECOVER;;}
    break;

  case 368:
#line 2025 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {YYERROR_NOW; yyerror ("Identifier expected"); RECOVER;;}
    break;

  case 369:
#line 2027 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'(' expected"); RECOVER;;}
    break;

  case 370:
#line 2037 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_anonymous_class (yyvsp[-4].operator.location, yyvsp[-3].node); ;}
    break;

  case 371:
#line 2039 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree id = build_wfl_node (DECL_NAME (GET_CPC ()));
		  EXPR_WFL_LINECOL (id) = EXPR_WFL_LINECOL (yyvsp[-5].node);

		  end_class_declaration (1);

		  /* Now we can craft the new expression */
		  yyval.node = build_new_invocation (id, yyvsp[-3].node);

		  /* Note that we can't possibly be here if
		     `class_type' is an interface (in which case the
		     anonymous class extends Object and implements
		     `class_type', hence its constructor can't have
		     arguments.) */

		  /* Otherwise, the innerclass must feature a
		     constructor matching `argument_list'. Anonymous
		     classes are a bit special: it's impossible to
		     define constructor for them, hence constructors
		     must be generated following the hints provided by
		     the `new' expression. Whether a super constructor
		     of that nature exists or not is to be verified
		     later on in verify_constructor_super.

		     It's during the expansion of a `new' statement
		     refering to an anonymous class that a ctor will
		     be generated for the anonymous class, with the
		     right arguments. */

		;}
    break;

  case 372:
#line 2070 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { create_anonymous_class (yyvsp[-3].operator.location, yyvsp[-2].node); ;}
    break;

  case 373:
#line 2072 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree id = build_wfl_node (DECL_NAME (GET_CPC ()));
		  EXPR_WFL_LINECOL (id) = EXPR_WFL_LINECOL (yyvsp[-4].node);

		  end_class_declaration (1);

		  /* Now we can craft the new expression. The
                     statement doesn't need to be remember so that a
                     constructor can be generated, since its signature
                     is already known. */
		  yyval.node = build_new_invocation (id, NULL_TREE);
		;}
    break;

  case 374:
#line 2088 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[-2].node; ;}
    break;

  case 375:
#line 2090 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = yyvsp[-2].node; ;}
    break;

  case 376:
#line 2095 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = tree_cons (NULL_TREE, yyvsp[0].node, NULL_TREE);
		  ctxp->formal_parameter_number = 1;
		;}
    break;

  case 377:
#line 2100 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  ctxp->formal_parameter_number += 1;
		  yyval.node = tree_cons (NULL_TREE, yyvsp[0].node, yyvsp[-2].node);
		;}
    break;

  case 378:
#line 2105 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 379:
#line 2110 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_newarray_node (yyvsp[-1].node, yyvsp[0].node, 0); ;}
    break;

  case 380:
#line 2112 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_newarray_node (yyvsp[-1].node, yyvsp[0].node, 0); ;}
    break;

  case 381:
#line 2114 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_newarray_node (yyvsp[-2].node, yyvsp[-1].node, pop_current_osb (ctxp));;}
    break;

  case 382:
#line 2116 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_newarray_node (yyvsp[-2].node, yyvsp[-1].node, pop_current_osb (ctxp));;}
    break;

  case 383:
#line 2120 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  char *sig;
		  int osb = pop_current_osb (ctxp);
		  while (osb--)
		    obstack_grow (&temporary_obstack, "[]", 2);
		  obstack_1grow (&temporary_obstack, '\0');
		  sig = obstack_finish (&temporary_obstack);
		  yyval.node = build (NEW_ANONYMOUS_ARRAY_EXPR, NULL_TREE,
			      yyvsp[-2].node, get_identifier (sig), yyvsp[0].node);
		;}
    break;

  case 384:
#line 2131 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  int osb = pop_current_osb (ctxp);
		  tree type = yyvsp[-2].node;
		  while (osb--)
		    type = build_java_array_type (type, -1);
		  yyval.node = build (NEW_ANONYMOUS_ARRAY_EXPR, NULL_TREE,
			      build_pointer_type (type), NULL_TREE, yyvsp[0].node);
		;}
    break;

  case 385:
#line 2140 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("'[' expected"); DRECOVER ("]");;}
    break;

  case 386:
#line 2142 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("']' expected"); RECOVER;;}
    break;

  case 387:
#line 2147 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_tree_list (NULL_TREE, yyvsp[0].node); ;}
    break;

  case 388:
#line 2149 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = tree_cons (NULL_TREE, yyvsp[0].node, yyval.node); ;}
    break;

  case 389:
#line 2154 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (JNUMERIC_TYPE_P (TREE_TYPE (yyvsp[-1].node)))
		    {
		      yyvsp[-1].node = build_wfl_node (yyvsp[-1].node);
		      TREE_TYPE (yyvsp[-1].node) = NULL_TREE;
		    }
		  EXPR_WFL_LINECOL (yyvsp[-1].node) = yyvsp[-2].operator.location;
		  yyval.node = yyvsp[-1].node;
		;}
    break;

  case 390:
#line 2164 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("']' expected"); RECOVER;;}
    break;

  case 391:
#line 2166 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing term");
		  yyerror ("']' expected");
		  RECOVER;
		;}
    break;

  case 392:
#line 2175 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  int allocate = 0;
		  /* If not initialized, allocate memory for the osb
                     numbers stack */
		  if (!ctxp->osb_limit)
		    {
		      allocate = ctxp->osb_limit = 32;
		      ctxp->osb_depth = -1;
		    }
		  /* If capacity overflown, reallocate a bigger chunk */
		  else if (ctxp->osb_depth+1 == ctxp->osb_limit)
		    allocate = ctxp->osb_limit << 1;

		  if (allocate)
		    {
		      allocate *= sizeof (int);
		      if (ctxp->osb_number)
			ctxp->osb_number = xrealloc (ctxp->osb_number,
						     allocate);
		      else
			ctxp->osb_number = xmalloc (allocate);
		    }
		  ctxp->osb_depth++;
		  CURRENT_OSB (ctxp) = 1;
		;}
    break;

  case 393:
#line 2201 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { CURRENT_OSB (ctxp)++; ;}
    break;

  case 394:
#line 2203 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("']' expected"); RECOVER;;}
    break;

  case 395:
#line 2208 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = make_qualified_primary (yyvsp[-2].node, yyvsp[0].node, yyvsp[-1].operator.location); ;}
    break;

  case 396:
#line 2212 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree super_wfl = build_wfl_node (super_identifier_node);
		  EXPR_WFL_LINECOL (super_wfl) = yyvsp[-2].operator.location;
		  yyval.node = make_qualified_name (super_wfl, yyvsp[0].node, yyvsp[-1].operator.location);
		;}
    break;

  case 397:
#line 2218 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Field expected"); DRECOVER (super_field_acces);;}
    break;

  case 398:
#line 2223 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_method_invocation (yyvsp[-2].node, NULL_TREE); ;}
    break;

  case 399:
#line 2225 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_method_invocation (yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 400:
#line 2227 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (TREE_CODE (yyvsp[-4].node) == THIS_EXPR)
		    yyval.node = build_this_super_qualified_invocation
		      (1, yyvsp[-2].node, NULL_TREE, 0, yyvsp[-3].operator.location);
		  else
		    {
		      tree invok = build_method_invocation (yyvsp[-2].node, NULL_TREE);
		      yyval.node = make_qualified_primary (yyvsp[-4].node, invok, yyvsp[-3].operator.location);
		    }
		;}
    break;

  case 401:
#line 2238 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  if (TREE_CODE (yyvsp[-5].node) == THIS_EXPR)
		    yyval.node = build_this_super_qualified_invocation
		      (1, yyvsp[-3].node, yyvsp[-1].node, 0, yyvsp[-4].operator.location);
		  else
		    {
		      tree invok = build_method_invocation (yyvsp[-3].node, yyvsp[-1].node);
		      yyval.node = make_qualified_primary (yyvsp[-5].node, invok, yyvsp[-4].operator.location);
		    }
		;}
    break;

  case 402:
#line 2249 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_this_super_qualified_invocation
		    (0, yyvsp[-2].node, NULL_TREE, yyvsp[-4].operator.location, yyvsp[-3].operator.location);
		;}
    break;

  case 403:
#line 2254 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_this_super_qualified_invocation
		    (0, yyvsp[-3].node, yyvsp[-1].node, yyvsp[-5].operator.location, yyvsp[-4].operator.location);
		;}
    break;

  case 404:
#line 2263 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("'(' expected"); DRECOVER (method_invocation); ;}
    break;

  case 405:
#line 2265 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyerror ("'(' expected"); DRECOVER (method_invocation); ;}
    break;

  case 406:
#line 2270 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_array_ref (yyvsp[-2].operator.location, yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 407:
#line 2272 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_array_ref (yyvsp[-2].operator.location, yyvsp[-3].node, yyvsp[-1].node); ;}
    break;

  case 408:
#line 2274 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing term and ']' expected");
		  DRECOVER(array_access);
		;}
    break;

  case 409:
#line 2279 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("']' expected");
		  DRECOVER(array_access);
		;}
    break;

  case 410:
#line 2284 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("Missing term and ']' expected");
		  DRECOVER(array_access);
		;}
    break;

  case 411:
#line 2289 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyerror ("']' expected");
		  DRECOVER(array_access);
		;}
    break;

  case 416:
#line 2304 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_incdec (yyvsp[0].operator.token, yyvsp[0].operator.location, yyvsp[-1].node, 1); ;}
    break;

  case 417:
#line 2309 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_incdec (yyvsp[0].operator.token, yyvsp[0].operator.location, yyvsp[-1].node, 1); ;}
    break;

  case 420:
#line 2316 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_unaryop (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node); ;}
    break;

  case 422:
#line 2319 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 423:
#line 2324 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  error_if_numeric_overflow (yyvsp[0].node);
		  yyval.node = yyvsp[0].node;
		;}
    break;

  case 424:
#line 2329 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_unaryop (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node); ;}
    break;

  case 425:
#line 2331 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 426:
#line 2336 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_incdec (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node, 0); ;}
    break;

  case 427:
#line 2338 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 428:
#line 2343 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_incdec (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node, 0); ;}
    break;

  case 429:
#line 2345 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 431:
#line 2351 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_unaryop (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node); ;}
    break;

  case 432:
#line 2353 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyval.node = build_unaryop (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[0].node); ;}
    break;

  case 434:
#line 2356 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 435:
#line 2358 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;}
    break;

  case 436:
#line 2363 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  tree type = yyvsp[-3].node;
		  int osb = pop_current_osb (ctxp);
		  while (osb--)
		    type = build_java_array_type (type, -1);
		  yyval.node = build_cast (yyvsp[-4].operator.location, type, yyvsp[0].node);
		;}
    break;

  case 437:
#line 2371 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_cast (yyvsp[-3].operator.location, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 438:
#line 2373 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_cast (yyvsp[-3].operator.location, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 439:
#line 2375 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  const char *ptr;
		  int osb = pop_current_osb (ctxp);
		  obstack_grow (&temporary_obstack,
				IDENTIFIER_POINTER (EXPR_WFL_NODE (yyvsp[-3].node)),
				IDENTIFIER_LENGTH (EXPR_WFL_NODE (yyvsp[-3].node)));
		  while (osb--)
		    obstack_grow (&temporary_obstack, "[]", 2);
		  obstack_1grow (&temporary_obstack, '\0');
		  ptr = obstack_finish (&temporary_obstack);
		  EXPR_WFL_NODE (yyvsp[-3].node) = get_identifier (ptr);
		  yyval.node = build_cast (yyvsp[-4].operator.location, yyvsp[-3].node, yyvsp[0].node);
		;}
    break;

  case 440:
#line 2389 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("']' expected, invalid type expression");;}
    break;

  case 441:
#line 2391 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
	          YYNOT_TWICE yyerror ("Invalid type expression"); RECOVER;
		  RECOVER;
		;}
    break;

  case 442:
#line 2396 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 443:
#line 2398 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 444:
#line 2400 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 446:
#line 2406 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token),
				    yyvsp[-1].operator.location, yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 447:
#line 2411 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 448:
#line 2416 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 449:
#line 2421 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 450:
#line 2423 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 451:
#line 2425 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 453:
#line 2431 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 454:
#line 2436 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 455:
#line 2441 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 456:
#line 2443 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 458:
#line 2449 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 459:
#line 2454 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 460:
#line 2459 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 461:
#line 2464 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 462:
#line 2466 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 463:
#line 2468 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 465:
#line 2474 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 466:
#line 2479 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 467:
#line 2484 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 468:
#line 2489 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 469:
#line 2494 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_binop (INSTANCEOF_EXPR, yyvsp[-1].operator.location, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 470:
#line 2496 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 471:
#line 2498 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 472:
#line 2500 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 473:
#line 2502 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 474:
#line 2504 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Invalid reference type"); RECOVER;;}
    break;

  case 476:
#line 2510 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 477:
#line 2515 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 478:
#line 2520 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 479:
#line 2522 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 481:
#line 2528 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 482:
#line 2533 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 484:
#line 2539 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 485:
#line 2544 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 487:
#line 2550 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 488:
#line 2555 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 490:
#line 2561 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 491:
#line 2566 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 493:
#line 2572 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build_binop (BINOP_LOOKUP (yyvsp[-1].operator.token), yyvsp[-1].operator.location,
				    yyvsp[-2].node, yyvsp[0].node);
		;}
    break;

  case 494:
#line 2577 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); RECOVER;;}
    break;

  case 496:
#line 2583 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  yyval.node = build (CONDITIONAL_EXPR, NULL_TREE, yyvsp[-4].node, yyvsp[-2].node, yyvsp[0].node);
		  EXPR_WFL_LINECOL (yyval.node) = yyvsp[-3].operator.location;
		;}
    break;

  case 497:
#line 2588 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYERROR_NOW;
		  yyerror ("Missing term");
		  DRECOVER (1);
		;}
    break;

  case 498:
#line 2594 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); DRECOVER (2);;}
    break;

  case 499:
#line 2596 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {yyerror ("Missing term"); DRECOVER (3);;}
    break;

  case 502:
#line 2606 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    { yyval.node = build_assignment (yyvsp[-1].operator.token, yyvsp[-1].operator.location, yyvsp[-2].node, yyvsp[0].node); ;}
    break;

  case 503:
#line 2608 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"
    {
		  YYNOT_TWICE yyerror ("Missing term");
		  DRECOVER (assign);
		;}
    break;


    }

/* Line 991 of yacc.c.  */
#line 5986 "java/parse.c"

  yyvsp -= yylen;
  yyssp -= yylen;


  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  char *yymsg;
	  int yyx, yycount;

	  yycount = 0;
	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  for (yyx = yyn < 0 ? -yyn : 0;
	       yyx < (int) (sizeof (yytname) / sizeof (char *)); yyx++)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      yysize += yystrlen (yytname[yyx]) + 15, yycount++;
	  yysize += yystrlen ("syntax error, unexpected ") + 1;
	  yysize += yystrlen (yytname[yytype]);
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yycount = 0;
		  for (yyx = yyn < 0 ? -yyn : 0;
		       yyx < (int) (sizeof (yytname) / sizeof (char *));
		       yyx++)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			const char *yyq = ! yycount ? ", expecting " : " or ";
			yyp = yystpcpy (yyp, yyq);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yycount++;
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      /* Return failure if at end of input.  */
      if (yychar == YYEOF)
        {
	  /* Pop the error token.  */
          YYPOPSTACK;
	  /* Pop the rest of the stack.  */
	  while (yyss < yyssp)
	    {
	      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
	      yydestruct (yystos[*yyssp], yyvsp);
	      YYPOPSTACK;
	    }
	  YYABORT;
        }

      YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
      yydestruct (yytoken, &yylval);
      yychar = YYEMPTY;

    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab2;


/*----------------------------------------------------.
| yyerrlab1 -- error raised explicitly by an action.  |
`----------------------------------------------------*/
yyerrlab1:

  /* Suppress GCC warning that yyerrlab1 is unused when no action
     invokes YYERROR.  */
#if defined (__GNUC_MINOR__) && 2093 <= (__GNUC__ * 1000 + __GNUC_MINOR__) \
    && !defined __cplusplus
  __attribute__ ((__unused__))
#endif


  goto yyerrlab2;


/*---------------------------------------------------------------.
| yyerrlab2 -- pop states until the error token can be shifted.  |
`---------------------------------------------------------------*/
yyerrlab2:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      yyvsp--;
      yystate = *--yyssp;

      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 2633 "/home/gdr/build/gcc-3.4.5/gcc-3.4.5/gcc/java/parse.y"


/* Helper function to retrieve an OSB count. Should be used when the
   `dims:' rule is being used.  */

static int
pop_current_osb (struct parser_ctxt *ctxp)
{
  int to_return;

  if (ctxp->osb_depth < 0)
    abort ();

  to_return = CURRENT_OSB (ctxp);
  ctxp->osb_depth--;

  return to_return;
}



/* This section of the code deal with save/restoring parser contexts.
   Add mode documentation here. FIXME */

/* Helper function. Create a new parser context. With
   COPY_FROM_PREVIOUS set to a nonzero value, content of the previous
   context is copied, otherwise, the new context is zeroed. The newly
   created context becomes the current one.  */

static void
create_new_parser_context (int copy_from_previous)
{
  struct parser_ctxt *new;

  new = ggc_alloc (sizeof (struct parser_ctxt));
  if (copy_from_previous)
    {
      memcpy (new, ctxp, sizeof (struct parser_ctxt));
      /* This flag, indicating the context saves global values,
	 should only be set by java_parser_context_save_global.  */
      new->saved_data_ctx = 0;
    }
  else
    memset (new, 0, sizeof (struct parser_ctxt));

  new->next = ctxp;
  ctxp = new;
}

/* Create a new parser context and make it the current one. */

void
java_push_parser_context (void)
{
  create_new_parser_context (0);
}

void
java_pop_parser_context (int generate)
{
  tree current;
  struct parser_ctxt *toFree, *next;

  if (!ctxp)
    return;

  toFree = ctxp;
  next = ctxp->next;
  if (next)
    {
      input_line = ctxp->lineno;
      current_class = ctxp->class_type;
    }

  /* If the old and new lexers differ, then free the old one.  */
  if (ctxp->lexer && next && ctxp->lexer != next->lexer)
    java_destroy_lexer (ctxp->lexer);

  /* Set the single import class file flag to 0 for the current list
     of imported things */
  for (current = ctxp->import_list; current; current = TREE_CHAIN (current))
    IS_A_SINGLE_IMPORT_CLASSFILE_NAME_P (TREE_VALUE (current)) = 0;

  /* And restore those of the previous context */
  if ((ctxp = next))		/* Assignment is really meant here */
    for (current = ctxp->import_list; current; current = TREE_CHAIN (current))
      IS_A_SINGLE_IMPORT_CLASSFILE_NAME_P (TREE_VALUE (current)) = 1;

  /* If we pushed a context to parse a class intended to be generated,
     we keep it so we can remember the class. What we could actually
     do is to just update a list of class names.  */
  if (generate)
    {
      toFree->next = ctxp_for_generation;
      ctxp_for_generation = toFree;
    }
}

/* Create a parser context for the use of saving some global
   variables.  */

void
java_parser_context_save_global (void)
{
  if (!ctxp)
    {
      java_push_parser_context ();
      ctxp->saved_data_ctx = 1;
    }

  /* If this context already stores data, create a new one suitable
     for data storage. */
  else if (ctxp->saved_data)
    {
      create_new_parser_context (1);
      ctxp->saved_data_ctx = 1;
    }

  ctxp->lineno = input_line;
  ctxp->class_type = current_class;
  ctxp->filename = input_filename;
  ctxp->function_decl = current_function_decl;
  ctxp->saved_data = 1;
}

/* Restore some global variables from the previous context. Make the
   previous context the current one.  */

void
java_parser_context_restore_global (void)
{
  input_line = ctxp->lineno;
  current_class = ctxp->class_type;
  input_filename = ctxp->filename;
  if (wfl_operator)
    {
      tree s;
      BUILD_FILENAME_IDENTIFIER_NODE (s, input_filename);
      EXPR_WFL_FILENAME_NODE (wfl_operator) = s;
    }
  current_function_decl = ctxp->function_decl;
  ctxp->saved_data = 0;
  if (ctxp->saved_data_ctx)
    java_pop_parser_context (0);
}

/* Suspend vital data for the current class/function being parsed so
   that an other class can be parsed. Used to let local/anonymous
   classes be parsed.  */

static void
java_parser_context_suspend (void)
{
  /* This makes debugging through java_debug_context easier */
  static const char *const name = "<inner buffer context>";

  /* Duplicate the previous context, use it to save the globals we're
     interested in */
  create_new_parser_context (1);
  ctxp->function_decl = current_function_decl;
  ctxp->class_type = current_class;

  /* Then create a new context which inherits all data from the
     previous one. This will be the new current context  */
  create_new_parser_context (1);

  /* Help debugging */
  ctxp->next->filename = name;
}

/* Resume vital data for the current class/function being parsed so
   that an other class can be parsed. Used to let local/anonymous
   classes be parsed.  The trick is the data storing file position
   informations must be restored to their current value, so parsing
   can resume as if no context was ever saved. */

static void
java_parser_context_resume (void)
{
  struct parser_ctxt *old = ctxp;             /* This one is to be discarded */
  struct parser_ctxt *saver = old->next;      /* This one contain saved info */
  struct parser_ctxt *restored = saver->next; /* This one is the old current */

  /* We need to inherit the list of classes to complete/generate */
  restored->classd_list = old->classd_list;
  restored->class_list = old->class_list;

  /* Restore the current class and function from the saver */
  current_class = saver->class_type;
  current_function_decl = saver->function_decl;

  /* Retrieve the restored context */
  ctxp = restored;

  /* Re-installed the data for the parsing to carry on */
  memcpy (&ctxp->marker_begining, &old->marker_begining,
	  (size_t)(&ctxp->marker_end - &ctxp->marker_begining));
}

/* Add a new anchor node to which all statement(s) initializing static
   and non static initialized upon declaration field(s) will be
   linked.  */

static void
java_parser_context_push_initialized_field (void)
{
  tree node;

  node = build_tree_list (NULL_TREE, NULL_TREE);
  TREE_CHAIN (node) = CPC_STATIC_INITIALIZER_LIST (ctxp);
  CPC_STATIC_INITIALIZER_LIST (ctxp) = node;

  node = build_tree_list (NULL_TREE, NULL_TREE);
  TREE_CHAIN (node) = CPC_INITIALIZER_LIST (ctxp);
  CPC_INITIALIZER_LIST (ctxp) = node;

  node = build_tree_list (NULL_TREE, NULL_TREE);
  TREE_CHAIN (node) = CPC_INSTANCE_INITIALIZER_LIST (ctxp);
  CPC_INSTANCE_INITIALIZER_LIST (ctxp) = node;
}

/* Pop the lists of initialized field. If this lists aren't empty,
   remember them so we can use it to create and populate the finit$
   or <clinit> functions. */

static void
java_parser_context_pop_initialized_field (void)
{
  tree stmts;
  tree class_type = TREE_TYPE (GET_CPC ());

  if (CPC_INITIALIZER_LIST (ctxp))
    {
      stmts = CPC_INITIALIZER_STMT (ctxp);
      CPC_INITIALIZER_LIST (ctxp) = TREE_CHAIN (CPC_INITIALIZER_LIST (ctxp));
      if (stmts && !java_error_count)
	TYPE_FINIT_STMT_LIST (class_type) = reorder_static_initialized (stmts);
    }

  if (CPC_STATIC_INITIALIZER_LIST (ctxp))
    {
      stmts = CPC_STATIC_INITIALIZER_STMT (ctxp);
      CPC_STATIC_INITIALIZER_LIST (ctxp) =
	TREE_CHAIN (CPC_STATIC_INITIALIZER_LIST (ctxp));
      /* Keep initialization in order to enforce 8.5 */
      if (stmts && !java_error_count)
	TYPE_CLINIT_STMT_LIST (class_type) = nreverse (stmts);
    }

  /* JDK 1.1 instance initializers */
  if (CPC_INSTANCE_INITIALIZER_LIST (ctxp))
    {
      stmts = CPC_INSTANCE_INITIALIZER_STMT (ctxp);
      CPC_INSTANCE_INITIALIZER_LIST (ctxp) =
	TREE_CHAIN (CPC_INSTANCE_INITIALIZER_LIST (ctxp));
      if (stmts && !java_error_count)
	TYPE_II_STMT_LIST (class_type) = nreverse (stmts);
    }
}

static tree
reorder_static_initialized (tree list)
{
  /* We have to keep things in order. The alias initializer have to
     come first, then the initialized regular field, in reverse to
     keep them in lexical order. */
  tree marker, previous = NULL_TREE;
  for (marker = list; marker; previous = marker, marker = TREE_CHAIN (marker))
    if (TREE_CODE (marker) == TREE_LIST
	&& !TREE_VALUE (marker) && !TREE_PURPOSE (marker))
      break;

  /* No static initialized, the list is fine as is */
  if (!previous)
    list = TREE_CHAIN (marker);

  /* No marker? reverse the whole list */
  else if (!marker)
    list = nreverse (list);

  /* Otherwise, reverse what's after the marker and the new reordered
     sublist will replace the marker. */
  else
    {
      TREE_CHAIN (previous) = NULL_TREE;
      list = nreverse (list);
      list = chainon (TREE_CHAIN (marker), list);
    }
  return list;
}

/* Helper functions to dump the parser context stack.  */

#define TAB_CONTEXT(C) \
  {int i; for (i = 0; i < (C); i++) fputc (' ', stderr);}

static void
java_debug_context_do (int tab)
{
  struct parser_ctxt *copy = ctxp;
  while (copy)
    {
      TAB_CONTEXT (tab);
      fprintf (stderr, "ctxt: 0x%0lX\n", (unsigned long)copy);
      TAB_CONTEXT (tab);
      fprintf (stderr, "filename: %s\n", copy->filename);
      TAB_CONTEXT (tab);
      fprintf (stderr, "lineno: %d\n", copy->lineno);
      TAB_CONTEXT (tab);
      fprintf (stderr, "package: %s\n",
	       (copy->package ?
		IDENTIFIER_POINTER (copy->package) : "<none>"));
      TAB_CONTEXT (tab);
      fprintf (stderr, "context for saving: %d\n", copy->saved_data_ctx);
      TAB_CONTEXT (tab);
      fprintf (stderr, "saved data: %d\n", copy->saved_data);
      copy = copy->next;
      tab += 2;
    }
}

/* Dump the stacked up parser contexts. Intended to be called from a
   debugger.  */

void
java_debug_context (void)
{
  java_debug_context_do (0);
}



/* Flag for the error report routine to issue the error the first time
   it's called (overriding the default behavior which is to drop the
   first invocation and honor the second one, taking advantage of a
   richer context.  */
static int force_error = 0;

/* Reporting an constructor invocation error.  */
static void
parse_ctor_invocation_error (void)
{
  if (DECL_CONSTRUCTOR_P (current_function_decl))
    yyerror ("Constructor invocation must be first thing in a constructor");
  else
    yyerror ("Only constructors can invoke constructors");
}

/* Reporting JDK1.1 features not implemented.  */

static tree
parse_jdk1_1_error (const char *msg)
{
  sorry (": `%s' JDK1.1(TM) feature", msg);
  java_error_count++;
  return empty_stmt_node;
}

static int do_warning = 0;

void
yyerror (const char *msg)
{
  static java_lc elc;
  static int  prev_lineno;
  static const char *prev_msg;

  int save_lineno;
  char *remainder, *code_from_source;

  if (!force_error && prev_lineno == input_line)
    return;

  /* Save current error location but report latter, when the context is
     richer.  */
  if (ctxp->java_error_flag == 0)
    {
      ctxp->java_error_flag = 1;
      elc = ctxp->elc;
      /* Do something to use the previous line if we're reaching the
	 end of the file... */
#ifdef VERBOSE_SKELETON
      printf ("* Error detected (%s)\n", (msg ? msg : "(null)"));
#endif
      return;
    }

  /* Ignore duplicate message on the same line. BTW, this is dubious. FIXME */
  if (!force_error && msg == prev_msg && prev_lineno == elc.line)
    return;

  ctxp->java_error_flag = 0;
  if (do_warning)
    java_warning_count++;
  else
    java_error_count++;

  if (elc.col == 0 && msg && msg[1] == ';')
    {
      elc.col  = ctxp->p_line->char_col-1;
      elc.line = ctxp->p_line->lineno;
    }

  save_lineno = input_line;
  prev_lineno = input_line = elc.line;
  prev_msg = msg;

  code_from_source = java_get_line_col (ctxp->filename, elc.line, elc.col);
  obstack_grow0 (&temporary_obstack,
		 code_from_source, strlen (code_from_source));
  remainder = obstack_finish (&temporary_obstack);
  if (do_warning)
    warning ("%s.\n%s", msg, remainder);
  else
    error ("%s.\n%s", msg, remainder);

  /* This allow us to cheaply avoid an extra 'Invalid expression
     statement' error report when errors have been already reported on
     the same line. This occurs when we report an error but don't have
     a synchronization point other than ';', which
     expression_statement is the only one to take care of.  */
  ctxp->prevent_ese = input_line = save_lineno;
}

static void
issue_warning_error_from_context (tree cl, const char *msg, va_list ap)
{
  const char *saved, *saved_input_filename;
  char buffer [4096];
  vsprintf (buffer, msg, ap);
  force_error = 1;

  ctxp->elc.line = EXPR_WFL_LINENO (cl);
  ctxp->elc.col  = (EXPR_WFL_COLNO (cl) == 0xfff ? -1 :
		    (EXPR_WFL_COLNO (cl) == 0xffe ? -2 : EXPR_WFL_COLNO (cl)));

  /* We have a CL, that's a good reason for using it if it contains data */
  saved = ctxp->filename;
  if (TREE_CODE (cl) == EXPR_WITH_FILE_LOCATION && EXPR_WFL_FILENAME_NODE (cl))
    ctxp->filename = EXPR_WFL_FILENAME (cl);
  saved_input_filename = input_filename;
  input_filename = ctxp->filename;
  java_error (NULL);
  java_error (buffer);
  ctxp->filename = saved;
  input_filename = saved_input_filename;
  force_error = 0;
}

/* Issue an error message at a current source line CL */

void
parse_error_context (tree cl, const char *msg, ...)
{
  va_list ap;
  va_start (ap, msg);
  issue_warning_error_from_context (cl, msg, ap);
  va_end (ap);
}

/* Issue a warning at a current source line CL */

static void
parse_warning_context (tree cl, const char *msg, ...)
{
  va_list ap;
  va_start (ap, msg);

  force_error = do_warning = 1;
  issue_warning_error_from_context (cl, msg, ap);
  do_warning = force_error = 0;
  va_end (ap);
}

static tree
find_expr_with_wfl (tree node)
{
  while (node)
    {
      char code;
      tree to_return;

      switch (TREE_CODE (node))
	{
	case BLOCK:
	  node = BLOCK_EXPR_BODY (node);
	  continue;

	case COMPOUND_EXPR:
	  to_return = find_expr_with_wfl (TREE_OPERAND (node, 0));
	  if (to_return)
	    return to_return;
	  node = TREE_OPERAND (node, 1);
	  continue;

	case LOOP_EXPR:
	  node = TREE_OPERAND (node, 0);
	  continue;

	case LABELED_BLOCK_EXPR:
	  node = TREE_OPERAND (node, 1);
	  continue;

	default:
	  code = TREE_CODE_CLASS (TREE_CODE (node));
	  if (((code == '1') || (code == '2') || (code == 'e'))
	      && EXPR_WFL_LINECOL (node))
	    return node;
	  return NULL_TREE;
	}
    }
  return NULL_TREE;
}

/* Issue a missing return statement error. Uses METHOD to figure the
   last line of the method the error occurs in.  */

static void
missing_return_error (tree method)
{
  EXPR_WFL_SET_LINECOL (wfl_operator, DECL_FUNCTION_LAST_LINE (method), -2);
  parse_error_context (wfl_operator, "Missing return statement");
}

/* Issue an unreachable statement error. From NODE, find the next
   statement to report appropriately.  */
static void
unreachable_stmt_error (tree node)
{
  /* Browse node to find the next expression node that has a WFL. Use
     the location to report the error */
  if (TREE_CODE (node) == COMPOUND_EXPR)
    node = find_expr_with_wfl (TREE_OPERAND (node, 1));
  else
    node = find_expr_with_wfl (node);

  if (node)
    {
      EXPR_WFL_SET_LINECOL (wfl_operator, EXPR_WFL_LINENO (node), -2);
      parse_error_context (wfl_operator, "Unreachable statement");
    }
  else
    abort ();
}

static int
not_accessible_field_error (tree wfl, tree decl)
{
  parse_error_context 
    (wfl, "Can't access %s field `%s.%s' from `%s'",
     java_accstring_lookup (get_access_flags_from_decl (decl)),
     GET_TYPE_NAME (DECL_CONTEXT (decl)),
     IDENTIFIER_POINTER (DECL_NAME (decl)),
     IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (current_class))));
  return 1;
}

int
java_report_errors (void)
{
  if (java_error_count)
    fprintf (stderr, "%d error%s",
	     java_error_count, (java_error_count == 1 ? "" : "s"));
  if (java_warning_count)
    fprintf (stderr, "%s%d warning%s", (java_error_count ? ", " : ""),
	     java_warning_count, (java_warning_count == 1 ? "" : "s"));
  if (java_error_count || java_warning_count)
    putc ('\n', stderr);
  return java_error_count;
}

static char *
java_accstring_lookup (int flags)
{
  static char buffer [80];
#define COPY_RETURN(S) {strcpy (buffer, S); return buffer;}

  /* Access modifier looked-up first for easier report on forbidden
     access. */
  if (flags & ACC_PUBLIC) COPY_RETURN ("public");
  if (flags & ACC_PRIVATE) COPY_RETURN ("private");
  if (flags & ACC_PROTECTED) COPY_RETURN ("protected");
  if (flags & ACC_STATIC) COPY_RETURN ("static");
  if (flags & ACC_FINAL) COPY_RETURN ("final");
  if (flags & ACC_SYNCHRONIZED) COPY_RETURN ("synchronized");
  if (flags & ACC_VOLATILE) COPY_RETURN ("volatile");
  if (flags & ACC_TRANSIENT) COPY_RETURN ("transient");
  if (flags & ACC_NATIVE) COPY_RETURN ("native");
  if (flags & ACC_INTERFACE) COPY_RETURN ("interface");
  if (flags & ACC_ABSTRACT) COPY_RETURN ("abstract");

  buffer [0] = '\0';
  return buffer;
#undef COPY_RETURN
}

/* Issuing error messages upon redefinition of classes, interfaces or
   variables. */

static void
classitf_redefinition_error (const char *context, tree id, tree decl, tree cl)
{
  parse_error_context (cl, "%s `%s' already defined in %s:%d",
		       context, IDENTIFIER_POINTER (id),
		       DECL_SOURCE_FILE (decl), DECL_SOURCE_LINE (decl));
  /* Here we should point out where its redefined. It's a unicode. FIXME */
}

static void
variable_redefinition_error (tree context, tree name, tree type, int line)
{
  const char *type_name;

  /* Figure a proper name for type. We might haven't resolved it */
  if (TREE_CODE (type) == POINTER_TYPE && !TREE_TYPE (type))
    type_name = IDENTIFIER_POINTER (TYPE_NAME (type));
  else
    type_name = lang_printable_name (type, 0);

  parse_error_context (context,
		       "Variable `%s' is already defined in this method and was declared `%s %s' at line %d",
		       IDENTIFIER_POINTER (name),
		       type_name, IDENTIFIER_POINTER (name), line);
}

/* If ANAME is terminated with `[]', it indicates an array. This
   function returns the number of `[]' found and if this number is
   greater than zero, it extracts the array type name and places it in
   the node pointed to by TRIMMED unless TRIMMED is null.  */

static int
build_type_name_from_array_name (tree aname, tree *trimmed)
{
  const char *name = IDENTIFIER_POINTER (aname);
  int len = IDENTIFIER_LENGTH (aname);
  int array_dims;

  STRING_STRIP_BRACKETS (name, len, array_dims);

  if (array_dims && trimmed)
    *trimmed = get_identifier_with_length (name, len);

  return array_dims;
}

static tree
build_array_from_name (tree type, tree type_wfl, tree name, tree *ret_name)
{
  int more_dims = 0;

  /* Eventually get more dims */
  more_dims = build_type_name_from_array_name (name, &name);

  /* If we have, then craft a new type for this variable */
  if (more_dims)
    {
      tree save = type;

      /* If we have a pointer, use its type */
      if (TREE_CODE (type) == POINTER_TYPE)
        type = TREE_TYPE (type);

      /* Building the first dimension of a primitive type uses this
         function */
      if (JPRIMITIVE_TYPE_P (type))
	{
	  type = build_java_array_type (type, -1);
	  more_dims--;
	}
      /* Otherwise, if we have a WFL for this type, use it (the type
         is already an array on an unresolved type, and we just keep
         on adding dimensions) */
      else if (type_wfl)
	{
	  type = type_wfl;
	  more_dims += build_type_name_from_array_name (TYPE_NAME (save),
							NULL);
	}

      /* Add all the dimensions */
      while (more_dims--)
	type = build_unresolved_array_type (type);

      /* The type may have been incomplete in the first place */
      if (type_wfl)
	type = obtain_incomplete_type (type);
    }

  if (ret_name)
    *ret_name = name;
  return type;
}

/* Build something that the type identifier resolver will identify as
   being an array to an unresolved type. TYPE_WFL is a WFL on a
   identifier. */

static tree
build_unresolved_array_type (tree type_or_wfl)
{
  const char *ptr;
  tree wfl;

  /* TYPE_OR_WFL might be an array on a resolved type. In this case,
     just create a array type */
  if (TREE_CODE (type_or_wfl) == RECORD_TYPE)
    return build_java_array_type (type_or_wfl, -1);

  obstack_grow (&temporary_obstack,
		 IDENTIFIER_POINTER (EXPR_WFL_NODE (type_or_wfl)),
		 IDENTIFIER_LENGTH (EXPR_WFL_NODE (type_or_wfl)));
  obstack_grow0 (&temporary_obstack, "[]", 2);
  ptr = obstack_finish (&temporary_obstack);
  wfl = build_expr_wfl (get_identifier (ptr),
			EXPR_WFL_FILENAME (type_or_wfl),
			EXPR_WFL_LINENO (type_or_wfl),
			EXPR_WFL_COLNO (type_or_wfl));
  /* Re-install the existing qualifications so that the type can be
     resolved properly. */
  EXPR_WFL_QUALIFICATION (wfl) = EXPR_WFL_QUALIFICATION (type_or_wfl);
  return wfl;
}

static void
parser_add_interface (tree class_decl, tree interface_decl, tree wfl)
{
  if (maybe_add_interface (TREE_TYPE (class_decl), TREE_TYPE (interface_decl)))
    parse_error_context (wfl, "Interface `%s' repeated",
			 IDENTIFIER_POINTER (DECL_NAME (interface_decl)));
}

/* Bulk of common class/interface checks. Return 1 if an error was
   encountered. TAG is 0 for a class, 1 for an interface.  */

static int
check_class_interface_creation (int is_interface, int flags, tree raw_name,
				tree qualified_name, tree decl, tree cl)
{
  tree node;
  int sca = 0;			/* Static class allowed */
  int icaf = 0;			/* Inner class allowed flags */
  int uaaf = CLASS_MODIFIERS;	/* Usually allowed access flags */

  if (!quiet_flag)
    fprintf (stderr, " %s%s %s",
	     (CPC_INNER_P () ? "inner" : ""),
	     (is_interface ? "interface" : "class"),
	     IDENTIFIER_POINTER (qualified_name));

  /* Scope of an interface/class type name:
       - Can't be imported by a single type import
       - Can't already exists in the package */
  if (IS_A_SINGLE_IMPORT_CLASSFILE_NAME_P (raw_name)
      && (node = find_name_in_single_imports (raw_name))
      && !CPC_INNER_P ())
    {
      parse_error_context
	(cl, "%s name `%s' clashes with imported type `%s'",
	 (is_interface ? "Interface" : "Class"),
	 IDENTIFIER_POINTER (raw_name), IDENTIFIER_POINTER (node));
      return 1;
    }
  if (decl && CLASS_COMPLETE_P (decl))
    {
      classitf_redefinition_error ((is_interface ? "Interface" : "Class"),
				   qualified_name, decl, cl);
      return 1;
    }

  if (check_inner_class_redefinition (raw_name, cl))
    return 1;

  /* If public, file name should match class/interface name, except
     when dealing with an inner class */
  if (!CPC_INNER_P () && (flags & ACC_PUBLIC ))
    {
      const char *f;

      for (f = &input_filename [strlen (input_filename)];
	   f != input_filename && ! IS_DIR_SEPARATOR (f[0]);
	   f--)
	;
      if (IS_DIR_SEPARATOR (f[0]))
	f++;
      if (strncmp (IDENTIFIER_POINTER (raw_name),
		   f , IDENTIFIER_LENGTH (raw_name)) ||
	  f [IDENTIFIER_LENGTH (raw_name)] != '.')
	parse_error_context
	  (cl, "Public %s `%s' must be defined in a file called `%s.java'",
			     (is_interface ? "interface" : "class"),
			     IDENTIFIER_POINTER (qualified_name),
			     IDENTIFIER_POINTER (raw_name));
    }

  /* Static classes can be declared only in top level classes. Note:
     once static, a inner class is a top level class. */
  if (flags & ACC_STATIC)
    {
      /* Catch the specific error of declaring an class inner class
	 with no toplevel enclosing class. Prevent check_modifiers from
	 complaining a second time */
      if (CPC_INNER_P () && !TOPLEVEL_CLASS_DECL_P (GET_CPC()))
	{
	  parse_error_context (cl, "Inner class `%s' can't be static. Static classes can only occur in interfaces and top-level classes",
			       IDENTIFIER_POINTER (qualified_name));
	  sca = ACC_STATIC;
	}
      /* Else, in the context of a top-level class declaration, let
         `check_modifiers' do its job, otherwise, give it a go */
      else
	sca = (GET_CPC_LIST () ? ACC_STATIC : 0);
    }

  /* Inner classes can be declared private or protected
     within their enclosing classes. */
  if (CPC_INNER_P ())
    {
      /* A class which is local to a block can't be public, private,
	 protected or static. But it is created final, so allow this
	 one. */
      if (current_function_decl)
	icaf = sca = uaaf = ACC_FINAL;
      else
	{
	  check_modifiers_consistency (flags);
	  icaf = ACC_PROTECTED;
	  if (! CLASS_INTERFACE (GET_CPC ()))
	    icaf |= ACC_PRIVATE;
	}
    }

  if (is_interface)
    {
      if (CPC_INNER_P ())
	uaaf = INTERFACE_INNER_MODIFIERS;
      else
	uaaf = INTERFACE_MODIFIERS;

      check_modifiers ("Illegal modifier `%s' for interface declaration",
		       flags, uaaf);
    }
  else
    check_modifiers ((current_function_decl ?
		      "Illegal modifier `%s' for local class declaration" :
		      "Illegal modifier `%s' for class declaration"),
		     flags, uaaf|sca|icaf);
  return 0;
}

/* Construct a nested class name.  If the final component starts with
   a digit, return true.  Otherwise return false.  */
static int
make_nested_class_name (tree cpc_list)
{
  tree name;

  if (!cpc_list)
    return 0;

  make_nested_class_name (TREE_CHAIN (cpc_list));

  /* Pick the qualified name when dealing with the first upmost
     enclosing class */
  name = (TREE_CHAIN (cpc_list)
	  ? TREE_PURPOSE (cpc_list) : DECL_NAME (TREE_VALUE (cpc_list)));
  obstack_grow (&temporary_obstack,
		IDENTIFIER_POINTER (name), IDENTIFIER_LENGTH (name));
  obstack_1grow (&temporary_obstack, '$');

  return ISDIGIT (IDENTIFIER_POINTER (name)[0]);
}

/* Can't redefine a class already defined in an earlier scope. */

static int
check_inner_class_redefinition (tree raw_name, tree cl)
{
  tree scope_list;

  for (scope_list = GET_CPC_LIST (); scope_list;
       scope_list = GET_NEXT_ENCLOSING_CPC (scope_list))
    if (raw_name == GET_CPC_UN_NODE (scope_list))
      {
	parse_error_context
	  (cl, "The class name `%s' is already defined in this scope. An inner class may not have the same simple name as any of its enclosing classes",
	   IDENTIFIER_POINTER (raw_name));
	return 1;
      }
  return 0;
}

/* Tries to find a decl for CLASS_TYPE within ENCLOSING. If we fail,
   we remember ENCLOSING and SUPER.  */

static tree
resolve_inner_class (htab_t circularity_hash, tree cl, tree *enclosing,
		     tree *super, tree class_type)
{
  tree local_enclosing = *enclosing;
  tree local_super = NULL_TREE;

  while (local_enclosing)
    {
      tree intermediate, decl;

      *htab_find_slot (circularity_hash, local_enclosing, INSERT) =
	local_enclosing;

      if ((decl = find_as_inner_class (local_enclosing, class_type, cl)))
	return decl;

      intermediate = local_enclosing;
      /* Explore enclosing contexts. */
      while (INNER_CLASS_DECL_P (intermediate))
	{
	  intermediate = DECL_CONTEXT (intermediate);
	  if ((decl = find_as_inner_class (intermediate, class_type, cl)))
	    return decl;
	}

      /* Now go to the upper classes, bail out if necessary.  We will
	 analyze the returned SUPER and act accordingly (see
	 do_resolve_class).  */
      if (JPRIMITIVE_TYPE_P (TREE_TYPE (local_enclosing))
	  || TREE_TYPE (local_enclosing) == void_type_node)
	{
	  parse_error_context (cl, "Qualifier must be a reference");
	  local_enclosing = NULL_TREE;
	  break;
	}
      local_super = CLASSTYPE_SUPER (TREE_TYPE (local_enclosing));
      if (!local_super || local_super == object_type_node)
        break;

      if (TREE_CODE (local_super) == POINTER_TYPE)
        local_super = do_resolve_class (NULL, local_super, NULL, NULL);
      else
	local_super = TYPE_NAME (local_super);

      /* We may not have checked for circular inheritance yet, so do so
         here to prevent an infinite loop. */
      if (htab_find (circularity_hash, local_super) != NULL)
        {
          if (!cl)
            cl = lookup_cl (local_enclosing);

          parse_error_context
            (cl, "Cyclic inheritance involving %s",
	     IDENTIFIER_POINTER (DECL_NAME (local_enclosing)));
	  local_enclosing = NULL_TREE;
        }
      else
	local_enclosing = local_super;
    }

  /* We failed. Return LOCAL_SUPER and LOCAL_ENCLOSING. */
  *super = local_super;
  *enclosing = local_enclosing;

  return NULL_TREE;
}

/* Within ENCLOSING, find a decl for NAME and return it. NAME can be
   qualified. */

static tree
find_as_inner_class (tree enclosing, tree name, tree cl)
{
  tree qual, to_return;
  if (!enclosing)
    return NULL_TREE;

  name = TYPE_NAME (name);

  /* First search: within the scope of `enclosing', search for name */
  if (QUALIFIED_P (name) && cl && EXPR_WFL_NODE (cl) == name)
    qual = EXPR_WFL_QUALIFICATION (cl);
  else if (cl)
    qual = build_tree_list (cl, NULL_TREE);
  else
    qual = build_tree_list (build_expr_wfl (name, NULL, 0, 0), NULL_TREE);

  if ((to_return = find_as_inner_class_do (qual, enclosing)))
    return to_return;

  /* We're dealing with a qualified name. Try to resolve thing until
     we get something that is an enclosing class. */
  if (QUALIFIED_P (name) && cl && EXPR_WFL_NODE (cl) == name)
    {
      tree acc = NULL_TREE, decl = NULL_TREE, ptr;

      for (qual = EXPR_WFL_QUALIFICATION (cl); qual && !decl;
	   qual = TREE_CHAIN (qual))
	{
	  acc = merge_qualified_name (acc,
				      EXPR_WFL_NODE (TREE_PURPOSE (qual)));
	  BUILD_PTR_FROM_NAME (ptr, acc);
	  decl = do_resolve_class (NULL_TREE, ptr, NULL_TREE, cl);
	}

      /* A NULL qual and a decl means that the search ended
         successfully?!? We have to do something then. FIXME */

      if (decl)
	enclosing = decl;
      else
	qual = EXPR_WFL_QUALIFICATION (cl);
    }
  /* Otherwise, create a qual for the other part of the resolution. */
  else
    qual = build_tree_list (build_expr_wfl (name, NULL, 0, 0), NULL_TREE);

  return find_as_inner_class_do (qual, enclosing);
}

/* We go inside the list of sub classes and try to find a way
   through. */

static tree
find_as_inner_class_do (tree qual, tree enclosing)
{
  if (!qual)
    return NULL_TREE;

  for (; qual && enclosing; qual = TREE_CHAIN (qual))
    {
      tree name_to_match = EXPR_WFL_NODE (TREE_PURPOSE (qual));
      tree next_enclosing = NULL_TREE;
      tree inner_list;

      for (inner_list = DECL_INNER_CLASS_LIST (enclosing);
           inner_list; inner_list = TREE_CHAIN (inner_list))
	{
	  if (TREE_VALUE (inner_list) == name_to_match)
	    {
	      next_enclosing = TREE_PURPOSE (inner_list);
	      break;
	    }
	}
      enclosing = next_enclosing;
    }

  return (!qual && enclosing ? enclosing : NULL_TREE);
}

/* Reach all inner classes and tie their unqualified name to a
   DECL. */

static void
set_nested_class_simple_name_value (tree outer, int set)
{
  tree l;

  for (l = DECL_INNER_CLASS_LIST (outer); l; l = TREE_CHAIN (l))
    IDENTIFIER_GLOBAL_VALUE (TREE_VALUE (l)) = (set ?
						TREE_PURPOSE (l) : NULL_TREE);
}

static void
link_nested_class_to_enclosing (void)
{
  if (GET_ENCLOSING_CPC ())
    {
      tree enclosing = GET_ENCLOSING_CPC_CONTEXT ();
      DECL_INNER_CLASS_LIST (enclosing) =
	tree_cons (GET_CPC (), GET_CPC_UN (),
		   DECL_INNER_CLASS_LIST (enclosing));
    }
}

static tree
maybe_make_nested_class_name (tree name)
{
  tree id = NULL_TREE;

  if (CPC_INNER_P ())
    {
      /* If we're in a function, we must append a number to create the
	 nested class name.  However, we don't do this if the class we
	 are constructing is anonymous, because in that case we'll
	 already have a number as the class name.  */
      if (! make_nested_class_name (GET_CPC_LIST ())
	  && current_function_decl != NULL_TREE
	  && ! ISDIGIT (IDENTIFIER_POINTER (name)[0]))
	{
	  char buf[10];
	  sprintf (buf, "%d", anonymous_class_counter);
	  ++anonymous_class_counter;
	  obstack_grow (&temporary_obstack, buf, strlen (buf));
	  obstack_1grow (&temporary_obstack, '$');
	}
      obstack_grow0 (&temporary_obstack,
		     IDENTIFIER_POINTER (name),
		     IDENTIFIER_LENGTH (name));
      id = get_identifier (obstack_finish (&temporary_obstack));
      if (ctxp->package)
	QUALIFIED_P (id) = 1;
    }
  return id;
}

/* If DECL is NULL, create and push a new DECL, record the current
   line CL and do other maintenance things.  */

static tree
maybe_create_class_interface_decl (tree decl, tree raw_name,
				   tree qualified_name, tree cl)
{
  if (!decl)
    decl = push_class (make_class (), qualified_name);

  /* Take care of the file and line business */
  DECL_SOURCE_FILE (decl) = EXPR_WFL_FILENAME (cl);
  /* If we're emitting xrefs, store the line/col number information */
  if (flag_emit_xref)
    DECL_SOURCE_LINE (decl) = EXPR_WFL_LINECOL (cl);
  else
    DECL_SOURCE_LINE (decl) = EXPR_WFL_LINENO (cl);
  CLASS_FROM_SOURCE_P (TREE_TYPE (decl)) = 1;
  CLASS_PARSED_P (TREE_TYPE (decl)) = 1;
  CLASS_FROM_CURRENTLY_COMPILED_P (TREE_TYPE (decl)) =
    IS_A_COMMAND_LINE_FILENAME_P (EXPR_WFL_FILENAME_NODE (cl));

  PUSH_CPC (decl, raw_name);
  DECL_CONTEXT (decl) = GET_ENCLOSING_CPC_CONTEXT ();

  /* Link the declaration to the already seen ones */
  TREE_CHAIN (decl) = ctxp->class_list;
  ctxp->class_list = decl;

  /* Create a new nodes in the global lists */
  gclass_list = tree_cons (NULL_TREE, decl, gclass_list);
  all_class_list = tree_cons (NULL_TREE, decl, all_class_list);

  /* Install a new dependency list element */
  create_jdep_list (ctxp);

  SOURCE_FRONTEND_DEBUG (("Defining class/interface %s",
			  IDENTIFIER_POINTER (qualified_name)));
  return decl;
}

static void
add_superinterfaces (tree decl, tree interface_list)
{
  tree node;
  /* Superinterface(s): if present and defined, parser_check_super_interface ()
     takes care of ensuring that:
       - This is an accessible interface type,
       - Circularity detection.
   parser_add_interface is then called. If present but not defined,
   the check operation is delayed until the super interface gets
   defined.  */
  for (node = interface_list; node; node = TREE_CHAIN (node))
    {
      tree current = TREE_PURPOSE (node);
      tree idecl = IDENTIFIER_CLASS_VALUE (EXPR_WFL_NODE (current));
      if (idecl && CLASS_LOADED_P (TREE_TYPE (idecl)))
	{
	  if (!parser_check_super_interface (idecl, decl, current))
	    parser_add_interface (decl, idecl, current);
	}
      else
	register_incomplete_type (JDEP_INTERFACE,
				  current, decl, NULL_TREE);
    }
}

/* Create an interface in pass1 and return its decl. Return the
   interface's decl in pass 2.  */

static tree
create_interface (int flags, tree id, tree super)
{
  tree raw_name = EXPR_WFL_NODE (id);
  tree q_name = parser_qualified_classname (raw_name);
  tree decl = IDENTIFIER_CLASS_VALUE (q_name);

  /* Certain syntax errors are making SUPER be like ID. Avoid this
     case. */
  if (ctxp->class_err && id == super)
    super = NULL;

  EXPR_WFL_NODE (id) = q_name;	/* Keep source location, even if refined. */

  /* Basic checks: scope, redefinition, modifiers */
  if (check_class_interface_creation (1, flags, raw_name, q_name, decl, id))
    {
      PUSH_ERROR ();
      return NULL_TREE;
    }

  /* Suspend the current parsing context if we're parsing an inner
     interface */
  if (CPC_INNER_P ())
    {
      java_parser_context_suspend ();
      /* Interface members are public. */
      if (CLASS_INTERFACE (GET_CPC ()))
	flags |= ACC_PUBLIC;
    }

  /* Push a new context for (static) initialized upon declaration fields */
  java_parser_context_push_initialized_field ();

  /* Interface modifiers check
       - public/abstract allowed (already done at that point)
       - abstract is obsolete (comes first, it's a warning, or should be)
       - Can't use twice the same (checked in the modifier rule) */
  if ((flags & ACC_ABSTRACT) && flag_redundant)
    parse_warning_context
      (MODIFIER_WFL (ABSTRACT_TK),
       "Redundant use of `abstract' modifier. Interface `%s' is implicitly abstract", IDENTIFIER_POINTER (raw_name));

  /* Create a new decl if DECL is NULL, otherwise fix it */
  decl = maybe_create_class_interface_decl (decl, raw_name, q_name, id);

  /* Set super info and mark the class a complete */
  set_super_info (ACC_INTERFACE | flags, TREE_TYPE (decl),
		  object_type_node, ctxp->interface_number);
  ctxp->interface_number = 0;
  CLASS_COMPLETE_P (decl) = 1;
  add_superinterfaces (decl, super);

  /* Eventually sets the @deprecated tag flag */
  CHECK_DEPRECATED (decl);

  return decl;
}

/* Patch anonymous class CLASS, by either extending or implementing
   DEP.  */

static void
patch_anonymous_class (tree type_decl, tree class_decl, tree wfl)
{
  tree class = TREE_TYPE (class_decl);
  tree type =  TREE_TYPE (type_decl);
  tree binfo = TYPE_BINFO (class);

  /* If it's an interface, implement it */
  if (CLASS_INTERFACE (type_decl))
    {
      tree s_binfo;
      int length;

      if (parser_check_super_interface (type_decl, class_decl, wfl))
	return;

      s_binfo = TREE_VEC_ELT (BINFO_BASETYPES (TYPE_BINFO (class)), 0);
      length = TREE_VEC_LENGTH (TYPE_BINFO_BASETYPES (class))+1;
      TYPE_BINFO_BASETYPES (class) = make_tree_vec (length);
      TREE_VEC_ELT (BINFO_BASETYPES (TYPE_BINFO (class)), 0) = s_binfo;
      /* And add the interface */
      parser_add_interface (class_decl, type_decl, wfl);
    }
  /* Otherwise, it's a type we want to extend */
  else
    {
      if (parser_check_super (type_decl, class_decl, wfl))
	return;
      BINFO_TYPE (TREE_VEC_ELT (BINFO_BASETYPES (binfo), 0)) = type;
    }
}

static tree
create_anonymous_class (int location, tree type_name)
{
  char buffer [80];
  tree super = NULL_TREE, itf = NULL_TREE;
  tree id, type_decl, class;

  /* The unqualified name of the anonymous class. It's just a number. */
  sprintf (buffer, "%d", anonymous_class_counter++);
  id = build_wfl_node (get_identifier (buffer));
  EXPR_WFL_LINECOL (id) = location;

  /* We know about the type to extend/implement. We go ahead */
  if ((type_decl = IDENTIFIER_CLASS_VALUE (EXPR_WFL_NODE (type_name))))
    {
      /* Create a class which either implements on extends the designated
	 class. The class bears an inaccessible name. */
      if (CLASS_INTERFACE (type_decl))
	{
	  /* It's OK to modify it here. It's been already used and
             shouldn't be reused */
	  ctxp->interface_number = 1;
	  /* Interfaces should presented as a list of WFLs */
	  itf = build_tree_list (type_name, NULL_TREE);
	}
      else
	super = type_name;
    }

  class = create_class (ACC_FINAL, id, super, itf);

  /* We didn't know anything about the stuff. We register a dependence. */
  if (!type_decl)
    register_incomplete_type (JDEP_ANONYMOUS, type_name, class, NULL_TREE);

  ANONYMOUS_CLASS_P (TREE_TYPE (class)) = 1;
  return class;
}

/* Create a class in pass1 and return its decl. Return class
   interface's decl in pass 2.  */

static tree
create_class (int flags, tree id, tree super, tree interfaces)
{
  tree raw_name = EXPR_WFL_NODE (id);
  tree class_id, decl;
  tree super_decl_type;

  /* Certain syntax errors are making SUPER be like ID. Avoid this
     case. */
  if (ctxp->class_err && id == super)
    super = NULL;

  class_id = parser_qualified_classname (raw_name);
  decl = IDENTIFIER_CLASS_VALUE (class_id);
  EXPR_WFL_NODE (id) = class_id;

  /* Basic check: scope, redefinition, modifiers */
  if (check_class_interface_creation (0, flags, raw_name, class_id, decl, id))
    {
      PUSH_ERROR ();
      return NULL_TREE;
    }

  /* Suspend the current parsing context if we're parsing an inner
     class or an anonymous class. */
  if (CPC_INNER_P ())
    {
      java_parser_context_suspend ();
      /* Interface members are public. */
      if (CLASS_INTERFACE (GET_CPC ()))
	flags |= ACC_PUBLIC;
    }

  /* Push a new context for (static) initialized upon declaration fields */
  java_parser_context_push_initialized_field ();

  /* Class modifier check:
       - Allowed modifier (already done at that point)
       - abstract AND final forbidden
       - Public classes defined in the correct file */
  if ((flags & ACC_ABSTRACT) && (flags & ACC_FINAL))
    parse_error_context
      (id, "Class `%s' can't be declared both abstract and final",
       IDENTIFIER_POINTER (raw_name));

  /* Create a new decl if DECL is NULL, otherwise fix it */
  decl = maybe_create_class_interface_decl (decl, raw_name, class_id, id);

  /* If SUPER exists, use it, otherwise use Object */
  if (super)
    {
      /* Can't extend java.lang.Object */
      if (TREE_TYPE (IDENTIFIER_CLASS_VALUE (class_id)) == object_type_node)
	{
	  parse_error_context (id, "Can't extend `java.lang.Object'");
	  return NULL_TREE;
	}

      super_decl_type =
	register_incomplete_type (JDEP_SUPER, super, decl, NULL_TREE);
    }
  else if (TREE_TYPE (decl) != object_type_node)
    super_decl_type = object_type_node;
  /* We're defining java.lang.Object */
  else
    super_decl_type = NULL_TREE;

  /* A class nested in an interface is implicitly static. */
  if (INNER_CLASS_DECL_P (decl)
      && CLASS_INTERFACE (TYPE_NAME (TREE_TYPE (DECL_CONTEXT (decl)))))
    {
      flags |= ACC_STATIC;
    }

  /* Set super info and mark the class as complete. */
  set_super_info (flags, TREE_TYPE (decl), super_decl_type,
		  ctxp->interface_number);
  ctxp->interface_number = 0;
  CLASS_COMPLETE_P (decl) = 1;
  add_superinterfaces (decl, interfaces);

  /* Add the private this$<n> field, Replicate final locals still in
     scope as private final fields mangled like val$<local_name>.
     This doesn't not occur for top level (static) inner classes. */
  if (PURE_INNER_CLASS_DECL_P (decl))
    add_inner_class_fields (decl, current_function_decl);

  /* If doing xref, store the location at which the inherited class
     (if any) was seen. */
  if (flag_emit_xref && super)
    DECL_INHERITED_SOURCE_LINE (decl) = EXPR_WFL_LINECOL (super);

  /* Eventually sets the @deprecated tag flag */
  CHECK_DEPRECATED (decl);

  /* Reset the anonymous class counter when declaring non inner classes */
  if (!INNER_CLASS_DECL_P (decl))
    anonymous_class_counter = 1;

  return decl;
}

/* End a class declaration: register the statements used to create
   finit$ and <clinit>, pop the current class and resume the prior
   parser context if necessary.  */

static void
end_class_declaration (int resume)
{
  /* If an error occurred, context weren't pushed and won't need to be
     popped by a resume. */
  int no_error_occurred = ctxp->next && GET_CPC () != error_mark_node;

  if (GET_CPC () != error_mark_node)
    dump_java_tree (TDI_class, GET_CPC ());

  java_parser_context_pop_initialized_field ();
  POP_CPC ();
  if (resume && no_error_occurred)
    java_parser_context_resume ();

  /* We're ending a class declaration, this is a good time to reset
     the interface cout. Note that might have been already done in
     create_interface, but if at that time an inner class was being
     dealt with, the interface count was reset in a context created
     for the sake of handling inner classes declaration. */
  ctxp->interface_number = 0;
}

static void
add_inner_class_fields (tree class_decl, tree fct_decl)
{
  tree block, marker, f;

  f = add_field (TREE_TYPE (class_decl),
		 build_current_thisn (TREE_TYPE (class_decl)),
		 build_pointer_type (TREE_TYPE (DECL_CONTEXT (class_decl))),
		 ACC_PRIVATE);
  FIELD_THISN (f) = 1;

  if (!fct_decl)
    return;

  for (block = GET_CURRENT_BLOCK (fct_decl);
       block && TREE_CODE (block) == BLOCK; block = BLOCK_SUPERCONTEXT (block))
    {
      tree decl;
      for (decl = BLOCK_EXPR_DECLS (block); decl; decl = TREE_CHAIN (decl))
	{
	  tree name, pname;
	  tree wfl, init, list;

	  /* Avoid non final arguments. */
	  if (!LOCAL_FINAL_P (decl))
	    continue;

	  MANGLE_OUTER_LOCAL_VARIABLE_NAME (name, DECL_NAME (decl));
	  MANGLE_ALIAS_INITIALIZER_PARAMETER_NAME_ID (pname, DECL_NAME (decl));
	  wfl = build_wfl_node (name);
	  init = build_wfl_node (pname);
	  /* Build an initialization for the field: it will be
	     initialized by a parameter added to finit$, bearing a
	     mangled name of the field itself (param$<n>.) The
	     parameter is provided to finit$ by the constructor
	     invoking it (hence the constructor will also feature a
	     hidden parameter, set to the value of the outer context
	     local at the time the inner class is created.)

	     Note: we take into account all possible locals that can
	     be accessed by the inner class. It's actually not trivial
	     to minimize these aliases down to the ones really
	     used. One way to do that would be to expand all regular
	     methods first, then finit$ to get a picture of what's
	     used.  It works with the exception that we would have to
	     go back on all constructor invoked in regular methods to
	     have their invocation reworked (to include the right amount
	     of alias initializer parameters.)

	     The only real way around, I think, is a first pass to
	     identify locals really used in the inner class. We leave
	     the flag FIELD_LOCAL_ALIAS_USED around for that future
	     use.

	     On the other hand, it only affect local inner classes,
	     whose constructors (and finit$ call) will be featuring
	     unnecessary arguments. It's easy for a developer to keep
	     this number of parameter down by using the `final'
	     keyword only when necessary. For the time being, we can
	     issue a warning on unnecessary finals. FIXME */
	  init = build_assignment (ASSIGN_TK, EXPR_WFL_LINECOL (wfl),
				   wfl, init);

	  /* Register the field. The TREE_LIST holding the part
	     initialized/initializer will be marked ARG_FINAL_P so
	     that the created field can be marked
	     FIELD_LOCAL_ALIAS. */
	  list = build_tree_list (wfl, init);
	  ARG_FINAL_P (list) = 1;
	  register_fields (ACC_PRIVATE | ACC_FINAL, TREE_TYPE (decl), list);
	}
    }

  if (!CPC_INITIALIZER_STMT (ctxp))
    return;

  /* If we ever registered an alias field, insert and marker to
     remember where the list ends. The second part of the list (the one
     featuring initialized fields) so it can be later reversed to
     enforce 8.5. The marker will be removed during that operation. */
  marker = build_tree_list (NULL_TREE, NULL_TREE);
  TREE_CHAIN (marker) = CPC_INITIALIZER_STMT (ctxp);
  SET_CPC_INITIALIZER_STMT (ctxp, marker);
}

/* Can't use lookup_field () since we don't want to load the class and
   can't set the CLASS_LOADED_P flag */

static tree
find_field (tree class, tree name)
{
  tree decl;
  for (decl = TYPE_FIELDS (class); decl; decl = TREE_CHAIN (decl))
    {
      if (DECL_NAME (decl) == name)
	return decl;
    }
  return NULL_TREE;
}

/* Wrap around lookup_field that doesn't potentially upset the value
   of CLASS */

static tree
lookup_field_wrapper (tree class, tree name)
{
  tree type = class;
  tree decl = NULL_TREE;
  java_parser_context_save_global ();

  /* Last chance: if we're within the context of an inner class, we
     might be trying to access a local variable defined in an outer
     context. We try to look for it now. */
  if (INNER_CLASS_TYPE_P (class) && TREE_CODE (name) == IDENTIFIER_NODE)
    {
      tree new_name;
      MANGLE_OUTER_LOCAL_VARIABLE_NAME (new_name, name);
      decl = lookup_field (&type, new_name);
      if (decl && decl != error_mark_node)
	FIELD_LOCAL_ALIAS_USED (decl) = 1;
    }
  if (!decl || decl == error_mark_node)
    {
      type = class;
      decl = lookup_field (&type, name);
    }

  /* If the field still hasn't been found, try the next enclosing context. */
  if (!decl && INNER_CLASS_TYPE_P (class))
    {
      tree outer_type = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (class)));
      decl = lookup_field_wrapper (outer_type, name);
    }

  java_parser_context_restore_global ();
  return decl == error_mark_node ? NULL : decl;
}

/* Find duplicate field within the same class declarations and report
   the error. Returns 1 if a duplicated field was found, 0
   otherwise.  */

static int
duplicate_declaration_error_p (tree new_field_name, tree new_type, tree cl)
{
  /* This might be modified to work with method decl as well */
  tree decl = find_field (TREE_TYPE (GET_CPC ()), new_field_name);
  if (decl)
    {
      char *t1 = xstrdup (purify_type_name
			 ((TREE_CODE (new_type) == POINTER_TYPE
			   && TREE_TYPE (new_type) == NULL_TREE) ?
			  IDENTIFIER_POINTER (TYPE_NAME (new_type)) :
			  lang_printable_name (new_type, 1)));
      /* The type may not have been completed by the time we report
	 the error */
      char *t2 = xstrdup (purify_type_name
			 ((TREE_CODE (TREE_TYPE (decl)) == POINTER_TYPE
			   && TREE_TYPE (TREE_TYPE (decl)) == NULL_TREE) ?
			  IDENTIFIER_POINTER (TYPE_NAME (TREE_TYPE (decl))) :
			  lang_printable_name (TREE_TYPE (decl), 1)));
      parse_error_context
	(cl , "Duplicate variable declaration: `%s %s' was `%s %s' (%s:%d)",
	 t1, IDENTIFIER_POINTER (new_field_name),
	 t2, IDENTIFIER_POINTER (DECL_NAME (decl)),
	 DECL_SOURCE_FILE (decl), DECL_SOURCE_LINE (decl));
      free (t1);
      free (t2);
      return 1;
    }
  return 0;
}

/* Field registration routine. If TYPE doesn't exist, field
   declarations are linked to the undefined TYPE dependency list, to
   be later resolved in java_complete_class () */

static void
register_fields (int flags, tree type, tree variable_list)
{
  tree current, saved_type;
  tree class_type = NULL_TREE;
  int saved_lineno = input_line;
  int must_chain = 0;
  tree wfl = NULL_TREE;

  if (GET_CPC ())
    class_type = TREE_TYPE (GET_CPC ());

  if (!class_type || class_type == error_mark_node)
    return;

  /* If we're adding fields to interfaces, those fields are public,
     static, final */
  if (CLASS_INTERFACE (TYPE_NAME (class_type)))
    {
      OBSOLETE_MODIFIER_WARNING (MODIFIER_WFL (PUBLIC_TK),
				 flags, ACC_PUBLIC, "interface field(s)");
      OBSOLETE_MODIFIER_WARNING (MODIFIER_WFL (STATIC_TK),
				 flags, ACC_STATIC, "interface field(s)");
      OBSOLETE_MODIFIER_WARNING (MODIFIER_WFL (FINAL_TK),
				 flags, ACC_FINAL, "interface field(s)");
      check_modifiers ("Illegal interface member modifier `%s'", flags,
		       INTERFACE_FIELD_MODIFIERS);
      flags |= (ACC_PUBLIC | ACC_STATIC | ACC_FINAL);
    }

  /* Obtain a suitable type for resolution, if necessary */
  SET_TYPE_FOR_RESOLUTION (type, wfl, must_chain);

  /* If TYPE is fully resolved and we don't have a reference, make one */
  PROMOTE_RECORD_IF_COMPLETE (type, must_chain);

  for (current = variable_list, saved_type = type; current;
       current = TREE_CHAIN (current), type = saved_type)
    {
      tree real_type;
      tree field_decl;
      tree cl = TREE_PURPOSE (current);
      tree init = TREE_VALUE (current);
      tree current_name = EXPR_WFL_NODE (cl);

      /* Can't declare non-final static fields in inner classes */
      if ((flags & ACC_STATIC) && !TOPLEVEL_CLASS_TYPE_P (class_type)
          && !(flags & ACC_FINAL))
	parse_error_context
          (cl, "Field `%s' can't be static in inner class `%s' unless it is final",
	   IDENTIFIER_POINTER (EXPR_WFL_NODE (cl)),
	   lang_printable_name (class_type, 0));

      /* Process NAME, as it may specify extra dimension(s) for it */
      type = build_array_from_name (type, wfl, current_name, &current_name);

      /* Type adjustment. We may have just readjusted TYPE because
	 the variable specified more dimensions. Make sure we have
	 a reference if we can and don't have one already. Also
	 change the name if we have an init. */
      if (type != saved_type)
	{
	  PROMOTE_RECORD_IF_COMPLETE (type, must_chain);
	  if (init)
	    EXPR_WFL_NODE (TREE_OPERAND (init, 0)) = current_name;
	}

      real_type = GET_REAL_TYPE (type);
      /* Check for redeclarations */
      if (duplicate_declaration_error_p (current_name, real_type, cl))
	continue;

      /* Set lineno to the line the field was found and create a
         declaration for it. Eventually sets the @deprecated tag flag. */
      if (flag_emit_xref)
	input_line = EXPR_WFL_LINECOL (cl);
      else
	input_line = EXPR_WFL_LINENO (cl);
      field_decl = add_field (class_type, current_name, real_type, flags);
      CHECK_DEPRECATED_NO_RESET (field_decl);

      /* If the field denotes a final instance variable, then we
	 allocate a LANG_DECL_SPECIFIC part to keep track of its
	 initialization. We also mark whether the field was
	 initialized upon its declaration. We don't do that if the
	 created field is an alias to a final local. */
      if (!ARG_FINAL_P (current) && (flags & ACC_FINAL))
	{
	  MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (field_decl);
	  DECL_FIELD_FINAL_WFL (field_decl) = cl;
	}

      /* If the couple initializer/initialized is marked ARG_FINAL_P,
	 we mark the created field FIELD_LOCAL_ALIAS, so that we can
	 hide parameters to this inner class finit$ and
	 constructors. It also means that the field isn't final per
	 say. */
      if (ARG_FINAL_P (current))
	{
	  FIELD_LOCAL_ALIAS (field_decl) = 1;
	  FIELD_FINAL (field_decl) = 0;
	}

      /* Check if we must chain. */
      if (must_chain)
	register_incomplete_type (JDEP_FIELD, wfl, field_decl, type);

      /* If we have an initialization value tied to the field */
      if (init)
	{
	  /* The field is declared static */
	  if (flags & ACC_STATIC)
	    {
	      /* We include the field and its initialization part into
		 a list used to generate <clinit>. After <clinit> is
		 walked, field initializations will be processed and
		 fields initialized with known constants will be taken
		 out of <clinit> and have their DECL_INITIAL set
		 appropriately. */
	      TREE_CHAIN (init) = CPC_STATIC_INITIALIZER_STMT (ctxp);
	      SET_CPC_STATIC_INITIALIZER_STMT (ctxp, init);
	      if (TREE_OPERAND (init, 1)
		  && TREE_CODE (TREE_OPERAND (init, 1)) == NEW_ARRAY_INIT)
		TREE_STATIC (TREE_OPERAND (init, 1)) = 1;
	    }
	  /* A non-static field declared with an immediate initialization is
	     to be initialized in <init>, if any.  This field is remembered
	     to be processed at the time of the generation of <init>. */
	  else
	    {
	      TREE_CHAIN (init) = CPC_INITIALIZER_STMT (ctxp);
	      SET_CPC_INITIALIZER_STMT (ctxp, init);
	    }
	  MODIFY_EXPR_FROM_INITIALIZATION_P (init) = 1;
	  DECL_INITIAL (field_decl) = TREE_OPERAND (init, 1);
	}
    }

  CLEAR_DEPRECATED;
  input_line = saved_lineno;
}

/* Generate finit$, using the list of initialized fields to populate
   its body. finit$'s parameter(s) list is adjusted to include the
   one(s) used to initialized the field(s) caching outer context
   local(s).  */

static tree
generate_finit (tree class_type)
{
  int count = 0;
  tree list = TYPE_FINIT_STMT_LIST (class_type);
  tree mdecl, current, parms;

  parms = build_alias_initializer_parameter_list (AIPL_FUNCTION_CREATION,
						  class_type, NULL_TREE,
						  &count);
  CRAFTED_PARAM_LIST_FIXUP (parms);
  mdecl = create_artificial_method (class_type, ACC_PRIVATE, void_type_node,
				    finit_identifier_node, parms);
  fix_method_argument_names (parms, mdecl);
  layout_class_method (class_type, CLASSTYPE_SUPER (class_type),
		       mdecl, NULL_TREE);
  DECL_FUNCTION_NAP (mdecl) = count;
  start_artificial_method_body (mdecl);

  for (current = list; current; current = TREE_CHAIN (current))
    java_method_add_stmt (mdecl,
			  build_debugable_stmt (EXPR_WFL_LINECOL (current),
						current));
  end_artificial_method_body (mdecl);
  return mdecl;
}

/* Generate a function to run the instance initialization code. The
   private method is called `instinit$'. Unless we're dealing with an
   anonymous class, we determine whether all ctors of CLASS_TYPE
   declare a checked exception in their `throws' clause in order to
   see whether it's necessary to encapsulate the instance initializer
   statements in a try/catch/rethrow sequence.  */

static tree
generate_instinit (tree class_type)
{
  tree current;
  tree compound = NULL_TREE;
  tree parms = tree_cons (this_identifier_node,
			  build_pointer_type (class_type), end_params_node);
  tree mdecl = create_artificial_method (class_type, ACC_PRIVATE,
					 void_type_node,
					 instinit_identifier_node, parms);

  layout_class_method (class_type, CLASSTYPE_SUPER (class_type),
		       mdecl, NULL_TREE);

  /* Gather all the statements in a compound */
  for (current = TYPE_II_STMT_LIST (class_type);
       current; current = TREE_CHAIN (current))
    compound = add_stmt_to_compound (compound, NULL_TREE, current);

  /* We need to encapsulate COMPOUND by a try/catch statement to
     rethrow exceptions that might occur in the instance initializer.
     We do that only if all ctors of CLASS_TYPE are set to catch a
     checked exception. This doesn't apply to anonymous classes (since
     they don't have declared ctors.) */
  if (!ANONYMOUS_CLASS_P (class_type) &&
      ctors_unchecked_throws_clause_p (class_type))
    {
      compound = encapsulate_with_try_catch (0, exception_type_node, compound,
					     build1 (THROW_EXPR, NULL_TREE,
						     build_wfl_node (wpv_id)));
      DECL_FUNCTION_THROWS (mdecl) = build_tree_list (NULL_TREE,
						      exception_type_node);
    }

  start_artificial_method_body (mdecl);
  java_method_add_stmt (mdecl, compound);
  end_artificial_method_body (mdecl);

  return mdecl;
}

/* FIXME */
static tree
build_instinit_invocation (tree class_type)
{
  tree to_return = NULL_TREE;

  if (TYPE_II_STMT_LIST (class_type))
    {
      tree parm = build_tree_list (NULL_TREE,
				   build_wfl_node (this_identifier_node));
      to_return =
	build_method_invocation (build_wfl_node (instinit_identifier_node),
				 parm);
    }
  return to_return;
}

/* Shared across method_declarator and method_header to remember the
   patch stage that was reached during the declaration of the method.
   A method DECL is built differently is there is no patch
   (JDEP_NO_PATCH) or a patch (JDEP_METHOD or JDEP_METHOD_RETURN)
   pending on the currently defined method.  */

static int patch_stage;

/* Check the method declaration and add the method to its current
   class.  If the argument list is known to contain incomplete types,
   the method is partially added and the registration will be resume
   once the method arguments resolved. If TYPE is NULL, we're dealing
   with a constructor.  */

static tree
method_header (int flags, tree type, tree mdecl, tree throws)
{
  tree type_wfl = NULL_TREE;
  tree meth_name = NULL_TREE;
  tree current, orig_arg, this_class = NULL;
  tree id, meth;
  int saved_lineno;
  int constructor_ok = 0, must_chain;
  int count;

  if (mdecl == error_mark_node)
    return error_mark_node;
  meth = TREE_VALUE (mdecl);
  id = TREE_PURPOSE (mdecl);

  check_modifiers_consistency (flags);

  if (GET_CPC ())
    this_class = TREE_TYPE (GET_CPC ());

  if (!this_class || this_class == error_mark_node)
    return NULL_TREE;

  /* There are some forbidden modifiers for an abstract method and its
     class must be abstract as well.  */
  if (type && (flags & ACC_ABSTRACT))
    {
      ABSTRACT_CHECK (flags, ACC_PRIVATE, id, "Private");
      ABSTRACT_CHECK (flags, ACC_STATIC, id, "Static");
      ABSTRACT_CHECK (flags, ACC_FINAL, id, "Final");
      ABSTRACT_CHECK (flags, ACC_NATIVE, id, "Native");
      ABSTRACT_CHECK (flags, ACC_SYNCHRONIZED, id, "Synchronized");
      ABSTRACT_CHECK (flags, ACC_STRICT, id, "Strictfp");
      if (!CLASS_ABSTRACT (TYPE_NAME (this_class))
	  && !CLASS_INTERFACE (TYPE_NAME (this_class)))
	parse_error_context
	  (id, "Class `%s' must be declared abstract to define abstract method `%s'",
	   IDENTIFIER_POINTER (DECL_NAME (GET_CPC ())),
	   IDENTIFIER_POINTER (EXPR_WFL_NODE (id)));
    }

  /* A native method can't be strictfp.  */
  if ((flags & ACC_NATIVE) && (flags & ACC_STRICT))
    parse_error_context (id, "native method `%s' can't be strictfp",
			 IDENTIFIER_POINTER (EXPR_WFL_NODE (id)));
  /* No such thing as a transient or volatile method.  */
  if ((flags & ACC_TRANSIENT))
    parse_error_context (id, "method `%s' can't be transient",
			 IDENTIFIER_POINTER (EXPR_WFL_NODE (id)));
  if ((flags & ACC_VOLATILE))
    parse_error_context (id, "method `%s' can't be volatile",
			 IDENTIFIER_POINTER (EXPR_WFL_NODE (id)));

  /* Things to be checked when declaring a constructor */
  if (!type)
    {
      int ec = java_error_count;
      /* 8.6: Constructor declarations: we might be trying to define a
         method without specifying a return type. */
      if (EXPR_WFL_NODE (id) != GET_CPC_UN ())
	parse_error_context
	  (id, "Invalid method declaration, return type required");
      /* 8.6.3: Constructor modifiers */
      else
	{
	  JCONSTRUCTOR_CHECK (flags, ACC_ABSTRACT, id, "abstract");
	  JCONSTRUCTOR_CHECK (flags, ACC_STATIC, id, "static");
	  JCONSTRUCTOR_CHECK (flags, ACC_FINAL, id, "final");
	  JCONSTRUCTOR_CHECK (flags, ACC_NATIVE, id, "native");
	  JCONSTRUCTOR_CHECK (flags, ACC_SYNCHRONIZED, id, "synchronized");
	  JCONSTRUCTOR_CHECK (flags, ACC_STRICT, id, "strictfp");
	}
      /* If we found error here, we don't consider it's OK to tread
	 the method definition as a constructor, for the rest of this
	 function */
      if (ec == java_error_count)
	constructor_ok = 1;
    }

  /* Method declared within the scope of an interface are implicitly
     abstract and public. Conflicts with other erroneously provided
     modifiers are checked right after. */

  if (CLASS_INTERFACE (TYPE_NAME (this_class)))
    {
      /* If FLAGS isn't set because of a modifier, turn the
	 corresponding modifier WFL to NULL so we issue a warning on
	 the obsolete use of the modifier */
      if (!(flags & ACC_PUBLIC))
        MODIFIER_WFL (PUBLIC_TK) = NULL;
      if (!(flags & ACC_ABSTRACT))
        MODIFIER_WFL (ABSTRACT_TK) = NULL;
      flags |= ACC_PUBLIC;
      flags |= ACC_ABSTRACT;
    }

  /* Inner class can't declare static methods */
  if ((flags & ACC_STATIC) && !TOPLEVEL_CLASS_TYPE_P (this_class))
    {
      parse_error_context
	(id, "Method `%s' can't be static in inner class `%s'. Only members of interfaces and top-level classes can be static",
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (id)),
	 lang_printable_name (this_class, 0));
    }

  /* Modifiers context reset moved up, so abstract method declaration
     modifiers can be later checked.  */

  /* Set constructor returned type to void and method name to <init>,
     unless we found an error identifier the constructor (in which
     case we retain the original name) */
  if (!type)
    {
      type = void_type_node;
      if (constructor_ok)
	meth_name = init_identifier_node;
    }
  else
    meth_name = EXPR_WFL_NODE (id);

  /* Do the returned type resolution and registration if necessary */
  SET_TYPE_FOR_RESOLUTION (type, type_wfl, must_chain);

  if (meth_name)
    type = build_array_from_name (type, type_wfl, meth_name, &meth_name);
  EXPR_WFL_NODE (id) = meth_name;
  PROMOTE_RECORD_IF_COMPLETE (type, must_chain);

  if (must_chain)
    {
      patch_stage = JDEP_METHOD_RETURN;
      register_incomplete_type (patch_stage, type_wfl, id, type);
      TREE_TYPE (meth) = GET_REAL_TYPE (type);
    }
  else
    TREE_TYPE (meth) = type;

  saved_lineno = input_line;
  /* When defining an abstract or interface method, the curly
     bracket at level 1 doesn't exist because there is no function
     body */
  input_line = (ctxp->first_ccb_indent1 ? ctxp->first_ccb_indent1 :
	    EXPR_WFL_LINENO (id));

  /* Remember the original argument list */
  orig_arg = TYPE_ARG_TYPES (meth);

  if (patch_stage)		/* includes ret type and/or all args */
    {
      jdep *jdep;
      meth = add_method_1 (this_class, flags, meth_name, meth);
      /* Patch for the return type */
      if (patch_stage == JDEP_METHOD_RETURN)
	{
	  jdep = CLASSD_LAST (ctxp->classd_list);
	  JDEP_GET_PATCH (jdep) = &TREE_TYPE (TREE_TYPE (meth));
	}
      /* This is the stop JDEP. METH allows the function's signature
	 to be computed. */
      register_incomplete_type (JDEP_METHOD_END, NULL_TREE, meth, NULL_TREE);
    }
  else
    meth = add_method (this_class, flags, meth_name,
		       build_java_signature (meth));

  /* Remember final parameters */
  MARK_FINAL_PARMS (meth, orig_arg);

  /* Fix the method argument list so we have the argument name
     information */
  fix_method_argument_names (orig_arg, meth);

  /* Register the parameter number and re-install the current line
     number */
  DECL_MAX_LOCALS (meth) = ctxp->formal_parameter_number+1;
  input_line = saved_lineno;

  /* Register exception specified by the `throws' keyword for
     resolution and set the method decl appropriate field to the list.
     Note: the grammar ensures that what we get here are class
     types. */
  if (throws)
    {
      throws = nreverse (throws);
      for (current = throws; current; current = TREE_CHAIN (current))
	{
	  register_incomplete_type (JDEP_EXCEPTION, TREE_VALUE (current),
				    NULL_TREE, NULL_TREE);
	  JDEP_GET_PATCH (CLASSD_LAST (ctxp->classd_list)) =
	    &TREE_VALUE (current);
	}
      DECL_FUNCTION_THROWS (meth) = throws;
    }

  if (TREE_TYPE (GET_CPC ()) != object_type_node)
    DECL_FUNCTION_WFL (meth) = id;

  /* Set the flag if we correctly processed a constructor */
  if (constructor_ok)
    {
      DECL_CONSTRUCTOR_P (meth) = 1;
      /* Compute and store the number of artificial parameters declared
	 for this constructor */
      for (count = 0, current = TYPE_FIELDS (this_class); current;
	   current = TREE_CHAIN (current))
	if (FIELD_LOCAL_ALIAS (current))
	  count++;
      DECL_FUNCTION_NAP (meth) = count;
    }

  /* Eventually set the @deprecated tag flag */
  CHECK_DEPRECATED (meth);

  /* If doing xref, store column and line number information instead
     of the line number only. */
  if (flag_emit_xref)
    DECL_SOURCE_LINE (meth) = EXPR_WFL_LINECOL (id);

  return meth;
}

static void
fix_method_argument_names (tree orig_arg, tree meth)
{
  tree arg = TYPE_ARG_TYPES (TREE_TYPE (meth));
  if (TREE_CODE (TREE_TYPE (meth)) == METHOD_TYPE)
    {
      TREE_PURPOSE (arg) = this_identifier_node;
      arg = TREE_CHAIN (arg);
    }
  while (orig_arg != end_params_node)
    {
      TREE_PURPOSE (arg) = TREE_PURPOSE (orig_arg);
      orig_arg = TREE_CHAIN (orig_arg);
      arg = TREE_CHAIN (arg);
    }
}

/* Complete the method declaration with METHOD_BODY.  */

static void
finish_method_declaration (tree method_body)
{
  int flags;

  if (!current_function_decl)
    return;

  flags = get_access_flags_from_decl (current_function_decl);

  /* 8.4.5 Method Body */
  if ((flags & ACC_ABSTRACT || flags & ACC_NATIVE) && method_body)
    {
      tree name = DECL_NAME (current_function_decl);
      parse_error_context (DECL_FUNCTION_WFL (current_function_decl),
			   "%s method `%s' can't have a body defined",
			   (METHOD_NATIVE (current_function_decl) ?
			    "Native" : "Abstract"),
			   IDENTIFIER_POINTER (name));
      method_body = NULL_TREE;
    }
  else if (!(flags & ACC_ABSTRACT) && !(flags & ACC_NATIVE) && !method_body)
    {
      tree name = DECL_NAME (current_function_decl);
      parse_error_context
	(DECL_FUNCTION_WFL (current_function_decl),
	 "Non native and non abstract method `%s' must have a body defined",
	 IDENTIFIER_POINTER (name));
      method_body = NULL_TREE;
    }

  if (flag_emit_class_files && method_body
      && TREE_CODE (method_body) == NOP_EXPR
      && TREE_TYPE (current_function_decl)
      && TREE_TYPE (TREE_TYPE (current_function_decl)) == void_type_node)
    method_body = build1 (RETURN_EXPR, void_type_node, NULL);

  BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (current_function_decl)) = method_body;
  maybe_absorb_scoping_blocks ();
  /* Exit function's body */
  exit_block ();
  /* Merge last line of the function with first line, directly in the
     function decl. It will be used to emit correct debug info. */
  if (!flag_emit_xref)
    DECL_FUNCTION_LAST_LINE (current_function_decl) = ctxp->last_ccb_indent1;

  /* Since function's argument's list are shared, reset the
     ARG_FINAL_P parameter that might have been set on some of this
     function parameters. */
  UNMARK_FINAL_PARMS (current_function_decl);

  /* So we don't have an irrelevant function declaration context for
     the next static block we'll see. */
  current_function_decl = NULL_TREE;
}

/* Build a an error message for constructor circularity errors.  */

static char *
constructor_circularity_msg (tree from, tree to)
{
  static char string [4096];
  char *t = xstrdup (lang_printable_name (from, 0));
  sprintf (string, "`%s' invokes `%s'", t, lang_printable_name (to, 0));
  free (t);
  return string;
}

/* Verify a circular call to METH. Return 1 if an error is found, 0
   otherwise.  */

static GTY(()) tree vcc_list;
static int
verify_constructor_circularity (tree meth, tree current)
{
  tree c;

  for (c = DECL_CONSTRUCTOR_CALLS (current); c; c = TREE_CHAIN (c))
    {
      if (TREE_VALUE (c) == meth)
	{
	  char *t;
	  if (vcc_list)
	    {
	      tree liste;
	      vcc_list = nreverse (vcc_list);
	      for (liste = vcc_list; liste; liste = TREE_CHAIN (liste))
		{
		  parse_error_context
		    (TREE_PURPOSE (TREE_PURPOSE (liste)), "%s",
		     constructor_circularity_msg
		      (TREE_VALUE (liste), TREE_VALUE (TREE_PURPOSE (liste))));
		  java_error_count--;
		}
	    }
	  t = xstrdup (lang_printable_name (meth, 0));
	  parse_error_context (TREE_PURPOSE (c),
			       "%s: recursive invocation of constructor `%s'",
			       constructor_circularity_msg (current, meth), t);
	  free (t);
	  vcc_list = NULL_TREE;
	  return 1;
	}
    }
  for (c = DECL_CONSTRUCTOR_CALLS (current); c; c = TREE_CHAIN (c))
    {
      vcc_list = tree_cons (c, current, vcc_list);
      if (verify_constructor_circularity (meth, TREE_VALUE (c)))
	return 1;
      vcc_list = TREE_CHAIN (vcc_list);
    }
  return 0;
}

/* Check modifiers that can be declared but exclusively */

static void
check_modifiers_consistency (int flags)
{
  int acc_count = 0;
  tree cl = NULL_TREE;

  THIS_MODIFIER_ONLY (flags, ACC_PUBLIC, PUBLIC_TK, acc_count, cl);
  THIS_MODIFIER_ONLY (flags, ACC_PRIVATE, PRIVATE_TK, acc_count, cl);
  THIS_MODIFIER_ONLY (flags, ACC_PROTECTED, PROTECTED_TK, acc_count, cl);
  if (acc_count > 1)
    parse_error_context
      (cl, "Inconsistent member declaration.  At most one of `public', `private', or `protected' may be specified");

  acc_count = 0;
  cl = NULL_TREE;
  THIS_MODIFIER_ONLY (flags, ACC_FINAL, FINAL_TK, acc_count, cl);
  THIS_MODIFIER_ONLY (flags, ACC_VOLATILE, VOLATILE_TK, acc_count, cl);
  if (acc_count > 1)
    parse_error_context (cl,
			 "Inconsistent member declaration.  At most one of `final' or `volatile' may be specified");
}

/* Check the methode header METH for abstract specifics features */

static void
check_abstract_method_header (tree meth)
{
  int flags = get_access_flags_from_decl (meth);

  OBSOLETE_MODIFIER_WARNING2 (MODIFIER_WFL (ABSTRACT_TK), flags,
			      ACC_ABSTRACT, "abstract method",
			      IDENTIFIER_POINTER (DECL_NAME (meth)));
  OBSOLETE_MODIFIER_WARNING2 (MODIFIER_WFL (PUBLIC_TK), flags,
			      ACC_PUBLIC, "abstract method",
			      IDENTIFIER_POINTER (DECL_NAME (meth)));

  check_modifiers ("Illegal modifier `%s' for interface method",
		  flags, INTERFACE_METHOD_MODIFIERS);
}

/* Create a FUNCTION_TYPE node and start augmenting it with the
   declared function arguments. Arguments type that can't be resolved
   are left as they are, but the returned node is marked as containing
   incomplete types.  */

static tree
method_declarator (tree id, tree list)
{
  tree arg_types = NULL_TREE, current, node;
  tree meth = make_node (FUNCTION_TYPE);
  jdep *jdep;

  patch_stage = JDEP_NO_PATCH;

  if (GET_CPC () == error_mark_node)
    return error_mark_node;

  /* If we're dealing with an inner class constructor, we hide the
     this$<n> decl in the name field of its parameter declaration.  We
     also might have to hide the outer context local alias
     initializers. Not done when the class is a toplevel class. */
  if (PURE_INNER_CLASS_DECL_P (GET_CPC ())
      && EXPR_WFL_NODE (id) == GET_CPC_UN ())
    {
      tree aliases_list, type, thisn;
      /* First the aliases, linked to the regular parameters */
      aliases_list =
	build_alias_initializer_parameter_list (AIPL_FUNCTION_DECLARATION,
						TREE_TYPE (GET_CPC ()),
						NULL_TREE, NULL);
      list = chainon (nreverse (aliases_list), list);

      /* Then this$<n> */
      type = TREE_TYPE (DECL_CONTEXT (GET_CPC ()));
      thisn = build_current_thisn (TREE_TYPE (GET_CPC ()));
      list = tree_cons (build_wfl_node (thisn), build_pointer_type (type),
			list);
    }

  for (current = list; current; current = TREE_CHAIN (current))
    {
      int must_chain = 0;
      tree wfl_name = TREE_PURPOSE (current);
      tree type = TREE_VALUE (current);
      tree name = EXPR_WFL_NODE (wfl_name);
      tree already, arg_node;
      tree type_wfl = NULL_TREE;
      tree real_type;

      /* Obtain a suitable type for resolution, if necessary */
      SET_TYPE_FOR_RESOLUTION (type, type_wfl, must_chain);

      /* Process NAME, as it may specify extra dimension(s) for it */
      type = build_array_from_name (type, type_wfl, name, &name);
      EXPR_WFL_NODE (wfl_name) = name;

      real_type = GET_REAL_TYPE (type);
      if (TREE_CODE (real_type) == RECORD_TYPE)
	{
	  real_type = promote_type (real_type);
	  if (TREE_CODE (type) == TREE_LIST)
	    TREE_PURPOSE (type) = real_type;
	}

      /* Check redefinition */
      for (already = arg_types; already; already = TREE_CHAIN (already))
	if (TREE_PURPOSE (already) == name)
	  {
	    parse_error_context
	      (wfl_name, "Variable `%s' is used more than once in the argument list of method `%s'",
	       IDENTIFIER_POINTER (name),
	       IDENTIFIER_POINTER (EXPR_WFL_NODE (id)));
	    break;
	  }

      /* If we've an incomplete argument type, we know there is a location
	 to patch when the type get resolved, later.  */
      jdep = NULL;
      if (must_chain)
	{
	  patch_stage = JDEP_METHOD;
	  type = register_incomplete_type (patch_stage,
					   type_wfl, wfl_name, type);
	  jdep = CLASSD_LAST (ctxp->classd_list);
	  JDEP_MISC (jdep) = id;
	}

      /* The argument node: a name and a (possibly) incomplete type.  */
      arg_node = build_tree_list (name, real_type);
      /* Remember arguments declared final. */
      ARG_FINAL_P (arg_node) = ARG_FINAL_P (current);

      if (jdep)
	JDEP_GET_PATCH (jdep) = &TREE_VALUE (arg_node);
      TREE_CHAIN (arg_node) = arg_types;
      arg_types = arg_node;
    }
  TYPE_ARG_TYPES (meth) = chainon (nreverse (arg_types), end_params_node);
  node = build_tree_list (id, meth);
  return node;
}

static int
unresolved_type_p (tree wfl, tree *returned)

{
  if (TREE_CODE (wfl) == EXPR_WITH_FILE_LOCATION)
    {
      if (returned)
	{
	  tree decl = IDENTIFIER_CLASS_VALUE (EXPR_WFL_NODE (wfl));
	  if (decl && current_class && (decl == TYPE_NAME (current_class)))
	    *returned = TREE_TYPE (decl);
	  else if (GET_CPC_UN () == EXPR_WFL_NODE (wfl))
	    *returned = TREE_TYPE (GET_CPC ());
	  else
	    *returned = NULL_TREE;
	}
      return 1;
    }
  if (returned)
    *returned = wfl;
  return 0;
}

/* From NAME, build a qualified identifier node using the
   qualification from the current package definition. */

static tree
parser_qualified_classname (tree name)
{
  tree nested_class_name;

  if ((nested_class_name = maybe_make_nested_class_name (name)))
    return nested_class_name;

  if (ctxp->package)
    return merge_qualified_name (ctxp->package, name);
  else
    return name;
}

/* Called once the type a interface extends is resolved. Returns 0 if
   everything is OK.  */

static int
parser_check_super_interface (tree super_decl, tree this_decl, tree this_wfl)
{
  tree super_type = TREE_TYPE (super_decl);

  /* Has to be an interface */
  if (!CLASS_INTERFACE (super_decl))
    {
      parse_error_context
	(this_wfl, "%s `%s' can't implement/extend %s `%s'",
	 (CLASS_INTERFACE (TYPE_NAME (TREE_TYPE (this_decl))) ?
	  "Interface" : "Class"),
	 IDENTIFIER_POINTER (DECL_NAME (this_decl)),
	 (TYPE_ARRAY_P (super_type) ? "array" : "class"),
	 IDENTIFIER_POINTER (DECL_NAME (super_decl)));
      return 1;
    }

  /* Check top-level interface access. Inner classes are subject to member
     access rules (6.6.1). */
  if (! INNER_CLASS_P (super_type)
      && check_pkg_class_access (DECL_NAME (super_decl),
				 lookup_cl (this_decl), true))
    return 1;

  SOURCE_FRONTEND_DEBUG (("Completing interface %s with %s",
			  IDENTIFIER_POINTER (DECL_NAME (this_decl)),
			  IDENTIFIER_POINTER (DECL_NAME (super_decl))));
  return 0;
}

/* Makes sure that SUPER_DECL is suitable to extend THIS_DECL. Returns
   0 if everything is OK.  */

static int
parser_check_super (tree super_decl, tree this_decl, tree wfl)
{
  tree super_type = TREE_TYPE (super_decl);

  /* SUPER should be a CLASS (neither an array nor an interface) */
  if (TYPE_ARRAY_P (super_type) || CLASS_INTERFACE (TYPE_NAME (super_type)))
    {
      parse_error_context
	(wfl, "Class `%s' can't subclass %s `%s'",
	 IDENTIFIER_POINTER (DECL_NAME (this_decl)),
	 (CLASS_INTERFACE (TYPE_NAME (super_type)) ? "interface" : "array"),
	 IDENTIFIER_POINTER (DECL_NAME (super_decl)));
      return 1;
    }

  if (CLASS_FINAL (TYPE_NAME (super_type)))
    {
      parse_error_context (wfl, "Can't subclass final classes: %s",
			   IDENTIFIER_POINTER (DECL_NAME (super_decl)));
      return 1;
    }

  /* Check top-level class scope. Inner classes are subject to member access
     rules (6.6.1). */
  if (! INNER_CLASS_P (super_type)
      && (check_pkg_class_access (DECL_NAME (super_decl), wfl, true)))
    return 1;

  SOURCE_FRONTEND_DEBUG (("Completing class %s with %s",
			  IDENTIFIER_POINTER (DECL_NAME (this_decl)),
			  IDENTIFIER_POINTER (DECL_NAME (super_decl))));
  return 0;
}

/* Create a new dependency list and link it (in a LIFO manner) to the
   CTXP list of type dependency list.  */

static void
create_jdep_list (struct parser_ctxt *ctxp)
{
  jdeplist *new = xmalloc (sizeof (jdeplist));
  new->first = new->last = NULL;
  new->next = ctxp->classd_list;
  ctxp->classd_list = new;
}

static jdeplist *
reverse_jdep_list (struct parser_ctxt *ctxp)
{
  jdeplist *prev = NULL, *current, *next;
  for (current = ctxp->classd_list; current; current = next)
    {
      next = current->next;
      current->next = prev;
      prev = current;
    }
  return prev;
}

/* Create a fake pointer based on the ID stored in
   TYPE_NAME. TYPE_NAME can be a WFL or a incomplete type asking to be
   registered again. */

static tree
obtain_incomplete_type (tree type_name)
{
  tree ptr = NULL_TREE, name;

  if (TREE_CODE (type_name) == EXPR_WITH_FILE_LOCATION)
    name = EXPR_WFL_NODE (type_name);
  else if (INCOMPLETE_TYPE_P (type_name))
    name = TYPE_NAME (type_name);
  else
    abort ();

  /* Workaround from build_pointer_type for incomplete types.  */
  BUILD_PTR_FROM_NAME (ptr, name);
  TYPE_MODE (ptr) = ptr_mode;
  layout_type (ptr);

  return ptr;
}

/* Register a incomplete type whose name is WFL. Reuse PTR if PTR is
   non NULL instead of computing a new fake type based on WFL. The new
   dependency is inserted in the current type dependency list, in FIFO
   manner.  */

static tree
register_incomplete_type (int kind, tree wfl, tree decl, tree ptr)
{
  jdep *new = xmalloc (sizeof (jdep));

  if (!ptr && kind != JDEP_METHOD_END) /* JDEP_METHOD_END is a mere marker */
    ptr = obtain_incomplete_type (wfl);

  JDEP_KIND (new) = kind;
  JDEP_DECL (new) = decl;
  JDEP_TO_RESOLVE (new) = ptr;
  JDEP_WFL (new) = wfl;
  JDEP_CHAIN (new) = NULL;
  JDEP_MISC (new) = NULL_TREE;
  /* For some dependencies, set the enclosing class of the current
     class to be the enclosing context */
  if ((kind == JDEP_INTERFACE  || kind == JDEP_ANONYMOUS)
      && GET_ENCLOSING_CPC ())
    JDEP_ENCLOSING (new) = TREE_VALUE (GET_ENCLOSING_CPC ());
  else if (kind == JDEP_SUPER)
    JDEP_ENCLOSING (new) = (GET_ENCLOSING_CPC () ?
			    TREE_VALUE (GET_ENCLOSING_CPC ()) : NULL_TREE);
  else
    JDEP_ENCLOSING (new) = GET_CPC ();
  JDEP_GET_PATCH (new) = (tree *)NULL;

  JDEP_INSERT (ctxp->classd_list, new);

  return ptr;
}

/* This checks for circular references with innerclasses. We start
   from SOURCE and should never reach TARGET. Extended/implemented
   types in SOURCE have their enclosing context checked not to reach
   TARGET. When the last enclosing context of SOURCE is reached, its
   extended/implemented types are also checked not to reach TARGET.
   In case of error, WFL of the offending type is returned; NULL_TREE
   otherwise.  */

static tree
check_inner_circular_reference (tree source, tree target)
{
  tree basetype_vec = TYPE_BINFO_BASETYPES (source);
  tree ctx, cl;
  int i;

  if (!basetype_vec)
    return NULL_TREE;

  for (i = 0; i < TREE_VEC_LENGTH (basetype_vec); i++)
    {
      tree su;

      /* We can end up with a NULL_TREE or an incomplete type here if
	 we encountered previous type resolution errors. It's safe to
	 simply ignore these cases.  */
      if (TREE_VEC_ELT (basetype_vec, i) == NULL_TREE)
	continue;
      su = BINFO_TYPE (TREE_VEC_ELT (basetype_vec, i));
      if (INCOMPLETE_TYPE_P (su))
	continue;

      if (inherits_from_p (su, target))
	return lookup_cl (TYPE_NAME (su));

      for (ctx = DECL_CONTEXT (TYPE_NAME (su)); ctx; ctx = DECL_CONTEXT (ctx))
	{
	  /* An enclosing context shouldn't be TARGET */
	  if (ctx == TYPE_NAME (target))
	    return lookup_cl (TYPE_NAME (su));

	  /* When we reach the enclosing last context, start a check
	     on it, with the same target */
	  if (! DECL_CONTEXT (ctx) &&
	      (cl = check_inner_circular_reference (TREE_TYPE (ctx), target)))
	    return cl;
	}
    }
  return NULL_TREE;
}

/* Explore TYPE's `extends' clause member(s) and return the WFL of the
   offending type if a circularity is detected. NULL_TREE is returned
   otherwise. TYPE can be an interface or a class.   */

static tree
check_circular_reference (tree type)
{
  tree basetype_vec = TYPE_BINFO_BASETYPES (type);
  int i;

  if (!basetype_vec)
    return NULL_TREE;

  if (! CLASS_INTERFACE (TYPE_NAME (type)))
    {
      if (inherits_from_p (CLASSTYPE_SUPER (type), type))
	return lookup_cl (TYPE_NAME (type));
      return NULL_TREE;
    }

  for (i = 0; i < TREE_VEC_LENGTH (basetype_vec); i++)
    {
      tree vec_elt = TREE_VEC_ELT (basetype_vec, i);
      if (vec_elt && BINFO_TYPE (vec_elt) != object_type_node
	  && interface_of_p (type, BINFO_TYPE (vec_elt)))
	return lookup_cl (TYPE_NAME (BINFO_TYPE (vec_elt)));
    }
  return NULL_TREE;
}

void
java_check_circular_reference (void)
{
  tree current;
  for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
    {
      tree type = TREE_TYPE (current);
      tree cl;

      cl = check_circular_reference (type);
      if (! cl)
	cl = check_inner_circular_reference (type, type);
      if (cl)
	parse_error_context (cl, "Cyclic class inheritance%s",
			     (cyclic_inheritance_report ?
			      cyclic_inheritance_report : ""));
    }
}

/* Augment the parameter list PARM with parameters crafted to
   initialize outer context locals aliases. Through ARTIFICIAL, a
   count is kept of the number of crafted parameters. MODE governs
   what eventually gets created: something suitable for a function
   creation or a function invocation, either the constructor or
   finit$.  */

static tree
build_alias_initializer_parameter_list (int mode, tree class_type, tree parm,
					int *artificial)
{
  tree field;
  tree additional_parms = NULL_TREE;

  for (field = TYPE_FIELDS (class_type); field; field = TREE_CHAIN (field))
    if (FIELD_LOCAL_ALIAS (field))
      {
	const char *buffer = IDENTIFIER_POINTER (DECL_NAME (field));
	tree purpose = NULL_TREE, value = NULL_TREE, name = NULL_TREE;
	tree mangled_id;

	switch (mode)
	  {
	  case AIPL_FUNCTION_DECLARATION:
	    MANGLE_ALIAS_INITIALIZER_PARAMETER_NAME_STR (mangled_id,
							 &buffer [4]);
	    purpose = build_wfl_node (mangled_id);
	    if (TREE_CODE (TREE_TYPE (field)) == POINTER_TYPE)
	      value = build_wfl_node (TYPE_NAME (TREE_TYPE (field)));
	    else
	      value = TREE_TYPE (field);
	    break;

	  case AIPL_FUNCTION_CREATION:
	    MANGLE_ALIAS_INITIALIZER_PARAMETER_NAME_STR (purpose,
							 &buffer [4]);
	    value = TREE_TYPE (field);
	    break;

	  case AIPL_FUNCTION_FINIT_INVOCATION:
	    MANGLE_ALIAS_INITIALIZER_PARAMETER_NAME_STR (mangled_id,
							 &buffer [4]);
	    /* Now, this is wrong. purpose should always be the NAME
	       of something and value its matching value (decl, type,
	       etc...) FIXME -- but there is a lot to fix. */

	    /* When invoked for this kind of operation, we already
	       know whether a field is used or not. */
	    purpose = TREE_TYPE (field);
	    value = build_wfl_node (mangled_id);
	    break;

	  case AIPL_FUNCTION_CTOR_INVOCATION:
	    /* There are two case: the constructor invocation happens
	       outside the local inner, in which case, locales from the outer
	       context are directly used.

	       Otherwise, we fold to using the alias directly. */
	    if (class_type == current_class)
	      value = field;
	    else
	      {
		name = get_identifier (&buffer[4]);
		value = IDENTIFIER_LOCAL_VALUE (name);
	      }
	    break;
	  }
	additional_parms = tree_cons (purpose, value, additional_parms);
	if (artificial)
	  *artificial +=1;
      }
  if (additional_parms)
    {
      if (ANONYMOUS_CLASS_P (class_type)
          && mode == AIPL_FUNCTION_CTOR_INVOCATION)
        additional_parms = nreverse (additional_parms);
      parm = chainon (additional_parms, parm);
    }

   return parm;
}

/* Craft a constructor for CLASS_DECL -- what we should do when none
   where found. ARGS is non NULL when a special signature must be
   enforced. This is the case for anonymous classes.  */

static tree
craft_constructor (tree class_decl, tree args)
{
  tree class_type = TREE_TYPE (class_decl);
  tree parm = NULL_TREE;
  int flags = (get_access_flags_from_decl (class_decl) & ACC_PUBLIC ?
	       ACC_PUBLIC : 0);
  int i = 0, artificial = 0;
  tree decl, ctor_name;
  char buffer [80];

  /* The constructor name is <init> unless we're dealing with an
     anonymous class, in which case the name will be fixed after having
     be expanded. */
  if (ANONYMOUS_CLASS_P (class_type))
    ctor_name = DECL_NAME (class_decl);
  else
    ctor_name = init_identifier_node;

  /* If we're dealing with an inner class constructor, we hide the
     this$<n> decl in the name field of its parameter declaration. */
  if (PURE_INNER_CLASS_TYPE_P (class_type))
    {
      tree type = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (class_type)));
      parm = tree_cons (build_current_thisn (class_type),
			build_pointer_type (type), parm);

      /* Some more arguments to be hidden here. The values of the local
	 variables of the outer context that the inner class needs to see. */
      parm = build_alias_initializer_parameter_list (AIPL_FUNCTION_CREATION,
						     class_type, parm,
						     &artificial);
    }

  /* Then if there are any args to be enforced, enforce them now */
  for (; args && args != end_params_node; args = TREE_CHAIN (args))
    {
      sprintf (buffer, "parm%d", i++);
      parm = tree_cons (get_identifier (buffer), TREE_VALUE (args), parm);
    }

  CRAFTED_PARAM_LIST_FIXUP (parm);
  decl = create_artificial_method (class_type, flags, void_type_node,
				   ctor_name, parm);
  fix_method_argument_names (parm, decl);
  /* Now, mark the artificial parameters. */
  DECL_FUNCTION_NAP (decl) = artificial;
  DECL_FUNCTION_SYNTHETIC_CTOR (decl) = DECL_CONSTRUCTOR_P (decl) = 1;
  DECL_INLINE (decl) = 1;
  return decl;
}


/* Fix the constructors. This will be called right after circular
   references have been checked. It is necessary to fix constructors
   early even if no code generation will take place for that class:
   some generated constructor might be required by the class whose
   compilation triggered this one to be simply loaded.  */

void
java_fix_constructors (void)
{
  tree current;

  for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
    {
      tree class_type = TREE_TYPE (current);
      int saw_ctor = 0;
      tree decl;

      if (CLASS_INTERFACE (TYPE_NAME (class_type)))
	continue;

      output_class = current_class = class_type;
      for (decl = TYPE_METHODS (class_type); decl; decl = TREE_CHAIN (decl))
	{
	  if (DECL_CONSTRUCTOR_P (decl))
	    {
	      fix_constructors (decl);
	      saw_ctor = 1;
	    }
	}

      /* Anonymous class constructor can't be generated that early. */
      if (!saw_ctor && !ANONYMOUS_CLASS_P (class_type))
	craft_constructor (current, NULL_TREE);
    }
}

/* safe_layout_class just makes sure that we can load a class without
   disrupting the current_class, input_file, lineno, etc, information
   about the class processed currently.  */

void
safe_layout_class (tree class)
{
  tree save_current_class = current_class;
  location_t save_location = input_location;

  layout_class (class);

  current_class = save_current_class;
  input_location = save_location;
}

static tree
jdep_resolve_class (jdep *dep)
{
  tree decl;

  if (JDEP_RESOLVED_P (dep))
    decl = JDEP_RESOLVED_DECL (dep);
  else
    {
      decl = resolve_class (JDEP_ENCLOSING (dep), JDEP_TO_RESOLVE (dep),
			    JDEP_DECL (dep), JDEP_WFL (dep));
      JDEP_RESOLVED (dep, decl);
      /* If there is no WFL, that's ok.  We generate this warning
	 elsewhere.  */
      if (decl && JDEP_WFL (dep) != NULL_TREE)
	check_deprecation (JDEP_WFL (dep), decl);
    }

  if (!decl)
    complete_class_report_errors (dep);
  else if (PURE_INNER_CLASS_DECL_P (decl))
    {
      tree inner = TREE_TYPE (decl);
      if (! CLASS_LOADED_P (inner))
	{
	  safe_layout_class (inner);
	  if (TYPE_SIZE (inner) == error_mark_node)
	    TYPE_SIZE (inner) = NULL_TREE;
	}
      check_inner_class_access (decl, JDEP_ENCLOSING (dep), JDEP_WFL (dep));
    }
  return decl;
}

/* Complete unsatisfied class declaration and their dependencies */

void
java_complete_class (void)
{
  tree cclass;
  jdeplist *cclassd;
  int error_found;
  tree type;

  /* Process imports */
  process_imports ();

  /* Reverse things so we have the right order */
  ctxp->class_list = nreverse (ctxp->class_list);
  ctxp->classd_list = reverse_jdep_list (ctxp);

  for (cclassd = ctxp->classd_list, cclass = ctxp->class_list;
       cclass && cclassd;
       cclass = TREE_CHAIN (cclass), cclassd = CLASSD_CHAIN (cclassd))
    {
      jdep *dep;

      /* We keep the compilation unit imports in the class so that
	 they can be used later to resolve type dependencies that
	 aren't necessary to solve now. */
      TYPE_IMPORT_LIST (TREE_TYPE (cclass)) = ctxp->import_list;
      TYPE_IMPORT_DEMAND_LIST (TREE_TYPE (cclass)) = ctxp->import_demand_list;

      for (dep = CLASSD_FIRST (cclassd); dep; dep = JDEP_CHAIN (dep))
	{
	  tree decl;
	  if (!(decl = jdep_resolve_class (dep)))
	    continue;

	  /* Now it's time to patch */
	  switch (JDEP_KIND (dep))
	    {
	    case JDEP_SUPER:
	      /* Simply patch super */
	      if (parser_check_super (decl, JDEP_DECL (dep), JDEP_WFL (dep)))
		continue;
	      BINFO_TYPE (TREE_VEC_ELT (BINFO_BASETYPES (TYPE_BINFO
	        (TREE_TYPE (JDEP_DECL (dep)))), 0)) = TREE_TYPE (decl);
	      break;

	    case JDEP_FIELD:
	      {
		/* We do part of the job done in add_field */
		tree field_decl = JDEP_DECL (dep);
		tree field_type = TREE_TYPE (decl);
		if (TREE_CODE (field_type) == RECORD_TYPE)
		  field_type = promote_type (field_type);
		TREE_TYPE (field_decl) = field_type;
		DECL_ALIGN (field_decl) = 0;
		DECL_USER_ALIGN (field_decl) = 0;
		layout_decl (field_decl, 0);
		SOURCE_FRONTEND_DEBUG
		  (("Completed field/var decl `%s' with `%s'",
		    IDENTIFIER_POINTER (DECL_NAME (field_decl)),
		    IDENTIFIER_POINTER (DECL_NAME (decl))));
		break;
	      }
	    case JDEP_METHOD:	/* We start patching a method */
	    case JDEP_METHOD_RETURN:
	      error_found = 0;
	      while (1)
		{
		  if (decl)
		    {
		      type = TREE_TYPE(decl);
		      if (TREE_CODE (type) == RECORD_TYPE)
			type = promote_type (type);
		      JDEP_APPLY_PATCH (dep, type);
		      SOURCE_FRONTEND_DEBUG
			(((JDEP_KIND (dep) == JDEP_METHOD_RETURN ?
			   "Completing fct `%s' with ret type `%s'":
			   "Completing arg `%s' with type `%s'"),
			  IDENTIFIER_POINTER (EXPR_WFL_NODE
					      (JDEP_DECL_WFL (dep))),
			  IDENTIFIER_POINTER (DECL_NAME (decl))));
		    }
		  else
		    error_found = 1;
		  dep = JDEP_CHAIN (dep);
		  if (JDEP_KIND (dep) == JDEP_METHOD_END)
		    break;
		  else
		    decl = jdep_resolve_class (dep);
		}
	      if (!error_found)
		{
		  tree mdecl = JDEP_DECL (dep), signature;
		  /* Recompute and reset the signature, check first that
		     all types are now defined. If they're not,
		     don't build the signature. */
		  if (check_method_types_complete (mdecl))
		    {
		      signature = build_java_signature (TREE_TYPE (mdecl));
		      set_java_signature (TREE_TYPE (mdecl), signature);
		    }
		}
	      else
		continue;
	      break;

	    case JDEP_INTERFACE:
	      if (parser_check_super_interface (decl, JDEP_DECL (dep),
						JDEP_WFL (dep)))
		continue;
	      parser_add_interface (JDEP_DECL (dep), decl, JDEP_WFL (dep));
	      break;

	    case JDEP_PARM:
	    case JDEP_VARIABLE:
	      type = TREE_TYPE(decl);
	      if (TREE_CODE (type) == RECORD_TYPE)
		type = promote_type (type);
	      JDEP_APPLY_PATCH (dep, type);
	      break;

	    case JDEP_TYPE:
	      JDEP_APPLY_PATCH (dep, TREE_TYPE (decl));
	      SOURCE_FRONTEND_DEBUG
		(("Completing a random type dependency on a '%s' node",
		  tree_code_name [TREE_CODE (JDEP_DECL (dep))]));
	      break;

	    case JDEP_EXCEPTION:
	      JDEP_APPLY_PATCH (dep, TREE_TYPE (decl));
	      SOURCE_FRONTEND_DEBUG
		(("Completing `%s' `throws' argument node",
		  IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_WFL (dep)))));
	      break;

	    case JDEP_ANONYMOUS:
	      patch_anonymous_class (decl, JDEP_DECL (dep), JDEP_WFL (dep));
	      break;

	    default:
	      abort ();
	    }
	}
    }
  return;
}

/* Resolve class CLASS_TYPE. Handle the case of trying to resolve an
   array.  */

static tree
resolve_class (tree enclosing, tree class_type, tree decl, tree cl)
{
  tree tname = TYPE_NAME (class_type);
  tree resolved_type = TREE_TYPE (class_type);
  int array_dims = 0;
  tree resolved_type_decl;

  if (resolved_type != NULL_TREE)
    {
      tree resolved_type_decl = TYPE_NAME (resolved_type);
      if (resolved_type_decl == NULL_TREE
	  || TREE_CODE (resolved_type_decl) == IDENTIFIER_NODE)
	{
	  resolved_type_decl = build_decl (TYPE_DECL,
					   TYPE_NAME (class_type),
					   resolved_type);
	}
      return resolved_type_decl;
    }

  /* 1- Check to see if we have an array. If true, find what we really
     want to resolve  */
  if ((array_dims = build_type_name_from_array_name (tname,
						     &TYPE_NAME (class_type))))
    WFL_STRIP_BRACKET (cl, cl);

  /* 2- Resolve the bare type */
  if (!(resolved_type_decl = do_resolve_class (enclosing, class_type,
					       decl, cl)))
    return NULL_TREE;
  resolved_type = TREE_TYPE (resolved_type_decl);

  /* 3- If we have an array, reconstruct the array down to its nesting */
  if (array_dims)
    {
      for (; array_dims; array_dims--)
	resolved_type = build_java_array_type (resolved_type, -1);
      resolved_type_decl = TYPE_NAME (resolved_type);
    }
  TREE_TYPE (class_type) = resolved_type;
  return resolved_type_decl;
}

/* Effectively perform the resolution of class CLASS_TYPE.  DECL or CL
   are used to report error messages; CL must either be NULL_TREE or a
   WFL wrapping a class.  Do not try to replace TYPE_NAME (class_type)
   by a variable, since it is changed by find_in_imports{_on_demand}
   and (but it doesn't really matter) qualify_and_find.  */

tree
do_resolve_class (tree enclosing, tree class_type, tree decl, tree cl)
{
  tree new_class_decl = NULL_TREE, super = NULL_TREE;
  tree saved_enclosing_type = enclosing ? TREE_TYPE (enclosing) : NULL_TREE;
  tree decl_result;
  htab_t circularity_hash;

  if (QUALIFIED_P (TYPE_NAME (class_type)))
    {
      /* If the type name is of the form `Q . Id', then Q is either a
	 package name or a class name.  First we try to find Q as a
	 class and then treat Id as a member type.  If we can't find Q
	 as a class then we fall through.  */
      tree q, left, left_type, right;
      if (breakdown_qualified (&left, &right, TYPE_NAME (class_type)) == 0)
	{
	  BUILD_PTR_FROM_NAME (left_type, left);
	  q = do_resolve_class (enclosing, left_type, decl, cl);
	  if (q)
	    {
	      enclosing = q;
	      saved_enclosing_type = TREE_TYPE (q);
	      BUILD_PTR_FROM_NAME (class_type, right);
	    }
	}
    }

  if (enclosing)
    {
      /* This hash table is used to register the classes we're going
	 through when searching the current class as an inner class, in
	 order to detect circular references. Remember to free it before
	 returning the section 0- of this function. */
      circularity_hash = htab_create (20, htab_hash_pointer, htab_eq_pointer,
				      NULL);

      /* 0- Search in the current class as an inner class.
	 Maybe some code here should be added to load the class or
	 something, at least if the class isn't an inner class and ended
	 being loaded from class file. FIXME. */
      while (enclosing)
	{
	  new_class_decl = resolve_inner_class (circularity_hash, cl, &enclosing,
						&super, class_type);
	  if (new_class_decl)
	    break;

	  /* If we haven't found anything because SUPER reached Object and
	     ENCLOSING happens to be an innerclass, try the enclosing context. */
	  if ((!super || super == object_type_node) &&
	      enclosing && INNER_CLASS_DECL_P (enclosing))
	    enclosing = DECL_CONTEXT (enclosing);
	  else
	    enclosing = NULL_TREE;
	}

      htab_delete (circularity_hash);

      if (new_class_decl)
	return new_class_decl;
    }

  /* 1- Check for the type in single imports. This will change
     TYPE_NAME() if something relevant is found */
  find_in_imports (saved_enclosing_type, class_type);

  /* 2- And check for the type in the current compilation unit */
  if ((new_class_decl = IDENTIFIER_CLASS_VALUE (TYPE_NAME (class_type))))
    {
      if (!CLASS_LOADED_P (TREE_TYPE (new_class_decl)) &&
	  !CLASS_FROM_SOURCE_P (TREE_TYPE (new_class_decl)))
	load_class (TYPE_NAME (class_type), 0);
      return IDENTIFIER_CLASS_VALUE (TYPE_NAME (class_type));
    }

  /* 3- Search according to the current package definition */
  if (!QUALIFIED_P (TYPE_NAME (class_type)))
    {
      if ((new_class_decl = qualify_and_find (class_type, ctxp->package,
					     TYPE_NAME (class_type))))
	return new_class_decl;
    }

  /* 4- Check the import on demands. Don't allow bar.baz to be
     imported from foo.* */
  if (!QUALIFIED_P (TYPE_NAME (class_type)))
    if (find_in_imports_on_demand (saved_enclosing_type, class_type))
      return NULL_TREE;

  /* If found in find_in_imports_on_demand, the type has already been
     loaded. */
  if ((new_class_decl = IDENTIFIER_CLASS_VALUE (TYPE_NAME (class_type))))
    return new_class_decl;

  /* 5- Try with a name qualified with the package name we've seen so far */
  if (!QUALIFIED_P (TYPE_NAME (class_type)))
    {
      tree package;

      /* If there is a current package (ctxp->package), it's the first
	 element of package_list and we can skip it. */
      for (package = (ctxp->package ?
		      TREE_CHAIN (package_list) : package_list);
	   package; package = TREE_CHAIN (package))
	if ((new_class_decl = qualify_and_find (class_type,
					       TREE_PURPOSE (package),
					       TYPE_NAME (class_type))))
	  return new_class_decl;
    }

  /* 5- Check another compilation unit that bears the name of type */
  load_class (TYPE_NAME (class_type), 0);

  if (!cl)
    cl = lookup_cl (decl);

  /* If we don't have a value for CL, then we're being called recursively.
     We can't check package access just yet, but it will be taken care of
     by the caller. */
  if (cl)
    {
      if (check_pkg_class_access (TYPE_NAME (class_type), cl, true))
        return NULL_TREE;
    }

  /* 6- Last call for a resolution */
  decl_result = IDENTIFIER_CLASS_VALUE (TYPE_NAME (class_type));

  /* The final lookup might have registered a.b.c into a.b$c If we
     failed at the first lookup, progressively change the name if
     applicable and use the matching DECL instead. */
  if (!decl_result && QUALIFIED_P (TYPE_NAME (class_type)))
    {
      char *separator;
      tree name = TYPE_NAME (class_type);
      char *namebuffer = alloca (IDENTIFIER_LENGTH (name) + 1);

      strcpy (namebuffer, IDENTIFIER_POINTER (name));

      do {

       /* Reach the last '.', and if applicable, replace it by a `$' and
          see if this exists as a type. */
       if ((separator = strrchr (namebuffer, '.')))
         {
           *separator = '$';
           name = get_identifier (namebuffer);
           decl_result = IDENTIFIER_CLASS_VALUE (name);
         }
      } while (!decl_result && separator);
    }
  return decl_result;
}

static tree
qualify_and_find (tree class_type, tree package, tree name)
{
  tree new_qualified = merge_qualified_name (package, name);
  tree new_class_decl;

  if (!IDENTIFIER_CLASS_VALUE (new_qualified))
    load_class (new_qualified, 0);
  if ((new_class_decl = IDENTIFIER_CLASS_VALUE (new_qualified)))
    {
      if (!CLASS_LOADED_P (TREE_TYPE (new_class_decl)) &&
	  !CLASS_FROM_SOURCE_P (TREE_TYPE (new_class_decl)))
	load_class (new_qualified, 0);
      TYPE_NAME (class_type) = new_qualified;
      return IDENTIFIER_CLASS_VALUE (new_qualified);
    }
  return NULL_TREE;
}

/* Resolve NAME and lay it out (if not done and if not the current
   parsed class). Return a decl node. This function is meant to be
   called when type resolution is necessary during the walk pass.  */

static tree
resolve_and_layout (tree something, tree cl)
{
  tree decl, decl_type;

  /* Don't do that on the current class */
  if (something == current_class)
    return TYPE_NAME (current_class);

  /* Don't do anything for void and other primitive types */
  if (JPRIMITIVE_TYPE_P (something) || something == void_type_node)
    return NULL_TREE;

  /* Pointer types can be reall pointer types or fake pointers. When
     finding a real pointer, recheck for primitive types */
  if (TREE_CODE (something) == POINTER_TYPE)
    {
      if (TREE_TYPE (something))
	{
	  something = TREE_TYPE (something);
	  if (JPRIMITIVE_TYPE_P (something) || something == void_type_node)
	    return NULL_TREE;
	}
      else
	something = TYPE_NAME (something);
    }

  /* Don't do anything for arrays of primitive types */
  if (TREE_CODE (something) == RECORD_TYPE && TYPE_ARRAY_P (something)
      && JPRIMITIVE_TYPE_P (TYPE_ARRAY_ELEMENT (something)))
    return NULL_TREE;

  /* Something might be a WFL */
  if (TREE_CODE (something) == EXPR_WITH_FILE_LOCATION)
    something = EXPR_WFL_NODE (something);

  /* Otherwise, if something is not and IDENTIFIER_NODE, it can be a a
     TYPE_DECL or a real TYPE */
  else if (TREE_CODE (something) != IDENTIFIER_NODE)
    something = (TREE_CODE (TYPE_NAME (something)) == TYPE_DECL ?
	    DECL_NAME (TYPE_NAME (something)) : TYPE_NAME (something));

  if (!(decl = resolve_no_layout (something, cl)))
    return NULL_TREE;

  /* Resolve and layout if necessary */
  decl_type = TREE_TYPE (decl);
  layout_class_methods (decl_type);
  /* Check methods */
  if (CLASS_FROM_SOURCE_P (decl_type))
    java_check_methods (decl);
  /* Layout the type if necessary */
  if (decl_type != current_class && !CLASS_LOADED_P (decl_type))
    safe_layout_class (decl_type);

  return decl;
}

/* Resolve a class, returns its decl but doesn't perform any
   layout. The current parsing context is saved and restored */

static tree
resolve_no_layout (tree name, tree cl)
{
  tree ptr, decl;
  BUILD_PTR_FROM_NAME (ptr, name);
  java_parser_context_save_global ();
  decl = resolve_class (TYPE_NAME (current_class), ptr, NULL_TREE, cl);
  java_parser_context_restore_global ();

  return decl;
}

/* Called when reporting errors. Skip the '[]'s in a complex array
   type description that failed to be resolved. purify_type_name can't
   use an identifier tree.  */

static const char *
purify_type_name (const char *name)
{
  int len = strlen (name);
  int bracket_found;

  STRING_STRIP_BRACKETS (name, len, bracket_found);
  if (bracket_found)
    {
      char *stripped_name = xmemdup (name, len, len+1);
      stripped_name [len] = '\0';
      return stripped_name;
    }
  return name;
}

/* The type CURRENT refers to can't be found. We print error messages.  */

static void
complete_class_report_errors (jdep *dep)
{
  const char *name;

  if (!JDEP_WFL (dep))
    return;

  name = IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_WFL (dep)));
  switch (JDEP_KIND (dep))
    {
    case JDEP_SUPER:
      parse_error_context
	(JDEP_WFL (dep), "Superclass `%s' of class `%s' not found",
	 purify_type_name (name),
	 IDENTIFIER_POINTER (DECL_NAME (JDEP_DECL (dep))));
      break;
    case JDEP_FIELD:
      parse_error_context
	(JDEP_WFL (dep), "Type `%s' not found in declaration of field `%s'",
	 purify_type_name (name),
	 IDENTIFIER_POINTER (DECL_NAME (JDEP_DECL (dep))));
      break;
    case JDEP_METHOD:		/* Covers arguments */
      parse_error_context
	(JDEP_WFL (dep), "Type `%s' not found in the declaration of the argument `%s' of method `%s'",
	 purify_type_name (name),
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_DECL_WFL (dep))),
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_MISC (dep))));
      break;
    case JDEP_METHOD_RETURN:	/* Covers return type */
      parse_error_context
	(JDEP_WFL (dep), "Type `%s' not found in the declaration of the return type of method `%s'",
	 purify_type_name (name),
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_DECL_WFL (dep))));
      break;
    case JDEP_INTERFACE:
      parse_error_context
	(JDEP_WFL (dep), "Superinterface `%s' of %s `%s' not found",
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_WFL (dep))),
	 (CLASS_OR_INTERFACE (JDEP_DECL (dep), "class", "interface")),
	 IDENTIFIER_POINTER (DECL_NAME (JDEP_DECL (dep))));
      break;
    case JDEP_VARIABLE:
      parse_error_context
	(JDEP_WFL (dep), "Type `%s' not found in the declaration of the local variable `%s'",
	 purify_type_name (IDENTIFIER_POINTER
			   (EXPR_WFL_NODE (JDEP_WFL (dep)))),
	 IDENTIFIER_POINTER (DECL_NAME (JDEP_DECL (dep))));
      break;
    case JDEP_EXCEPTION:	/* As specified by `throws' */
      parse_error_context
	  (JDEP_WFL (dep), "Class `%s' not found in `throws'",
	 IDENTIFIER_POINTER (EXPR_WFL_NODE (JDEP_WFL (dep))));
      break;
    default:
      /* Fix for -Wall. Just break doing nothing. The error will be
         caught later */
      break;
    }
}

/* Return a static string containing the DECL prototype string. If
   DECL is a constructor, use the class name instead of the form
   <init> */

static const char *
get_printable_method_name (tree decl)
{
  const char *to_return;
  tree name = NULL_TREE;

  if (DECL_CONSTRUCTOR_P (decl))
    {
      name = DECL_NAME (decl);
      DECL_NAME (decl) = DECL_NAME (TYPE_NAME (DECL_CONTEXT (decl)));
    }

  to_return = lang_printable_name (decl, 0);
  if (DECL_CONSTRUCTOR_P (decl))
    DECL_NAME (decl) = name;

  return to_return;
}

/* Track method being redefined inside the same class. As a side
   effect, set DECL_NAME to an IDENTIFIER (prior entering this
   function it's a FWL, so we can track errors more accurately.)  */

static int
check_method_redefinition (tree class, tree method)
{
  tree redef, sig;

  /* There's no need to verify <clinit> and finit$ and instinit$ */
  if (DECL_CLINIT_P (method)
      || DECL_FINIT_P (method) || DECL_INSTINIT_P (method))
    return 0;

  sig = TYPE_ARGUMENT_SIGNATURE (TREE_TYPE (method));
  for (redef = TYPE_METHODS (class); redef; redef = TREE_CHAIN (redef))
    {
      if (redef == method)
	break;
      if (DECL_NAME (redef) == DECL_NAME (method)
	  && sig == TYPE_ARGUMENT_SIGNATURE (TREE_TYPE (redef))
	  && !DECL_ARTIFICIAL (method))
	{
	  parse_error_context
	    (DECL_FUNCTION_WFL (method), "Duplicate %s declaration `%s'",
	     (DECL_CONSTRUCTOR_P (redef) ? "constructor" : "method"),
	     get_printable_method_name (redef));
	  return 1;
	}
    }
  return 0;
}

/* Return 1 if check went ok, 0 otherwise.  */
static int
check_abstract_method_definitions (int do_interface, tree class_decl,
				   tree type)
{
  tree class = TREE_TYPE (class_decl);
  tree method, end_type;
  int ok = 1;

  end_type = (do_interface ? object_type_node : type);
  for (method = TYPE_METHODS (type); method; method = TREE_CHAIN (method))
    {
      tree other_super, other_method, method_sig, method_name;
      int found = 0;
      int end_type_reached = 0;

      if (!METHOD_ABSTRACT (method) || METHOD_FINAL (method))
	continue;

      /* Now verify that somewhere in between TYPE and CLASS,
	 abstract method METHOD gets a non abstract definition
	 that is inherited by CLASS.  */

      method_sig = build_java_signature (TREE_TYPE (method));
      method_name = DECL_NAME (method);
      if (TREE_CODE (method_name) == EXPR_WITH_FILE_LOCATION)
	method_name = EXPR_WFL_NODE (method_name);

      other_super = class;
      do {
	if (other_super == end_type)
	  end_type_reached = 1;

	/* Method search */
	for (other_method = TYPE_METHODS (other_super); other_method;
            other_method = TREE_CHAIN (other_method))
	  {
	    tree s = build_java_signature (TREE_TYPE (other_method));
	    tree other_name = DECL_NAME (other_method);

	    if (TREE_CODE (other_name) == EXPR_WITH_FILE_LOCATION)
	      other_name = EXPR_WFL_NODE (other_name);
	    if (!DECL_CLINIT_P (other_method)
		&& !DECL_CONSTRUCTOR_P (other_method)
		&& method_name == other_name
		&& method_sig == s
		&& !METHOD_ABSTRACT (other_method))
             {
               found = 1;
               break;
             }
	  }
	other_super = CLASSTYPE_SUPER (other_super);
      } while (!end_type_reached);

      /* Report that abstract METHOD didn't find an implementation
	 that CLASS can use. */
      if (!found)
	{
	  char *t = xstrdup (lang_printable_name
			    (TREE_TYPE (TREE_TYPE (method)), 0));
	  tree ccn = DECL_NAME (TYPE_NAME (DECL_CONTEXT (method)));

	  parse_error_context
	    (lookup_cl (class_decl),
	     "Class `%s' doesn't define the abstract method `%s %s' from %s `%s'. This method must be defined or %s `%s' must be declared abstract",
	     IDENTIFIER_POINTER (DECL_NAME (class_decl)),
	     t, lang_printable_name (method, 0),
	     (CLASS_INTERFACE (TYPE_NAME (DECL_CONTEXT (method))) ?
	      "interface" : "class"),
	     IDENTIFIER_POINTER (ccn),
	     (CLASS_INTERFACE (class_decl) ? "interface" : "class"),
	     IDENTIFIER_POINTER (DECL_NAME (class_decl)));
	  ok = 0;
	  free (t);
	}
    }

  if (ok && do_interface)
    {
      /* Check for implemented interfaces. */
      int i;
      tree vector = TYPE_BINFO_BASETYPES (type);
      for (i = 1; ok && vector && i < TREE_VEC_LENGTH (vector); i++)
	{
	  tree super = BINFO_TYPE (TREE_VEC_ELT (vector, i));
	  ok = check_abstract_method_definitions (1, class_decl, super);
	}
    }

  return ok;
}

/* Check that CLASS_DECL somehow implements all inherited abstract
   methods.  */

static void
java_check_abstract_method_definitions (tree class_decl)
{
  tree class = TREE_TYPE (class_decl);
  tree super, vector;
  int i;

  if (CLASS_ABSTRACT (class_decl))
    return;

  /* Check for inherited types */
  super = class;
  do {
    super = CLASSTYPE_SUPER (super);
    check_abstract_method_definitions (0, class_decl, super);
  } while (super != object_type_node);

  /* Check for implemented interfaces. */
  vector = TYPE_BINFO_BASETYPES (class);
  for (i = 1; i < TREE_VEC_LENGTH (vector); i++)
    {
      super = BINFO_TYPE (TREE_VEC_ELT (vector, i));
      check_abstract_method_definitions (1, class_decl, super);
    }
}

/* Check all the types method DECL uses and return 1 if all of them
   are now complete, 0 otherwise. This is used to check whether its
   safe to build a method signature or not.  */

static int
check_method_types_complete (tree decl)
{
  tree type = TREE_TYPE (decl);
  tree args;

  if (!INCOMPLETE_TYPE_P (TREE_TYPE (type)))
    return 0;

  args = TYPE_ARG_TYPES (type);
  if (TREE_CODE (type) == METHOD_TYPE)
    args = TREE_CHAIN (args);
  for (; args != end_params_node; args = TREE_CHAIN (args))
    if (INCOMPLETE_TYPE_P (TREE_VALUE (args)))
      return 0;

  return 1;
}

/* Visible interface to check methods contained in CLASS_DECL */

void
java_check_methods (tree class_decl)
{
  if (CLASS_METHOD_CHECKED_P (TREE_TYPE (class_decl)))
    return;

  if (CLASS_INTERFACE (class_decl))
    java_check_abstract_methods (class_decl);
  else
    java_check_regular_methods (class_decl);

  CLASS_METHOD_CHECKED_P (TREE_TYPE (class_decl)) = 1;
}

/* Like not_accessible_p, but doesn't refer to the current class at
   all.  */
static bool
hack_is_accessible_p (tree member, tree from_where)
{
  int flags = get_access_flags_from_decl (member);

  if (from_where == DECL_CONTEXT (member)
      || (flags & ACC_PUBLIC))
    return true;

  if ((flags & ACC_PROTECTED))
    {
      if (inherits_from_p (from_where, DECL_CONTEXT (member)))
	return true;
    }

  if ((flags & ACC_PRIVATE))
    return false;

  /* Package private, or protected.  */
  return in_same_package (TYPE_NAME (from_where),
			  TYPE_NAME (DECL_CONTEXT (member)));
}

/* Check all the methods of CLASS_DECL. Methods are first completed
   then checked according to regular method existence rules.  If no
   constructor for CLASS_DECL were encountered, then build its
   declaration.  */
static void
java_check_regular_methods (tree class_decl)
{
  int saw_constructor = ANONYMOUS_CLASS_P (TREE_TYPE (class_decl));
  tree method;
  tree class = TREE_TYPE (class_decl);
  tree found = NULL_TREE;
  tree mthrows;

  /* It is not necessary to check methods defined in java.lang.Object */
  if (class == object_type_node)
    return;

  if (!TYPE_NVIRTUALS (class))
    TYPE_METHODS (class) = nreverse (TYPE_METHODS (class));

  /* Should take interfaces into account. FIXME */
  for (method = TYPE_METHODS (class); method; method = TREE_CHAIN (method))
    {
      tree sig;
      tree method_wfl = DECL_FUNCTION_WFL (method);
      int aflags;

      /* Check for redefinitions */
      if (check_method_redefinition (class, method))
	continue;

      /* We verify things thrown by the method.  They must inherit from
	 java.lang.Throwable.  */
      for (mthrows = DECL_FUNCTION_THROWS (method);
	   mthrows; mthrows = TREE_CHAIN (mthrows))
	{
	  if (!inherits_from_p (TREE_VALUE (mthrows), throwable_type_node))
	    parse_error_context
	      (TREE_PURPOSE (mthrows), "Class `%s' in `throws' clause must be a subclass of class `java.lang.Throwable'",
	       IDENTIFIER_POINTER
	         (DECL_NAME (TYPE_NAME (TREE_VALUE (mthrows)))));
	}

      /* If we see one constructor a mark so we don't generate the
	 default one.  Also skip other verifications: constructors
	 can't be inherited hence hidden or overridden.  */
      if (DECL_CONSTRUCTOR_P (method))
	{
	  saw_constructor = 1;
	  continue;
	}

      sig = build_java_argument_signature (TREE_TYPE (method));
      found = lookup_argument_method_generic (class, DECL_NAME (method), sig,
					      SEARCH_SUPER | SEARCH_INTERFACE);

      /* Inner class can't declare static methods */
      if (METHOD_STATIC (method) && !TOPLEVEL_CLASS_DECL_P (class_decl))
	{
	  char *t = xstrdup (lang_printable_name (class, 0));
	  parse_error_context
	    (method_wfl, "Method `%s' can't be static in inner class `%s'. Only members of interfaces and top-level classes can be static",
	     lang_printable_name (method, 0), t);
	  free (t);
	}

      /* Nothing overrides or it's a private method. */
      if (!found)
	continue;
      if (METHOD_PRIVATE (found))
	{
	  found = NULL_TREE;
	  continue;
	}

      /* If `found' is declared in an interface, make sure the
	 modifier matches. */
      if (CLASS_INTERFACE (TYPE_NAME (DECL_CONTEXT (found)))
	  && clinit_identifier_node != DECL_NAME (found)
	  && !METHOD_PUBLIC (method))
	{
	  tree found_decl = TYPE_NAME (DECL_CONTEXT (found));
	  parse_error_context (method_wfl, "Class `%s' must override `%s' with a public method in order to implement interface `%s'",
			       IDENTIFIER_POINTER (DECL_NAME (class_decl)),
			       lang_printable_name (method, 0),
			       IDENTIFIER_POINTER (DECL_NAME (found_decl)));
	}

      /* Can't override a method with the same name and different return
	 types. */
      if (TREE_TYPE (TREE_TYPE (found)) != TREE_TYPE (TREE_TYPE (method)))
	{
	  char *t = xstrdup
	    (lang_printable_name (TREE_TYPE (TREE_TYPE (found)), 0));
	  parse_error_context
	    (method_wfl,
	     "Method `%s' was defined with return type `%s' in class `%s'",
	     lang_printable_name (found, 0), t,
	     IDENTIFIER_POINTER
	       (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	  free (t);
	}

      aflags = get_access_flags_from_decl (found);

      /* Can't override final. Can't override static. */
      if (METHOD_FINAL (found) || METHOD_STATIC (found))
	{
	  /* Static *can* override static */
	  if (METHOD_STATIC (found) && METHOD_STATIC (method))
	    continue;
	  parse_error_context
	    (method_wfl,
	     "%s methods can't be overridden. Method `%s' is %s in class `%s'",
	     (METHOD_FINAL (found) ? "Final" : "Static"),
	     lang_printable_name (found, 0),
	     (METHOD_FINAL (found) ? "final" : "static"),
	     IDENTIFIER_POINTER
	       (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	  continue;
	}

      /* Static method can't override instance method. */
      if (METHOD_STATIC (method))
	{
	  parse_error_context
	    (method_wfl,
	     "Instance methods can't be overridden by a static method. Method `%s' is an instance method in class `%s'",
	     lang_printable_name (found, 0),
	     IDENTIFIER_POINTER
	       (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	  continue;
	}

      /* - Overriding/hiding public must be public
	 - Overriding/hiding protected must be protected or public
         - If the overridden or hidden method has default (package)
           access, then the overriding or hiding method must not be
           private; otherwise, a compile-time error occurs.  If
           `found' belongs to an interface, things have been already
           taken care of.  */
      if (!CLASS_INTERFACE (TYPE_NAME (DECL_CONTEXT (found)))
	  && ((METHOD_PUBLIC (found) && !METHOD_PUBLIC (method))
	      || (METHOD_PROTECTED (found)
		  && !(METHOD_PUBLIC (method) || METHOD_PROTECTED (method)))
	      || (!(aflags & (ACC_PUBLIC | ACC_PRIVATE | ACC_STATIC))
		  && METHOD_PRIVATE (method))))
	{
	  parse_error_context
	    (method_wfl,
	     "Methods can't be overridden to be more private. Method `%s' is not %s in class `%s'", lang_printable_name (method, 0),
	     (METHOD_PUBLIC (method) ? "public" :
	      (METHOD_PRIVATE (method) ? "private" : "protected")),
	     IDENTIFIER_POINTER (DECL_NAME
				 (TYPE_NAME (DECL_CONTEXT (found)))));
	  continue;
	}

      /* Check this method against all the other implementations it
	 overrides.  Here we only check the class hierarchy; the rest
	 of the checking is done later.  If this method is just a
	 Miranda method, we can skip the check.  */
      if (! METHOD_INVISIBLE (method))
	check_concrete_throws_clauses (class, method, DECL_NAME (method), sig);
    }

  /* The above throws clause check only looked at superclasses.  Now
     we must also make sure that all methods declared in interfaces
     have compatible throws clauses.  FIXME: there are more efficient
     ways to organize this checking; we should implement one.  */
  check_interface_throws_clauses (class, class);

  if (!TYPE_NVIRTUALS (class))
    TYPE_METHODS (class) = nreverse (TYPE_METHODS (class));

  /* Search for inherited abstract method not yet implemented in this
     class.  */
  java_check_abstract_method_definitions (class_decl);

  if (!saw_constructor)
    abort ();
}

/* Check to make sure that all the methods in all the interfaces
   implemented by CLASS_DECL are compatible with the concrete
   implementations available in CHECK_CLASS_DECL.  */
static void
check_interface_throws_clauses (tree check_class_decl, tree class_decl)
{
  for (; class_decl != NULL_TREE; class_decl = CLASSTYPE_SUPER (class_decl))
    {
      tree bases;
      int iface_len;
      int i;

      if (! CLASS_LOADED_P (class_decl))
	{
	  if (CLASS_FROM_SOURCE_P (class_decl))
	    safe_layout_class (class_decl);
	  else
	    load_class (class_decl, 1);
	}

      bases = TYPE_BINFO_BASETYPES (class_decl);
      iface_len = TREE_VEC_LENGTH (bases) - 1;
      for (i = iface_len; i > 0; --i)
	{
	  tree interface = BINFO_TYPE (TREE_VEC_ELT (bases, i));
	  tree iface_method;

	  for (iface_method = TYPE_METHODS (interface);
	       iface_method != NULL_TREE;
	       iface_method = TREE_CHAIN (iface_method))
	    {
	      tree sig, method;

	      /* First look for a concrete method implemented or
		 inherited by this class.  No need to search
		 interfaces here, since we're already looking through
		 all of them.  */
	      sig = build_java_argument_signature (TREE_TYPE (iface_method));
	      method
		= lookup_argument_method_generic (check_class_decl,
						  DECL_NAME (iface_method),
						  sig, SEARCH_VISIBLE);
	      /* If we don't find an implementation, that is ok.  Any
		 potential errors from that are diagnosed elsewhere.
		 Also, multiple inheritance with conflicting throws
		 clauses is fine in the absence of a concrete
		 implementation.  */
	      if (method != NULL_TREE && !METHOD_ABSTRACT (method)
		  && !METHOD_INVISIBLE (iface_method))
		{
		  tree method_wfl = DECL_FUNCTION_WFL (method);
		  check_throws_clauses (method, method_wfl, iface_method);
		}
	    }

	  /* Now check superinterfaces.  */
	  check_interface_throws_clauses (check_class_decl, interface);
	}
    }
}

/* Check throws clauses of a method against the clauses of all the
   methods it overrides.  We do this by searching up the class
   hierarchy, examining all matching accessible methods.  */
static void
check_concrete_throws_clauses (tree class, tree self_method,
			       tree name, tree signature)
{
  tree method = lookup_argument_method_generic (class, name, signature,
						SEARCH_SUPER | SEARCH_VISIBLE);
  while (method != NULL_TREE)
    {
      if (! METHOD_INVISIBLE (method) && hack_is_accessible_p (method, class))
	check_throws_clauses (self_method, DECL_FUNCTION_WFL (self_method),
			      method);

      method = lookup_argument_method_generic (DECL_CONTEXT (method),
					       name, signature,
					       SEARCH_SUPER | SEARCH_VISIBLE);
    }
}

/* Generate an error if the `throws' clause of METHOD (if any) is
   incompatible with the `throws' clause of FOUND (if any).  */
static void
check_throws_clauses (tree method, tree method_wfl, tree found)
{
  tree mthrows;

  /* Can't check these things with class loaded from bytecode. FIXME */
  if (!CLASS_FROM_SOURCE_P (DECL_CONTEXT (found)))
    return;

  for (mthrows = DECL_FUNCTION_THROWS (method);
       mthrows; mthrows = TREE_CHAIN (mthrows))
    {
      tree fthrows;

      /* We don't verify unchecked expressions */
      if (IS_UNCHECKED_EXCEPTION_P (TREE_VALUE (mthrows)))
	continue;
      /* Checked expression must be compatible */
      for (fthrows = DECL_FUNCTION_THROWS (found);
	   fthrows; fthrows = TREE_CHAIN (fthrows))
	{
	  if (inherits_from_p (TREE_VALUE (mthrows), TREE_VALUE (fthrows)))
	    break;
	}
      if (!fthrows)
	{
	  parse_error_context
	    (method_wfl, "Invalid checked exception class `%s' in `throws' clause.  The exception must be a subclass of an exception thrown by `%s' from class `%s'",
	     IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (TREE_VALUE (mthrows)))),
	     lang_printable_name (found, 0),
	     IDENTIFIER_POINTER
	     (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	}
    }
}

/* Check abstract method of interface INTERFACE */
static void
java_check_abstract_methods (tree interface_decl)
{
  int i, n;
  tree method, basetype_vec, found;
  tree interface = TREE_TYPE (interface_decl);

  for (method = TYPE_METHODS (interface); method; method = TREE_CHAIN (method))
    {
      /* 2- Check for double definition inside the defining interface */
      if (check_method_redefinition (interface, method))
	continue;

      /* 3- Overriding is OK as far as we preserve the return type.  */
      found = lookup_java_interface_method2 (interface, method);
      if (found)
	{
	  char *t;
	  t = xstrdup (lang_printable_name (TREE_TYPE (TREE_TYPE (found)), 0));
	  parse_error_context
	    (DECL_FUNCTION_WFL (found),
	     "Method `%s' was defined with return type `%s' in class `%s'",
	     lang_printable_name (found, 0), t,
	     IDENTIFIER_POINTER
	       (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	  free (t);
	  continue;
	}
    }

  /* 4- Inherited methods can't differ by their returned types */
  if (!(basetype_vec = TYPE_BINFO_BASETYPES (interface)))
    return;
  n = TREE_VEC_LENGTH (basetype_vec);
  for (i = 0; i < n; i++)
    {
      tree sub_interface_method, sub_interface;
      tree vec_elt = TREE_VEC_ELT (basetype_vec, i);
      if (!vec_elt)
	continue;
      sub_interface = BINFO_TYPE (vec_elt);
      for (sub_interface_method = TYPE_METHODS (sub_interface);
	   sub_interface_method;
	   sub_interface_method = TREE_CHAIN (sub_interface_method))
	{
	  found = lookup_java_interface_method2 (interface,
						 sub_interface_method);
	  if (found && (found != sub_interface_method))
	    {
	      parse_error_context
		(lookup_cl (sub_interface_method),
		 "Interface `%s' inherits method `%s' from interface `%s'. This method is redefined with a different return type in interface `%s'",
		 IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (interface))),
		 lang_printable_name (found, 0),
		 IDENTIFIER_POINTER
		   (DECL_NAME (TYPE_NAME
			       (DECL_CONTEXT (sub_interface_method)))),
		 IDENTIFIER_POINTER
	           (DECL_NAME (TYPE_NAME (DECL_CONTEXT (found)))));
	    }
	}
    }
}

/* Lookup methods in interfaces using their name and partial
   signature. Return a matching method only if their types differ.  */

static tree
lookup_java_interface_method2 (tree class, tree method_decl)
{
  int i, n;
  tree basetype_vec = TYPE_BINFO_BASETYPES (class), to_return;

  if (!basetype_vec)
    return NULL_TREE;

  n = TREE_VEC_LENGTH (basetype_vec);
  for (i = 0; i < n; i++)
    {
      tree vec_elt = TREE_VEC_ELT (basetype_vec, i), to_return;
      if ((BINFO_TYPE (vec_elt) != object_type_node)
	  && (to_return =
	      lookup_java_method2 (BINFO_TYPE (vec_elt), method_decl, 1)))
	return to_return;
    }
  for (i = 0; i < n; i++)
    {
      to_return = lookup_java_interface_method2
	(BINFO_TYPE (TREE_VEC_ELT (basetype_vec, i)), method_decl);
      if (to_return)
	return to_return;
    }

  return NULL_TREE;
}

/* Lookup method using their name and partial signature. Return a
   matching method only if their types differ.  */

static tree
lookup_java_method2 (tree clas, tree method_decl, int do_interface)
{
  tree method, method_signature, method_name, method_type, name;

  method_signature = build_java_argument_signature (TREE_TYPE (method_decl));
  name = DECL_NAME (method_decl);
  method_name = (TREE_CODE (name) == EXPR_WITH_FILE_LOCATION ?
		 EXPR_WFL_NODE (name) : name);
  method_type = TREE_TYPE (TREE_TYPE (method_decl));

  while (clas != NULL_TREE)
    {
      for (method = TYPE_METHODS (clas);
	   method != NULL_TREE;  method = TREE_CHAIN (method))
	{
	  tree method_sig = build_java_argument_signature (TREE_TYPE (method));
	  tree name = DECL_NAME (method);
	  if ((TREE_CODE (name) == EXPR_WITH_FILE_LOCATION ?
	       EXPR_WFL_NODE (name) : name) == method_name
	      && method_sig == method_signature
	      && TREE_TYPE (TREE_TYPE (method)) != method_type)
	    return method;
	}
      clas = (do_interface ? NULL_TREE : CLASSTYPE_SUPER (clas));
    }
  return NULL_TREE;
}

/* Return the line that matches DECL line number, and try its best to
   position the column number. Used during error reports.  */

static GTY(()) tree cl_v;
static tree
lookup_cl (tree decl)
{
  char *line, *found;

  if (!decl)
    return NULL_TREE;

  if (cl_v == NULL_TREE)
    {
      cl_v = build_expr_wfl (NULL_TREE, NULL, 0, 0);
    }

  EXPR_WFL_FILENAME_NODE (cl_v) = get_identifier (DECL_SOURCE_FILE (decl));
  EXPR_WFL_SET_LINECOL (cl_v, DECL_SOURCE_LINE (decl), -1);

  line = java_get_line_col (EXPR_WFL_FILENAME (cl_v),
			    EXPR_WFL_LINENO (cl_v), EXPR_WFL_COLNO (cl_v));

  found = strstr ((const char *)line,
		  (const char *)IDENTIFIER_POINTER (DECL_NAME (decl)));
  if (found)
    EXPR_WFL_SET_LINECOL (cl_v, EXPR_WFL_LINENO (cl_v), found - line);

  return cl_v;
}

/* Look for a simple name in the single-type import list */

static tree
find_name_in_single_imports (tree name)
{
  tree node;

  for (node = ctxp->import_list; node; node = TREE_CHAIN (node))
    if (TREE_VALUE (node) == name)
      return (EXPR_WFL_NODE (TREE_PURPOSE (node)));

  return NULL_TREE;
}

/* Process all single-type import. */

static int
process_imports (void)
{
  tree import;
  int error_found;

  for (import = ctxp->import_list; import; import = TREE_CHAIN (import))
    {
      tree to_be_found = EXPR_WFL_NODE (TREE_PURPOSE (import));
      char *original_name;

      original_name = xmemdup (IDENTIFIER_POINTER (to_be_found),
			       IDENTIFIER_LENGTH (to_be_found),
			       IDENTIFIER_LENGTH (to_be_found) + 1);

      /* Don't load twice something already defined. */
      if (IDENTIFIER_CLASS_VALUE (to_be_found))
	continue;

      while (1)
	{
	  tree left;

	  QUALIFIED_P (to_be_found) = 1;
	  load_class (to_be_found, 0);
	  error_found =
	    check_pkg_class_access (to_be_found, TREE_PURPOSE (import), true);

	  /* We found it, we can bail out */
	  if (IDENTIFIER_CLASS_VALUE (to_be_found))
	    {
	      check_deprecation (TREE_PURPOSE (import),
				 IDENTIFIER_CLASS_VALUE (to_be_found));
	      break;
	    }

	  /* We haven't found it. Maybe we're trying to access an
	     inner class.  The only way for us to know is to try again
	     after having dropped a qualifier. If we can't break it further,
	     we have an error. */
	  if (breakdown_qualified (&left, NULL, to_be_found))
	    break;

	  to_be_found = left;
	}
      if (!IDENTIFIER_CLASS_VALUE (to_be_found))
	{
	  parse_error_context (TREE_PURPOSE (import),
			       "Class or interface `%s' not found in import",
			       original_name);
	  error_found = 1;
	}

      free (original_name);
      if (error_found)
	return 1;
    }
  return 0;
}

/* Possibly find and mark a class imported by a single-type import
   statement.  */

static void
find_in_imports (tree enclosing_type, tree class_type)
{
  tree import = (enclosing_type ? TYPE_IMPORT_LIST (enclosing_type) :
		 ctxp->import_list);
  while (import)
    {
      if (TREE_VALUE (import) == TYPE_NAME (class_type))
	{
	  TYPE_NAME (class_type) = EXPR_WFL_NODE (TREE_PURPOSE (import));
	  QUALIFIED_P (TYPE_NAME (class_type)) = 1;
	  return;
	}
      import = TREE_CHAIN (import);
    }
}

static int
note_possible_classname (const char *name, int len)
{
  tree node;
  if (len > 5 && strncmp (&name [len-5], ".java", 5) == 0)
    len = len - 5;
  else if (len > 6 && strncmp (&name [len-6], ".class", 6) == 0)
    len = len - 6;
  else
    return 0;
  node = ident_subst (name, len, "", '/', '.', "");
  IS_A_CLASSFILE_NAME (node) = 1; /* Or soon to be */
  QUALIFIED_P (node) = strchr (name, '/') ? 1 : 0;
  return 1;
}

/* Read a import directory, gathering potential match for further type
   references. Indifferently reads a filesystem or a ZIP archive
   directory.  */

static void
read_import_dir (tree wfl)
{
  tree package_id = EXPR_WFL_NODE (wfl);
  const char *package_name = IDENTIFIER_POINTER (package_id);
  int package_length = IDENTIFIER_LENGTH (package_id);
  DIR *dirp = NULL;
  JCF *saved_jcf = current_jcf;

  int found = 0;
  int k;
  void *entry;
  struct buffer filename[1];

  if (IS_AN_IMPORT_ON_DEMAND_P (package_id))
    return;
  IS_AN_IMPORT_ON_DEMAND_P (package_id) = 1;

  BUFFER_INIT (filename);
  buffer_grow (filename, package_length + 100);

  for (entry = jcf_path_start (); entry != NULL; entry = jcf_path_next (entry))
    {
      const char *entry_name = jcf_path_name (entry);
      int entry_length = strlen (entry_name);
      if (jcf_path_is_zipfile (entry))
	{
	  ZipFile *zipf;
	  buffer_grow (filename, entry_length);
	  memcpy (filename->data, entry_name, entry_length - 1);
	  filename->data[entry_length-1] = '\0';
	  zipf = opendir_in_zip (filename->data, jcf_path_is_system (entry));
	  if (zipf == NULL)
	    error ("malformed .zip archive in CLASSPATH: %s", entry_name);
	  else
	    {
	      ZipDirectory *zipd = (ZipDirectory *) zipf->central_directory;
	      BUFFER_RESET (filename);
	      for (k = 0; k < package_length; k++)
		{
		  char ch = package_name[k];
		  *filename->ptr++ = ch == '.' ? '/' : ch;
		}
	      *filename->ptr++ = '/';

	      for (k = 0; k < zipf->count;  k++, zipd = ZIPDIR_NEXT (zipd))
		{
		  const char *current_entry = ZIPDIR_FILENAME (zipd);
		  int current_entry_len = zipd->filename_length;

		  if (current_entry_len >= BUFFER_LENGTH (filename)
		      && strncmp (filename->data, current_entry,
				  BUFFER_LENGTH (filename)) != 0)
		    continue;
		  found |= note_possible_classname (current_entry,
						    current_entry_len);
		}
	    }
	}
      else
	{
	  BUFFER_RESET (filename);
	  buffer_grow (filename, entry_length + package_length + 4);
	  strcpy (filename->data, entry_name);
	  filename->ptr = filename->data + entry_length;
	  for (k = 0; k < package_length; k++)
	    {
	      char ch = package_name[k];
	      *filename->ptr++ = ch == '.' ? '/' : ch;
	    }
	  *filename->ptr = '\0';

	  dirp = opendir (filename->data);
	  if (dirp == NULL)
	    continue;
	  *filename->ptr++ = '/';
	  for (;;)
	    {
	      int len;
	      const char *d_name;
	      struct dirent *direntp = readdir (dirp);
	      if (!direntp)
		break;
	      d_name = direntp->d_name;
	      len = strlen (direntp->d_name);
	      buffer_grow (filename, len+1);
	      strcpy (filename->ptr, d_name);
	      found |= note_possible_classname (filename->data + entry_length,
						package_length+len+1);
	    }
	  if (dirp)
	    closedir (dirp);
	}
    }

  free (filename->data);

  /* Here we should have a unified way of retrieving an entry, to be
     indexed. */
  if (!found)
    {
      static int first = 1;
      if (first)
	{
	  error ("Can't find default package `%s'. Check the CLASSPATH environment variable and the access to the archives", package_name);
	  java_error_count++;
	  first = 0;
	}
      else
	parse_error_context (wfl, "Package `%s' not found in import",
			     package_name);
      current_jcf = saved_jcf;
      return;
    }
  current_jcf = saved_jcf;
}

/* Possibly find a type in the import on demands specified
   types. Returns 1 if an error occurred, 0 otherwise. Run through the
   entire list, to detected potential double definitions.  */

static int
find_in_imports_on_demand (tree enclosing_type, tree class_type)
{
  tree class_type_name = TYPE_NAME (class_type);
  tree import = (enclosing_type ? TYPE_IMPORT_DEMAND_LIST (enclosing_type) :
		  ctxp->import_demand_list);
  tree cl = NULL_TREE;
  int seen_once = -1;	/* -1 when not set, 1 if seen once, >1 otherwise. */
  int to_return = -1;	/* -1 when not set, 0 or 1 otherwise */
  tree node;

  for (; import; import = TREE_CHAIN (import))
    {
      int saved_lineno = input_line;
      int access_check;
      const char *id_name;
      tree decl, type_name_copy;

      obstack_grow (&temporary_obstack,
		    IDENTIFIER_POINTER (EXPR_WFL_NODE (TREE_PURPOSE (import))),
		    IDENTIFIER_LENGTH (EXPR_WFL_NODE (TREE_PURPOSE (import))));
      obstack_1grow (&temporary_obstack, '.');
      obstack_grow0 (&temporary_obstack,
		     IDENTIFIER_POINTER (class_type_name),
		     IDENTIFIER_LENGTH (class_type_name));
      id_name = obstack_finish (&temporary_obstack);

      if (! (node = maybe_get_identifier (id_name)))
	continue;

      /* Setup lineno so that it refers to the line of the import (in
	 case we parse a class file and encounter errors */
      input_line = EXPR_WFL_LINENO (TREE_PURPOSE (import));

      type_name_copy = TYPE_NAME (class_type);
      TYPE_NAME (class_type) = node;
      QUALIFIED_P (node) = 1;
      decl = IDENTIFIER_CLASS_VALUE (node);
      access_check = -1;
      /* If there is no DECL set for the class or if the class isn't
	 loaded and not seen in source yet, then load */
      if (!decl || (!CLASS_LOADED_P (TREE_TYPE (decl))
		    && !CLASS_FROM_SOURCE_P (TREE_TYPE (decl))))
	{
	  load_class (node, 0);
	  decl = IDENTIFIER_CLASS_VALUE (node);
	}
      if (decl && ! INNER_CLASS_P (TREE_TYPE (decl)))
	access_check = check_pkg_class_access (node, TREE_PURPOSE (import),
					       false);
      else
	/* 6.6.1: Inner classes are subject to member access rules. */
	access_check = 0;

      input_line = saved_lineno;

      /* If the loaded class is not accessible or couldn't be loaded,
	 we restore the original TYPE_NAME and process the next
	 import. */
      if (access_check || !decl)
	{
	  TYPE_NAME (class_type) = type_name_copy;
	  continue;
	}

      /* If the loaded class is accessible, we keep a tab on it to
	 detect and report multiple inclusions. */
      if (IS_A_CLASSFILE_NAME (node))
	{
	  if (seen_once < 0)
	    {
	      cl = TREE_PURPOSE (import);
	      seen_once = 1;
	    }
	  else if (seen_once >= 0)
	    {
	      tree location = (cl ? cl : TREE_PURPOSE (import));
	      tree package = (cl ? EXPR_WFL_NODE (cl) :
			      EXPR_WFL_NODE (TREE_PURPOSE (import)));
	      seen_once++;
	      parse_error_context
		(location,
		 "Type `%s' also potentially defined in package `%s'",
		 IDENTIFIER_POINTER (TYPE_NAME (class_type)),
		 IDENTIFIER_POINTER (package));
	    }
	}
      to_return = access_check;
    }

  if (seen_once == 1)
    return to_return;
  else
    return (seen_once < 0 ? 0 : seen_once); /* It's ok not to have found */
}

/* Add package NAME to the list of packages encountered so far. To
   speed up class lookup in do_resolve_class, we make sure a
   particular package is added only once.  */

static void
register_package (tree name)
{
  static htab_t pht;
  void **e;

  if (pht == NULL)
    pht = htab_create (50, htab_hash_pointer, htab_eq_pointer, NULL);

  e = htab_find_slot (pht, name, INSERT);
  if (*e == NULL)
    {
      package_list = chainon (package_list, build_tree_list (name, NULL));
      *e = name;
    }
}

static tree
resolve_package (tree pkg, tree *next, tree *type_name)
{
  tree current;
  tree decl = NULL_TREE;
  *type_name = NULL_TREE;

  /* The trick is to determine when the package name stops and were
     the name of something contained in the package starts. Then we
     return a fully qualified name of what we want to get. */

  *next = EXPR_WFL_QUALIFICATION (pkg);

  /* Try to progressively construct a type name */
  if (TREE_CODE (pkg) == EXPR_WITH_FILE_LOCATION)
    for (current = EXPR_WFL_QUALIFICATION (pkg);
	 current; current = TREE_CHAIN (current))
      {
	/* If we don't have what we're expecting, exit now. TYPE_NAME
	   will be null and the error caught later. */
	if (TREE_CODE (QUAL_WFL (current)) != EXPR_WITH_FILE_LOCATION)
	  break;
	*type_name =
	  merge_qualified_name (*type_name, EXPR_WFL_NODE (QUAL_WFL (current)));
	if ((decl = resolve_no_layout (*type_name, NULL_TREE)))
	  {
	    /* resolve_package should be used in a loop, hence we
	       point at this one to naturally process the next one at
	       the next iteration. */
	    *next = current;
	    break;
	  }
      }
  return decl;
}


/* Check accessibility of inner classes according to member access rules.
   DECL is the inner class, ENCLOSING_DECL is the class from which the
   access is being attempted. */

static void
check_inner_class_access (tree decl, tree enclosing_decl, tree cl)
{
  const char *access;
  tree enclosing_decl_type;

  /* We don't issue an error message when CL is null. CL can be null
     as a result of processing a JDEP crafted by source_start_java_method
     for the purpose of patching its parm decl. But the error would
     have been already trapped when fixing the method's signature.
     DECL can also be NULL in case of earlier errors. */
  if (!decl || !cl)
    return;

  enclosing_decl_type = TREE_TYPE (enclosing_decl);

  if (CLASS_PRIVATE (decl))
    {
      /* Access is permitted only within the body of the top-level
         class in which DECL is declared. */
      tree top_level = decl;
      while (DECL_CONTEXT (top_level))
        top_level = DECL_CONTEXT (top_level);
      while (DECL_CONTEXT (enclosing_decl))
        enclosing_decl = DECL_CONTEXT (enclosing_decl);
      if (top_level == enclosing_decl)
        return;
      access = "private";
    }
  else if (CLASS_PROTECTED (decl))
    {
      tree decl_context;
      /* Access is permitted from within the same package... */
      if (in_same_package (decl, enclosing_decl))
        return;

      /* ... or from within the body of a subtype of the context in which
         DECL is declared. */
      decl_context = DECL_CONTEXT (decl);
      while (enclosing_decl)
        {
	  if (CLASS_INTERFACE (decl))
	    {
	      if (interface_of_p (TREE_TYPE (decl_context),
				  enclosing_decl_type))
		return;
	    }
	  else
	    {
	      /* Eww. The order of the arguments is different!! */
	      if (inherits_from_p (enclosing_decl_type,
				   TREE_TYPE (decl_context)))
		return;
	    }
	  enclosing_decl = DECL_CONTEXT (enclosing_decl);
	}
      access = "protected";
    }
  else if (! CLASS_PUBLIC (decl))
    {
      /* Access is permitted only from within the same package as DECL. */
      if (in_same_package (decl, enclosing_decl))
        return;
      access = "non-public";
    }
  else
    /* Class is public. */
    return;

  parse_error_context (cl, "Nested %s %s is %s; cannot be accessed from here",
		       (CLASS_INTERFACE (decl) ? "interface" : "class"),
		       lang_printable_name (decl, 0), access);
}

/* Accessibility check for top-level classes. If CLASS_NAME is in a
   foreign package, it must be PUBLIC. Return 0 if no access
   violations were found, 1 otherwise. If VERBOSE is true and an error
   was found, it is reported and accounted for.  */

static int
check_pkg_class_access (tree class_name, tree cl, bool verbose)
{
  tree type;

  if (!IDENTIFIER_CLASS_VALUE (class_name))
    return 0;

  if (!(type = TREE_TYPE (IDENTIFIER_CLASS_VALUE (class_name))))
    return 0;

  if (!CLASS_PUBLIC (TYPE_NAME (type)))
    {
      /* Access to a private class within the same package is
         allowed. */
      tree l, r;
      breakdown_qualified (&l, &r, class_name);
      if (!QUALIFIED_P (class_name) && !ctxp->package)
	/* Both in the empty package. */
        return 0;
      if (l == ctxp->package)
	/* Both in the same package. */
	return 0;

      if (verbose)
	parse_error_context
	  (cl, "Can't access %s `%s'. Only public classes and interfaces in other packages can be accessed",
	   (CLASS_INTERFACE (TYPE_NAME (type)) ? "interface" : "class"),
	   IDENTIFIER_POINTER (class_name));
      return 1;
    }
  return 0;
}

/* Local variable declaration. */

static void
declare_local_variables (int modifier, tree type, tree vlist)
{
  tree decl, current, saved_type;
  tree type_wfl = NULL_TREE;
  int must_chain = 0;
  int final_p = 0;

  /* Push a new block if statements were seen between the last time we
     pushed a block and now. Keep a count of blocks to close */
  if (BLOCK_EXPR_BODY (GET_CURRENT_BLOCK (current_function_decl)))
    {
      tree b = enter_block ();
      BLOCK_IS_IMPLICIT (b) = 1;
    }

  if (modifier)
    {
      size_t i;
      for (i = 0; i < ARRAY_SIZE (ctxp->modifier_ctx); i++)
	if (1 << i & modifier)
	  break;
      if (modifier == ACC_FINAL)
	final_p = 1;
      else
	{
	  parse_error_context
	    (ctxp->modifier_ctx [i],
	     "Only `final' is allowed as a local variables modifier");
	  return;
	}
    }

  /* Obtain an incomplete type if TYPE is not complete. TYPE_WFL will
     hold the TYPE value if a new incomplete has to be created (as
     opposed to being found already existing and reused). */
  SET_TYPE_FOR_RESOLUTION (type, type_wfl, must_chain);

  /* If TYPE is fully resolved and we don't have a reference, make one */
  PROMOTE_RECORD_IF_COMPLETE (type, must_chain);

  /* Go through all the declared variables */
  for (current = vlist, saved_type = type; current;
       current = TREE_CHAIN (current), type = saved_type)
    {
      tree other, real_type;
      tree wfl  = TREE_PURPOSE (current);
      tree name = EXPR_WFL_NODE (wfl);
      tree init = TREE_VALUE (current);

      /* Process NAME, as it may specify extra dimension(s) for it */
      type = build_array_from_name (type, type_wfl, name, &name);

      /* Variable redefinition check */
      if ((other = lookup_name_in_blocks (name)))
	{
	  variable_redefinition_error (wfl, name, TREE_TYPE (other),
				       DECL_SOURCE_LINE (other));
	  continue;
	}

      /* Type adjustment. We may have just readjusted TYPE because
	 the variable specified more dimensions. Make sure we have
	 a reference if we can and don't have one already. */
      PROMOTE_RECORD_IF_COMPLETE (type, must_chain);

      real_type = GET_REAL_TYPE (type);
      /* Never layout this decl. This will be done when its scope
	 will be entered */
      decl = build_decl (VAR_DECL, name, real_type);
      MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (decl);
      DECL_FINAL (decl) = final_p;
      BLOCK_CHAIN_DECL (decl);

      /* If doing xreferencing, replace the line number with the WFL
         compound value */
      if (flag_emit_xref)
	DECL_SOURCE_LINE (decl) = EXPR_WFL_LINECOL (wfl);

      /* Don't try to use an INIT statement when an error was found */
      if (init && java_error_count)
	init = NULL_TREE;

      /* Add the initialization function to the current function's code */
      if (init)
	{
	  /* Name might have been readjusted */
	  EXPR_WFL_NODE (TREE_OPERAND (init, 0)) = name;
	  MODIFY_EXPR_FROM_INITIALIZATION_P (init) = 1;
	  java_method_add_stmt (current_function_decl,
				build_debugable_stmt (EXPR_WFL_LINECOL (init),
						      init));
	}

      /* Setup dependency the type of the decl */
      if (must_chain)
	{
	  jdep *dep;
	  register_incomplete_type (JDEP_VARIABLE, type_wfl, decl, type);
	  dep = CLASSD_LAST (ctxp->classd_list);
	  JDEP_GET_PATCH (dep) = &TREE_TYPE (decl);
	}
    }
  SOURCE_FRONTEND_DEBUG (("Defined locals"));
}

/* Called during parsing. Build decls from argument list.  */

static void
source_start_java_method (tree fndecl)
{
  tree tem;
  tree parm_decl;
  int i;

  if (!fndecl)
    return;

  current_function_decl = fndecl;

  /* New scope for the function */
  enter_block ();
  for (tem = TYPE_ARG_TYPES (TREE_TYPE (fndecl)), i = 0;
       tem != end_params_node; tem = TREE_CHAIN (tem), i++)
    {
      tree type = TREE_VALUE (tem);
      tree name = TREE_PURPOSE (tem);

      /* If type is incomplete. Create an incomplete decl and ask for
	 the decl to be patched later */
      if (INCOMPLETE_TYPE_P (type))
	{
	  jdep *jdep;
	  tree real_type = GET_REAL_TYPE (type);
	  parm_decl = build_decl (PARM_DECL, name, real_type);
	  type = obtain_incomplete_type (type);
	  register_incomplete_type (JDEP_PARM, NULL_TREE, NULL_TREE, type);
	  jdep = CLASSD_LAST (ctxp->classd_list);
	  JDEP_MISC (jdep) = name;
	  JDEP_GET_PATCH (jdep) = &TREE_TYPE (parm_decl);
	}
      else
	parm_decl = build_decl (PARM_DECL, name, type);

      /* Remember if a local variable was declared final (via its
         TREE_LIST of type/name.) Set DECL_FINAL accordingly. */
      if (ARG_FINAL_P (tem))
	{
	  MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (parm_decl);
	  DECL_FINAL (parm_decl) = 1;
	}

      BLOCK_CHAIN_DECL (parm_decl);
    }
  tem = BLOCK_EXPR_DECLS (DECL_FUNCTION_BODY (current_function_decl));
  BLOCK_EXPR_DECLS (DECL_FUNCTION_BODY (current_function_decl)) =
    nreverse (tem);
  DECL_ARG_SLOT_COUNT (current_function_decl) = i;
  DECL_MAX_LOCALS (current_function_decl) = i;
}

/* Called during parsing. Creates an artificial method declaration.  */

static tree
create_artificial_method (tree class, int flags, tree type,
			  tree name, tree args)
{
  tree mdecl;

  java_parser_context_save_global ();
  input_line = 0;
  mdecl = make_node (FUNCTION_TYPE);
  TREE_TYPE (mdecl) = type;
  TYPE_ARG_TYPES (mdecl) = args;
  mdecl = add_method (class, flags, name, build_java_signature (mdecl));
  java_parser_context_restore_global ();
  DECL_ARTIFICIAL (mdecl) = 1;
  return mdecl;
}

/* Starts the body if an artificial method.  */

static void
start_artificial_method_body (tree mdecl)
{
  DECL_SOURCE_LINE (mdecl) = 1;
  DECL_FUNCTION_LAST_LINE (mdecl) = 1;
  source_start_java_method (mdecl);
  enter_block ();
}

static void
end_artificial_method_body (tree mdecl)
{
  /* exit_block modifies DECL_FUNCTION_BODY (current_function_decl).
     It has to be evaluated first. (if mdecl is current_function_decl,
     we have an undefined behavior if no temporary variable is used.) */
  tree b = exit_block ();
  BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (mdecl)) = b;
  exit_block ();
}

/* Dump a tree of some kind.  This is a convenience wrapper for the
   dump_* functions in tree-dump.c.  */
static void
dump_java_tree (enum tree_dump_index phase, tree t)
{
  FILE *stream;
  int flags;

  stream = dump_begin (phase, &flags);
  flags |= TDF_SLIM;
  if (stream)
    {
      dump_node (t, flags, stream);
      dump_end (phase, stream);
    }
}

/* Terminate a function and expand its body.  */

static void
source_end_java_method (void)
{
  tree fndecl = current_function_decl;

  if (!fndecl)
    return;

  java_parser_context_save_global ();
  input_line = ctxp->last_ccb_indent1;

  /* Turn function bodies with only a NOP expr null, so they don't get
     generated at all and we won't get warnings when using the -W
     -Wall flags. */
  if (BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (fndecl)) == empty_stmt_node)
    BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (fndecl)) = NULL_TREE;

  /* We've generated all the trees for this function, and it has been
     patched.  Dump it to a file if the user requested it.  */
  dump_java_tree (TDI_original, fndecl);

  /* Defer expanding the method until cgraph analysis is complete.  */
  if (DECL_SAVED_TREE (fndecl))
    cgraph_finalize_function (fndecl, false);

  current_function_decl = NULL_TREE;
  java_parser_context_restore_global ();
}

/* Record EXPR in the current function block. Complements compound
   expression second operand if necessary.  */

tree
java_method_add_stmt (tree fndecl, tree expr)
{
  if (!GET_CURRENT_BLOCK (fndecl))
    return NULL_TREE;
  return add_stmt_to_block (GET_CURRENT_BLOCK (fndecl), NULL_TREE, expr);
}

static tree
add_stmt_to_block (tree b, tree type, tree stmt)
{
  tree body = BLOCK_EXPR_BODY (b), c;

  if (java_error_count)
    return body;

  if ((c = add_stmt_to_compound (body, type, stmt)) == body)
    return body;

  BLOCK_EXPR_BODY (b) = c;
  TREE_SIDE_EFFECTS (c) = 1;
  return c;
}

/* Add STMT to EXISTING if possible, otherwise create a new
   COMPOUND_EXPR and add STMT to it. */

static tree
add_stmt_to_compound (tree existing, tree type, tree stmt)
{
  if (existing)
    return build (COMPOUND_EXPR, type, existing, stmt);
  else
    return stmt;
}

void java_layout_seen_class_methods (void)
{
  tree previous_list = all_class_list;
  tree end = NULL_TREE;
  tree current;

  while (1)
    {
      for (current = previous_list;
	   current != end; current = TREE_CHAIN (current))
	layout_class_methods (TREE_TYPE (TREE_VALUE (current)));

      if (previous_list != all_class_list)
	{
	  end = previous_list;
	  previous_list = all_class_list;
	}
      else
	break;
    }
}

static GTY(()) tree stop_reordering;
void
java_reorder_fields (void)
{
  tree current;

  for (current = gclass_list; current; current = TREE_CHAIN (current))
    {
      output_class = current_class = TREE_TYPE (TREE_VALUE (current));

      if (current_class == stop_reordering)
	break;

      /* Reverse the fields, but leave the dummy field in front.
	 Fields are already ordered for Object and Class */
      if (TYPE_FIELDS (current_class) && current_class != object_type_node
	  && current_class != class_type_node)
      {
	/* If the dummy field is there, reverse the right fields and
	   just layout the type for proper fields offset */
	if (!DECL_NAME (TYPE_FIELDS (current_class)))
	  {
	    tree fields = TYPE_FIELDS (current_class);
	    TREE_CHAIN (fields) = nreverse (TREE_CHAIN (fields));
	    TYPE_SIZE (current_class) = NULL_TREE;
	  }
	/* We don't have a dummy field, we need to layout the class,
           after having reversed the fields */
	else
	  {
	    TYPE_FIELDS (current_class) =
	      nreverse (TYPE_FIELDS (current_class));
	    TYPE_SIZE (current_class) = NULL_TREE;
	  }
      }
    }
  /* There are cases were gclass_list will be empty. */
  if (gclass_list)
    stop_reordering = TREE_TYPE (TREE_VALUE (gclass_list));
}

/* Layout the methods of all classes loaded in one way or another.
   Check methods of source parsed classes. Then reorder the
   fields and layout the classes or the type of all source parsed
   classes */

void
java_layout_classes (void)
{
  tree current;
  int save_error_count = java_error_count;

  /* Layout the methods of all classes seen so far */
  java_layout_seen_class_methods ();
  java_parse_abort_on_error ();
  all_class_list = NULL_TREE;

  /* Then check the methods of all parsed classes */
  for (current = gclass_list; current; current = TREE_CHAIN (current))
    if (CLASS_FROM_SOURCE_P (TREE_TYPE (TREE_VALUE (current))))
      java_check_methods (TREE_VALUE (current));
  java_parse_abort_on_error ();

  for (current = gclass_list; current; current = TREE_CHAIN (current))
    {
      output_class = current_class = TREE_TYPE (TREE_VALUE (current));
      layout_class (current_class);

      /* Error reported by the caller */
      if (java_error_count)
	return;
    }

  /* We might have reloaded classes durign the process of laying out
     classes for code generation. We must layout the methods of those
     late additions, as constructor checks might use them */
  java_layout_seen_class_methods ();
  java_parse_abort_on_error ();
}

/* Expand methods in the current set of classes remembered for
   generation.  */

static void
java_complete_expand_classes (void)
{
  tree current;

  do_not_fold = flag_emit_xref;

  for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
    if (!INNER_CLASS_DECL_P (current))
      java_complete_expand_class (current);
}

/* Expand the methods found in OUTER, starting first by OUTER's inner
   classes, if any.  */

static void
java_complete_expand_class (tree outer)
{
  tree inner_list;

  set_nested_class_simple_name_value (outer, 1); /* Set */

  /* We need to go after all inner classes and start expanding them,
     starting with most nested ones. We have to do that because nested
     classes might add functions to outer classes */

  for (inner_list = DECL_INNER_CLASS_LIST (outer);
       inner_list; inner_list = TREE_CHAIN (inner_list))
    java_complete_expand_class (TREE_PURPOSE (inner_list));

  java_complete_expand_methods (outer);
  set_nested_class_simple_name_value (outer, 0); /* Reset */
}

/* Expand methods registered in CLASS_DECL. The general idea is that
   we expand regular methods first. This allows us get an estimate on
   how outer context local alias fields are really used so we can add
   to the constructor just enough code to initialize them properly (it
   also lets us generate finit$ correctly.) Then we expand the
   constructors and then <clinit>.  */

static void
java_complete_expand_methods (tree class_decl)
{
  tree clinit, decl, first_decl;

  output_class = current_class = TREE_TYPE (class_decl);

  /* Pre-expand <clinit> to figure whether we really need it or
     not. If we do need it, we pre-expand the static fields so they're
     ready to be used somewhere else. <clinit> will be fully expanded
     after we processed the constructors. */
  first_decl = TYPE_METHODS (current_class);
  clinit = maybe_generate_pre_expand_clinit (current_class);

  /* Then generate finit$ (if we need to) because constructors will
   try to use it.*/
  if (TYPE_FINIT_STMT_LIST (current_class))
    java_complete_expand_method (generate_finit (current_class));

  /* Then generate instinit$ (if we need to) because constructors will
     try to use it. */
  if (TYPE_II_STMT_LIST (current_class))
    java_complete_expand_method (generate_instinit (current_class));

  /* Now do the constructors */
  for (decl = first_decl ; !java_error_count && decl; decl = TREE_CHAIN (decl))
    {
      int no_body;

      if (!DECL_CONSTRUCTOR_P (decl))
	continue;

      no_body = !DECL_FUNCTION_BODY (decl);
      /* Don't generate debug info on line zero when expanding a
	 generated constructor. */
      if (no_body)
	restore_line_number_status (1);

      java_complete_expand_method (decl);

      if (no_body)
	restore_line_number_status (0);
    }

  /* First, do the ordinary methods. */
  for (decl = first_decl; decl; decl = TREE_CHAIN (decl))
    {
      /* Ctors aren't part of this batch. */
      if (DECL_CONSTRUCTOR_P (decl) || DECL_CLINIT_P (decl))
	continue;

      /* Skip abstract or native methods -- but do handle native
 	 methods when generating JNI stubs.  */
      if (METHOD_ABSTRACT (decl) || (! flag_jni && METHOD_NATIVE (decl)))
	{
	  DECL_FUNCTION_BODY (decl) = NULL_TREE;
	  continue;
	}

      if (METHOD_NATIVE (decl))
 	{
 	  tree body;
	  current_function_decl = decl;
	  body = build_jni_stub (decl);
 	  BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (decl)) = body;
 	}

      java_complete_expand_method (decl);
    }

  /* If there is indeed a <clinit>, fully expand it now */
  if (clinit)
    {
      /* Prevent the use of `this' inside <clinit> */
      ctxp->explicit_constructor_p = 1;
      java_complete_expand_method (clinit);
      ctxp->explicit_constructor_p = 0;
    }

  /* We might have generated a class$ that we now want to expand */
  if (TYPE_DOT_CLASS (current_class))
    java_complete_expand_method (TYPE_DOT_CLASS (current_class));

  /* Now verify constructor circularity (stop after the first one we
     prove wrong.) */
  if (!CLASS_INTERFACE (class_decl))
    for (decl = TYPE_METHODS (current_class); decl; decl = TREE_CHAIN (decl))
      if (DECL_CONSTRUCTOR_P (decl)
	  && verify_constructor_circularity (decl, decl))
	break;
}

/* Attempt to create <clinit>. Pre-expand static fields so they can be
   safely used in some other methods/constructors.  */

static tree
maybe_generate_pre_expand_clinit (tree class_type)
{
  tree current, mdecl;

  if (!TYPE_CLINIT_STMT_LIST (class_type))
    return NULL_TREE;

  /* Go through all static fields and pre expand them */
  for (current = TYPE_FIELDS (class_type); current;
       current = TREE_CHAIN (current))
    if (FIELD_STATIC (current))
      build_field_ref (NULL_TREE, class_type, DECL_NAME (current));

  /* Then build the <clinit> method */
  mdecl = create_artificial_method (class_type, ACC_STATIC, void_type_node,
				    clinit_identifier_node, end_params_node);
  layout_class_method (class_type, CLASSTYPE_SUPER (class_type),
		       mdecl, NULL_TREE);
  start_artificial_method_body (mdecl);

  /* We process the list of assignment we produced as the result of
     the declaration of initialized static field and add them as
     statement to the <clinit> method. */
  for (current = TYPE_CLINIT_STMT_LIST (class_type); current;
       current = TREE_CHAIN (current))
    {
      tree stmt = current;
      /* We build the assignment expression that will initialize the
	 field to its value. There are strict rules on static
	 initializers (8.5). FIXME */
      if (TREE_CODE (stmt) != BLOCK && stmt != empty_stmt_node)
	stmt = build_debugable_stmt (EXPR_WFL_LINECOL (stmt), stmt);
      java_method_add_stmt (mdecl, stmt);
    }

  end_artificial_method_body (mdecl);

  /* Now we want to place <clinit> as the last method (because we need
     it at least for interface so that it doesn't interfere with the
     dispatch table based lookup. */
  if (TREE_CHAIN (TYPE_METHODS (class_type)))
    {
      current = TREE_CHAIN (TYPE_METHODS (class_type));
      TYPE_METHODS (class_type) = current;

      while (TREE_CHAIN (current))
	current = TREE_CHAIN (current);

      TREE_CHAIN (current) = mdecl;
      TREE_CHAIN (mdecl) = NULL_TREE;
    }

  return mdecl;
}

/* Analyzes a method body and look for something that isn't a
   MODIFY_EXPR with a constant value.  */

static int
analyze_clinit_body (tree this_class, tree bbody)
{
  while (bbody)
    switch (TREE_CODE (bbody))
      {
      case BLOCK:
	bbody = BLOCK_EXPR_BODY (bbody);
	break;

      case EXPR_WITH_FILE_LOCATION:
	bbody = EXPR_WFL_NODE (bbody);
	break;

      case COMPOUND_EXPR:
	if (analyze_clinit_body (this_class, TREE_OPERAND (bbody, 0)))
	  return 1;
	bbody = TREE_OPERAND (bbody, 1);
	break;

      case MODIFY_EXPR:
	/* If we're generating to class file and we're dealing with an
	   array initialization, we return 1 to keep <clinit> */
	if (TREE_CODE (TREE_OPERAND (bbody, 1)) == NEW_ARRAY_INIT
	    && flag_emit_class_files)
	  return 1;

	/* There are a few cases where we're required to keep
	   <clinit>:
	   - If this is an assignment whose operand is not constant,
	   - If this is an assignment to a non-initialized field,
	   - If this field is not a member of the current class.
	*/
	return (! TREE_CONSTANT (TREE_OPERAND (bbody, 1))
		|| ! DECL_INITIAL (TREE_OPERAND (bbody, 0))
		|| DECL_CONTEXT (TREE_OPERAND (bbody, 0)) != this_class);

      default:
	return 1;
      }
  return 0;
}


/* See whether we could get rid of <clinit>. Criteria are: all static
   final fields have constant initial values and the body of <clinit>
   is empty. Return 1 if <clinit> was discarded, 0 otherwise. */

static int
maybe_yank_clinit (tree mdecl)
{
  tree type, current;
  tree fbody, bbody;

  if (!DECL_CLINIT_P (mdecl))
    return 0;

  /* If the body isn't empty, then we keep <clinit>. Note that if
     we're emitting classfiles, this isn't enough not to rule it
     out. */
  fbody = DECL_FUNCTION_BODY (mdecl);
  bbody = BLOCK_EXPR_BODY (fbody);
  if (bbody && bbody != error_mark_node)
    bbody = BLOCK_EXPR_BODY (bbody);
  else
    return 0;
  if (bbody && ! flag_emit_class_files && bbody != empty_stmt_node)
    return 0;

  type = DECL_CONTEXT (mdecl);
  current = TYPE_FIELDS (type);

  for (current = (current ? TREE_CHAIN (current) : current);
       current; current = TREE_CHAIN (current))
    {
      tree f_init;

      /* We're not interested in non-static fields.  */
      if (!FIELD_STATIC (current))
	continue;

      /* Nor in fields without initializers. */
      f_init = DECL_INITIAL (current);
      if (f_init == NULL_TREE)
	continue;

      /* Anything that isn't String or a basic type is ruled out -- or
	 if we know how to deal with it (when doing things natively) we
	 should generated an empty <clinit> so that SUID are computed
	 correctly. */
      if (! JSTRING_TYPE_P (TREE_TYPE (current))
	  && ! JNUMERIC_TYPE_P (TREE_TYPE (current)))
	return 0;

      if (! FIELD_FINAL (current) || ! TREE_CONSTANT (f_init))
	return 0;
    }

  /* Now we analyze the method body and look for something that
     isn't a MODIFY_EXPR */
  if (bbody != empty_stmt_node && analyze_clinit_body (type, bbody))
    return 0;

  /* Get rid of <clinit> in the class' list of methods */
  if (TYPE_METHODS (type) == mdecl)
    TYPE_METHODS (type) = TREE_CHAIN (mdecl);
  else
    for (current = TYPE_METHODS (type); current;
	 current = TREE_CHAIN (current))
      if (TREE_CHAIN (current) == mdecl)
	{
	  TREE_CHAIN (current) = TREE_CHAIN (mdecl);
	  break;
	}

  return 1;
}

/* Install the argument from MDECL. Suitable to completion and
   expansion of mdecl's body.  */

void
start_complete_expand_method (tree mdecl)
{
  tree tem;

  pushlevel (1);		/* Prepare for a parameter push */
  tem = BLOCK_EXPR_DECLS (DECL_FUNCTION_BODY (current_function_decl));
  DECL_ARGUMENTS (mdecl) = tem;

  for (; tem; tem = TREE_CHAIN (tem))
    {
      /* TREE_CHAIN (tem) will change after pushdecl. */
      tree next = TREE_CHAIN (tem);
      tree type = TREE_TYPE (tem);
      if (PROMOTE_PROTOTYPES
	  && TYPE_PRECISION (type) < TYPE_PRECISION (integer_type_node)
	  && INTEGRAL_TYPE_P (type))
	type = integer_type_node;
      DECL_ARG_TYPE (tem) = type;
      layout_decl (tem, 0);
      pushdecl (tem);
      /* Re-install the next so that the list is kept and the loop
	 advances. */
      TREE_CHAIN (tem) = next;
    }
  pushdecl_force_head (DECL_ARGUMENTS (mdecl));
  input_line = DECL_SOURCE_LINE (mdecl);
  build_result_decl (mdecl);
}


/* Complete and expand a method.  */

static void
java_complete_expand_method (tree mdecl)
{
  tree fbody, block_body, exception_copy;

  current_function_decl = mdecl;
  /* Fix constructors before expanding them */
  if (DECL_CONSTRUCTOR_P (mdecl))
    fix_constructors (mdecl);

  /* Expand functions that have a body */
  if (!DECL_FUNCTION_BODY (mdecl))
    return;

  fbody = DECL_FUNCTION_BODY (mdecl);
  block_body = BLOCK_EXPR_BODY (fbody);
  exception_copy = NULL_TREE;

  current_function_decl = mdecl;

  if (! quiet_flag)
    fprintf (stderr, " [%s.",
	     lang_printable_name (DECL_CONTEXT (mdecl), 0));
  announce_function (mdecl);
  if (! quiet_flag)
    fprintf (stderr, "]");

  /* Prepare the function for tree completion */
  start_complete_expand_method (mdecl);

  /* Install the current this */
  current_this = (!METHOD_STATIC (mdecl) ?
		  BLOCK_EXPR_DECLS (DECL_FUNCTION_BODY (mdecl)) : NULL_TREE);

  /* Purge the `throws' list of unchecked exceptions (we save a copy
     of the list and re-install it later.) */
  exception_copy = copy_list (DECL_FUNCTION_THROWS (mdecl));
  purge_unchecked_exceptions (mdecl);

  /* Install exceptions thrown with `throws' */
  PUSH_EXCEPTIONS (DECL_FUNCTION_THROWS (mdecl));

  if (block_body != NULL_TREE)
    {
      block_body = java_complete_tree (block_body);

      /* Before we check initialization, attached all class initialization
	 variable to the block_body */
      htab_traverse (DECL_FUNCTION_INIT_TEST_TABLE (mdecl),
		     attach_init_test_initialization_flags, block_body);

      if (! flag_emit_xref && ! METHOD_NATIVE (mdecl))
	{
	  check_for_initialization (block_body, mdecl);

	  /* Go through all the flags marking the initialization of
	     static variables and see whether they're definitively
	     assigned, in which case the type is remembered as
	     definitively initialized in MDECL. */
	  if (STATIC_CLASS_INIT_OPT_P ())
	    {
	      /* Always register the context as properly initialized in
		 MDECL. This used with caution helps removing extra
		 initialization of self. */
	      if (METHOD_STATIC (mdecl))
		{
		  *(htab_find_slot
		    (DECL_FUNCTION_INITIALIZED_CLASS_TABLE (mdecl),
		     DECL_CONTEXT (mdecl), INSERT)) = DECL_CONTEXT (mdecl);
		}
	    }
	}
      ctxp->explicit_constructor_p = 0;
    }

  BLOCK_EXPR_BODY (fbody) = block_body;

  /* If we saw a return but couldn't evaluate it properly, we'll have
     an error_mark_node here. */
  if (block_body != error_mark_node
      && (block_body == NULL_TREE || CAN_COMPLETE_NORMALLY (block_body))
      && TREE_CODE (TREE_TYPE (TREE_TYPE (mdecl))) != VOID_TYPE
      && !flag_emit_xref)
    missing_return_error (current_function_decl);

  /* See if we can get rid of <clinit> if MDECL happens to be <clinit> */
  maybe_yank_clinit (mdecl);

  /* Pop the current level, with special measures if we found errors. */
  if (java_error_count)
    pushdecl_force_head (DECL_ARGUMENTS (mdecl));
  poplevel (1, 0, 1);

  /* Pop the exceptions and sanity check */
  POP_EXCEPTIONS();
  if (currently_caught_type_list)
    abort ();

  /* Restore the copy of the list of exceptions if emitting xrefs. */
  DECL_FUNCTION_THROWS (mdecl) = exception_copy;
}

/* For with each class for which there's code to generate. */

static void
java_expand_method_bodies (tree class)
{
  tree decl;
  for (decl = TYPE_METHODS (class); decl; decl = TREE_CHAIN (decl))
    {
      tree block;
      tree body;

      if (! DECL_FUNCTION_BODY (decl))
	continue;

      current_function_decl = decl;

      block = BLOCK_EXPR_BODY (DECL_FUNCTION_BODY (decl));

      if (TREE_CODE (block) != BLOCK)
	abort ();

      /* Save the function body for inlining.  */
      DECL_SAVED_TREE (decl) = block;

      body = BLOCK_EXPR_BODY (block);

      if (TREE_TYPE (body) == NULL_TREE)
	abort ();

      /* It's time to assign the variable flagging static class
	 initialization based on which classes invoked static methods
	 are definitely initializing. This should be flagged. */
      if (STATIC_CLASS_INIT_OPT_P ())
	{
	  tree list = DECL_FUNCTION_STATIC_METHOD_INVOCATION_COMPOUND (decl);
	  for (; list != NULL_TREE;  list = TREE_CHAIN (list))
	    {
	      /* Executed for each statement calling a static function.
		 LIST is a TREE_LIST whose PURPOSE is the called function
		 and VALUE is a compound whose second operand can be patched
		 with static class initialization flag assignments.  */

	      tree called_method = TREE_PURPOSE (list);
	      tree compound = TREE_VALUE (list);
	      tree assignment_compound_list
		= build_tree_list (called_method, NULL);

	      /* For each class definitely initialized in
		 CALLED_METHOD, fill ASSIGNMENT_COMPOUND with
		 assignment to the class initialization flag. */
	      htab_traverse (DECL_FUNCTION_INITIALIZED_CLASS_TABLE (called_method),
			     emit_test_initialization,
			     assignment_compound_list);

	      if (TREE_VALUE (assignment_compound_list))
		TREE_OPERAND (compound, 1)
		  = TREE_VALUE (assignment_compound_list);
	    }
	}

      /* Prepend class initialization to static methods.  */
      if (METHOD_STATIC (decl) && ! METHOD_PRIVATE (decl)
	  && ! flag_emit_class_files
	  && ! DECL_CLINIT_P (decl)
	  && ! CLASS_INTERFACE (TYPE_NAME (class)))
	{
	  tree init = build (CALL_EXPR, void_type_node,
			     build_address_of (soft_initclass_node),
			     build_tree_list (NULL_TREE,
					      build_class_ref (class)),
			     NULL_TREE);
	  TREE_SIDE_EFFECTS (init) = 1;
	  body = build (COMPOUND_EXPR, TREE_TYPE (body), init, body);
	  BLOCK_EXPR_BODY (block) = body;
	}

      /* Wrap synchronized method bodies in a monitorenter
	 plus monitorexit cleanup.  */
      if (METHOD_SYNCHRONIZED (decl) && ! flag_emit_class_files)
	{
	  tree enter, exit, lock;
	  if (METHOD_STATIC (decl))
	    lock = build_class_ref (class);
	  else
	    lock = DECL_ARGUMENTS (decl);
	  BUILD_MONITOR_ENTER (enter, lock);
	  BUILD_MONITOR_EXIT (exit, lock);

	  body = build (COMPOUND_EXPR, void_type_node,
			enter,
			build (TRY_FINALLY_EXPR, void_type_node, body, exit));
	  BLOCK_EXPR_BODY (block) = body;
	}

      /* Expand the the function body.  */
      source_end_java_method ();
    }
}



/* This section of the code deals with accessing enclosing context
   fields either directly by using the relevant access to this$<n> or
   by invoking an access method crafted for that purpose.  */

/* Build the necessary access from an inner class to an outer
   class. This routine could be optimized to cache previous result
   (decl, current_class and returned access).  When an access method
   needs to be generated, it always takes the form of a read. It might
   be later turned into a write by calling outer_field_access_fix.  */

static tree
build_outer_field_access (tree id, tree decl)
{
  tree access = NULL_TREE;
  tree ctx = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (current_class)));
  tree decl_ctx = DECL_CONTEXT (decl);

  /* If the immediate enclosing context of the current class is the
     field decl's class or inherits from it; build the access as
     `this$<n>.<field>'. Note that we will break the `private' barrier
     if we're not emitting bytecodes. */
  if ((ctx == decl_ctx || inherits_from_p (ctx, decl_ctx))
      && (!FIELD_PRIVATE (decl) || !flag_emit_class_files ))
    {
      tree thisn = build_current_thisn (current_class);
      access = make_qualified_primary (build_wfl_node (thisn),
				       id, EXPR_WFL_LINECOL (id));
    }
  /* Otherwise, generate access methods to outer this and access the
     field (either using an access method or by direct access.) */
  else
    {
      int lc = EXPR_WFL_LINECOL (id);

      /* Now we chain the required number of calls to the access$0 to
	 get a hold to the enclosing instance we need, and then we
	 build the field access. */
      access = build_access_to_thisn (current_class, decl_ctx, lc);

      /* If the field is private and we're generating bytecode, then
         we generate an access method */
      if (FIELD_PRIVATE (decl) && flag_emit_class_files )
	{
	  tree name = build_outer_field_access_methods (decl);
	  access = build_outer_field_access_expr (lc, decl_ctx,
						  name, access, NULL_TREE);
	}
      /* Otherwise we use `access$(this$<j>). ... access$(this$<i>).<field>'.
	 Once again we break the `private' access rule from a foreign
	 class. */
      else
	access = make_qualified_primary (access, id, lc);
    }
  return resolve_expression_name (access, NULL);
}

/* Return a nonzero value if NODE describes an outer field inner
   access.  */

static int
outer_field_access_p (tree type, tree decl)
{
  if (!INNER_CLASS_TYPE_P (type)
      || TREE_CODE (decl) != FIELD_DECL
      || DECL_CONTEXT (decl) == type)
    return 0;

  /* If the inner class extends the declaration context of the field
     we're trying to access, then this isn't an outer field access */
  if (inherits_from_p (type, DECL_CONTEXT (decl)))
    return 0;

  for (type = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (type))); ;
       type = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (type))))
    {
      if (type == DECL_CONTEXT (decl))
	return 1;

      if (!DECL_CONTEXT (TYPE_NAME (type)))
	{
	  /* Before we give up, see whether the field is inherited from
	     the enclosing context we're considering. */
	  if (inherits_from_p (type, DECL_CONTEXT (decl)))
	    return 1;
	  break;
	}
    }

  return 0;
}

/* Return a nonzero value if NODE represents an outer field inner
   access that was been already expanded. As a side effect, it returns
   the name of the field being accessed and the argument passed to the
   access function, suitable for a regeneration of the access method
   call if necessary. */

static int
outer_field_expanded_access_p (tree node, tree *name, tree *arg_type,
			       tree *arg)
{
  int identified = 0;

  if (TREE_CODE (node) != CALL_EXPR)
    return 0;

  /* Well, gcj generates slightly different tree nodes when compiling
     to native or bytecodes. It's the case for function calls. */

  if (flag_emit_class_files
      && TREE_CODE (node) == CALL_EXPR
      && OUTER_FIELD_ACCESS_IDENTIFIER_P (DECL_NAME (TREE_OPERAND (node, 0))))
    identified = 1;
  else if (!flag_emit_class_files)
    {
      node = TREE_OPERAND (node, 0);

      if (node && TREE_OPERAND (node, 0)
	  && TREE_CODE (TREE_OPERAND (node, 0)) == ADDR_EXPR)
	{
	  node = TREE_OPERAND (node, 0);
	  if (TREE_OPERAND (node, 0)
	      && TREE_CODE (TREE_OPERAND (node, 0)) == FUNCTION_DECL
	      && (OUTER_FIELD_ACCESS_IDENTIFIER_P
		  (DECL_NAME (TREE_OPERAND (node, 0)))))
	    identified = 1;
	}
    }

  if (identified && name && arg_type && arg)
    {
      tree argument = TREE_OPERAND (node, 1);
      *name = DECL_NAME (TREE_OPERAND (node, 0));
      *arg_type = TREE_TYPE (TREE_TYPE (TREE_VALUE (argument)));
      *arg = TREE_VALUE (argument);
    }
  return identified;
}

/* Detect in NODE an outer field read access from an inner class and
   transform it into a write with RHS as an argument. This function is
   called from the java_complete_lhs when an assignment to a LHS can
   be identified. */

static tree
outer_field_access_fix (tree wfl, tree node, tree rhs)
{
  tree name, arg_type, arg;

  if (outer_field_expanded_access_p (node, &name, &arg_type, &arg))
    {
      node = build_outer_field_access_expr (EXPR_WFL_LINECOL (wfl),
					    arg_type, name, arg, rhs);
      return java_complete_tree (node);
    }
  return NULL_TREE;
}

/* Construct the expression that calls an access method:
     <type>.access$<n>(<arg1> [, <arg2>]);

   ARG2 can be NULL and will be omitted in that case. It will denote a
   read access.  */

static tree
build_outer_field_access_expr (int lc, tree type, tree access_method_name,
			       tree arg1, tree arg2)
{
  tree args, cn, access;

  args = arg1 ? arg1 :
    build_wfl_node (build_current_thisn (current_class));
  args = build_tree_list (NULL_TREE, args);

  if (arg2)
    args = tree_cons (NULL_TREE, arg2, args);

  access = build_method_invocation (build_wfl_node (access_method_name), args);
  cn = build_wfl_node (DECL_NAME (TYPE_NAME (type)));
  return make_qualified_primary (cn, access, lc);
}

static tree
build_new_access_id (void)
{
  static int access_n_counter = 1;
  char buffer [128];

  sprintf (buffer, "access$%d", access_n_counter++);
  return get_identifier (buffer);
}

/* Create the static access functions for the outer field DECL. We define a
   read:
     TREE_TYPE (<field>) access$<n> (DECL_CONTEXT (<field>) inst$) {
       return inst$.field;
     }
   and a write access:
     TREE_TYPE (<field>) access$<n> (DECL_CONTEXT (<field>) inst$,
                                     TREE_TYPE (<field>) value$) {
       return inst$.field = value$;
     }
   We should have a usage flags on the DECL so we can lazily turn the ones
   we're using for code generation. FIXME.
*/

static tree
build_outer_field_access_methods (tree decl)
{
  tree id, args, stmt, mdecl;

  if (FIELD_INNER_ACCESS_P (decl))
    return FIELD_INNER_ACCESS (decl);

  MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (decl);

  /* Create the identifier and a function named after it. */
  id = build_new_access_id ();

  /* The identifier is marked as bearing the name of a generated write
     access function for outer field accessed from inner classes. */
  OUTER_FIELD_ACCESS_IDENTIFIER_P (id) = 1;

  /* Create the read access */
  args = build_tree_list (inst_id, build_pointer_type (DECL_CONTEXT (decl)));
  TREE_CHAIN (args) = end_params_node;
  stmt = make_qualified_primary (build_wfl_node (inst_id),
				 build_wfl_node (DECL_NAME (decl)), 0);
  stmt = build_return (0, stmt);
  mdecl = build_outer_field_access_method (DECL_CONTEXT (decl),
					   TREE_TYPE (decl), id, args, stmt);
  DECL_FUNCTION_ACCESS_DECL (mdecl) = decl;

  /* Create the write access method. No write access for final variable */
  if (!FIELD_FINAL (decl))
    {
      args = build_tree_list (inst_id,
			      build_pointer_type (DECL_CONTEXT (decl)));
      TREE_CHAIN (args) = build_tree_list (wpv_id, TREE_TYPE (decl));
      TREE_CHAIN (TREE_CHAIN (args)) = end_params_node;
      stmt = make_qualified_primary (build_wfl_node (inst_id),
				     build_wfl_node (DECL_NAME (decl)), 0);
      stmt = build_return (0, build_assignment (ASSIGN_TK, 0, stmt,
						build_wfl_node (wpv_id)));
      mdecl = build_outer_field_access_method (DECL_CONTEXT (decl),
					       TREE_TYPE (decl), id,
					       args, stmt);
    }
  DECL_FUNCTION_ACCESS_DECL (mdecl) = decl;

  /* Return the access name */
  return FIELD_INNER_ACCESS (decl) = id;
}

/* Build an field access method NAME.  */

static tree
build_outer_field_access_method (tree class, tree type, tree name,
				 tree args, tree body)
{
  tree saved_current_function_decl, mdecl;

  /* Create the method */
  mdecl = create_artificial_method (class, ACC_STATIC, type, name, args);
  fix_method_argument_names (args, mdecl);
  layout_class_method (class, NULL_TREE, mdecl, NULL_TREE);

  /* Attach the method body. */
  saved_current_function_decl = current_function_decl;
  start_artificial_method_body (mdecl);
  java_method_add_stmt (mdecl, body);
  end_artificial_method_body (mdecl);
  current_function_decl = saved_current_function_decl;

  return mdecl;
}


/* This section deals with building access function necessary for
   certain kinds of method invocation from inner classes.  */

static tree
build_outer_method_access_method (tree decl)
{
  tree saved_current_function_decl, mdecl;
  tree args = NULL_TREE, call_args = NULL_TREE;
  tree carg, id, body, class;
  char buffer [80];
  int parm_id_count = 0;

  /* Test this abort with an access to a private field */
  if (!strcmp (IDENTIFIER_POINTER (DECL_NAME (decl)), "access$"))
    abort ();

  /* Check the cache first */
  if (DECL_FUNCTION_INNER_ACCESS (decl))
    return DECL_FUNCTION_INNER_ACCESS (decl);

  class = DECL_CONTEXT (decl);

  /* Obtain an access identifier and mark it */
  id = build_new_access_id ();
  OUTER_FIELD_ACCESS_IDENTIFIER_P (id) = 1;

  carg = TYPE_ARG_TYPES (TREE_TYPE (decl));
  /* Create the arguments, as much as the original */
  for (; carg && carg != end_params_node;
       carg = TREE_CHAIN (carg))
    {
      sprintf (buffer, "write_parm_value$%d", parm_id_count++);
      args = chainon (args, build_tree_list (get_identifier (buffer),
					     TREE_VALUE (carg)));
    }
  args = chainon (args, end_params_node);

  /* Create the method */
  mdecl = create_artificial_method (class, ACC_STATIC,
				    TREE_TYPE (TREE_TYPE (decl)), id, args);
  layout_class_method (class, NULL_TREE, mdecl, NULL_TREE);
  /* There is a potential bug here. We should be able to use
     fix_method_argument_names, but then arg names get mixed up and
     eventually a constructor will have its this$0 altered and the
     outer context won't be assignment properly. The testcase is
     stub.java FIXME */
  TYPE_ARG_TYPES (TREE_TYPE (mdecl)) = args;

  /* Attach the method body. */
  saved_current_function_decl = current_function_decl;
  start_artificial_method_body (mdecl);

  /* The actual method invocation uses the same args. When invoking a
     static methods that way, we don't want to skip the first
     argument. */
  carg = args;
  if (!METHOD_STATIC (decl))
    carg = TREE_CHAIN (carg);
  for (; carg && carg != end_params_node; carg = TREE_CHAIN (carg))
    call_args = tree_cons (NULL_TREE, build_wfl_node (TREE_PURPOSE (carg)),
			   call_args);

  body = build_method_invocation (build_wfl_node (DECL_NAME (decl)),
				  call_args);
  if (!METHOD_STATIC (decl))
    body = make_qualified_primary (build_wfl_node (TREE_PURPOSE (args)),
				   body, 0);
  if (TREE_TYPE (TREE_TYPE (decl)) != void_type_node)
    body = build_return (0, body);
  java_method_add_stmt (mdecl,body);
  end_artificial_method_body (mdecl);
  current_function_decl = saved_current_function_decl;

  /* Back tag the access function so it know what it accesses */
  DECL_FUNCTION_ACCESS_DECL (decl) = mdecl;

  /* Tag the current method so it knows it has an access generated */
  return DECL_FUNCTION_INNER_ACCESS (decl) = mdecl;
}


/* This section of the code deals with building expressions to access
   the enclosing instance of an inner class. The enclosing instance is
   kept in a generated field called this$<n>, with <n> being the
   inner class nesting level (starting from 0.)  */

/* Build an access to a given this$<n>, always chaining access call to
   others. Access methods to this$<n> are build on the fly if
   necessary. This CAN'T be used to solely access this$<n-1> from
   this$<n> (which alway yield to special cases and optimization, see
   for example build_outer_field_access).  */

static tree
build_access_to_thisn (tree from, tree to, int lc)
{
  tree access = NULL_TREE;

  while (from != to && PURE_INNER_CLASS_TYPE_P (from))
    {
      if (!access)
        {
          access = build_current_thisn (from);
          access = build_wfl_node (access);
        }
      else
	{
	  tree access0_wfl, cn;

	  maybe_build_thisn_access_method (from);
	  access0_wfl = build_wfl_node (access0_identifier_node);
	  cn = build_wfl_node (DECL_NAME (TYPE_NAME (from)));
	  EXPR_WFL_LINECOL (access0_wfl) = lc;
	  access = build_tree_list (NULL_TREE, access);
	  access = build_method_invocation (access0_wfl, access);
	  access = make_qualified_primary (cn, access, lc);
	}

      /* If FROM isn't an inner class, that's fine, we've done enough.
         What we're looking for can be accessed from there.  */
      from = DECL_CONTEXT (TYPE_NAME (from));
      if (!from)
	break;
      from = TREE_TYPE (from);
    }
  return access;
}

/* Build an access function to the this$<n> local to TYPE. NULL_TREE
   is returned if nothing needs to be generated. Otherwise, the method
   generated and a method decl is returned.

   NOTE: These generated methods should be declared in a class file
   attribute so that they can't be referred to directly.  */

static tree
maybe_build_thisn_access_method (tree type)
{
  tree mdecl, args, stmt, rtype;
  tree saved_current_function_decl;

  /* If TYPE is a top-level class, no access method is required.
     If there already is such an access method, bail out. */
  if (CLASS_ACCESS0_GENERATED_P (type) || !PURE_INNER_CLASS_TYPE_P (type))
    return NULL_TREE;

  /* We generate the method. The method looks like:
     static <outer_of_type> access$0 (<type> inst$) { return inst$.this$<n>; }
  */
  args = build_tree_list (inst_id, build_pointer_type (type));
  TREE_CHAIN (args) = end_params_node;
  rtype = build_pointer_type (TREE_TYPE (DECL_CONTEXT (TYPE_NAME (type))));
  mdecl = create_artificial_method (type, ACC_STATIC, rtype,
				    access0_identifier_node, args);
  fix_method_argument_names (args, mdecl);
  layout_class_method (type, NULL_TREE, mdecl, NULL_TREE);
  stmt = build_current_thisn (type);
  stmt = make_qualified_primary (build_wfl_node (inst_id),
				 build_wfl_node (stmt), 0);
  stmt = build_return (0, stmt);

  saved_current_function_decl = current_function_decl;
  start_artificial_method_body (mdecl);
  java_method_add_stmt (mdecl, stmt);
  end_artificial_method_body (mdecl);
  current_function_decl = saved_current_function_decl;

  CLASS_ACCESS0_GENERATED_P (type) = 1;

  return mdecl;
}

/* Craft an correctly numbered `this$<n>'string. this$0 is used for
   the first level of innerclassing. this$1 for the next one, etc...
   This function can be invoked with TYPE to NULL, available and then
   has to count the parser context.  */

static GTY(()) tree saved_thisn;
static GTY(()) tree saved_type;

static tree
build_current_thisn (tree type)
{
  static int saved_i = -1;
  static int saved_type_i = 0;
  tree decl;
  char buffer [24];
  int i = 0;

  if (type)
    {
      if (type == saved_type)
	i = saved_type_i;
      else
	{
	  for (i = -1, decl = DECL_CONTEXT (TYPE_NAME (type));
	       decl; decl = DECL_CONTEXT (decl), i++)
	    ;

	  saved_type = type;
	  saved_type_i = i;
	}
    }
  else
    i = list_length (GET_CPC_LIST ())-2;

  if (i == saved_i)
    return saved_thisn;

  sprintf (buffer, "this$%d", i);
  saved_i = i;
  saved_thisn = get_identifier (buffer);
  return saved_thisn;
}

/* Return the assignment to the hidden enclosing context `this$<n>'
   by the second incoming parameter to the innerclass constructor. The
   form used is `this.this$<n> = this$<n>;'.  */

static tree
build_thisn_assign (void)
{
  if (current_class && PURE_INNER_CLASS_TYPE_P (current_class))
    {
      tree thisn = build_current_thisn (current_class);
      tree lhs = make_qualified_primary (build_wfl_node (this_identifier_node),
					 build_wfl_node (thisn), 0);
      tree rhs = build_wfl_node (thisn);
      EXPR_WFL_SET_LINECOL (lhs, input_line, 0);
      return build_assignment (ASSIGN_TK, EXPR_WFL_LINECOL (lhs), lhs, rhs);
    }
  return NULL_TREE;
}


/* Building the synthetic `class$' used to implement the `.class' 1.1
   extension for non primitive types. This method looks like:

    static Class class$(String type) throws NoClassDefFoundError
    {
      try {return (java.lang.Class.forName (String));}
      catch (ClassNotFoundException e) {
        throw new NoClassDefFoundError(e.getMessage());}
    } */

static GTY(()) tree get_message_wfl;
static GTY(()) tree type_parm_wfl;

static tree
build_dot_class_method (tree class)
{
#define BWF(S) build_wfl_node (get_identifier ((S)))
#define MQN(X,Y) make_qualified_name ((X), (Y), 0)
  tree args, tmp, saved_current_function_decl, mdecl, qual_name;
  tree stmt, throw_stmt;

  if (!get_message_wfl)
    {
      get_message_wfl = build_wfl_node (get_identifier ("getMessage"));
      type_parm_wfl = build_wfl_node (get_identifier ("type$"));
    }

  /* Build the arguments */
  args = build_tree_list (get_identifier ("type$"),
			  build_pointer_type (string_type_node));
  TREE_CHAIN (args) = end_params_node;

  /* Build the qualified name java.lang.Class.forName */
  tmp = MQN (MQN (MQN (BWF ("java"),
		       BWF ("lang")), BWF ("Class")), BWF ("forName"));

  /* Create the "class$" function */
  mdecl = create_artificial_method (class, ACC_STATIC,
				    build_pointer_type (class_type_node),
				    classdollar_identifier_node, args);
  qual_name = MQN (MQN (BWF ("java"), BWF ("lang")),
		   BWF ("NoClassDefFoundError"));
  DECL_FUNCTION_THROWS (mdecl) = build_tree_list (NULL_TREE, qual_name);
  register_incomplete_type (JDEP_EXCEPTION, qual_name, NULL_TREE, NULL_TREE);
  JDEP_GET_PATCH (CLASSD_LAST (ctxp->classd_list)) =
    &TREE_VALUE (DECL_FUNCTION_THROWS (mdecl));

  /* We start by building the try block. We need to build:
       return (java.lang.Class.forName (type)); */
  stmt = build_method_invocation (tmp,
				  build_tree_list (NULL_TREE, type_parm_wfl));
  stmt = build_return (0, stmt);

  /* Now onto the catch block. We start by building the expression
     throwing a new exception: throw new NoClassDefFoundError (_.getMessage) */
  throw_stmt = make_qualified_name (build_wfl_node (wpv_id),
				    get_message_wfl, 0);
  throw_stmt = build_method_invocation (throw_stmt, NULL_TREE);

  /* Build new NoClassDefFoundError (_.getMessage) */
  throw_stmt = build_new_invocation
    (build_wfl_node (get_identifier ("NoClassDefFoundError")),
     build_tree_list (build_pointer_type (string_type_node), throw_stmt));

  /* Build the throw, (it's too early to use BUILD_THROW) */
  throw_stmt = build1 (THROW_EXPR, NULL_TREE, throw_stmt);

  /* Encapsulate STMT in a try block. The catch clause executes THROW_STMT */
  qual_name = MQN (MQN (BWF ("java"), BWF ("lang")),
		   BWF ("ClassNotFoundException"));
  stmt = encapsulate_with_try_catch (0, qual_name, stmt, throw_stmt);

  fix_method_argument_names (args, mdecl);
  layout_class_method (class, NULL_TREE, mdecl, NULL_TREE);
  saved_current_function_decl = current_function_decl;
  start_artificial_method_body (mdecl);
  java_method_add_stmt (mdecl, stmt);
  end_artificial_method_body (mdecl);
  current_function_decl = saved_current_function_decl;
  TYPE_DOT_CLASS (class) = mdecl;

  return mdecl;
}

static tree
build_dot_class_method_invocation (tree this_class, tree type)
{
  tree dot_class_method = TYPE_DOT_CLASS (this_class);
  tree sig_id, s, t;

  if (TYPE_ARRAY_P (type))
    sig_id = build_java_signature (type);
  else
    sig_id = DECL_NAME (TYPE_NAME (type));

  /* Ensure that the proper name separator is used */
  sig_id = unmangle_classname (IDENTIFIER_POINTER (sig_id),
			       IDENTIFIER_LENGTH (sig_id));

  s = build_string (IDENTIFIER_LENGTH (sig_id),
		    IDENTIFIER_POINTER (sig_id));
  t = build_method_invocation (build_wfl_node (DECL_NAME (dot_class_method)),
			       build_tree_list (NULL_TREE, s));
  if (DECL_CONTEXT (dot_class_method) != this_class)
    {
      tree class_name = DECL_NAME (TYPE_NAME (DECL_CONTEXT (dot_class_method)));
      t = make_qualified_primary (build_wfl_node (class_name), t, 0);
    }
  return t;
}

/* This section of the code deals with constructor.  */

/* Craft a body for default constructor. Patch existing constructor
   bodies with call to super() and field initialization statements if
   necessary.  */

static void
fix_constructors (tree mdecl)
{
  tree iii;			/* Instance Initializer Invocation */
  tree body = DECL_FUNCTION_BODY (mdecl);
  tree thisn_assign, compound = NULL_TREE;
  tree class_type = DECL_CONTEXT (mdecl);

  if (DECL_FIXED_CONSTRUCTOR_P (mdecl))
    return;
  DECL_FIXED_CONSTRUCTOR_P (mdecl) = 1;

  if (!body)
    {
      /* It is an error for the compiler to generate a default
	 constructor if the superclass doesn't have a constructor that
	 takes no argument, or the same args for an anonymous class */
      if (verify_constructor_super (mdecl))
	{
	  tree sclass_decl = TYPE_NAME (CLASSTYPE_SUPER (class_type));
	  tree save = DECL_NAME (mdecl);
	  const char *n = IDENTIFIER_POINTER (DECL_NAME (sclass_decl));
	  DECL_NAME (mdecl) = DECL_NAME (sclass_decl);
	  parse_error_context
	    (lookup_cl (TYPE_NAME (class_type)),
	     "No constructor matching `%s' found in class `%s'",
	     lang_printable_name (mdecl, 0), n);
	  DECL_NAME (mdecl) = save;
	}

      /* The constructor body must be crafted by hand. It's the
	 constructor we defined when we realize we didn't have the
	 CLASSNAME() constructor */
      start_artificial_method_body (mdecl);

      /* Insert an assignment to the this$<n> hidden field, if
         necessary */
      if ((thisn_assign = build_thisn_assign ()))
	java_method_add_stmt (mdecl, thisn_assign);

      /* We don't generate a super constructor invocation if we're
	 compiling java.lang.Object. build_super_invocation takes care
	 of that. */
      java_method_add_stmt (mdecl, build_super_invocation (mdecl));

      /* FIXME */
      if ((iii = build_instinit_invocation (class_type)))
	java_method_add_stmt (mdecl, iii);

      end_artificial_method_body (mdecl);
    }
  /* Search for an explicit constructor invocation */
  else
    {
      int found = 0;
      int invokes_this = 0;
      tree found_call = NULL_TREE;
      tree main_block = BLOCK_EXPR_BODY (body);

      while (body)
	switch (TREE_CODE (body))
	  {
	  case CALL_EXPR:
	    found = CALL_EXPLICIT_CONSTRUCTOR_P (body);
	    if (CALL_THIS_CONSTRUCTOR_P (body))
	      invokes_this = 1;
	    body = NULL_TREE;
	    break;
	  case COMPOUND_EXPR:
	  case EXPR_WITH_FILE_LOCATION:
	    found_call = body;
	    body = TREE_OPERAND (body, 0);
	    break;
	  case BLOCK:
	    found_call = body;
	    body = BLOCK_EXPR_BODY (body);
	    break;
	  default:
	    found = 0;
	    body = NULL_TREE;
	  }

      /* Generate the assignment to this$<n>, if necessary */
      if ((thisn_assign = build_thisn_assign ()))
        compound = add_stmt_to_compound (compound, NULL_TREE, thisn_assign);

      /* The constructor is missing an invocation of super() */
      if (!found)
	compound = add_stmt_to_compound (compound, NULL_TREE,
                                         build_super_invocation (mdecl));
      /* Explicit super() invocation should take place before the
         instance initializer blocks. */
      else
	{
	  compound = add_stmt_to_compound (compound, NULL_TREE,
					   TREE_OPERAND (found_call, 0));
	  TREE_OPERAND (found_call, 0) = empty_stmt_node;
	}

      DECL_INIT_CALLS_THIS (mdecl) = invokes_this;

      /* Insert the instance initializer block right after. */
      if (!invokes_this && (iii = build_instinit_invocation (class_type)))
	compound = add_stmt_to_compound (compound, NULL_TREE, iii);

      /* Fix the constructor main block if we're adding extra stmts */
      if (compound)
	{
	  compound = add_stmt_to_compound (compound, NULL_TREE,
					   BLOCK_EXPR_BODY (main_block));
	  BLOCK_EXPR_BODY (main_block) = compound;
	}
    }
}

/* Browse constructors in the super class, searching for a constructor
   that doesn't take any argument. Return 0 if one is found, 1
   otherwise.  If the current class is an anonymous inner class, look
   for something that has the same signature. */

static int
verify_constructor_super (tree mdecl)
{
  tree class = CLASSTYPE_SUPER (current_class);
  int super_inner = PURE_INNER_CLASS_TYPE_P (class);
  tree sdecl;

  if (!class)
    return 0;

  if (ANONYMOUS_CLASS_P (current_class))
    {
      tree mdecl_arg_type;
      SKIP_THIS_AND_ARTIFICIAL_PARMS (mdecl_arg_type, mdecl);
      for (sdecl = TYPE_METHODS (class); sdecl; sdecl = TREE_CHAIN (sdecl))
	if (DECL_CONSTRUCTOR_P (sdecl))
	  {
	    tree m_arg_type;
	    tree arg_type = TREE_CHAIN (TYPE_ARG_TYPES (TREE_TYPE (sdecl)));
	    if (super_inner)
	      arg_type = TREE_CHAIN (arg_type);
	    for (m_arg_type = mdecl_arg_type;
		 (arg_type != end_params_node
		  && m_arg_type != end_params_node);
		 arg_type = TREE_CHAIN (arg_type),
		   m_arg_type = TREE_CHAIN (m_arg_type))
	      if (!valid_method_invocation_conversion_p
		     (TREE_VALUE (arg_type),
		      TREE_VALUE (m_arg_type)))
		break;

	    if (arg_type == end_params_node && m_arg_type == end_params_node)
	      return 0;
	  }
    }
  else
    {
      for (sdecl = TYPE_METHODS (class); sdecl; sdecl = TREE_CHAIN (sdecl))
	{
	  tree arg = TREE_CHAIN (TYPE_ARG_TYPES (TREE_TYPE (sdecl)));
	  if (super_inner)
	    arg = TREE_CHAIN (arg);
	  if (DECL_CONSTRUCTOR_P (sdecl) && arg == end_params_node)
	    return 0;
	}
    }
  return 1;
}

/* Generate code for all context remembered for code generation.  */

static GTY(()) tree reversed_class_list;
void
java_expand_classes (void)
{
  int save_error_count = 0;
  static struct parser_ctxt *cur_ctxp = NULL;

  java_parse_abort_on_error ();
  if (!(ctxp = ctxp_for_generation))
    return;
  java_layout_classes ();
  java_parse_abort_on_error ();

  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      for (current = cur_ctxp->class_list; 
	   current; 
	   current = TREE_CHAIN (current))
	gen_indirect_dispatch_tables (TREE_TYPE (current));
    }
  
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      ctxp = cur_ctxp;
      input_filename = ctxp->filename;
      lang_init_source (2);	       /* Error msgs have method prototypes */
      java_complete_expand_classes (); /* Complete and expand classes */
      java_parse_abort_on_error ();
    }
  input_filename = main_input_filename;

  /* Find anonymous classes and expand their constructor. This extra pass is
     necessary because the constructor itself is only generated when the
     method in which it is defined is expanded. */
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      ctxp = cur_ctxp;
      for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
	{
	  output_class = current_class = TREE_TYPE (current);
	  if (ANONYMOUS_CLASS_P (current_class))
	    {
	      tree d;
	      for (d = TYPE_METHODS (current_class); d; d = TREE_CHAIN (d))
		{
		  if (DECL_CONSTRUCTOR_P (d))
		    {
		      restore_line_number_status (1);
		      java_complete_expand_method (d);
		      restore_line_number_status (0);
		      break;	/* There is only one constructor. */
		    }
		}
	    }
	}
    }

  /* Expanding the constructors of anonymous classes generates access
     methods.  Scan all the methods looking for null DECL_RESULTs --
     this will be the case if a method hasn't been expanded.  */
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      ctxp = cur_ctxp;
      for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
	{
	  tree d;
	  output_class = current_class = TREE_TYPE (current);
	  for (d = TYPE_METHODS (current_class); d; d = TREE_CHAIN (d))
	    {
	      if (DECL_RESULT (d) == NULL_TREE)
		{
		  restore_line_number_status (1);
		  java_complete_expand_method (d);
		  restore_line_number_status (0);
		}
	    }
	}
    }

  /* ???  Instead of all this we could iterate around the list of
     classes until there were no more un-expanded methods.  It would
     take a little longer -- one pass over the whole list of methods
     -- but it would be simpler.  Like this:  */
#if 0
    {
      int something_changed;
    
      do
	{
	  something_changed = 0;
	  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
	    {
	      tree current;
	      ctxp = cur_ctxp;
	      for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
		{
		  tree d;
		  output_class = current_class = TREE_TYPE (current);
		  for (d = TYPE_METHODS (current_class); d; d = TREE_CHAIN (d))
		    {
		      if (DECL_RESULT (d) == NULL_TREE)
			{
			  something_changed = 1;
			  restore_line_number_status (1);
			  java_complete_expand_method (d);
			  restore_line_number_status (0);
			}
		    }
		}
	    }
	}
      while (something_changed);
    }
#endif

  /* If we've found error at that stage, don't try to generate
     anything, unless we're emitting xrefs or checking the syntax only
     (but not using -fsyntax-only for the purpose of generating
     bytecode. */
  if (java_error_count && !flag_emit_xref
      && (!flag_syntax_only && !flag_emit_class_files))
    return;

  /* Now things are stable, go for generation of the class data. */

  /* We pessimistically marked all methods and fields external until
     we knew what set of classes we were planning to compile.  Now mark
     those that will be generated locally as not external.  */
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      ctxp = cur_ctxp;
      for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
	java_mark_class_local (TREE_TYPE (current));
    }

  /* Compile the classes.  */
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      reversed_class_list = NULL;

      ctxp = cur_ctxp;

      /* We write out the classes in reverse order.  This ensures that
	 inner classes are written before their containing classes,
	 which is important for parallel builds.  Otherwise, the
	 class file for the outer class may be found, but the class
	 file for the inner class may not be present.  In that
	 situation, the compiler cannot fall back to the original
	 source, having already read the outer class, so we must
	 prevent that situation.  */
      for (current = ctxp->class_list;
	   current;
	   current = TREE_CHAIN (current))
	reversed_class_list
	  = tree_cons (NULL_TREE, current, reversed_class_list);

      for (current = reversed_class_list;
	   current;
	   current = TREE_CHAIN (current))
	{
	  output_class = current_class = TREE_TYPE (TREE_VALUE (current));
	  if (flag_emit_class_files)
	    write_classfile (current_class);
	  if (flag_emit_xref)
	    expand_xref (current_class);
	  else if (! flag_syntax_only)
	    java_expand_method_bodies (current_class);
	}
    }
}

void
java_finish_classes (void)
{
  static struct parser_ctxt *cur_ctxp = NULL;
  for (cur_ctxp = ctxp_for_generation; cur_ctxp; cur_ctxp = cur_ctxp->next)
    {
      tree current;
      ctxp = cur_ctxp;
      for (current = ctxp->class_list; current; current = TREE_CHAIN (current))
	{
	  output_class = current_class = TREE_TYPE (current);
	  finish_class ();
	}
    }
}

/* Wrap non WFL PRIMARY around a WFL and set EXPR_WFL_QUALIFICATION to
   a tree list node containing RIGHT. Fore coming RIGHTs will be
   chained to this hook. LOCATION contains the location of the
   separating `.' operator.  */

static tree
make_qualified_primary (tree primary, tree right, int location)
{
  tree wfl;

  if (TREE_CODE (primary) != EXPR_WITH_FILE_LOCATION)
    wfl = build_wfl_wrap (primary, location);
  else
    {
      wfl = primary;
      /* If wfl wasn't qualified, we build a first anchor */
      if (!EXPR_WFL_QUALIFICATION (wfl))
	EXPR_WFL_QUALIFICATION (wfl) = build_tree_list (wfl, NULL_TREE);
    }

  /* And chain them */
  EXPR_WFL_LINECOL (right) = location;
  chainon (EXPR_WFL_QUALIFICATION (wfl), build_tree_list (right, NULL_TREE));
  PRIMARY_P (wfl) =  1;
  return wfl;
}

/* Simple merge of two name separated by a `.' */

static tree
merge_qualified_name (tree left, tree right)
{
  tree node;
  if (!left && !right)
    return NULL_TREE;

  if (!left)
    return right;

  if (!right)
    return left;

  obstack_grow (&temporary_obstack, IDENTIFIER_POINTER (left),
		IDENTIFIER_LENGTH (left));
  obstack_1grow (&temporary_obstack, '.');
  obstack_grow0 (&temporary_obstack, IDENTIFIER_POINTER (right),
		 IDENTIFIER_LENGTH (right));
  node =  get_identifier (obstack_base (&temporary_obstack));
  obstack_free (&temporary_obstack, obstack_base (&temporary_obstack));
  QUALIFIED_P (node) = 1;
  return node;
}

/* Merge the two parts of a qualified name into LEFT.  Set the
   location information of the resulting node to LOCATION, usually
   inherited from the location information of the `.' operator. */

static tree
make_qualified_name (tree left, tree right, int location)
{
#ifdef USE_COMPONENT_REF
  tree node = build (COMPONENT_REF, NULL_TREE, left, right);
  EXPR_WFL_LINECOL (node) = location;
  return node;
#else
  tree left_id = EXPR_WFL_NODE (left);
  tree right_id = EXPR_WFL_NODE (right);
  tree wfl, merge;

  merge = merge_qualified_name (left_id, right_id);

  /* Left wasn't qualified and is now qualified */
  if (!QUALIFIED_P (left_id))
    {
      tree wfl = build_expr_wfl (left_id, ctxp->filename, 0, 0);
      EXPR_WFL_LINECOL (wfl) = EXPR_WFL_LINECOL (left);
      EXPR_WFL_QUALIFICATION (left) = build_tree_list (wfl, NULL_TREE);
    }

  wfl = build_expr_wfl (right_id, ctxp->filename, 0, 0);
  EXPR_WFL_LINECOL (wfl) = location;
  chainon (EXPR_WFL_QUALIFICATION (left), build_tree_list (wfl, NULL_TREE));

  EXPR_WFL_NODE (left) = merge;
  return left;
#endif
}

/* Extract the last identifier component of the qualified in WFL. The
   last identifier is removed from the linked list */

static tree
cut_identifier_in_qualified (tree wfl)
{
  tree q;
  tree previous = NULL_TREE;
  for (q = EXPR_WFL_QUALIFICATION (wfl); ; previous = q, q = TREE_CHAIN (q))
    if (!TREE_CHAIN (q))
      {
	if (!previous)
	  /* Operating on a non qualified qualified WFL.  */
	  abort ();

	TREE_CHAIN (previous) = NULL_TREE;
	return TREE_PURPOSE (q);
      }
}

/* Resolve the expression name NAME. Return its decl.  */

static tree
resolve_expression_name (tree id, tree *orig)
{
  tree name = EXPR_WFL_NODE (id);
  tree decl;

  /* 6.5.5.1: Simple expression names */
  if (!PRIMARY_P (id) && !QUALIFIED_P (name))
    {
      /* 15.13.1: NAME can appear within the scope of a local variable
         declaration */
      if ((decl = IDENTIFIER_LOCAL_VALUE (name)))
        return decl;

      /* 15.13.1: NAME can appear within a class declaration */
      else
        {
	  decl = lookup_field_wrapper (current_class, name);
	  if (decl)
	    {
	      tree access = NULL_TREE;
	      int fs = FIELD_STATIC (decl);

	      /* If we're accessing an outer scope local alias, make
		 sure we change the name of the field we're going to
		 build access to. */
	      if (FIELD_LOCAL_ALIAS_USED (decl))
		name = DECL_NAME (decl);

	      check_deprecation (id, decl);

	      /* Instance variable (8.3.1.1) can't appear within
		 static method, static initializer or initializer for
		 a static variable. */
	      if (!fs && METHOD_STATIC (current_function_decl))
	        {
		  static_ref_err (id, name, current_class);
		  return error_mark_node;
		}
	      /* Instance variables can't appear as an argument of
		 an explicit constructor invocation */
	      if (!fs && ctxp->explicit_constructor_p
		  && !enclosing_context_p (DECL_CONTEXT (decl), current_class))
		{
		  parse_error_context
		    (id, "Can't reference `%s' before the superclass constructor has been called", IDENTIFIER_POINTER (name));
		  return error_mark_node;
		}

	      /* If we're processing an inner class and we're trying
		 to access a field belonging to an outer class, build
		 the access to the field */
	      if (!fs && outer_field_access_p (current_class, decl))
		{
		  if (CLASS_STATIC (TYPE_NAME (current_class)))
		    {
		      static_ref_err (id, DECL_NAME (decl), current_class);
		      return error_mark_node;
		    }
		  access = build_outer_field_access (id, decl);
		  if (orig)
		    *orig = access;
		  return access;
		}

	      /* Otherwise build what it takes to access the field */
	      access = build_field_ref ((fs ? NULL_TREE : current_this),
					DECL_CONTEXT (decl), name);
	      if (fs)
		access = maybe_build_class_init_for_field (decl, access);
	      /* We may be asked to save the real field access node */
	      if (orig)
		*orig = access;
	      /* Last check: can we access the field? */
	      if (not_accessible_p (current_class, decl, NULL_TREE, 0))
		{
		  not_accessible_field_error (id, decl);
		  return error_mark_node;
		}
	      /* And we return what we got */
	      return access;
	    }
	  /* Fall down to error report on undefined variable */
	}
    }
  /* 6.5.5.2 Qualified Expression Names */
  else
    {
      if (orig)
	*orig = NULL_TREE;
      qualify_ambiguous_name (id);
      /* 15.10.1 Field Access Using a Primary and/or Expression Name */
      /* 15.10.2: Accessing Superclass Members using super */
      return resolve_field_access (id, orig, NULL);
    }

  /* We've got an error here */
  if (INNER_CLASS_TYPE_P (current_class))
    parse_error_context (id,
			 "Local variable `%s' can't be accessed from within the inner class `%s' unless it is declared final",
			 IDENTIFIER_POINTER (name),
			 IDENTIFIER_POINTER (DECL_NAME
					     (TYPE_NAME (current_class))));
  else
    parse_error_context (id, "Undefined variable `%s'",
			 IDENTIFIER_POINTER (name));

  return error_mark_node;
}

static void
static_ref_err (tree wfl, tree field_id, tree class_type)
{
  parse_error_context
    (wfl,
     "Can't make a static reference to nonstatic variable `%s' in class `%s'",
     IDENTIFIER_POINTER (field_id),
     IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (class_type))));
}

/* 15.10.1 Field Access Using a Primary and/or Expression Name.
   We return something suitable to generate the field access. We also
   return the field decl in FIELD_DECL and its type in FIELD_TYPE.  If
   recipient's address can be null. */

static tree
resolve_field_access (tree qual_wfl, tree *field_decl, tree *field_type)
{
  int is_static = 0;
  tree field_ref;
  tree decl, where_found, type_found;

  if (resolve_qualified_expression_name (qual_wfl, &decl,
					 &where_found, &type_found))
    return error_mark_node;

  /* Resolve the LENGTH field of an array here */
  if (DECL_P (decl) && DECL_NAME (decl) == length_identifier_node
      && type_found && TYPE_ARRAY_P (type_found)
      && ! flag_emit_class_files && ! flag_emit_xref)
    {
      tree length = build_java_array_length_access (where_found);
      field_ref = length;

      /* In case we're dealing with a static array, we need to
	 initialize its class before the array length can be fetched.
	 It's also a good time to create a DECL_RTL for the field if
	 none already exists, otherwise if the field was declared in a
	 class found in an external file and hasn't been (and won't
	 be) accessed for its value, none will be created. */
      if (TREE_CODE (where_found) == VAR_DECL && FIELD_STATIC (where_found))
	{
	  build_static_field_ref (where_found);
	  field_ref = build_class_init (DECL_CONTEXT (where_found), field_ref);
	}
    }
  /* We might have been trying to resolve field.method(). In which
     case, the resolution is over and decl is the answer */
  else if (JDECL_P (decl) && IDENTIFIER_LOCAL_VALUE (DECL_NAME (decl)) == decl)
    field_ref = decl;
  else if (JDECL_P (decl))
    {
      if (!type_found)
	type_found = DECL_CONTEXT (decl);
      is_static = FIELD_STATIC (decl);
      field_ref = build_field_ref ((is_static && !flag_emit_xref?
				    NULL_TREE : where_found),
				   type_found, DECL_NAME (decl));
      if (field_ref == error_mark_node)
	return error_mark_node;
      if (is_static)
	field_ref = maybe_build_class_init_for_field (decl, field_ref);

      /* If we're looking at a static field, we may need to generate a
	 class initialization for it.  This can happen when the access
	 looks like `field.ref', where `field' is a static field in an
	 interface we implement.  */
      if (!flag_emit_class_files
	  && !flag_emit_xref
	  && TREE_CODE (where_found) == VAR_DECL
	  && FIELD_STATIC (where_found))
	{
	  build_static_field_ref (where_found);
	  field_ref = build_class_init (DECL_CONTEXT (where_found), field_ref);
	}
    }
  else
    field_ref = decl;

  if (field_decl)
    *field_decl = decl;
  if (field_type)
    *field_type = (QUAL_DECL_TYPE (decl) ?
		   QUAL_DECL_TYPE (decl) : TREE_TYPE (decl));
  return field_ref;
}

/* If NODE is an access to a static field, strip out the class
   initialization part and return the field decl, otherwise, return
   NODE. */

tree
extract_field_decl (tree node)
{
  if (TREE_CODE (node) == COMPOUND_EXPR)
    {
      tree op1 = TREE_OPERAND (node, 1);
      if (TREE_CODE (op1) == COMPOUND_EXPR)
	 {
	   tree call = TREE_OPERAND (op1, 0);
	   if (TREE_CODE (call) == CALL_EXPR
	       && TREE_CODE (TREE_OPERAND (call, 0)) == ADDR_EXPR
	       && TREE_OPERAND (TREE_OPERAND (call, 0), 0)
	       == soft_initclass_node)
	     return TREE_OPERAND (op1, 1);
	 }
      else if (JDECL_P (op1))
	return op1;
    }
  return node;
}

/* 6.5.5.2: Qualified Expression Names */

static int
resolve_qualified_expression_name (tree wfl, tree *found_decl,
				   tree *where_found, tree *type_found)
{
  int from_type = 0;		/* Field search initiated from a type */
  int from_super = 0, from_cast = 0, from_qualified_this = 0;
  int previous_call_static = 0;
  int is_static;
  tree decl = NULL_TREE, type = NULL_TREE, q;
  /* For certain for of inner class instantiation */
  tree saved_current, saved_this;
#define RESTORE_THIS_AND_CURRENT_CLASS 				\
  { current_class = saved_current; current_this = saved_this;}

  *type_found = *where_found = NULL_TREE;

  for (q = EXPR_WFL_QUALIFICATION (wfl); q; q = TREE_CHAIN (q))
    {
      tree qual_wfl = QUAL_WFL (q);
      tree ret_decl;		/* for EH checking */
      int location;		/* for EH checking */

      /* 15.10.1 Field Access Using a Primary */
      switch (TREE_CODE (qual_wfl))
	{
	case CALL_EXPR:
	case NEW_CLASS_EXPR:
	  /* If the access to the function call is a non static field,
	     build the code to access it. */
	  if (JDECL_P (decl) && !FIELD_STATIC (decl))
	    {
	      decl = maybe_access_field (decl, *where_found,
					 DECL_CONTEXT (decl));
	      if (decl == error_mark_node)
		return 1;
	    }

	  /* And code for the function call */
	  if (complete_function_arguments (qual_wfl))
	    return 1;

	  /* We might have to setup a new current class and a new this
	     for the search of an inner class, relative to the type of
	     a expression resolved as `decl'. The current values are
	     saved and restored shortly after */
	  saved_current = current_class;
	  saved_this = current_this;
	  if (decl
	      && (TREE_CODE (qual_wfl) == NEW_CLASS_EXPR
		  || from_qualified_this))
	    {
	      /* If we still have `from_qualified_this', we have the form
		 <T>.this.f() and we need to build <T>.this */
	      if (from_qualified_this)
		{
		  decl = build_access_to_thisn (current_class, type, 0);
		  decl = java_complete_tree (decl);
		  type = TREE_TYPE (TREE_TYPE (decl));
		}
	      current_class = type;
	      current_this = decl;
	      from_qualified_this = 0;
	    }

	  if (from_super && TREE_CODE (qual_wfl) == CALL_EXPR)
	    CALL_USING_SUPER (qual_wfl) = 1;
	  location = (TREE_CODE (qual_wfl) == CALL_EXPR ?
		      EXPR_WFL_LINECOL (TREE_OPERAND (qual_wfl, 0)) : 0);
	  *where_found = patch_method_invocation (qual_wfl, decl, type,
						  from_super,
						  &is_static, &ret_decl);
	  from_super = 0;
	  if (*where_found == error_mark_node)
	    {
	      RESTORE_THIS_AND_CURRENT_CLASS;
	      return 1;
	    }
	  *type_found = type = QUAL_DECL_TYPE (*where_found);

	  *where_found = force_evaluation_order (*where_found);

	  /* If we're creating an inner class instance, check for that
	     an enclosing instance is in scope */
	  if (TREE_CODE (qual_wfl) == NEW_CLASS_EXPR
	      && INNER_ENCLOSING_SCOPE_CHECK (type))
	    {
	      parse_error_context
		(qual_wfl, "No enclosing instance for inner class `%s' is in scope%s",
		 lang_printable_name (type, 0),
		 (!current_this ? "" :
		  "; an explicit one must be provided when creating this inner class"));
	      RESTORE_THIS_AND_CURRENT_CLASS;
	      return 1;
	    }

	  /* In case we had to change then to resolve a inner class
	     instantiation using a primary qualified by a `new' */
	  RESTORE_THIS_AND_CURRENT_CLASS;

	  if (location)
	    {
	      tree arguments = NULL_TREE;
	      if (TREE_CODE (qual_wfl) == CALL_EXPR
		  && TREE_OPERAND (qual_wfl, 1) != NULL_TREE)
		arguments = TREE_VALUE (TREE_OPERAND (qual_wfl, 1));
	      check_thrown_exceptions (location, ret_decl, arguments);
	    }

	  /* If the previous call was static and this one is too,
	     build a compound expression to hold the two (because in
	     that case, previous function calls aren't transported as
	     forcoming function's argument. */
	  if (previous_call_static && is_static)
	    {
	      decl = build (COMPOUND_EXPR, TREE_TYPE (*where_found),
			    decl, *where_found);
	      TREE_SIDE_EFFECTS (decl) = 1;
	    }
	  else
	    {
	      previous_call_static = is_static;
	      decl = *where_found;
	    }
	  from_type = 0;
	  continue;

	case NEW_ARRAY_EXPR:
	case NEW_ANONYMOUS_ARRAY_EXPR:
	  *where_found = decl = java_complete_tree (qual_wfl);
	  if (decl == error_mark_node)
	    return 1;
	  *type_found = type = QUAL_DECL_TYPE (decl);
	  continue;

	case CONVERT_EXPR:
	  *where_found = decl = java_complete_tree (qual_wfl);
	  if (decl == error_mark_node)
	    return 1;
	  *type_found = type = QUAL_DECL_TYPE (decl);
	  from_cast = 1;
	  continue;

	case CONDITIONAL_EXPR:
	case STRING_CST:
	case MODIFY_EXPR:
	  *where_found = decl = java_complete_tree (qual_wfl);
	  if (decl == error_mark_node)
	    return 1;
	  *type_found = type = QUAL_DECL_TYPE (decl);
	  continue;

	case ARRAY_REF:
	  /* If the access to the function call is a non static field,
	     build the code to access it. */
	  if (JDECL_P (decl) && !FIELD_STATIC (decl))
	    {
	      decl = maybe_access_field (decl, *where_found, type);
	      if (decl == error_mark_node)
		return 1;
	    }
	  /* And code for the array reference expression */
	  decl = java_complete_tree (qual_wfl);
	  if (decl == error_mark_node)
	    return 1;
	  type = QUAL_DECL_TYPE (decl);
	  continue;

	case PLUS_EXPR:
	  if ((decl = java_complete_tree (qual_wfl)) == error_mark_node)
	    return 1;
	  if ((type = patch_string (decl)))
	    decl = type;
	  *where_found = QUAL_RESOLUTION (q) = decl;
	  *type_found = type = TREE_TYPE (decl);
	  break;

	case CLASS_LITERAL:
	  if ((decl = java_complete_tree (qual_wfl)) == error_mark_node)
	    return 1;
	  *where_found = QUAL_RESOLUTION (q) = decl;
	  *type_found = type = TREE_TYPE (decl);
	  break;

	default:
	  /* Fix for -Wall Just go to the next statement. Don't
             continue */
	  break;
	}

      /* If we fall here, we weren't processing a (static) function call. */
      previous_call_static = 0;

      /* It can be the keyword THIS */
      if (TREE_CODE (qual_wfl) == EXPR_WITH_FILE_LOCATION
	  && EXPR_WFL_NODE (qual_wfl) == this_identifier_node)
	{
	  if (!current_this)
	    {
	      parse_error_context
		(wfl, "Keyword `this' used outside allowed context");
	      return 1;
	    }
	  if (ctxp->explicit_constructor_p
	      && type == current_class)
	    {
	      parse_error_context (wfl, "Can't reference `this' before the superclass constructor has been called");
	      return 1;
	    }
	  /* We have to generate code for intermediate access */
	  if (!from_type || TREE_TYPE (TREE_TYPE (current_this)) == type)
	    {
	      *where_found = decl = current_this;
	      *type_found = type = QUAL_DECL_TYPE (decl);
	    }
	  /* We're trying to access the this from somewhere else. Make sure
	     it's allowed before doing so. */
	  else
	    {
	      if (!enclosing_context_p (type, current_class))
		{
		  char *p  = xstrdup (lang_printable_name (type, 0));
		  parse_error_context (qual_wfl, "Can't use variable `%s.this': type `%s' isn't an outer type of type `%s'",
				       p, p,
				       lang_printable_name (current_class, 0));
		  free (p);
		  return 1;
		}
	      from_qualified_this = 1;
	      /* If there's nothing else after that, we need to
                 produce something now, otherwise, the section of the
                 code that needs to produce <T>.this will generate
                 what is necessary. */
	      if (!TREE_CHAIN (q))
		{
		  decl = build_access_to_thisn (current_class, type, 0);
		  *where_found = decl = java_complete_tree (decl);
		  *type_found = type = TREE_TYPE (decl);
		}
	    }

	  from_type = 0;
	  continue;
	}

      /* 15.10.2 Accessing Superclass Members using SUPER */
      if (TREE_CODE (qual_wfl) == EXPR_WITH_FILE_LOCATION
	  && EXPR_WFL_NODE (qual_wfl) == super_identifier_node)
	{
	  tree node;
	  /* Check on the restricted use of SUPER */
	  if (METHOD_STATIC (current_function_decl)
	      || current_class == object_type_node)
	    {
	      parse_error_context
		(wfl, "Keyword `super' used outside allowed context");
	      return 1;
	    }
	  /* Otherwise, treat SUPER as (SUPER_CLASS)THIS */
	  node = build_cast (EXPR_WFL_LINECOL (qual_wfl),
			     CLASSTYPE_SUPER (current_class),
			     build_this (EXPR_WFL_LINECOL (qual_wfl)));
	  *where_found = decl = java_complete_tree (node);
	  if (decl == error_mark_node)
	    return 1;
	  *type_found = type = QUAL_DECL_TYPE (decl);
	  from_super = from_type = 1;
	  continue;
	}

      /* 15.13.1: Can't search for field name in packages, so we
	 assume a variable/class name was meant. */
      if (RESOLVE_PACKAGE_NAME_P (qual_wfl))
	{
	  tree name;
	  if ((decl = resolve_package (wfl, &q, &name)))
	    {
	      tree list;
	      *where_found = decl;

	      /* We want to be absolutely sure that the class is laid
                 out. We're going to search something inside it. */
	      *type_found = type = TREE_TYPE (decl);
	      layout_class (type);
	      from_type = 1;

	      /* Fix them all the way down, if any are left. */
	      if (q)
		{
		  list = TREE_CHAIN (q);
		  while (list)
		    {
		      RESOLVE_PACKAGE_NAME_P (QUAL_WFL (list)) = 0;
		      list = TREE_CHAIN (list);
		    }
		}
	    }
	  else
	    {
	      if (from_super || from_cast)
		parse_error_context
		  ((from_cast ? qual_wfl : wfl),
		   "No variable `%s' defined in class `%s'",
		   IDENTIFIER_POINTER (EXPR_WFL_NODE (qual_wfl)),
		   lang_printable_name (type, 0));
	      else
		parse_error_context
		  (qual_wfl, "Undefined variable or class name: `%s'",
		   IDENTIFIER_POINTER (name));
	      return 1;
	    }
	}

      /* We have a type name. It's been already resolved when the
	 expression was qualified. */
      else if (RESOLVE_TYPE_NAME_P (qual_wfl) && QUAL_RESOLUTION (q))
	{
	  decl = QUAL_RESOLUTION (q);

	  /* Sneak preview. If next we see a `new', we're facing a
	     qualification with resulted in a type being selected
	     instead of a field.  Report the error */
	  if(TREE_CHAIN (q)
	     && TREE_CODE (TREE_PURPOSE (TREE_CHAIN (q))) == NEW_CLASS_EXPR)
	    {
	      parse_error_context (qual_wfl, "Undefined variable `%s'",
				   IDENTIFIER_POINTER (EXPR_WFL_NODE (wfl)));
	      return 1;
	    }

	  if (not_accessible_p (TREE_TYPE (decl), decl, type, 0))
 	    return not_accessible_field_error (qual_wfl, decl);
	  check_deprecation (qual_wfl, decl);

	  type = TREE_TYPE (decl);
	  from_type = 1;
	}
      /* We resolve an expression name */
      else
	{
	  tree field_decl = NULL_TREE;

	  /* If there exists an early resolution, use it. That occurs
	     only once and we know that there are more things to
	     come. Don't do that when processing something after SUPER
	     (we need more thing to be put in place below */
	  if (!from_super && QUAL_RESOLUTION (q))
	    {
	      decl = QUAL_RESOLUTION (q);
	      if (!type)
		{
		  if (TREE_CODE (decl) == FIELD_DECL && !FIELD_STATIC (decl))
		    {
		      if (current_this)
			*where_found = current_this;
		      else
			{
			  static_ref_err (qual_wfl, DECL_NAME (decl),
					  current_class);
			  return 1;
			}
                      if (outer_field_access_p (current_class, decl))
                        decl = build_outer_field_access (qual_wfl, decl);
		    }
		  else
		    {
		      *where_found = TREE_TYPE (decl);
		      if (TREE_CODE (*where_found) == POINTER_TYPE)
			*where_found = TREE_TYPE (*where_found);
		    }
		}
	    }

	  /* Report and error if we're using a numerical literal as a
             qualifier. It can only be an INTEGER_CST. */
	  else if (TREE_CODE (qual_wfl) == INTEGER_CST)
	    {
	      parse_error_context
		(wfl, "Can't use type `%s' as a qualifier",
		 lang_printable_name (TREE_TYPE (qual_wfl), 0));
	      return 1;
	    }

	  /* We have to search for a field, knowing the type of its
             container. The flag FROM_TYPE indicates that we resolved
             the last member of the expression as a type name, which
             means that for the resolution of this field, we'll look
             for other errors than if it was resolved as a member of
             an other field. */
	  else
	    {
	      int is_static;
	      tree field_decl_type; /* For layout */

	      if (!from_type && !JREFERENCE_TYPE_P (type))
		{
		  parse_error_context
		    (qual_wfl, "Attempt to reference field `%s' in `%s %s'",
		     IDENTIFIER_POINTER (EXPR_WFL_NODE (qual_wfl)),
		     lang_printable_name (type, 0),
		     IDENTIFIER_POINTER (DECL_NAME (decl)));
		  return 1;
		}

	      field_decl = lookup_field_wrapper (type,
						 EXPR_WFL_NODE (qual_wfl));

	      /* Maybe what we're trying to access to is an inner
		 class, only if decl is a TYPE_DECL. */
	      if (!field_decl && TREE_CODE (decl) == TYPE_DECL)
		{
		  tree ptr, inner_decl;

		  BUILD_PTR_FROM_NAME (ptr, EXPR_WFL_NODE (qual_wfl));
		  inner_decl = resolve_class (decl, ptr, NULL_TREE, qual_wfl);
		  if (inner_decl)
		    {
		      check_inner_class_access (inner_decl, decl, qual_wfl);
		      type = TREE_TYPE (inner_decl);
		      decl = inner_decl;
		      from_type = 1;
		      continue;
		    }
		}

	      if (field_decl == NULL_TREE)
		{
		  parse_error_context
		    (qual_wfl, "No variable `%s' defined in type `%s'",
		     IDENTIFIER_POINTER (EXPR_WFL_NODE (qual_wfl)),
		     GET_TYPE_NAME (type));
		  return 1;
		}
	      if (field_decl == error_mark_node)
		return 1;

	      /* Layout the type of field_decl, since we may need
                 it. Don't do primitive types or loaded classes. The
                 situation of non primitive arrays may not handled
                 properly here. FIXME */
	      if (TREE_CODE (TREE_TYPE (field_decl)) == POINTER_TYPE)
		field_decl_type = TREE_TYPE (TREE_TYPE (field_decl));
	      else
		field_decl_type = TREE_TYPE (field_decl);
	      if (!JPRIMITIVE_TYPE_P (field_decl_type)
		  && !CLASS_LOADED_P (field_decl_type)
		  && !TYPE_ARRAY_P (field_decl_type))
		resolve_and_layout (field_decl_type, NULL_TREE);

	      /* Check on accessibility here */
	      if (not_accessible_p (current_class, field_decl,
				    DECL_CONTEXT (field_decl), from_super))
 		return not_accessible_field_error (qual_wfl,field_decl);    
	      check_deprecation (qual_wfl, field_decl);

	      /* There are things to check when fields are accessed
	         from type. There are no restrictions on a static
	         declaration of the field when it is accessed from an
	         interface */
	      is_static = FIELD_STATIC (field_decl);
	      if (!from_super && from_type
		  && !TYPE_INTERFACE_P (type)
		  && !is_static
		  && (current_function_decl
		      && METHOD_STATIC (current_function_decl)))
		{
		  static_ref_err (qual_wfl, EXPR_WFL_NODE (qual_wfl), type);
		  return 1;
		}
	      from_cast = from_super = 0;

	      /* It's an access from a type but it isn't static, we
		 make it relative to `this'. */
	      if (!is_static && from_type)
		decl = current_this;

	      /* If we need to generate something to get a proper
		 handle on what this field is accessed from, do it
		 now. */
	      if (!is_static)
		{
		  decl = maybe_access_field (decl, *where_found, *type_found);
		  if (decl == error_mark_node)
		    return 1;
		}

	      /* We want to keep the location were found it, and the type
		 we found. */
	      *where_found = decl;
	      *type_found = type;

	      /* Generate the correct expression for field access from
		 qualified this */
	      if (from_qualified_this)
		{
		  field_decl = build_outer_field_access (qual_wfl, field_decl);
		  from_qualified_this = 0;
		}

	      /* This is the decl found and eventually the next one to
		 search from */
	      decl = field_decl;
	    }
	  from_type = 0;
	  type = QUAL_DECL_TYPE (decl);

	  /* Sneak preview. If decl is qualified by a `new', report
             the error here to be accurate on the peculiar construct */
	  if (TREE_CHAIN (q)
	      && TREE_CODE (TREE_PURPOSE (TREE_CHAIN (q))) == NEW_CLASS_EXPR
	      && !JREFERENCE_TYPE_P (type))
	    {
	      parse_error_context (qual_wfl, "Attempt to reference field `new' in a `%s'",
				   lang_printable_name (type, 0));
	      return 1;
	    }
	}
      /* `q' might have changed due to a after package resolution
         re-qualification */
      if (!q)
	break;
    }
  *found_decl = decl;
  return 0;
}

/* 6.6 Qualified name and access control. Returns 1 if MEMBER (a decl)
   can't be accessed from REFERENCE (a record type). If MEMBER
   features a protected access, we then use WHERE which, if non null,
   holds the type of MEMBER's access that is checked against
   6.6.2.1. This function should be used when decl is a field or a
   method.  */

static int
not_accessible_p (tree reference, tree member, tree where, int from_super)
{
  int access_flag = get_access_flags_from_decl (member);

  /* Inner classes are processed by check_inner_class_access */
  if (INNER_CLASS_TYPE_P (reference))
    return 0;

  /* Access always granted for members declared public */
  if (access_flag & ACC_PUBLIC)
    return 0;

  /* Check access on protected members */
  if (access_flag & ACC_PROTECTED)
    {
      /* Access granted if it occurs from within the package
         containing the class in which the protected member is
         declared */
      if (class_in_current_package (DECL_CONTEXT (member)))
	return 0;

      /* If accessed with the form `super.member', then access is granted */
      if (from_super)
	return 0;

      /* If where is active, access was made through a
	 qualifier. Access is granted if the type of the qualifier is
	 or is a sublass of the type the access made from (6.6.2.1.)  */
      if (where && !inherits_from_p (reference, where))
	return 1;

      /* Otherwise, access is granted if occurring from the class where
	 member is declared or a subclass of it. Find the right
	 context to perform the check */
      if (PURE_INNER_CLASS_TYPE_P (reference))
        {
          while (INNER_CLASS_TYPE_P (reference))
            {
              if (inherits_from_p (reference, DECL_CONTEXT (member)))
                return 0;
              reference = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (reference)));
            }
        }
      if (inherits_from_p (reference, DECL_CONTEXT (member)))
	return 0;
      return 1;
    }

  /* Check access on private members. Access is granted only if it
     occurs from within the class in which it is declared -- that does
     it for innerclasses too. */
  if (access_flag & ACC_PRIVATE)
    {
      if (reference == DECL_CONTEXT (member))
	return 0;
      if (enclosing_context_p (reference, DECL_CONTEXT (member)))
	return 0;
      return 1;
    }

  /* Default access are permitted only when occurring within the
     package in which the type (REFERENCE) is declared. In other words,
     REFERENCE is defined in the current package */
  if (ctxp->package)
    return !class_in_current_package (reference);

  /* Otherwise, access is granted */
  return 0;
}

/* Test deprecated decl access.  */
static void
check_deprecation (tree wfl, tree decl)
{
  const char *file;
  tree elt;

  if (! flag_deprecated)
    return;

  /* We want to look at the element type of arrays here, so we strip
     all surrounding array types.  */
  if (TYPE_ARRAY_P (TREE_TYPE (decl)))
    {
      elt = TREE_TYPE (decl);
      while (TYPE_ARRAY_P (elt))
	elt = TYPE_ARRAY_ELEMENT (elt);
      /* We'll end up with a pointer type, so we use TREE_TYPE to go
	 to the record.  */
      decl = TYPE_NAME (TREE_TYPE (elt));
    }
  file = DECL_SOURCE_FILE (decl);

  /* Complain if the field is deprecated and the file it was defined
     in isn't compiled at the same time the file which contains its
     use is */
  if (DECL_DEPRECATED (decl)
      && !IS_A_COMMAND_LINE_FILENAME_P (get_identifier (file)))
    {
      const char *the;
      switch (TREE_CODE (decl))
	{
	case FUNCTION_DECL:
	  the = "method";
	  break;
	case FIELD_DECL:
	case VAR_DECL:
	  the = "field";
	  break;
	case TYPE_DECL:
	  parse_warning_context (wfl, "The class `%s' has been deprecated",
				 IDENTIFIER_POINTER (DECL_NAME (decl)));
	  return;
	default:
	  abort ();
	}
      /* Don't issue a message if the context as been deprecated as a
         whole. */
      if (! CLASS_DEPRECATED (TYPE_NAME (DECL_CONTEXT (decl))))
	parse_warning_context
	  (wfl, "The %s `%s' in class `%s' has been deprecated",
	   the, lang_printable_name (decl, 0),
	   IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (DECL_CONTEXT (decl)))));
    }
}

/* Returns 1 if class was declared in the current package, 0 otherwise */

static GTY(()) tree cicp_cache;
static int
class_in_current_package (tree class)
{
  int qualified_flag;
  tree left;

  if (cicp_cache == class)
    return 1;

  qualified_flag = QUALIFIED_P (DECL_NAME (TYPE_NAME (class)));

  /* If the current package is empty and the name of CLASS is
     qualified, class isn't in the current package.  If there is a
     current package and the name of the CLASS is not qualified, class
     isn't in the current package */
  if ((!ctxp->package && qualified_flag) || (ctxp->package && !qualified_flag))
    return 0;

  /* If there is not package and the name of CLASS isn't qualified,
     they belong to the same unnamed package */
  if (!ctxp->package && !qualified_flag)
    return 1;

  /* Compare the left part of the name of CLASS with the package name */
  breakdown_qualified (&left, NULL, DECL_NAME (TYPE_NAME (class)));
  if (ctxp->package == left)
    {
      cicp_cache = class;
      return 1;
    }
  return 0;
}

/* This function may generate code to access DECL from WHERE. This is
   done only if certain conditions meet.  */

static tree
maybe_access_field (tree decl, tree where, tree type)
{
  if (TREE_CODE (decl) == FIELD_DECL && decl != current_this
      && !FIELD_STATIC (decl))
    decl = build_field_ref (where ? where : current_this,
			    (type ? type : DECL_CONTEXT (decl)),
			    DECL_NAME (decl));
  return decl;
}

/* Build a method invocation, by patching PATCH. If non NULL
   and according to the situation, PRIMARY and WHERE may be
   used. IS_STATIC is set to 1 if the invoked function is static. */

static tree
patch_method_invocation (tree patch, tree primary, tree where, int from_super,
			 int *is_static, tree *ret_decl)
{
  tree wfl = TREE_OPERAND (patch, 0);
  tree args = TREE_OPERAND (patch, 1);
  tree name = EXPR_WFL_NODE (wfl);
  tree list;
  int is_static_flag = 0;
  int is_super_init = 0;
  tree this_arg = NULL_TREE;
  int is_array_clone_call = 0;

  /* Should be overridden if everything goes well. Otherwise, if
     something fails, it should keep this value. It stop the
     evaluation of a bogus assignment. See java_complete_tree,
     MODIFY_EXPR: for the reasons why we sometimes want to keep on
     evaluating an assignment */
  TREE_TYPE (patch) = error_mark_node;

  /* Since lookup functions are messing with line numbers, save the
     context now.  */
  java_parser_context_save_global ();

  /* 15.11.1: Compile-Time Step 1: Determine Class or Interface to Search */

  /* Resolution of qualified name, excluding constructors */
  if (QUALIFIED_P (name) && !CALL_CONSTRUCTOR_P (patch))
    {
      tree identifier, identifier_wfl, type, resolved;
      /* Extract the last IDENTIFIER of the qualified
	 expression. This is a wfl and we will use it's location
	 data during error report. */
      identifier_wfl = cut_identifier_in_qualified (wfl);
      identifier = EXPR_WFL_NODE (identifier_wfl);

      /* Given the context, IDENTIFIER is syntactically qualified
	 as a MethodName. We need to qualify what's before */
      qualify_ambiguous_name (wfl);
      resolved = resolve_field_access (wfl, NULL, NULL);

      if (TREE_CODE (resolved) == VAR_DECL && FIELD_STATIC (resolved)
         && FIELD_FINAL (resolved)
         && !inherits_from_p (DECL_CONTEXT (resolved), current_class)
         && !flag_emit_class_files && !flag_emit_xref)
       resolved = build_class_init (DECL_CONTEXT (resolved), resolved);

      if (resolved == error_mark_node)
	PATCH_METHOD_RETURN_ERROR ();

      type = GET_SKIP_TYPE (resolved);
      resolve_and_layout (type, NULL_TREE);

      if (JPRIMITIVE_TYPE_P (type))
        {
	  parse_error_context
	    (identifier_wfl,
	     "Can't invoke a method on primitive type `%s'",
	     IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (type))));
	  PATCH_METHOD_RETURN_ERROR ();
	}

      list = lookup_method_invoke (0, identifier_wfl, type, identifier, args);
      args = nreverse (args);

      /* We're resolving a call from a type */
      if (TREE_CODE (resolved) == TYPE_DECL)
	{
	  if (CLASS_INTERFACE (resolved))
	    {
	      parse_error_context
		(identifier_wfl,
		"Can't make static reference to method `%s' in interface `%s'",
		 IDENTIFIER_POINTER (identifier),
		 IDENTIFIER_POINTER (name));
	      PATCH_METHOD_RETURN_ERROR ();
	    }
	  if (list && !METHOD_STATIC (list))
	    {
	      char *fct_name = xstrdup (lang_printable_name (list, 0));
	      parse_error_context
		(identifier_wfl,
		 "Can't make static reference to method `%s %s' in class `%s'",
		 lang_printable_name (TREE_TYPE (TREE_TYPE (list)), 0),
		 fct_name, IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (type))));
	      free (fct_name);
	      PATCH_METHOD_RETURN_ERROR ();
	    }
	}
      else
	this_arg = primary = resolved;

      if (TYPE_ARRAY_P (type) && identifier == get_identifier ("clone"))
        is_array_clone_call = 1;

      /* IDENTIFIER_WFL will be used to report any problem further */
      wfl = identifier_wfl;
    }
  /* Resolution of simple names, names generated after a primary: or
     constructors */
  else
    {
      tree class_to_search = NULL_TREE;
      int lc;			/* Looking for Constructor */

      /* We search constructor in their target class */
      if (CALL_CONSTRUCTOR_P (patch))
	{
	  if (TREE_CODE (patch) == NEW_CLASS_EXPR)
	    class_to_search = EXPR_WFL_NODE (wfl);
	  else if (EXPR_WFL_NODE (TREE_OPERAND (patch, 0)) ==
		   this_identifier_node)
	    class_to_search = NULL_TREE;
	  else if (EXPR_WFL_NODE (TREE_OPERAND (patch, 0)) ==
		   super_identifier_node)
	    {
	      is_super_init = 1;
	      if (CLASSTYPE_SUPER (current_class))
		class_to_search =
		  DECL_NAME (TYPE_NAME (CLASSTYPE_SUPER (current_class)));
	      else
		{
		  parse_error_context (wfl, "Can't invoke super constructor on java.lang.Object");
		  PATCH_METHOD_RETURN_ERROR ();
		}
	    }

	  /* Class to search is NULL if we're searching the current one */
	  if (class_to_search)
	    {
	      class_to_search = resolve_and_layout (class_to_search, wfl);

	      if (!class_to_search)
		{
		  parse_error_context
		    (wfl, "Class `%s' not found in type declaration",
		     IDENTIFIER_POINTER (EXPR_WFL_NODE (wfl)));
		  PATCH_METHOD_RETURN_ERROR ();
		}

	      /* Can't instantiate an abstract class, but we can
	         invoke it's constructor. It's use within the `new'
	         context is denied here. */
	      if (CLASS_ABSTRACT (class_to_search)
		  && TREE_CODE (patch) == NEW_CLASS_EXPR)
		{
		  parse_error_context
		    (wfl, "Class `%s' is an abstract class. It can't be instantiated",
		     IDENTIFIER_POINTER (EXPR_WFL_NODE (wfl)));
		  PATCH_METHOD_RETURN_ERROR ();
		}

	      class_to_search = TREE_TYPE (class_to_search);
	    }
	  else
	    class_to_search = current_class;
	  lc = 1;
	}
      /* This is a regular search in the local class, unless an
         alternate class is specified. */
      else
	{
	  if (where != NULL_TREE)
	    class_to_search = where;
	  else if (QUALIFIED_P (name))
	    class_to_search = current_class;
	  else
	    {
	      class_to_search = current_class;

	      for (;;)
		{
		  if (has_method (class_to_search, name))
		    break;
		  if (! INNER_CLASS_TYPE_P (class_to_search))
		    {
		      parse_error_context (wfl,
					   "No method named `%s' in scope",
					   IDENTIFIER_POINTER (name));
		      PATCH_METHOD_RETURN_ERROR ();
		    }
		  class_to_search
		    = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (class_to_search)));
		}
	    }
	  lc = 0;
	}

      /* NAME is a simple identifier or comes from a primary. Search
	 in the class whose declaration contain the method being
	 invoked. */
      resolve_and_layout (class_to_search, NULL_TREE);

      list = lookup_method_invoke (lc, wfl, class_to_search, name, args);
      /* Don't continue if no method were found, as the next statement
         can't be executed then. */
      if (!list)
	PATCH_METHOD_RETURN_ERROR ();

      if (TYPE_ARRAY_P (class_to_search)
          && DECL_NAME (list) == get_identifier ("clone"))
        is_array_clone_call = 1;

      /* Check for static reference if non static methods */
      if (check_for_static_method_reference (wfl, patch, list,
					     class_to_search, primary))
	PATCH_METHOD_RETURN_ERROR ();

      /* Check for inner classes creation from illegal contexts */
      if (lc && (INNER_CLASS_TYPE_P (class_to_search)
		 && !CLASS_STATIC (TYPE_NAME (class_to_search)))
	  && INNER_ENCLOSING_SCOPE_CHECK (class_to_search)
	  && !DECL_INIT_P (current_function_decl))
	{
	  parse_error_context
	    (wfl, "No enclosing instance for inner class `%s' is in scope%s",
	     lang_printable_name (class_to_search, 0),
	     (!current_this ? "" :
	      "; an explicit one must be provided when creating this inner class"));
	  PATCH_METHOD_RETURN_ERROR ();
	}

      /* Non static methods are called with the current object extra
	 argument. If patch a `new TYPE()', the argument is the value
	 returned by the object allocator. If method is resolved as a
	 primary, use the primary otherwise use the current THIS. */
      args = nreverse (args);
      if (TREE_CODE (patch) != NEW_CLASS_EXPR)
	{
	  this_arg = primary ? primary : current_this;

	  /* If we're using an access method, things are different.
	     There are two family of cases:

	     1) We're not generating bytecodes:

	     - LIST is non static. It's invocation is transformed from
	       x(a1,...,an) into this$<n>.x(a1,....an).
	     - LIST is static. It's invocation is transformed from
	       x(a1,...,an) into TYPE_OF(this$<n>).x(a1,....an)

	     2) We're generating bytecodes:

	     - LIST is non static. It's invocation is transformed from
	       x(a1,....,an) into access$<n>(this$<n>,a1,...,an).
	     - LIST is static. It's invocation is transformed from
	       x(a1,....,an) into TYPE_OF(this$<n>).x(a1,....an).

	     Of course, this$<n> can be arbitrarily complex, ranging from
	     this$0 (the immediate outer context) to
	     access$0(access$0(...(this$0))).

	     maybe_use_access_method returns a nonzero value if the
	     this_arg has to be moved into the (then generated) stub
	     argument list. In the meantime, the selected function
	     might have be replaced by a generated stub. */
	  if (!primary &&
	      maybe_use_access_method (is_super_init, &list, &this_arg))
	    {
	      args = tree_cons (NULL_TREE, this_arg, args);
	      this_arg = NULL_TREE; /* So it doesn't get chained twice */
	    }
	}
    }

  /* Merge point of all resolution schemes. If we have nothing, this
     is an error, already signaled */
  if (!list)
    PATCH_METHOD_RETURN_ERROR ();

  /* Check accessibility, position the is_static flag, build and
     return the call */
  if (not_accessible_p (DECL_CONTEXT (current_function_decl), list,
			(primary ? TREE_TYPE (TREE_TYPE (primary)) :
			 NULL_TREE), from_super)
      /* Calls to clone() on array types are permitted as a special-case. */
      && !is_array_clone_call)
    {
      const char *const fct_name = IDENTIFIER_POINTER (DECL_NAME (list));
      const char *const access =
	java_accstring_lookup (get_access_flags_from_decl (list));
      const char *const klass =
	IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (DECL_CONTEXT (list))));
      const char *const refklass =
	IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (current_class)));
      const char *const what = (DECL_CONSTRUCTOR_P (list)
				? "constructor" : "method");
      /* FIXME: WFL yields the wrong message here but I don't know
	 what else to use.  */
      parse_error_context (wfl,
			   "Can't access %s %s `%s.%s' from `%s'",
			   access, what, klass, fct_name, refklass);
      PATCH_METHOD_RETURN_ERROR ();
    }

  /* Deprecation check: check whether the method being invoked or the
     instance-being-created's type are deprecated.  */
  if (TREE_CODE (patch) == NEW_CLASS_EXPR)
    check_deprecation (wfl, TYPE_NAME (DECL_CONTEXT (list)));
  check_deprecation (wfl, list);

  /* If invoking a innerclass constructor, there are hidden parameters
     to pass */
  if (TREE_CODE (patch) == NEW_CLASS_EXPR
      && PURE_INNER_CLASS_TYPE_P (DECL_CONTEXT (list)))
    {
      /* And make sure we add the accessed local variables to be saved
	 in field aliases. */
      args = build_alias_initializer_parameter_list
	(AIPL_FUNCTION_CTOR_INVOCATION, DECL_CONTEXT (list), args, NULL);

      /* Secretly pass the current_this/primary as a second argument */
      if (primary || current_this)
	{
	  tree extra_arg;
	  tree this_type = (current_this ?
			    TREE_TYPE (TREE_TYPE (current_this)) : NULL_TREE);
	  /* Method's (list) enclosing context */
	  tree mec = DECL_CONTEXT (TYPE_NAME (DECL_CONTEXT (list)));
	  /* If we have a primary, use it. */
	  if (primary)
	    extra_arg = primary;
	  /* The current `this' is an inner class but isn't a direct
	     enclosing context for the inner class we're trying to
	     create. Build an access to the proper enclosing context
	     and use it. */
	  else if (current_this && PURE_INNER_CLASS_TYPE_P (this_type)
		   && this_type != TREE_TYPE (mec))
	    {

	      extra_arg = build_access_to_thisn (current_class,
						 TREE_TYPE (mec), 0);
	      extra_arg = java_complete_tree (extra_arg);
	    }
	  /* Otherwise, just use the current `this' as an enclosing
             context. */
	  else
	    extra_arg = current_this;
	  args = tree_cons (NULL_TREE, extra_arg, args);
	}
      else
	args = tree_cons (NULL_TREE, integer_zero_node, args);
    }

  /* This handles the situation where a constructor invocation needs
     to have an enclosing context passed as a second parameter (the
     constructor is one of an inner class). */
  if ((is_super_init ||
       (TREE_CODE (patch) == CALL_EXPR && name == this_identifier_node))
      && PURE_INNER_CLASS_TYPE_P (DECL_CONTEXT (list)))
    {
      tree dest = TYPE_NAME (DECL_CONTEXT (list));
      tree extra_arg =
	build_access_to_thisn (current_class, DECL_CONTEXT (dest), 0);
      extra_arg = java_complete_tree (extra_arg);
      args = tree_cons (NULL_TREE, extra_arg, args);
    }

  is_static_flag = METHOD_STATIC (list);
  if (! is_static_flag && this_arg != NULL_TREE)
    args = tree_cons (NULL_TREE, this_arg, args);

  /* In the context of an explicit constructor invocation, we can't
     invoke any method relying on `this'. Exceptions are: we're
     invoking a static function, primary exists and is not the current
     this, we're creating a new object. */
  if (ctxp->explicit_constructor_p
      && !is_static_flag
      && (!primary || primary == current_this)
      && (TREE_CODE (patch) != NEW_CLASS_EXPR))
    {
      parse_error_context (wfl, "Can't reference `this' before the superclass constructor has been called");
      PATCH_METHOD_RETURN_ERROR ();
    }
  java_parser_context_restore_global ();
  if (is_static)
    *is_static = is_static_flag;
  /* Sometimes, we want the decl of the selected method. Such as for
     EH checking */
  if (ret_decl)
    *ret_decl = list;
  patch = patch_invoke (patch, list, args);

  /* Now is a good time to insert the call to finit$ */
  if (is_super_init && CLASS_HAS_FINIT_P (current_class))
    {
      tree finit_parms, finit_call;

      /* Prepare to pass hidden parameters to finit$, if any. */
      finit_parms = build_alias_initializer_parameter_list
	(AIPL_FUNCTION_FINIT_INVOCATION, current_class, NULL_TREE, NULL);

      finit_call =
	build_method_invocation (build_wfl_node (finit_identifier_node),
				 finit_parms);

      /* Generate the code used to initialize fields declared with an
	 initialization statement and build a compound statement along
	 with the super constructor invocation. */
      CAN_COMPLETE_NORMALLY (patch) = 1;
      patch = build (COMPOUND_EXPR, void_type_node, patch,
		     java_complete_tree (finit_call));
    }
  return patch;
}

/* Check that we're not trying to do a static reference to a method in
   non static method. Return 1 if it's the case, 0 otherwise. */

static int
check_for_static_method_reference (tree wfl, tree node, tree method,
				   tree where, tree primary)
{
  if (METHOD_STATIC (current_function_decl)
      && !METHOD_STATIC (method) && !primary && !CALL_CONSTRUCTOR_P (node))
    {
      char *fct_name = xstrdup (lang_printable_name (method, 0));
      parse_error_context
	(wfl, "Can't make static reference to method `%s %s' in class `%s'",
	 lang_printable_name (TREE_TYPE (TREE_TYPE (method)), 0), fct_name,
	 IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (where))));
      free (fct_name);
      return 1;
    }
  return 0;
}

/* Fix the invocation of *MDECL if necessary in the case of a
   invocation from an inner class. *THIS_ARG might be modified
   appropriately and an alternative access to *MDECL might be
   returned.  */

static int
maybe_use_access_method (int is_super_init, tree *mdecl, tree *this_arg)
{
  tree ctx;
  tree md = *mdecl, ta = *this_arg;
  int to_return = 0;
  int non_static_context = !METHOD_STATIC (md);

  if (is_super_init
      || DECL_CONTEXT (md) == current_class
      || !PURE_INNER_CLASS_TYPE_P (current_class)
      || DECL_FINIT_P (md)
      || DECL_INSTINIT_P (md))
    return 0;

  /* If we're calling a method found in an enclosing class, generate
     what it takes to retrieve the right this. Don't do that if we're
     invoking a static method. Note that if MD's type is unrelated to
     CURRENT_CLASS, then the current this can be used. */

  if (non_static_context && DECL_CONTEXT (md) != object_type_node)
    {
      ctx = TREE_TYPE (DECL_CONTEXT (TYPE_NAME (current_class)));
      if (inherits_from_p (ctx, DECL_CONTEXT (md)))
	{
	  ta = build_current_thisn (current_class);
	  ta = build_wfl_node (ta);
	}
      else
	{
	  tree type = ctx;
	  while (type)
	    {
	      maybe_build_thisn_access_method (type);
	      if (inherits_from_p (type, DECL_CONTEXT (md)))
		{
		  ta = build_access_to_thisn (ctx, type, 0);
		  break;
		}
	      type = (DECL_CONTEXT (TYPE_NAME (type)) ?
		      TREE_TYPE (DECL_CONTEXT (TYPE_NAME (type))) : NULL_TREE);
	    }
	}
      ta = java_complete_tree (ta);
    }

  /* We might have to use an access method to get to MD. We can
     break the method access rule as far as we're not generating
     bytecode */
  if (METHOD_PRIVATE (md) && flag_emit_class_files)
    {
      md = build_outer_method_access_method (md);
      to_return = 1;
    }

  *mdecl = md;
  *this_arg = ta;

  /* Returning a nonzero value indicates we were doing a non static
     method invocation that is now a static invocation. It will have
     callee displace `this' to insert it in the regular argument
     list. */
  return (non_static_context && to_return);
}

/* Patch an invoke expression METHOD and ARGS, based on its invocation
   mode.  */

static tree
patch_invoke (tree patch, tree method, tree args)
{
  tree dtable, func;
  tree original_call, t, ta;
  tree check = NULL_TREE;

  /* Last step for args: convert build-in types. If we're dealing with
     a new TYPE() type call, the first argument to the constructor
     isn't found in the incoming argument list, but delivered by
     `new' */
  t = TYPE_ARG_TYPES (TREE_TYPE (method));
  if (TREE_CODE (patch) == NEW_CLASS_EXPR)
    t = TREE_CHAIN (t);
  for (ta = args; t != end_params_node && ta;
       t = TREE_CHAIN (t), ta = TREE_CHAIN (ta))
    if (JPRIMITIVE_TYPE_P (TREE_TYPE (TREE_VALUE (ta))) &&
	TREE_TYPE (TREE_VALUE (ta)) != TREE_VALUE (t))
      TREE_VALUE (ta) = convert (TREE_VALUE (t), TREE_VALUE (ta));

  /* Resolve unresolved returned type issues */
  t = TREE_TYPE (TREE_TYPE (method));
  if (TREE_CODE (t) == POINTER_TYPE && !CLASS_LOADED_P (TREE_TYPE (t)))
    resolve_and_layout (TREE_TYPE (t), NULL);

  if (flag_emit_class_files || flag_emit_xref)
    func = method;
  else
    {
      switch (invocation_mode (method, CALL_USING_SUPER (patch)))
	{
	case INVOKE_VIRTUAL:
	  dtable = invoke_build_dtable (0, args);
	  func = build_invokevirtual (dtable, method);
	  break;

	case INVOKE_NONVIRTUAL:
	  /* If the object for the method call is null, we throw an
	     exception.  We don't do this if the object is the current
	     method's `this'.  In other cases we just rely on an
	     optimization pass to eliminate redundant checks.  */
	  if (TREE_VALUE (args) != current_this)
	    {
	      /* We use a save_expr here to make sure we only evaluate
		 the new `self' expression once.  */
	      tree save_arg = save_expr (TREE_VALUE (args));
	      TREE_VALUE (args) = save_arg;
	      check = java_check_reference (save_arg, 1);
	    }
	  /* Fall through.  */

	case INVOKE_SUPER:
	case INVOKE_STATIC:
	  {
	    tree signature = build_java_signature (TREE_TYPE (method));
	    func = build_known_method_ref (method, TREE_TYPE (method),
					   DECL_CONTEXT (method),
					   signature, args);
	  }
	  break;

	case INVOKE_INTERFACE:
	  dtable = invoke_build_dtable (1, args);
	  func = build_invokeinterface (dtable, method);
	  break;

	default:
	  abort ();
	}

      /* Ensure self_type is initialized, (invokestatic). FIXME */
      func = build1 (NOP_EXPR, build_pointer_type (TREE_TYPE (method)), func);
    }

  TREE_TYPE (patch) = TREE_TYPE (TREE_TYPE (method));
  TREE_OPERAND (patch, 0) = func;
  TREE_OPERAND (patch, 1) = args;
  patch = check_for_builtin (method, patch);
  original_call = patch;

  /* We're processing a `new TYPE ()' form. New is called and its
     returned value is the first argument to the constructor. We build
     a COMPOUND_EXPR and use saved expression so that the overall NEW
     expression value is a pointer to a newly created and initialized
     class. */
  if (TREE_CODE (original_call) == NEW_CLASS_EXPR)
    {
      tree class = DECL_CONTEXT (method);
      tree c1, saved_new, size, new;
      tree alloc_node;

      if (flag_emit_class_files || flag_emit_xref)
	{
	  TREE_TYPE (patch) = build_pointer_type (class);
	  return patch;
	}
      if (!TYPE_SIZE (class))
	safe_layout_class (class);
      size = size_in_bytes (class);
      alloc_node =
	(class_has_finalize_method (class) ? alloc_object_node
		  			   : alloc_no_finalizer_node);
      new = build (CALL_EXPR, promote_type (class),
		   build_address_of (alloc_node),
		   tree_cons (NULL_TREE, build_class_ref (class),
			      build_tree_list (NULL_TREE,
					       size_in_bytes (class))),
		   NULL_TREE);
      saved_new = save_expr (new);
      c1 = build_tree_list (NULL_TREE, saved_new);
      TREE_CHAIN (c1) = TREE_OPERAND (original_call, 1);
      TREE_OPERAND (original_call, 1) = c1;
      TREE_SET_CODE (original_call, CALL_EXPR);
      patch = build (COMPOUND_EXPR, TREE_TYPE (new), patch, saved_new);
    }

  /* If CHECK is set, then we are building a check to see if the object
     is NULL.  */
  if (check != NULL_TREE)
    {
      /* We have to call force_evaluation_order now because creating a
 	 COMPOUND_EXPR wraps the arg list in a way that makes it
 	 unrecognizable by force_evaluation_order later.  Yuk.  */
      patch = build (COMPOUND_EXPR, TREE_TYPE (patch), check, 
 		     force_evaluation_order (patch));
      TREE_SIDE_EFFECTS (patch) = 1;
    }

  /* In order to be able to modify PATCH later, we SAVE_EXPR it and
     put it as the first expression of a COMPOUND_EXPR. The second
     expression being an empty statement to be later patched if
     necessary. We remember a TREE_LIST (the PURPOSE is the method,
     the VALUE is the compound) in a hashtable and return a
     COMPOUND_EXPR built so that the result of the evaluation of the
     original PATCH node is returned. */
  if (STATIC_CLASS_INIT_OPT_P ()
      && current_function_decl && METHOD_STATIC (method))
    {
      tree list;
      tree fndecl = current_function_decl;
      /* We have to call force_evaluation_order now because creating a
	 COMPOUND_EXPR wraps the arg list in a way that makes it
	 unrecognizable by force_evaluation_order later.  Yuk.  */
      tree save = save_expr (force_evaluation_order (patch));
      tree type = TREE_TYPE (patch);

      patch = build (COMPOUND_EXPR, type, save, empty_stmt_node);
      list = tree_cons (method, patch,
			DECL_FUNCTION_STATIC_METHOD_INVOCATION_COMPOUND (fndecl));

      DECL_FUNCTION_STATIC_METHOD_INVOCATION_COMPOUND (fndecl) = list;

      patch = build (COMPOUND_EXPR, type, patch, save);
    }

  return patch;
}

static int
invocation_mode (tree method, int super)
{
  int access = get_access_flags_from_decl (method);

  if (super)
    return INVOKE_SUPER;

  if (access & ACC_STATIC)
    return INVOKE_STATIC;

  /* We have to look for a constructor before we handle nonvirtual
     calls; otherwise the constructor will look nonvirtual.  */
  if (DECL_CONSTRUCTOR_P (method))
    return INVOKE_STATIC;

  if (access & ACC_FINAL || access & ACC_PRIVATE)
    return INVOKE_NONVIRTUAL;

  if (CLASS_FINAL (TYPE_NAME (DECL_CONTEXT (method))))
    return INVOKE_NONVIRTUAL;

  if (CLASS_INTERFACE (TYPE_NAME (DECL_CONTEXT (method))))
    return INVOKE_INTERFACE;

  return INVOKE_VIRTUAL;
}

/* Retrieve a refined list of matching methods. It covers the step
   15.11.2 (Compile-Time Step 2) */

static tree
lookup_method_invoke (int lc, tree cl, tree class, tree name, tree arg_list)
{
  tree atl = end_params_node;		/* Arg Type List */
  tree method, signature, list, node;
  const char *candidates;		/* Used for error report */
  char *dup;

  /* Fix the arguments */
  for (node = arg_list; node; node = TREE_CHAIN (node))
    {
      tree current_arg = TREE_TYPE (TREE_VALUE (node));
      /* Non primitive type may have to be resolved */
      if (!JPRIMITIVE_TYPE_P (current_arg))
	resolve_and_layout (current_arg, NULL_TREE);
      /* And promoted */
      if (TREE_CODE (current_arg) == RECORD_TYPE)
        current_arg = promote_type (current_arg);
      atl = tree_cons (NULL_TREE, current_arg, atl);
    }

  /* Presto. If we're dealing with an anonymous class and a
     constructor call, generate the right constructor now, since we
     know the arguments' types. */

  if (lc && ANONYMOUS_CLASS_P (class))
    {
      tree saved_current_class;
      tree mdecl = craft_constructor (TYPE_NAME (class), atl);
      saved_current_class = current_class;
      current_class = class;
      fix_constructors (mdecl);
      current_class = saved_current_class;
    }

  /* Find all candidates and then refine the list, searching for the
     most specific method. */
  list = find_applicable_accessible_methods_list (lc, class, name, atl);
  list = find_most_specific_methods_list (list);
  if (list && !TREE_CHAIN (list))
    return TREE_VALUE (list);

  /* Issue an error. List candidates if any. Candidates are listed
     only if accessible (non accessible methods may end-up here for
     the sake of a better error report). */
  candidates = NULL;
  if (list)
    {
      tree current;
      obstack_grow (&temporary_obstack, ". Candidates are:\n", 18);
      for (current = list; current; current = TREE_CHAIN (current))
	{
	  tree cm = TREE_VALUE (current);
	  char string [4096];
	  if (!cm || not_accessible_p (class, cm, NULL_TREE, 0))
	    continue;
	  sprintf
	    (string, "  `%s' in `%s'%s",
	     get_printable_method_name (cm),
	     IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (DECL_CONTEXT (cm)))),
	     (TREE_CHAIN (current) ? "\n" : ""));
	  obstack_grow (&temporary_obstack, string, strlen (string));
	}
      obstack_1grow (&temporary_obstack, '\0');
      candidates = obstack_finish (&temporary_obstack);
    }
  /* Issue the error message */
  method = make_node (FUNCTION_TYPE);
  TYPE_ARG_TYPES (method) = atl;
  signature = build_java_argument_signature (method);
  dup = xstrdup (lang_printable_name (class, 0));
  parse_error_context (cl, "Can't find %s `%s(%s)' in type `%s'%s",
		       (lc ? "constructor" : "method"),
		       (lc ? dup : IDENTIFIER_POINTER (name)),
		       IDENTIFIER_POINTER (signature), dup,
		       (candidates ? candidates : ""));
  free (dup);
  return NULL_TREE;
}

/* 15.11.2.1: Find Methods that are Applicable and Accessible. LC is 1
   when we're looking for a constructor. */

static tree
find_applicable_accessible_methods_list (int lc, tree class, tree name,
					 tree arglist)
{
  static htab_t searched_classes;
  static int search_not_done = 0;
  tree list = NULL_TREE, all_list = NULL_TREE;

  /* Check the hash table to determine if this class has been searched
     already. */
  if (searched_classes)
    {
      if (htab_find (searched_classes, class) != NULL)
	return NULL;
    }
  else
    {
      searched_classes = htab_create (10, htab_hash_pointer,
				      htab_eq_pointer, NULL);
    }

  search_not_done++;
  *htab_find_slot (searched_classes, class, INSERT) = class;

  if (!CLASS_LOADED_P (class) && !CLASS_FROM_SOURCE_P (class))
    {
      load_class (class, 1);
      safe_layout_class (class);
    }

  /* Search interfaces */
  if (TREE_CODE (TYPE_NAME (class)) == TYPE_DECL
      && CLASS_INTERFACE (TYPE_NAME (class)))
    {
      int i, n;
      tree basetype_vec = TYPE_BINFO_BASETYPES (class);
      search_applicable_methods_list (lc, TYPE_METHODS (class),
				      name, arglist, &list, &all_list);
      n = TREE_VEC_LENGTH (basetype_vec);
      for (i = 1; i < n; i++)
	{
	  tree t = BINFO_TYPE (TREE_VEC_ELT (basetype_vec, i));
	  tree rlist;

	  rlist = find_applicable_accessible_methods_list (lc,  t, name,
							   arglist);
	  list = chainon (rlist, list);
	}
    }
  /* Search classes */
  else
    {
      search_applicable_methods_list (lc, TYPE_METHODS (class),
				      name, arglist, &list, &all_list);

      /* When looking finit$, class$ or instinit$, we turn LC to 1 so
	 that we only search in class. Note that we should have found
	 something at this point. */
      if (ID_FINIT_P (name) || ID_CLASSDOLLAR_P (name) || ID_INSTINIT_P (name))
	{
	  lc = 1;
	  if (!list)
	    abort ();
	}

      /* We must search all interfaces of this class */
      if (!lc)
      {
	tree basetype_vec = TYPE_BINFO_BASETYPES (class);
	int n = TREE_VEC_LENGTH (basetype_vec), i;
	for (i = 1; i < n; i++)
	  {
	    tree t = BINFO_TYPE (TREE_VEC_ELT (basetype_vec, i));
	    if (t != object_type_node)
	      {
		tree rlist
		  = find_applicable_accessible_methods_list (lc, t,
							     name, arglist);
		list = chainon (rlist, list);
	      }
	  }
      }

      /* Search superclass */
      if (!lc && CLASSTYPE_SUPER (class) != NULL_TREE)
	{
          tree rlist;
          class = CLASSTYPE_SUPER (class);
          rlist = find_applicable_accessible_methods_list (lc, class,
                                                           name, arglist);
          list = chainon (rlist, list);
        }
    }

  search_not_done--;

  /* We're done. Reset the searched classes list and finally search
     java.lang.Object if it wasn't searched already. */
  if (!search_not_done)
    {
      if (!lc
	  && TYPE_METHODS (object_type_node)
	  && htab_find (searched_classes, object_type_node) == NULL)
	{
          search_applicable_methods_list (lc,
                                          TYPE_METHODS (object_type_node),
                                          name, arglist, &list, &all_list);
        }
      htab_delete (searched_classes);
      searched_classes = NULL;
    }

  /* Either return the list obtained or all selected (but
     inaccessible) methods for better error report. */
  return (!list ? all_list : list);
}

/* Effectively search for the appropriate method in method */

static void
search_applicable_methods_list (int lc, tree method, tree name, tree arglist,
				tree *list, tree *all_list)
{
  for (; method; method = TREE_CHAIN (method))
    {
      /* When dealing with constructor, stop here, otherwise search
         other classes */
      if (lc && !DECL_CONSTRUCTOR_P (method))
	continue;
      else if (!lc && (DECL_CONSTRUCTOR_P (method)
		       || (DECL_NAME (method) != name)))
	continue;

      if (argument_types_convertible (method, arglist))
	{
	  /* Retain accessible methods only */
	  if (!not_accessible_p (DECL_CONTEXT (current_function_decl),
				 method, NULL_TREE, 0))
	    *list = tree_cons (NULL_TREE, method, *list);
	  else
	    /* Also retain all selected method here */
	    *all_list = tree_cons (NULL_TREE, method, *list);
	}
    }
}

/* 15.11.2.2 Choose the Most Specific Method */

static tree
find_most_specific_methods_list (tree list)
{
  int max = 0;
  int abstract, candidates;
  tree current, new_list = NULL_TREE;
  for (current = list; current; current = TREE_CHAIN (current))
    {
      tree method;
      DECL_SPECIFIC_COUNT (TREE_VALUE (current)) = 0;

      for (method = list; method; method = TREE_CHAIN (method))
	{
	  tree method_v, current_v;
	  /* Don't test a method against itself */
	  if (method == current)
	    continue;

	  method_v = TREE_VALUE (method);
	  current_v = TREE_VALUE (current);

	  /* Compare arguments and location where methods where declared */
	  if (argument_types_convertible (method_v, current_v))
	    {
	      if (valid_method_invocation_conversion_p
		  (DECL_CONTEXT (method_v), DECL_CONTEXT (current_v))
		  || (INNER_CLASS_TYPE_P (DECL_CONTEXT (current_v))
		      && enclosing_context_p (DECL_CONTEXT (method_v),
					      DECL_CONTEXT (current_v))))
		{
		  int v = (DECL_SPECIFIC_COUNT (current_v) +=
		    (INNER_CLASS_TYPE_P (DECL_CONTEXT (current_v)) ? 2 : 1));
		  max = (v > max ? v : max);
		}
	    }
	}
    }

  /* Review the list and select the maximally specific methods */
  for (current = list, abstract = -1, candidates = -1;
       current; current = TREE_CHAIN (current))
    if (DECL_SPECIFIC_COUNT (TREE_VALUE (current)) == max)
      {
	new_list = tree_cons (NULL_TREE, TREE_VALUE (current), new_list);
	abstract += (METHOD_ABSTRACT (TREE_VALUE (current)) ? 1 : 0);
	candidates++;
      }

  /* If we have several and they're all abstract, just pick the
     closest one. */
  if (candidates > 0 && candidates == abstract)
    {
      /* FIXME: merge the throws clauses.  There is no convenient way
	 to do this in gcj right now, since ideally we'd like to
	 introduce a new METHOD_DECL here, but that is really not
	 possible.  */
      new_list = nreverse (new_list);
      TREE_CHAIN (new_list) = NULL_TREE;
      return new_list;
    }

  /* We have several (we couldn't find a most specific), all but one
     are abstract, we pick the only non abstract one. */
  if (candidates > 0 && (candidates == abstract+1))
    {
      for (current = new_list; current; current = TREE_CHAIN (current))
	if (!METHOD_ABSTRACT (TREE_VALUE (current)))
	  {
	    TREE_CHAIN (current) = NULL_TREE;
	    new_list = current;
	  }
    }

  /* If we can't find one, lower expectations and try to gather multiple
     maximally specific methods */
  while (!new_list && max)
    {
      while (--max > 0)
	{
	  if (DECL_SPECIFIC_COUNT (TREE_VALUE (current)) == max)
	    new_list = tree_cons (NULL_TREE, TREE_VALUE (current), new_list);
	}
    }

  return new_list;
}

/* Make sure that the type of each M2_OR_ARGLIST arguments can be
   converted by method invocation conversion (5.3) to the type of the
   corresponding parameter of M1. Implementation expects M2_OR_ARGLIST
   to change less often than M1. */

static GTY(()) tree m2_arg_value;
static GTY(()) tree m2_arg_cache;

static int
argument_types_convertible (tree m1, tree m2_or_arglist)
{
  tree m1_arg, m2_arg;

  SKIP_THIS_AND_ARTIFICIAL_PARMS (m1_arg, m1)

  if (m2_arg_value == m2_or_arglist)
    m2_arg = m2_arg_cache;
  else
    {
      /* M2_OR_ARGLIST can be a function DECL or a raw list of
         argument types */
      if (m2_or_arglist && TREE_CODE (m2_or_arglist) == FUNCTION_DECL)
	{
	  m2_arg = TYPE_ARG_TYPES (TREE_TYPE (m2_or_arglist));
	  if (!METHOD_STATIC (m2_or_arglist))
	    m2_arg = TREE_CHAIN (m2_arg);
	}
      else
	m2_arg = m2_or_arglist;

      m2_arg_value = m2_or_arglist;
      m2_arg_cache = m2_arg;
    }

  while (m1_arg != end_params_node && m2_arg != end_params_node)
    {
      resolve_and_layout (TREE_VALUE (m1_arg), NULL_TREE);
      if (!valid_method_invocation_conversion_p (TREE_VALUE (m1_arg),
						 TREE_VALUE (m2_arg)))
	break;
      m1_arg = TREE_CHAIN (m1_arg);
      m2_arg = TREE_CHAIN (m2_arg);
    }
  return m1_arg == end_params_node && m2_arg == end_params_node;
}

/* Qualification routines */

/* Given a name x.y.z, look up x locally.  If it's found, save the
   decl.  If it's not found, mark the name as RESOLVE_PACKAGE_NAME_P,
   so that we later try and load the appropriate classes.  */
static void
qualify_ambiguous_name (tree id)
{
  tree name, decl;

  /* We inspect the first item of the qualification list.  As a sanity
     check, make sure that it is an identfier node.  */
  tree qual = EXPR_WFL_QUALIFICATION (id);
  tree qual_wfl = QUAL_WFL (qual);

  if (TREE_CODE (qual_wfl) != EXPR_WITH_FILE_LOCATION)
    return;

  name = EXPR_WFL_NODE (qual_wfl);

  /* If we don't have an identifier, or we have a 'this' or 'super',
     then field access processing is all we need : there is nothing
     for us to do.  */
  if (!name || TREE_CODE (name) != IDENTIFIER_NODE ||
      name == this_identifier_node ||
      name == super_identifier_node)
    return;

  /* If name appears within the scope of a local variable declaration
     or parameter declaration, or is a field within an enclosing
     class, then it is an expression name.  Save the decl and let
     resolve_field_access do it's work.  */
  if ((decl = IDENTIFIER_LOCAL_VALUE (name)) ||
      (decl = lookup_field_wrapper (current_class, name)))
    {
      QUAL_RESOLUTION (qual) = decl;
      return;
    }

  /* If name is a known class name (either declared or imported), mark
     us as a type name.  */
  if ((decl = resolve_and_layout (name, NULL_TREE)))
    {
      RESOLVE_TYPE_NAME_P (qual_wfl) = 1;
      QUAL_RESOLUTION (qual) = decl;
    }

  /* Check here that NAME isn't declared by more than one
     type-import-on-demand declaration of the compilation unit
     containing NAME. FIXME */

  /* We couldn't find a declaration for the name.  Assume for now that
     we have a qualified class name that needs to be loaded from an
     external class file.  */
  else
    RESOLVE_PACKAGE_NAME_P (qual_wfl) = 1;

  /* Propagate the qualification across other components of the
     qualified name */
  for (qual = TREE_CHAIN (qual); qual;
       qual_wfl = QUAL_WFL (qual), qual = TREE_CHAIN (qual))
    {
      if (RESOLVE_PACKAGE_NAME_P (qual_wfl))
	RESOLVE_PACKAGE_NAME_P (QUAL_WFL (qual)) = 1;
    }

  /* Store the global qualification for the ambiguous part of ID back
     into ID fields */
  if (RESOLVE_TYPE_NAME_P (qual_wfl))
    RESOLVE_TYPE_NAME_P (id) = 1;
  else if (RESOLVE_PACKAGE_NAME_P (qual_wfl))
    RESOLVE_PACKAGE_NAME_P (id) = 1;
}

static int
breakdown_qualified (tree *left, tree *right, tree source)
{
  char *p, *base;
  int l = IDENTIFIER_LENGTH (source);

  base = alloca (l + 1);
  memcpy (base, IDENTIFIER_POINTER (source), l + 1);

  /* Breakdown NAME into REMAINDER . IDENTIFIER.  */
  p = base + l - 1;
  while (*p != '.' && p != base)
    p--;

  /* We didn't find a '.'. Return an error.  */
  if (p == base)
    return 1;

  *p = '\0';
  if (right)
    *right = get_identifier (p+1);
  *left = get_identifier (base);

  return 0;
}

/* Return TRUE if two classes are from the same package. */

static int
in_same_package (tree name1, tree name2)
{
  tree tmp;
  tree pkg1;
  tree pkg2;

  if (TREE_CODE (name1) == TYPE_DECL)
    name1 = DECL_NAME (name1);
  if (TREE_CODE (name2) == TYPE_DECL)
    name2 = DECL_NAME (name2);

  if (QUALIFIED_P (name1) != QUALIFIED_P (name2))
    /* One in empty package. */
    return 0;

  if (QUALIFIED_P (name1) == 0 && QUALIFIED_P (name2) == 0)
    /* Both in empty package. */
    return 1;

  breakdown_qualified (&pkg1, &tmp, name1);
  breakdown_qualified (&pkg2, &tmp, name2);

  return (pkg1 == pkg2);
}

/* Patch tree nodes in a function body. When a BLOCK is found, push
   local variable decls if present.
   Same as java_complete_lhs, but does resolve static finals to values. */

static tree
java_complete_tree (tree node)
{
  node = java_complete_lhs (node);
  if (JDECL_P (node) && CLASS_FINAL_VARIABLE_P (node)
      && DECL_INITIAL (node) != NULL_TREE
      && !flag_emit_xref)
    {
      tree value = fold_constant_for_init (node, node);
      if (value != NULL_TREE)
	return value;
    }
  return node;
}

static tree
java_stabilize_reference (tree node)
{
  if (TREE_CODE (node) == COMPOUND_EXPR)
    {
      tree op0 = TREE_OPERAND (node, 0);
      tree op1 = TREE_OPERAND (node, 1);
      TREE_OPERAND (node, 0) = save_expr (op0);
      TREE_OPERAND (node, 1) = java_stabilize_reference (op1);
      return node;
    }
  return stabilize_reference (node);
}

/* Patch tree nodes in a function body. When a BLOCK is found, push
   local variable decls if present.
   Same as java_complete_tree, but does not resolve static finals to values. */

static tree
java_complete_lhs (tree node)
{
  tree nn, cn, wfl_op1, wfl_op2, wfl_op3;
  int flag;

  /* CONVERT_EXPR always has its type set, even though it needs to be
     worked out. */
  if (TREE_TYPE (node) && TREE_CODE (node) != CONVERT_EXPR)
    return node;

  /* The switch block implements cases processing container nodes
     first.  Contained nodes are always written back. Leaves come
     next and return a value. */
  switch (TREE_CODE (node))
    {
    case BLOCK:

      /* 1- Block section.
	 Set the local values on decl names so we can identify them
	 faster when they're referenced. At that stage, identifiers
	 are legal so we don't check for declaration errors. */
      for (cn = BLOCK_EXPR_DECLS (node); cn; cn = TREE_CHAIN (cn))
	{
	  DECL_CONTEXT (cn) = current_function_decl;
	  IDENTIFIER_LOCAL_VALUE (DECL_NAME (cn)) = cn;
	}
      if (BLOCK_EXPR_BODY (node) == NULL_TREE)
	  CAN_COMPLETE_NORMALLY (node) = 1;
      else
	{
	  tree stmt = BLOCK_EXPR_BODY (node);
	  tree *ptr;
	  int error_seen = 0;
	  if (TREE_CODE (stmt) == COMPOUND_EXPR)
	    {
	      /* Re-order from (((A; B); C); ...; Z) to
		 (A; (B; (C ; (...; Z)))).
		 This makes it easier to scan the statements left-to-right
		 without using recursion (which might overflow the stack
		 if the block has many statements. */
	      for (;;)
		{
		  tree left = TREE_OPERAND (stmt, 0);
		  if (TREE_CODE (left) != COMPOUND_EXPR)
		    break;
		  TREE_OPERAND (stmt, 0) = TREE_OPERAND (left, 1);
		  TREE_OPERAND (left, 1) = stmt;
		  stmt = left;
		}
	      BLOCK_EXPR_BODY (node) = stmt;
	    }

	  /* Now do the actual complete, without deep recursion for
             long blocks. */
	  ptr = &BLOCK_EXPR_BODY (node);
	  while (TREE_CODE (*ptr) == COMPOUND_EXPR
		 && TREE_OPERAND (*ptr, 1) != empty_stmt_node)
	    {
	      tree cur = java_complete_tree (TREE_OPERAND (*ptr, 0));
	      tree *next = &TREE_OPERAND (*ptr, 1);
	      TREE_OPERAND (*ptr, 0) = cur;
	      if (cur == empty_stmt_node)
		{
		  /* Optimization;  makes it easier to detect empty bodies.
		     Most useful for <clinit> with all-constant initializer. */
		  *ptr = *next;
		  continue;
		}
	      if (TREE_CODE (cur) == ERROR_MARK)
		error_seen++;
	      else if (! CAN_COMPLETE_NORMALLY (cur))
		{
		  wfl_op2 = *next;
		  for (;;)
		    {
		      if (TREE_CODE (wfl_op2) == BLOCK)
			wfl_op2 = BLOCK_EXPR_BODY (wfl_op2);
		      else if (TREE_CODE (wfl_op2) == COMPOUND_EXPR)
			wfl_op2 = TREE_OPERAND (wfl_op2, 0);
		      else
			break;
		    }
		  if (TREE_CODE (wfl_op2) != CASE_EXPR
		      && TREE_CODE (wfl_op2) != DEFAULT_EXPR)
		    unreachable_stmt_error (*ptr);
		}
	      if (TREE_TYPE (*ptr) == NULL_TREE)
		TREE_TYPE (*ptr) = void_type_node;
	      ptr = next;
	    }
	  *ptr = java_complete_tree (*ptr);

	  if (TREE_CODE (*ptr) == ERROR_MARK || error_seen > 0)
	    return error_mark_node;
	  CAN_COMPLETE_NORMALLY (node) = CAN_COMPLETE_NORMALLY (*ptr);
	}
      /* Turn local bindings to null */
      for (cn = BLOCK_EXPR_DECLS (node); cn; cn = TREE_CHAIN (cn))
	IDENTIFIER_LOCAL_VALUE (DECL_NAME (cn)) = NULL_TREE;

      TREE_TYPE (node) = void_type_node;
      break;

      /* 2- They are expressions but ultimately deal with statements */

    case THROW_EXPR:
      wfl_op1 = TREE_OPERAND (node, 0);
      COMPLETE_CHECK_OP_0 (node);
      /* 14.19 A throw statement cannot complete normally. */
      CAN_COMPLETE_NORMALLY (node) = 0;
      return patch_throw_statement (node, wfl_op1);

    case SYNCHRONIZED_EXPR:
      wfl_op1 = TREE_OPERAND (node, 0);
      return patch_synchronized_statement (node, wfl_op1);

    case TRY_EXPR:
      return patch_try_statement (node);

    case TRY_FINALLY_EXPR:
      COMPLETE_CHECK_OP_0 (node);
      COMPLETE_CHECK_OP_1 (node);
      /* Reduce try/finally nodes with an empty try block.  */
      if (TREE_OPERAND (node, 0) == empty_stmt_node
	  || BLOCK_EMPTY_P (TREE_OPERAND (node, 0)))
	return TREE_OPERAND (node, 1);
      /* Likewise for an empty finally block.  */
      if (TREE_OPERAND (node, 1) == empty_stmt_node
	  || BLOCK_EMPTY_P (TREE_OPERAND (node, 1)))
	return TREE_OPERAND (node, 0);
      CAN_COMPLETE_NORMALLY (node)
	= (CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 0))
	   && CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 1)));
      TREE_TYPE (node) = TREE_TYPE (TREE_OPERAND (node, 0));
      return node;

    case LABELED_BLOCK_EXPR:
      PUSH_LABELED_BLOCK (node);
      if (LABELED_BLOCK_BODY (node))
	COMPLETE_CHECK_OP_1 (node);
      TREE_TYPE (node) = void_type_node;
      POP_LABELED_BLOCK ();

      if (LABELED_BLOCK_BODY (node) == empty_stmt_node)
	{
	  LABELED_BLOCK_BODY (node) = NULL_TREE;
	  CAN_COMPLETE_NORMALLY (node) = 1;
	}
      else if (CAN_COMPLETE_NORMALLY (LABELED_BLOCK_BODY (node)))
	CAN_COMPLETE_NORMALLY (node) = 1;
      return node;

    case EXIT_BLOCK_EXPR:
      /* We don't complete operand 1, because it's the return value of
         the EXIT_BLOCK_EXPR which doesn't exist it Java */
      return patch_bc_statement (node);

    case CASE_EXPR:
      cn = java_complete_tree (TREE_OPERAND (node, 0));
      if (cn == error_mark_node)
	return cn;

      /* First, the case expression must be constant. Values of final
         fields are accepted. */
      cn = fold (cn);
      if ((TREE_CODE (cn) == COMPOUND_EXPR || TREE_CODE (cn) == COMPONENT_REF)
	  && JDECL_P (TREE_OPERAND (cn, 1))
	  && FIELD_FINAL (TREE_OPERAND (cn, 1))
	  && DECL_INITIAL (TREE_OPERAND (cn, 1)))
	{
	  cn = fold_constant_for_init (DECL_INITIAL (TREE_OPERAND (cn, 1)),
				       TREE_OPERAND (cn, 1));
	}
      /* Accept final locals too. */
      else if (TREE_CODE (cn) == VAR_DECL && DECL_FINAL (cn))
	cn = fold_constant_for_init (DECL_INITIAL (cn), cn);

      if (!TREE_CONSTANT (cn) && !flag_emit_xref)
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
	  parse_error_context (node, "Constant expression required");
	  return error_mark_node;
	}

      nn = ctxp->current_loop;

      /* It must be assignable to the type of the switch expression. */
      if (!try_builtin_assignconv (NULL_TREE,
				   TREE_TYPE (TREE_OPERAND (nn, 0)), cn))
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
	  parse_error_context
	    (wfl_operator,
	     "Incompatible type for case. Can't convert `%s' to `int'",
	     lang_printable_name (TREE_TYPE (cn), 0));
	  return error_mark_node;
	}

      cn = fold (convert (int_type_node, cn));
      TREE_CONSTANT_OVERFLOW (cn) = 0;
      CAN_COMPLETE_NORMALLY (cn) = 1;

      /* Save the label on a list so that we can later check for
	 duplicates.  */
      case_label_list = tree_cons (node, cn, case_label_list);

      /* Multiple instance of a case label bearing the same value is
	 checked later. The case expression is all right so far. */
      if (TREE_CODE (cn) == VAR_DECL)
	cn = DECL_INITIAL (cn);
      TREE_OPERAND (node, 0) = cn;
      TREE_TYPE (node) = void_type_node;
      CAN_COMPLETE_NORMALLY (node) = 1;
      TREE_SIDE_EFFECTS (node) = 1;
      break;

    case DEFAULT_EXPR:
      nn = ctxp->current_loop;
      /* Only one default label is allowed per switch statement */
      if (SWITCH_HAS_DEFAULT (nn))
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
	  parse_error_context (wfl_operator,
			       "Duplicate case label: `default'");
	  return error_mark_node;
	}
      else
	SWITCH_HAS_DEFAULT (nn) = 1;
      TREE_TYPE (node) = void_type_node;
      TREE_SIDE_EFFECTS (node) = 1;
      CAN_COMPLETE_NORMALLY (node) = 1;
      break;

    case SWITCH_EXPR:
    case LOOP_EXPR:
      PUSH_LOOP (node);
      /* Check whether the loop was enclosed in a labeled
         statement. If not, create one, insert the loop in it and
         return the node */
      nn = patch_loop_statement (node);

      /* Anyways, walk the body of the loop */
      if (TREE_CODE (node) == LOOP_EXPR)
	TREE_OPERAND (node, 0) = java_complete_tree (TREE_OPERAND (node, 0));
      /* Switch statement: walk the switch expression and the cases */
      else
	node = patch_switch_statement (node);

      if (node == error_mark_node || TREE_OPERAND (node, 0) == error_mark_node)
	nn = error_mark_node;
      else
	{
	  TREE_TYPE (nn) = TREE_TYPE (node) = void_type_node;
	  /* If we returned something different, that's because we
	     inserted a label. Pop the label too. */
	  if (nn != node)
	    {
	      if (CAN_COMPLETE_NORMALLY (node))
		CAN_COMPLETE_NORMALLY (nn) = 1;
	      POP_LABELED_BLOCK ();
	    }
	}
      POP_LOOP ();
      return nn;

    case EXIT_EXPR:
      TREE_OPERAND (node, 0) = java_complete_tree (TREE_OPERAND (node, 0));
      return patch_exit_expr (node);

    case COND_EXPR:
      /* Condition */
      TREE_OPERAND (node, 0) = java_complete_tree (TREE_OPERAND (node, 0));
      if (TREE_OPERAND (node, 0) == error_mark_node)
	return error_mark_node;
      /* then-else branches */
      TREE_OPERAND (node, 1) = java_complete_tree (TREE_OPERAND (node, 1));
      if (TREE_OPERAND (node, 1) == error_mark_node)
	return error_mark_node;
      TREE_OPERAND (node, 2) = java_complete_tree (TREE_OPERAND (node, 2));
      if (TREE_OPERAND (node, 2) == error_mark_node)
	return error_mark_node;
      return patch_if_else_statement (node);
      break;

    case CONDITIONAL_EXPR:
      /* Condition */
      wfl_op1 = TREE_OPERAND (node, 0);
      COMPLETE_CHECK_OP_0 (node);
      wfl_op2 = TREE_OPERAND (node, 1);
      COMPLETE_CHECK_OP_1 (node);
      wfl_op3 = TREE_OPERAND (node, 2);
      COMPLETE_CHECK_OP_2 (node);
      return patch_conditional_expr (node, wfl_op1, wfl_op2);

      /* 3- Expression section */
    case COMPOUND_EXPR:
      wfl_op2 = TREE_OPERAND (node, 1);
      TREE_OPERAND (node, 0) = nn =
	java_complete_tree (TREE_OPERAND (node, 0));
      if (wfl_op2 == empty_stmt_node)
	CAN_COMPLETE_NORMALLY (node) = CAN_COMPLETE_NORMALLY (nn);
      else
	{
	  if (! CAN_COMPLETE_NORMALLY (nn) && TREE_CODE (nn) != ERROR_MARK)
	    {
	      /* An unreachable condition in a do-while statement
		 is *not* (technically) an unreachable statement. */
	      nn = wfl_op2;
	      if (TREE_CODE (nn) == EXPR_WITH_FILE_LOCATION)
		nn = EXPR_WFL_NODE (nn);
	      /* NN can be NULL_TREE exactly when UPDATE is, in
		 finish_for_loop.  */
	      if (nn != NULL_TREE && TREE_CODE (nn) != EXIT_EXPR)
		{
		  SET_WFL_OPERATOR (wfl_operator, node, wfl_op2);
		  if (SUPPRESS_UNREACHABLE_ERROR (nn))
		    {
		      /* Perhaps this warning should have an
			 associated flag.  The code being compiled is
			 pedantically correct, but useless.  */
		      parse_warning_context (wfl_operator,
					     "Unreachable statement");
		    }
		  else
		    parse_error_context (wfl_operator,
					 "Unreachable statement");
		}
	    }
	  TREE_OPERAND (node, 1) = java_complete_tree (TREE_OPERAND (node, 1));
	  if (TREE_OPERAND (node, 1) == error_mark_node)
	    return error_mark_node;
	  /* Even though we might allow the case where the first
	     operand doesn't return normally, we still should compute
	     CAN_COMPLETE_NORMALLY correctly.  */
	  CAN_COMPLETE_NORMALLY (node)
	    = (CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 0))
	       && CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 1)));
	}
      TREE_TYPE (node) = TREE_TYPE (TREE_OPERAND (node, 1));
      break;

    case RETURN_EXPR:
      /* CAN_COMPLETE_NORMALLY (node) = 0; */
      return patch_return (node);

    case EXPR_WITH_FILE_LOCATION:
      if (!EXPR_WFL_NODE (node) /* Or a PRIMARY flag ? */
	  || TREE_CODE (EXPR_WFL_NODE (node)) == IDENTIFIER_NODE)
	{
	  tree wfl = node;
	  node = resolve_expression_name (node, NULL);
	  if (node == error_mark_node)
	    return node;
	  /* Keep line number information somewhere were it doesn't
	     disrupt the completion process. */
	  if (flag_emit_xref && TREE_CODE (node) != CALL_EXPR)
	    {
	      EXPR_WFL_NODE (wfl) = TREE_OPERAND (node, 1);
	      TREE_OPERAND (node, 1) = wfl;
	    }
	  CAN_COMPLETE_NORMALLY (node) = 1;
	}
      else
	{
	  tree body;
	  int save_lineno = input_line;
	  input_line = EXPR_WFL_LINENO (node);
	  body = java_complete_tree (EXPR_WFL_NODE (node));
	  input_line = save_lineno;
	  EXPR_WFL_NODE (node) = body;
	  TREE_SIDE_EFFECTS (node) = TREE_SIDE_EFFECTS (body);
	  CAN_COMPLETE_NORMALLY (node) = CAN_COMPLETE_NORMALLY (body);
	  if (body == empty_stmt_node || TREE_CONSTANT (body))
	    {
	      /* Makes it easier to constant fold, detect empty bodies. */
	      return body;
	    }
	  if (body == error_mark_node)
	    {
	      /* Its important for the evaluation of assignment that
		 this mark on the TREE_TYPE is propagated. */
	      TREE_TYPE (node) = error_mark_node;
	      return error_mark_node;
	    }
	  else
	    TREE_TYPE (node) = TREE_TYPE (EXPR_WFL_NODE (node));

	}
      break;

    case NEW_ARRAY_EXPR:
      /* Patch all the dimensions */
      flag = 0;
      for (cn = TREE_OPERAND (node, 1); cn; cn = TREE_CHAIN (cn))
	{
	  int location = EXPR_WFL_LINECOL (TREE_VALUE (cn));
	  tree dim = convert (int_type_node,
			      java_complete_tree (TREE_VALUE (cn)));
	  if (dim == error_mark_node)
	    {
	      flag = 1;
	      continue;
	    }
	  else
	    {
	      TREE_VALUE (cn) = dim;
	      /* Setup the location of the current dimension, for
		 later error report. */
	      TREE_PURPOSE (cn) =
		build_expr_wfl (NULL_TREE, input_filename, 0, 0);
	      EXPR_WFL_LINECOL (TREE_PURPOSE (cn)) = location;
	    }
	}
      /* They complete the array creation expression, if no errors
         were found. */
      CAN_COMPLETE_NORMALLY (node) = 1;
      return (flag ? error_mark_node
	      : force_evaluation_order (patch_newarray (node)));

    case NEW_ANONYMOUS_ARRAY_EXPR:
      /* Create the array type if necessary. */
      if (ANONYMOUS_ARRAY_DIMS_SIG (node))
	{
	  tree type = ANONYMOUS_ARRAY_BASE_TYPE (node);
	  if (!(type = resolve_type_during_patch (type)))
	    return error_mark_node;
	  type = build_array_from_name (type, NULL_TREE,
					ANONYMOUS_ARRAY_DIMS_SIG (node), NULL);
	  ANONYMOUS_ARRAY_BASE_TYPE (node) = build_pointer_type (type);
	}
      node = patch_new_array_init (ANONYMOUS_ARRAY_BASE_TYPE (node),
				   ANONYMOUS_ARRAY_INITIALIZER (node));
      if (node == error_mark_node)
	return error_mark_node;
      CAN_COMPLETE_NORMALLY (node) = 1;
      return node;

    case NEW_CLASS_EXPR:
    case CALL_EXPR:
      /* Complete function's argument(s) first */
      if (complete_function_arguments (node))
	return error_mark_node;
      else
	{
	  tree decl, wfl = TREE_OPERAND (node, 0);
	  int in_this = CALL_THIS_CONSTRUCTOR_P (node);
	  int from_super = (EXPR_WFL_NODE (TREE_OPERAND (node, 0)) ==
                           super_identifier_node);
	  tree arguments;
	  int location = EXPR_WFL_LINECOL (node);

	  node = patch_method_invocation (node, NULL_TREE, NULL_TREE,
					  from_super, 0, &decl);
	  if (node == error_mark_node)
	    return error_mark_node;

	  if (TREE_CODE (node) == CALL_EXPR
	      && TREE_OPERAND (node, 1) != NULL_TREE)
	    arguments = TREE_VALUE (TREE_OPERAND (node, 1));
	  else
	    arguments = NULL_TREE;
	  check_thrown_exceptions (location, decl, arguments);
	  /* If we call this(...), register signature and positions */
	  if (in_this)
	    DECL_CONSTRUCTOR_CALLS (current_function_decl) =
	      tree_cons (wfl, decl,
			 DECL_CONSTRUCTOR_CALLS (current_function_decl));
	  CAN_COMPLETE_NORMALLY (node) = 1;
	  return force_evaluation_order (node);
	}

    case MODIFY_EXPR:
      /* Save potential wfls */
      wfl_op1 = TREE_OPERAND (node, 0);
      TREE_OPERAND (node, 0) = nn = java_complete_lhs (wfl_op1);

      if (MODIFY_EXPR_FROM_INITIALIZATION_P (node)
	  && TREE_CODE (nn) == VAR_DECL && TREE_STATIC (nn)
	  && DECL_INITIAL (nn) != NULL_TREE)
	{
	  tree value;

	  value = fold_constant_for_init (nn, nn);

	  /* When we have a primitype type, or a string and we're not
             emitting a class file, we actually don't want to generate
             anything for the assignment. */
	  if (value != NULL_TREE && 
	      (JPRIMITIVE_TYPE_P (TREE_TYPE (value)) || 
	       (TREE_TYPE (value) == string_ptr_type_node &&
		! flag_emit_class_files)))
	    {
	      /* Prepare node for patch_assignment */
	      TREE_OPERAND (node, 1) = value;
	      /* Call patch assignment to verify the assignment */
	      if (patch_assignment (node, wfl_op1) == error_mark_node)
		return error_mark_node;
	      /* Set DECL_INITIAL properly (a conversion might have
                 been decided by patch_assignment) and return the
                 empty statement. */
	      else
		{
		  tree patched = patch_string (TREE_OPERAND (node, 1));
		  if (patched)
		    DECL_INITIAL (nn) = patched;
		  else
		    DECL_INITIAL (nn) = TREE_OPERAND (node, 1);
		  DECL_FIELD_FINAL_IUD (nn) = 1;
		  return empty_stmt_node;
		}
	    }
	  if (! flag_emit_class_files)
	    DECL_INITIAL (nn) = NULL_TREE;
	}
      wfl_op2 = TREE_OPERAND (node, 1);

      if (TREE_OPERAND (node, 0) == error_mark_node)
	return error_mark_node;

      flag = COMPOUND_ASSIGN_P (wfl_op2);
      if (flag)
	{
	  /* This might break when accessing outer field from inner
             class. TESTME, FIXME */
	  tree lvalue = java_stabilize_reference (TREE_OPERAND (node, 0));

	  /* Hand stabilize the lhs on both places */
	  TREE_OPERAND (node, 0) = lvalue;
	  TREE_OPERAND (TREE_OPERAND (node, 1), 0) =
	    (flag_emit_class_files ? lvalue : save_expr (lvalue));

	  /* 15.25.2.a: Left hand is not an array access. FIXME */
	  /* Now complete the RHS. We write it back later on. */
	  nn = java_complete_tree (TREE_OPERAND (node, 1));

	  if ((cn = patch_string (nn)))
	    nn = cn;

	  /* The last part of the rewrite for E1 op= E2 is to have
	     E1 = (T)(E1 op E2), with T being the type of E1. */
	  nn = java_complete_tree (build_cast (EXPR_WFL_LINECOL (wfl_op2),
					       TREE_TYPE (lvalue), nn));

	  /* If the assignment is compound and has reference type,
	     then ensure the LHS has type String and nothing else.  */
	  if (JREFERENCE_TYPE_P (TREE_TYPE (lvalue))
	      && ! JSTRING_TYPE_P (TREE_TYPE (lvalue)))
	    parse_error_context (wfl_op2,
				 "Incompatible type for `+='. Can't convert `%s' to `java.lang.String'",
				 lang_printable_name (TREE_TYPE (lvalue), 0));

	  /* 15.25.2.b: Left hand is an array access. FIXME */
	}

      /* If we're about to patch a NEW_ARRAY_INIT, we call a special
	 function to complete this RHS. Note that a NEW_ARRAY_INIT
	 might have been already fully expanded if created as a result
	 of processing an anonymous array initializer. We avoid doing
	 the operation twice by testing whether the node already bears
	 a type. */
      else if (TREE_CODE (wfl_op2) == NEW_ARRAY_INIT && !TREE_TYPE (wfl_op2))
	nn = patch_new_array_init (TREE_TYPE (TREE_OPERAND (node, 0)),
				   TREE_OPERAND (node, 1));
      /* Otherwise we simply complete the RHS */
      else
	nn = java_complete_tree (TREE_OPERAND (node, 1));

      if (nn == error_mark_node)
	return error_mark_node;

      /* Write back the RHS as we evaluated it. */
      TREE_OPERAND (node, 1) = nn;

      /* In case we're handling = with a String as a RHS, we need to
	 produce a String out of the RHS (it might still be a
	 STRING_CST or a StringBuffer at this stage */
      if ((nn = patch_string (TREE_OPERAND (node, 1))))
	TREE_OPERAND (node, 1) = nn;

      if ((nn = outer_field_access_fix (wfl_op1, TREE_OPERAND (node, 0),
					TREE_OPERAND (node, 1))))
	{
	  /* We return error_mark_node if outer_field_access_fix
	     detects we write into a final. */
	  if (nn == error_mark_node)
	    return error_mark_node;
	  node = nn;
	}
      else
	{
	  node = patch_assignment (node, wfl_op1);
	  if (node == error_mark_node)
	    return error_mark_node;
	  /* Reorganize the tree if necessary. */
	  if (flag && (!JREFERENCE_TYPE_P (TREE_TYPE (node))
		       || JSTRING_P (TREE_TYPE (node))))
	    node = java_refold (node);
	}

      /* Seek to set DECL_INITIAL to a proper value, since it might have
	 undergone a conversion in patch_assignment. We do that only when
	 it's necessary to have DECL_INITIAL properly set. */
      nn = TREE_OPERAND (node, 0);
      if (TREE_CODE (nn) == VAR_DECL
	  && DECL_INITIAL (nn) && CONSTANT_VALUE_P (DECL_INITIAL (nn))
	  && FIELD_STATIC (nn) && FIELD_FINAL (nn)
	  && (JPRIMITIVE_TYPE_P (TREE_TYPE (nn))
	      || TREE_TYPE (nn) == string_ptr_type_node))
	DECL_INITIAL (nn) = TREE_OPERAND (node, 1);

      CAN_COMPLETE_NORMALLY (node) = 1;
      return node;

    case MULT_EXPR:
    case PLUS_EXPR:
    case MINUS_EXPR:
    case LSHIFT_EXPR:
    case RSHIFT_EXPR:
    case URSHIFT_EXPR:
    case BIT_AND_EXPR:
    case BIT_XOR_EXPR:
    case BIT_IOR_EXPR:
    case TRUNC_MOD_EXPR:
    case TRUNC_DIV_EXPR:
    case RDIV_EXPR:
    case TRUTH_ANDIF_EXPR:
    case TRUTH_ORIF_EXPR:
    case EQ_EXPR:
    case NE_EXPR:
    case GT_EXPR:
    case GE_EXPR:
    case LT_EXPR:
    case LE_EXPR:
      /* Operands 0 and 1 are WFL in certain cases only. patch_binop
	 knows how to handle those cases. */
      wfl_op1 = TREE_OPERAND (node, 0);
      wfl_op2 = TREE_OPERAND (node, 1);

      CAN_COMPLETE_NORMALLY (node) = 1;
      /* Don't complete string nodes if dealing with the PLUS operand. */
      if (TREE_CODE (node) != PLUS_EXPR || !JSTRING_P (wfl_op1))
        {
          nn = java_complete_tree (wfl_op1);
          if (nn == error_mark_node)
            return error_mark_node;

          TREE_OPERAND (node, 0) = nn;
        }
      if (TREE_CODE (node) != PLUS_EXPR || !JSTRING_P (wfl_op2))
        {
          nn = java_complete_tree (wfl_op2);
          if (nn == error_mark_node)
            return error_mark_node;

          TREE_OPERAND (node, 1) = nn;
        }
      return patch_binop (node, wfl_op1, wfl_op2);

    case INSTANCEOF_EXPR:
      wfl_op1 = TREE_OPERAND (node, 0);
      COMPLETE_CHECK_OP_0 (node);
      if (flag_emit_xref)
	{
	  TREE_TYPE (node) = boolean_type_node;
	  return node;
	}
      return patch_binop (node, wfl_op1, TREE_OPERAND (node, 1));

    case UNARY_PLUS_EXPR:
    case NEGATE_EXPR:
    case TRUTH_NOT_EXPR:
    case BIT_NOT_EXPR:
    case PREDECREMENT_EXPR:
    case PREINCREMENT_EXPR:
    case POSTDECREMENT_EXPR:
    case POSTINCREMENT_EXPR:
    case CONVERT_EXPR:
      /* There are cases were wfl_op1 is a WFL. patch_unaryop knows
	 how to handle those cases. */
      wfl_op1 = TREE_OPERAND (node, 0);
      CAN_COMPLETE_NORMALLY (node) = 1;
      TREE_OPERAND (node, 0) = java_complete_tree (wfl_op1);
      if (TREE_OPERAND (node, 0) == error_mark_node)
	return error_mark_node;
      node = patch_unaryop (node, wfl_op1);
      CAN_COMPLETE_NORMALLY (node) = 1;
      break;

    case ARRAY_REF:
      /* There are cases were wfl_op1 is a WFL. patch_array_ref knows
	 how to handle those cases. */
      wfl_op1 = TREE_OPERAND (node, 0);
      TREE_OPERAND (node, 0) = java_complete_tree (wfl_op1);
      if (TREE_OPERAND (node, 0) == error_mark_node)
	return error_mark_node;
      if (!flag_emit_class_files && !flag_emit_xref)
	TREE_OPERAND (node, 0) = save_expr (TREE_OPERAND (node, 0));
      /* The same applies to wfl_op2 */
      wfl_op2 = TREE_OPERAND (node, 1);
      TREE_OPERAND (node, 1) = java_complete_tree (wfl_op2);
      if (TREE_OPERAND (node, 1) == error_mark_node)
	return error_mark_node;
      if (!flag_emit_class_files && !flag_emit_xref)
	TREE_OPERAND (node, 1) = save_expr (TREE_OPERAND (node, 1));
      return patch_array_ref (node);

    case RECORD_TYPE:
      return node;;

    case COMPONENT_REF:
      /* The first step in the re-write of qualified name handling.  FIXME.
	 So far, this is only to support PRIMTYPE.class -> PRIMCLASS.TYPE. */
      TREE_OPERAND (node, 0) = java_complete_tree (TREE_OPERAND (node, 0));
      if (TREE_CODE (TREE_OPERAND (node, 0)) == RECORD_TYPE)
	{
	  tree name = TREE_OPERAND (node, 1);
	  tree field = lookup_field_wrapper (TREE_OPERAND (node, 0), name);
	  if (field == NULL_TREE)
	    {
	      error ("missing static field `%s'", IDENTIFIER_POINTER (name));
	      return error_mark_node;
	    }
	  if (! FIELD_STATIC (field))
	    {
	      error ("not a static field `%s'", IDENTIFIER_POINTER (name));
	      return error_mark_node;
	    }
	  return field;
	}
      else
	abort ();
      break;

    case THIS_EXPR:
      /* Can't use THIS in a static environment */
      if (!current_this)
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
	  parse_error_context (wfl_operator,
			       "Keyword `this' used outside allowed context");
	  TREE_TYPE (node) = error_mark_node;
	  return error_mark_node;
	}
      if (ctxp->explicit_constructor_p)
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
	  parse_error_context
	    (wfl_operator, "Can't reference `this' or `super' before the superclass constructor has been called");
	  TREE_TYPE (node) = error_mark_node;
	  return error_mark_node;
	}
      return current_this;

    case CLASS_LITERAL:
      CAN_COMPLETE_NORMALLY (node) = 1;
      node = patch_incomplete_class_ref (node);
      if (node == error_mark_node)
	return error_mark_node;
      break;

    default:
      CAN_COMPLETE_NORMALLY (node) = 1;
      /* Ok: may be we have a STRING_CST or a crafted `StringBuffer'
	 and it's time to turn it into the appropriate String object */
      if ((nn = patch_string (node)))
	node = nn;
      else
	internal_error ("No case for %s", tree_code_name [TREE_CODE (node)]);
    }
  return node;
}

/* Complete function call's argument. Return a nonzero value is an
   error was found.  */

static int
complete_function_arguments (tree node)
{
  int flag = 0;
  tree cn;

  ctxp->explicit_constructor_p += (CALL_EXPLICIT_CONSTRUCTOR_P (node) ? 1 : 0);
  for (cn = TREE_OPERAND (node, 1); cn; cn = TREE_CHAIN (cn))
    {
      tree wfl = TREE_VALUE (cn), parm, temp;
      parm = java_complete_tree (wfl);

      if (parm == error_mark_node)
	{
	  flag = 1;
	  continue;
	}
      /* If have a string literal that we haven't transformed yet or a
	 crafted string buffer, as a result of use of the the String
	 `+' operator. Build `parm.toString()' and expand it. */
      if ((temp = patch_string (parm)))
	parm = temp;

      TREE_VALUE (cn) = parm;
    }
  ctxp->explicit_constructor_p -= (CALL_EXPLICIT_CONSTRUCTOR_P (node) ? 1 : 0);
  return flag;
}

/* Sometimes (for loops and variable initialized during their
   declaration), we want to wrap a statement around a WFL and turn it
   debugable.  */

static tree
build_debugable_stmt (int location, tree stmt)
{
  if (TREE_CODE (stmt) != EXPR_WITH_FILE_LOCATION)
    {
      stmt = build_expr_wfl (stmt, input_filename, 0, 0);
      EXPR_WFL_LINECOL (stmt) = location;
    }
  JAVA_MAYBE_GENERATE_DEBUG_INFO (stmt);
  return stmt;
}

static tree
build_expr_block (tree body, tree decls)

{
  tree node = make_node (BLOCK);
  BLOCK_EXPR_DECLS (node) = decls;
  BLOCK_EXPR_BODY (node) = body;
  if (body)
    TREE_TYPE (node) = TREE_TYPE (body);
  TREE_SIDE_EFFECTS (node) = 1;
  return node;
}

/* Create a new function block and link it appropriately to current
   function block chain */

static tree
enter_block (void)
{
  tree b = build_expr_block (NULL_TREE, NULL_TREE);

  /* Link block B supercontext to the previous block. The current
     function DECL is used as supercontext when enter_a_block is called
     for the first time for a given function. The current function body
     (DECL_FUNCTION_BODY) is set to be block B.  */

  tree fndecl = current_function_decl;

  if (!fndecl) {
    BLOCK_SUPERCONTEXT (b) = current_static_block;
    current_static_block = b;
  }

  else if (!DECL_FUNCTION_BODY (fndecl))
    {
      BLOCK_SUPERCONTEXT (b) = fndecl;
      DECL_FUNCTION_BODY (fndecl) = b;
    }
  else
    {
      BLOCK_SUPERCONTEXT (b) = DECL_FUNCTION_BODY (fndecl);
      DECL_FUNCTION_BODY (fndecl) = b;
    }
  return b;
}

/* Exit a block by changing the current function body
   (DECL_FUNCTION_BODY) to the current block super context, only if
   the block being exited isn't the method's top level one.  */

static tree
exit_block (void)
{
  tree b;
  if (current_function_decl)
    {
      b = DECL_FUNCTION_BODY (current_function_decl);
      if (BLOCK_SUPERCONTEXT (b) != current_function_decl)
	DECL_FUNCTION_BODY (current_function_decl) = BLOCK_SUPERCONTEXT (b);
    }
  else
    {
      b = current_static_block;

      if (BLOCK_SUPERCONTEXT (b))
	current_static_block = BLOCK_SUPERCONTEXT (b);
    }
  return b;
}

/* Lookup for NAME in the nested function's blocks, all the way up to
   the current toplevel one. It complies with Java's local variable
   scoping rules.  */

static tree
lookup_name_in_blocks (tree name)
{
  tree b = GET_CURRENT_BLOCK (current_function_decl);

  while (b != current_function_decl)
    {
      tree current;

      /* Paranoid sanity check. To be removed */
      if (TREE_CODE (b) != BLOCK)
	abort ();

      for (current = BLOCK_EXPR_DECLS (b); current;
	   current = TREE_CHAIN (current))
	if (DECL_NAME (current) == name)
	  return current;
      b = BLOCK_SUPERCONTEXT (b);
    }
  return NULL_TREE;
}

static void
maybe_absorb_scoping_blocks (void)
{
  while (BLOCK_IS_IMPLICIT (GET_CURRENT_BLOCK (current_function_decl)))
    {
      tree b = exit_block ();
      java_method_add_stmt (current_function_decl, b);
      SOURCE_FRONTEND_DEBUG (("Absorbing scoping block at line %d", input_line));
    }
}


/* This section of the source is reserved to build_* functions that
   are building incomplete tree nodes and the patch_* functions that
   are completing them.  */

/* Wrap a non WFL node around a WFL.  */

static tree
build_wfl_wrap (tree node, int location)
{
  tree wfl, node_to_insert = node;

  /* We want to process THIS . xxx symbolically, to keep it consistent
     with the way we're processing SUPER. A THIS from a primary as a
     different form than a SUPER. Turn THIS into something symbolic */
  if (TREE_CODE (node) == THIS_EXPR)
    node_to_insert = wfl = build_wfl_node (this_identifier_node);
  else
    wfl = build_expr_wfl (NULL_TREE, ctxp->filename, 0, 0);

  EXPR_WFL_LINECOL (wfl) = location;
  EXPR_WFL_QUALIFICATION (wfl) = build_tree_list (node_to_insert, NULL_TREE);
  return wfl;
}

/* Build a super() constructor invocation. Returns empty_stmt_node if
   we're currently dealing with the class java.lang.Object. */

static tree
build_super_invocation (tree mdecl)
{
  if (DECL_CONTEXT (mdecl) == object_type_node)
    return empty_stmt_node;
  else
    {
      tree super_wfl = build_wfl_node (super_identifier_node);
      tree a = NULL_TREE, t;
      /* If we're dealing with an anonymous class, pass the arguments
         of the crafted constructor along. */
      if (ANONYMOUS_CLASS_P (DECL_CONTEXT (mdecl)))
	{
	  SKIP_THIS_AND_ARTIFICIAL_PARMS (t, mdecl);
	  for (; t != end_params_node; t = TREE_CHAIN (t))
	    a = tree_cons (NULL_TREE, build_wfl_node (TREE_PURPOSE (t)), a);
	}
      return build_method_invocation (super_wfl, a);
    }
}

/* Build a SUPER/THIS qualified method invocation.  */

static tree
build_this_super_qualified_invocation (int use_this, tree name, tree args,
				       int lloc, int rloc)
{
  tree invok;
  tree wfl =
    build_wfl_node (use_this ? this_identifier_node : super_identifier_node);
  EXPR_WFL_LINECOL (wfl) = lloc;
  invok = build_method_invocation (name, args);
  return make_qualified_primary (wfl, invok, rloc);
}

/* Build an incomplete CALL_EXPR node. */

static tree
build_method_invocation (tree name, tree args)
{
  tree call = build (CALL_EXPR, NULL_TREE, name, args, NULL_TREE);
  TREE_SIDE_EFFECTS (call) = 1;
  EXPR_WFL_LINECOL (call) = EXPR_WFL_LINECOL (name);
  return call;
}

/* Build an incomplete new xxx(...) node. */

static tree
build_new_invocation (tree name, tree args)
{
  tree call = build (NEW_CLASS_EXPR, NULL_TREE, name, args, NULL_TREE);
  TREE_SIDE_EFFECTS (call) = 1;
  EXPR_WFL_LINECOL (call) = EXPR_WFL_LINECOL (name);
  return call;
}

/* Build an incomplete assignment expression. */

static tree
build_assignment (int op, int op_location, tree lhs, tree rhs)
{
  tree assignment;
  /* Build the corresponding binop if we deal with a Compound
     Assignment operator. Mark the binop sub-tree as part of a
     Compound Assignment expression */
  if (op != ASSIGN_TK)
    {
      rhs = build_binop (BINOP_LOOKUP (op), op_location, lhs, rhs);
      COMPOUND_ASSIGN_P (rhs) = 1;
    }
  assignment = build (MODIFY_EXPR, NULL_TREE, lhs, rhs);
  TREE_SIDE_EFFECTS (assignment) = 1;
  EXPR_WFL_LINECOL (assignment) = op_location;
  return assignment;
}

/* Print an INTEGER_CST node as decimal in a static buffer, and return
   the buffer.  This is used only for string conversion.  */
static char *
string_convert_int_cst (tree node)
{
  /* Long.MIN_VALUE is -9223372036854775808, 20 characters.  */
  static char buffer[21];

  unsigned HOST_WIDE_INT lo = TREE_INT_CST_LOW (node);
  unsigned HOST_WIDE_INT hi = TREE_INT_CST_HIGH (node);
  char *p = buffer + sizeof (buffer);
  int neg = 0;

  unsigned HOST_WIDE_INT hibit = (((unsigned HOST_WIDE_INT) 1)
				  << (HOST_BITS_PER_WIDE_INT - 1));

  *--p = '\0';

  /* If negative, note the fact and negate the value.  */
  if ((hi & hibit))
    {
      lo = ~lo;
      hi = ~hi;
      if (++lo == 0)
	++hi;
      neg = 1;
    }

  /* Divide by 10 until there are no bits left.  */
  do
    {
      unsigned HOST_WIDE_INT acc = 0;
      unsigned HOST_WIDE_INT outhi = 0, outlo = 0;
      unsigned int i;

      /* Use long division to compute the result and the remainder.  */
      for (i = 0; i < 2 * HOST_BITS_PER_WIDE_INT; ++i)
	{
	  /* Shift a bit into accumulator.  */
	  acc <<= 1;
	  if ((hi & hibit))
	    acc |= 1;

	  /* Shift the value.  */
	  hi <<= 1;
	  if ((lo & hibit))
	    hi |= 1;
	  lo <<= 1;

	  /* Shift the correct bit into the result.  */
	  outhi <<= 1;
	  if ((outlo & hibit))
	    outhi |= 1;
	  outlo <<= 1;
	  if (acc >= 10)
	    {
	      acc -= 10;
	      outlo |= 1;
	    }
	}

      /* '0' == 060 in Java, but might not be here (think EBCDIC).  */
      *--p = '\060' + acc;

      hi = outhi;
      lo = outlo;
    }
  while (hi || lo);

  if (neg)
    *--p = '\055'; /* '-' == 055 in Java, but might not be here.  */

  return p;
}

/* Print an INTEGER_CST node in a static buffer, and return the
   buffer.  This is used only for error handling.  */
char *
print_int_node (tree node)
{
  static char buffer [80];
  if (TREE_CONSTANT_OVERFLOW (node))
    sprintf (buffer, "<overflow>");

  if (TREE_INT_CST_HIGH (node) == 0)
    sprintf (buffer, HOST_WIDE_INT_PRINT_UNSIGNED,
	     TREE_INT_CST_LOW (node));
  else if (TREE_INT_CST_HIGH (node) == -1
	   && TREE_INT_CST_LOW (node) != 0)
    sprintf (buffer, "-" HOST_WIDE_INT_PRINT_UNSIGNED,
	     -TREE_INT_CST_LOW (node));
  else
    sprintf (buffer, HOST_WIDE_INT_PRINT_DOUBLE_HEX,
	     TREE_INT_CST_HIGH (node), TREE_INT_CST_LOW (node));

  return buffer;
}


/* Return 1 if an assignment to a FINAL is attempted in a non suitable
   context.  */

/* 15.25 Assignment operators. */

static tree
patch_assignment (tree node, tree wfl_op1)
{
  tree rhs = TREE_OPERAND (node, 1);
  tree lvalue = TREE_OPERAND (node, 0), llvalue;
  tree lhs_type = NULL_TREE, rhs_type, new_rhs = NULL_TREE;
  int error_found = 0;
  int lvalue_from_array = 0;
  int is_return = 0;

  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* Lhs can be a named variable */
  if (JDECL_P (lvalue))
    {
      lhs_type = TREE_TYPE (lvalue);
    }
  /* Or Lhs can be an array access. */
  else if (TREE_CODE (lvalue) == ARRAY_REF)
    {
      lhs_type = TREE_TYPE (lvalue);
      lvalue_from_array = 1;
    }
  /* Or a field access */
  else if (TREE_CODE (lvalue) == COMPONENT_REF)
    lhs_type = TREE_TYPE (lvalue);
  /* Or a function return slot */
  else if (TREE_CODE (lvalue) == RESULT_DECL)
    {
      /* If the return type is an integral type, then we create the
	 RESULT_DECL with a promoted type, but we need to do these
	 checks against the unpromoted type to ensure type safety.  So
	 here we look at the real type, not the type of the decl we
	 are modifying.  */
      lhs_type = TREE_TYPE (TREE_TYPE (current_function_decl));
      is_return = 1;
    }
  /* Otherwise, we might want to try to write into an optimized static
     final, this is an of a different nature, reported further on. */
  else if (TREE_CODE (wfl_op1) == EXPR_WITH_FILE_LOCATION
	   && resolve_expression_name (wfl_op1, &llvalue))
    {
      lhs_type = TREE_TYPE (lvalue);
    }
  else
    {
      parse_error_context (wfl_op1, "Invalid left hand side of assignment");
      error_found = 1;
    }

  rhs_type = TREE_TYPE (rhs);

  /* 5.1 Try the assignment conversion for builtin type. */
  new_rhs = try_builtin_assignconv (wfl_op1, lhs_type, rhs);

  /* 5.2 If it failed, try a reference conversion */
  if (!new_rhs && (new_rhs = try_reference_assignconv (lhs_type, rhs)))
    lhs_type = promote_type (rhs_type);

  /* 15.25.2 If we have a compound assignment, convert RHS into the
     type of the LHS */
  else if (COMPOUND_ASSIGN_P (TREE_OPERAND (node, 1)))
    new_rhs = convert (lhs_type, rhs);

  /* Explicit cast required. This is an error */
  if (!new_rhs)
    {
      char *t1 = xstrdup (lang_printable_name (TREE_TYPE (rhs), 0));
      char *t2 = xstrdup (lang_printable_name (lhs_type, 0));
      tree wfl;
      char operation [32];	/* Max size known */

      /* If the assignment is part of a declaration, we use the WFL of
	 the declared variable to point out the error and call it a
	 declaration problem. If the assignment is a genuine =
	 operator, we call is a operator `=' problem, otherwise we
	 call it an assignment problem. In both of these last cases,
	 we use the WFL of the operator to indicate the error. */

      if (MODIFY_EXPR_FROM_INITIALIZATION_P (node))
	{
	  wfl = wfl_op1;
	  strcpy (operation, "declaration");
	}
      else
	{
	  wfl = wfl_operator;
	  if (COMPOUND_ASSIGN_P (TREE_OPERAND (node, 1)))
	    strcpy (operation, "assignment");
	  else if (is_return)
	    strcpy (operation, "`return'");
	  else
	    strcpy (operation, "`='");
	}

      if (!valid_cast_to_p (rhs_type, lhs_type))
	parse_error_context
	  (wfl, "Incompatible type for %s. Can't convert `%s' to `%s'",
	   operation, t1, t2);
      else
	parse_error_context (wfl, "Incompatible type for %s. Explicit cast needed to convert `%s' to `%s'",
			     operation, t1, t2);
      free (t1); free (t2);
      error_found = 1;
    }

  if (error_found)
    return error_mark_node;

  /* If we're processing a `return' statement, promote the actual type
     to the promoted type.  */
  if (is_return)
    new_rhs = convert (TREE_TYPE (lvalue), new_rhs);

  /* 10.10: Array Store Exception runtime check */
  if (!flag_emit_class_files
      && !flag_emit_xref
      && lvalue_from_array
      && JREFERENCE_TYPE_P (TYPE_ARRAY_ELEMENT (lhs_type)))
    {
      tree array, store_check, base, index_expr;

      /* Save RHS so that it doesn't get re-evaluated by the store check. */
      new_rhs = save_expr (new_rhs);

      /* Get the INDIRECT_REF. */
      array = TREE_OPERAND (TREE_OPERAND (lvalue, 0), 0);
      /* Get the array pointer expr. */
      array = TREE_OPERAND (array, 0);
      store_check = build_java_arraystore_check (array, new_rhs);

      index_expr = TREE_OPERAND (lvalue, 1);

      if (TREE_CODE (index_expr) == COMPOUND_EXPR)
	{
	  /* A COMPOUND_EXPR here is a bounds check. The bounds check must
	     happen before the store check, so prepare to insert the store
	     check within the second operand of the existing COMPOUND_EXPR. */
	  base = index_expr;
	}
      else
        base = lvalue;

      index_expr = TREE_OPERAND (base, 1);
      TREE_OPERAND (base, 1) = build (COMPOUND_EXPR, TREE_TYPE (index_expr),
	  			      store_check, index_expr);
    }

  /* Final locals can be used as case values in switch
     statement. Prepare them for this eventuality. */
  if (TREE_CODE (lvalue) == VAR_DECL
      && DECL_FINAL (lvalue)
      && TREE_CONSTANT (new_rhs)
      && IDENTIFIER_LOCAL_VALUE (DECL_NAME (lvalue))
      && JINTEGRAL_TYPE_P (TREE_TYPE (lvalue))
      )
    {
      TREE_CONSTANT (lvalue) = 1;
      DECL_INITIAL (lvalue) = new_rhs;
    }

  /* Copy the rhs if it's a reference.  */
  if (! flag_check_references && ! flag_emit_class_files && optimize > 0)
    {
      switch (TREE_CODE (new_rhs))
	{
	case ARRAY_REF:
	case INDIRECT_REF:
	case COMPONENT_REF:
	  /* Transform a = foo.bar 
	     into a = { int tmp; tmp = foo.bar; tmp; ).   	     
	     We need to ensure that if a read from memory fails
	     because of a NullPointerException, a destination variable
	     will remain unchanged.  An explicit temporary does what
	     we need.  

	     If flag_check_references is set, this is unnecessary
	     because we'll check each reference before doing any
	     reads.  If optimize is not set the result will never be
	     written to a stack slot that contains the LHS.  */
	  {
	    tree tmp = build_decl (VAR_DECL, get_identifier ("<tmp>"), 
				   TREE_TYPE (new_rhs));
	    tree block = make_node (BLOCK);
	    tree assignment 
	      = build (MODIFY_EXPR, TREE_TYPE (new_rhs), tmp, fold (new_rhs));
	    DECL_CONTEXT (tmp) = current_function_decl;
	    TREE_TYPE (block) = TREE_TYPE (new_rhs);
	    BLOCK_VARS (block) = tmp;
	    BLOCK_EXPR_BODY (block) 
	      = build (COMPOUND_EXPR, TREE_TYPE (new_rhs), assignment, tmp);
	    TREE_SIDE_EFFECTS (block) = 1;
	    new_rhs = block;
	  }
	  break;
	default:
	  break;
	}
    }

  TREE_OPERAND (node, 0) = lvalue;
  TREE_OPERAND (node, 1) = new_rhs;
  TREE_TYPE (node) = lhs_type;
  return node;
}

/* Check that type SOURCE can be cast into type DEST. If the cast
   can't occur at all, return NULL; otherwise, return a possibly
   modified rhs.  */

static tree
try_reference_assignconv (tree lhs_type, tree rhs)
{
  tree new_rhs = NULL_TREE;
  tree rhs_type = TREE_TYPE (rhs);

  if (!JPRIMITIVE_TYPE_P (rhs_type) && JREFERENCE_TYPE_P (lhs_type))
    {
      /* `null' may be assigned to any reference type */
      if (rhs == null_pointer_node)
        new_rhs = null_pointer_node;
      /* Try the reference assignment conversion */
      else if (valid_ref_assignconv_cast_p (rhs_type, lhs_type, 0))
	new_rhs = rhs;
      /* This is a magic assignment that we process differently */
      else if (TREE_CODE (rhs) == JAVA_EXC_OBJ_EXPR)
	new_rhs = rhs;
    }
  return new_rhs;
}

/* Check that RHS can be converted into LHS_TYPE by the assignment
   conversion (5.2), for the cases of RHS being a builtin type. Return
   NULL_TREE if the conversion fails or if because RHS isn't of a
   builtin type. Return a converted RHS if the conversion is possible.  */

static tree
try_builtin_assignconv (tree wfl_op1, tree lhs_type, tree rhs)
{
  tree new_rhs = NULL_TREE;
  tree rhs_type = TREE_TYPE (rhs);

  /* Handle boolean specially.  */
  if (TREE_CODE (rhs_type) == BOOLEAN_TYPE
      || TREE_CODE (lhs_type) == BOOLEAN_TYPE)
    {
      if (TREE_CODE (rhs_type) == BOOLEAN_TYPE
	  && TREE_CODE (lhs_type) == BOOLEAN_TYPE)
	new_rhs = rhs;
    }

  /* 5.1.1 Try Identity Conversion,
     5.1.2 Try Widening Primitive Conversion */
  else if (valid_builtin_assignconv_identity_widening_p (lhs_type, rhs_type))
    new_rhs = convert (lhs_type, rhs);

  /* Try a narrowing primitive conversion (5.1.3):
       - expression is a constant expression of type byte, short, char,
         or int, AND
       - variable is byte, short or char AND
       - The value of the expression is representable in the type of the
         variable */
  else if ((rhs_type == byte_type_node || rhs_type == short_type_node
	    || rhs_type == char_type_node || rhs_type == int_type_node)
	    && TREE_CONSTANT (rhs)
	   && (lhs_type == byte_type_node || lhs_type == char_type_node
	       || lhs_type == short_type_node))
    {
      if (int_fits_type_p (rhs, lhs_type))
        new_rhs = convert (lhs_type, rhs);
      else if (wfl_op1)		/* Might be called with a NULL */
	parse_warning_context
	  (wfl_op1, "Constant expression `%s' too wide for narrowing primitive conversion to `%s'",
	   print_int_node (rhs), lang_printable_name (lhs_type, 0));
      /* Reported a warning that will turn into an error further
	 down, so we don't return */
    }

  return new_rhs;
}

/* Return 1 if RHS_TYPE can be converted to LHS_TYPE by identity
   conversion (5.1.1) or widening primitive conversion (5.1.2).  Return
   0 is the conversion test fails.  This implements parts the method
   invocation conversion (5.3).  */

static int
valid_builtin_assignconv_identity_widening_p (tree lhs_type, tree rhs_type)
{
  /* 5.1.1: This is the identity conversion part. */
  if (lhs_type == rhs_type)
    return 1;

  /* Reject non primitive types and boolean conversions.  */
  if (!JNUMERIC_TYPE_P (lhs_type) || !JNUMERIC_TYPE_P (rhs_type))
    return 0;

  /* 5.1.2: widening primitive conversion. byte, even if it's smaller
     than a char can't be converted into a char. Short can't too, but
     the < test below takes care of that */
  if (lhs_type == char_type_node && rhs_type == byte_type_node)
    return 0;

  /* Accept all promoted type here. Note, we can't use <= in the test
     below, because we still need to bounce out assignments of short
     to char and the likes */
  if (lhs_type == int_type_node
      && (rhs_type == promoted_byte_type_node
	  || rhs_type == promoted_short_type_node
	  || rhs_type == promoted_char_type_node
	  || rhs_type == promoted_boolean_type_node))
    return 1;

  /* From here, an integral is widened if its precision is smaller
     than the precision of the LHS or if the LHS is a floating point
     type, or the RHS is a float and the RHS a double. */
  if ((JINTEGRAL_TYPE_P (rhs_type) && JINTEGRAL_TYPE_P (lhs_type)
       && (TYPE_PRECISION (rhs_type) < TYPE_PRECISION (lhs_type)))
      || (JINTEGRAL_TYPE_P (rhs_type) && JFLOAT_TYPE_P (lhs_type))
      || (rhs_type == float_type_node && lhs_type == double_type_node))
    return 1;

  return 0;
}

/* Check that something of SOURCE type can be assigned or cast to
   something of DEST type at runtime. Return 1 if the operation is
   valid, 0 otherwise. If CAST is set to 1, we're treating the case
   were SOURCE is cast into DEST, which borrows a lot of the
   assignment check. */

static int
valid_ref_assignconv_cast_p (tree source, tree dest, int cast)
{
  /* SOURCE or DEST might be null if not from a declared entity. */
  if (!source || !dest)
    return 0;
  if (JNULLP_TYPE_P (source))
    return 1;
  if (TREE_CODE (source) == POINTER_TYPE)
    source = TREE_TYPE (source);
  if (TREE_CODE (dest) == POINTER_TYPE)
    dest = TREE_TYPE (dest);

  /* If source and dest are being compiled from bytecode, they may need to
     be loaded. */
  if (CLASS_P (source) && !CLASS_LOADED_P (source))
    {
      load_class (source, 1);
      safe_layout_class (source);
    }
  if (CLASS_P (dest) && !CLASS_LOADED_P (dest))
    {
      load_class (dest, 1);
      safe_layout_class (dest);
    }

  /* Case where SOURCE is a class type */
  if (TYPE_CLASS_P (source))
    {
      if (TYPE_CLASS_P (dest))
	return  (source == dest
		 || inherits_from_p (source, dest)
		 || (cast && inherits_from_p (dest, source)));
      if (TYPE_INTERFACE_P (dest))
	{
	  /* If doing a cast and SOURCE is final, the operation is
             always correct a compile time (because even if SOURCE
             does not implement DEST, a subclass of SOURCE might). */
	  if (cast && !CLASS_FINAL (TYPE_NAME (source)))
	    return 1;
	  /* Otherwise, SOURCE must implement DEST */
	  return interface_of_p (dest, source);
	}
      /* DEST is an array, cast permitted if SOURCE is of Object type */
      return (cast && source == object_type_node ? 1 : 0);
    }
  if (TYPE_INTERFACE_P (source))
    {
      if (TYPE_CLASS_P (dest))
	{
	  /* If not casting, DEST must be the Object type */
	  if (!cast)
	    return dest == object_type_node;
	  /* We're doing a cast. The cast is always valid is class
	     DEST is not final, otherwise, DEST must implement SOURCE */
	  else if (!CLASS_FINAL (TYPE_NAME (dest)))
	    return 1;
	  else
	    return interface_of_p (source, dest);
	}
      if (TYPE_INTERFACE_P (dest))
	{
	  /* If doing a cast, then if SOURCE and DEST contain method
             with the same signature but different return type, then
             this is a (compile time) error */
	  if (cast)
	    {
	      tree method_source, method_dest;
	      tree source_type;
	      tree source_sig;
	      tree source_name;
	      for (method_source = TYPE_METHODS (source); method_source;
		   method_source = TREE_CHAIN (method_source))
		{
		  source_sig =
		    build_java_argument_signature (TREE_TYPE (method_source));
		  source_type = TREE_TYPE (TREE_TYPE (method_source));
		  source_name = DECL_NAME (method_source);
		  for (method_dest = TYPE_METHODS (dest);
		       method_dest; method_dest = TREE_CHAIN (method_dest))
		    if (source_sig ==
			build_java_argument_signature (TREE_TYPE (method_dest))
			&& source_name == DECL_NAME (method_dest)
			&& source_type != TREE_TYPE (TREE_TYPE (method_dest)))
		      return 0;
		}
	      return 1;
	    }
	  else
	    return source == dest || interface_of_p (dest, source);
	}
      else
	{
	  /* Array */
	  return (cast
		  && (DECL_NAME (TYPE_NAME (source))
		      == java_lang_cloneable_identifier_node
		      || (DECL_NAME (TYPE_NAME (source))
			  == java_io_serializable_identifier_node)));
	}
    }
  if (TYPE_ARRAY_P (source))
    {
      if (TYPE_CLASS_P (dest))
	return dest == object_type_node;
      /* Can't cast an array to an interface unless the interface is
	 java.lang.Cloneable or java.io.Serializable.  */
      if (TYPE_INTERFACE_P (dest))
	return (DECL_NAME (TYPE_NAME (dest))
		== java_lang_cloneable_identifier_node
		|| (DECL_NAME (TYPE_NAME (dest))
		    == java_io_serializable_identifier_node));
      else			/* Arrays */
	{
	  tree source_element_type = TYPE_ARRAY_ELEMENT (source);
	  tree dest_element_type = TYPE_ARRAY_ELEMENT (dest);

	  /* In case of severe errors, they turn out null */
	  if (!dest_element_type || !source_element_type)
	    return 0;
	  if (source_element_type == dest_element_type)
	    return 1;
	  return valid_ref_assignconv_cast_p (source_element_type,
					      dest_element_type, cast);
	}
      return 0;
    }
  return 0;
}

static int
valid_cast_to_p (tree source, tree dest)
{
  if (TREE_CODE (source) == POINTER_TYPE)
    source = TREE_TYPE (source);
  if (TREE_CODE (dest) == POINTER_TYPE)
    dest = TREE_TYPE (dest);

  if (TREE_CODE (source) == RECORD_TYPE && TREE_CODE (dest) == RECORD_TYPE)
    return valid_ref_assignconv_cast_p (source, dest, 1);

  else if (JNUMERIC_TYPE_P (source) && JNUMERIC_TYPE_P (dest))
    return 1;

  else if (TREE_CODE (source) == BOOLEAN_TYPE
	   && TREE_CODE (dest) == BOOLEAN_TYPE)
    return 1;

  return 0;
}

static tree
do_unary_numeric_promotion (tree arg)
{
  tree type = TREE_TYPE (arg);
  if ((TREE_CODE (type) == INTEGER_TYPE && TYPE_PRECISION (type) < 32)
      || TREE_CODE (type) == CHAR_TYPE)
    arg = convert (int_type_node, arg);
  return arg;
}

/* Return a nonzero value if SOURCE can be converted into DEST using
   the method invocation conversion rule (5.3).  */
static int
valid_method_invocation_conversion_p (tree dest, tree source)
{
  return ((JPRIMITIVE_TYPE_P (source) && JPRIMITIVE_TYPE_P (dest)
	   && valid_builtin_assignconv_identity_widening_p (dest, source))
	  || ((JREFERENCE_TYPE_P (source) || JNULLP_TYPE_P (source))
	      && (JREFERENCE_TYPE_P (dest) || JNULLP_TYPE_P (dest))
	      && valid_ref_assignconv_cast_p (source, dest, 0)));
}

/* Build an incomplete binop expression. */

static tree
build_binop (enum tree_code op, int op_location, tree op1, tree op2)
{
  tree binop = build (op, NULL_TREE, op1, op2);
  TREE_SIDE_EFFECTS (binop) = 1;
  /* Store the location of the operator, for better error report. The
     string of the operator will be rebuild based on the OP value. */
  EXPR_WFL_LINECOL (binop) = op_location;
  return binop;
}

/* Build the string of the operator retained by NODE. If NODE is part
   of a compound expression, add an '=' at the end of the string. This
   function is called when an error needs to be reported on an
   operator. The string is returned as a pointer to a static character
   buffer. */

static char *
operator_string (tree node)
{
#define BUILD_OPERATOR_STRING(S)					\
  {									\
    sprintf (buffer, "%s%s", S, (COMPOUND_ASSIGN_P (node) ? "=" : ""));	\
    return buffer;							\
  }

  static char buffer [10];
  switch (TREE_CODE (node))
    {
    case MULT_EXPR: BUILD_OPERATOR_STRING ("*");
    case RDIV_EXPR: BUILD_OPERATOR_STRING ("/");
    case TRUNC_MOD_EXPR: BUILD_OPERATOR_STRING ("%");
    case PLUS_EXPR: BUILD_OPERATOR_STRING ("+");
    case MINUS_EXPR: BUILD_OPERATOR_STRING ("-");
    case LSHIFT_EXPR: BUILD_OPERATOR_STRING ("<<");
    case RSHIFT_EXPR: BUILD_OPERATOR_STRING (">>");
    case URSHIFT_EXPR: BUILD_OPERATOR_STRING (">>>");
    case BIT_AND_EXPR: BUILD_OPERATOR_STRING ("&");
    case BIT_XOR_EXPR: BUILD_OPERATOR_STRING ("^");
    case BIT_IOR_EXPR: BUILD_OPERATOR_STRING ("|");
    case TRUTH_ANDIF_EXPR: BUILD_OPERATOR_STRING ("&&");
    case TRUTH_ORIF_EXPR: BUILD_OPERATOR_STRING ("||");
    case EQ_EXPR: BUILD_OPERATOR_STRING ("==");
    case NE_EXPR: BUILD_OPERATOR_STRING ("!=");
    case GT_EXPR: BUILD_OPERATOR_STRING (">");
    case GE_EXPR: BUILD_OPERATOR_STRING (">=");
    case LT_EXPR: BUILD_OPERATOR_STRING ("<");
    case LE_EXPR: BUILD_OPERATOR_STRING ("<=");
    case UNARY_PLUS_EXPR: BUILD_OPERATOR_STRING ("+");
    case NEGATE_EXPR: BUILD_OPERATOR_STRING ("-");
    case TRUTH_NOT_EXPR: BUILD_OPERATOR_STRING ("!");
    case BIT_NOT_EXPR: BUILD_OPERATOR_STRING ("~");
    case PREINCREMENT_EXPR:	/* Fall through */
    case POSTINCREMENT_EXPR: BUILD_OPERATOR_STRING ("++");
    case PREDECREMENT_EXPR:	/* Fall through */
    case POSTDECREMENT_EXPR: BUILD_OPERATOR_STRING ("--");
    default:
      internal_error ("unregistered operator %s",
		      tree_code_name [TREE_CODE (node)]);
    }
  return NULL;
#undef BUILD_OPERATOR_STRING
}

/* Return 1 if VAR_ACCESS1 is equivalent to VAR_ACCESS2.  */

static int
java_decl_equiv (tree var_acc1, tree var_acc2)
{
  if (JDECL_P (var_acc1))
    return (var_acc1 == var_acc2);

  return (TREE_CODE (var_acc1) == COMPONENT_REF
	  && TREE_CODE (var_acc2) == COMPONENT_REF
	  && TREE_OPERAND (TREE_OPERAND (var_acc1, 0), 0)
	     == TREE_OPERAND (TREE_OPERAND (var_acc2, 0), 0)
	  && TREE_OPERAND (var_acc1, 1) == TREE_OPERAND (var_acc2, 1));
}

/* Return a nonzero value if CODE is one of the operators that can be
   used in conjunction with the `=' operator in a compound assignment.  */

static int
binop_compound_p (enum tree_code code)
{
  int i;
  for (i = 0; i < BINOP_COMPOUND_CANDIDATES; i++)
    if (binop_lookup [i] == code)
      break;

  return i < BINOP_COMPOUND_CANDIDATES;
}

/* Reorganize after a fold to get SAVE_EXPR to generate what we want.  */

static tree
java_refold (tree t)
{
  tree c, b, ns, decl;

  if (TREE_CODE (t) != MODIFY_EXPR)
    return t;

  c = TREE_OPERAND (t, 1);
  if (! (c && TREE_CODE (c) == COMPOUND_EXPR
	 && TREE_CODE (TREE_OPERAND (c, 0)) == MODIFY_EXPR
	 && binop_compound_p (TREE_CODE (TREE_OPERAND (c, 1)))))
    return t;

  /* Now the left branch of the binary operator. */
  b = TREE_OPERAND (TREE_OPERAND (c, 1), 0);
  if (! (b && TREE_CODE (b) == NOP_EXPR
	 && TREE_CODE (TREE_OPERAND (b, 0)) == SAVE_EXPR))
    return t;

  ns = TREE_OPERAND (TREE_OPERAND (b, 0), 0);
  if (! (ns && TREE_CODE (ns) == NOP_EXPR
	 && TREE_CODE (TREE_OPERAND (ns, 0)) == SAVE_EXPR))
    return t;

  decl = TREE_OPERAND (TREE_OPERAND (ns, 0), 0);
  if ((JDECL_P (decl) || TREE_CODE (decl) == COMPONENT_REF)
      /* It's got to be the an equivalent decl */
      && java_decl_equiv (decl, TREE_OPERAND (TREE_OPERAND (c, 0), 0)))
    {
      /* Shorten the NOP_EXPR/SAVE_EXPR path. */
      TREE_OPERAND (TREE_OPERAND (c, 1), 0) = TREE_OPERAND (ns, 0);
      /* Substitute the COMPOUND_EXPR by the BINOP_EXPR */
      TREE_OPERAND (t, 1) = TREE_OPERAND (c, 1);
      /* Change the right part of the BINOP_EXPR */
      TREE_OPERAND (TREE_OPERAND (t, 1), 1) = TREE_OPERAND (c, 0);
    }

  return t;
}

/* Binary operators (15.16 up to 15.18). We return error_mark_node on
   errors but we modify NODE so that it contains the type computed
   according to the expression, when it's fixed. Otherwise, we write
   error_mark_node as the type. It allows us to further the analysis
   of remaining nodes and detects more errors in certain cases.  */

static tree
patch_binop (tree node, tree wfl_op1, tree wfl_op2)
{
  tree op1 = TREE_OPERAND (node, 0);
  tree op2 = TREE_OPERAND (node, 1);
  tree op1_type = TREE_TYPE (op1);
  tree op2_type = TREE_TYPE (op2);
  tree prom_type = NULL_TREE, cn;
  enum tree_code code = TREE_CODE (node);

  /* If 1, tell the routine that we have to return error_mark_node
     after checking for the initialization of the RHS */
  int error_found = 0;

  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* If either op<n>_type are NULL, this might be early signs of an
     error situation, unless it's too early to tell (in case we're
     handling a `+', `==', `!=' or `instanceof'.) We want to set op<n>_type
     correctly so the error can be later on reported accurately. */
  if (! (code == PLUS_EXPR || code == NE_EXPR
	 || code == EQ_EXPR || code == INSTANCEOF_EXPR))
    {
      tree n;
      if (! op1_type)
	{
	  n = java_complete_tree (op1);
	  op1_type = TREE_TYPE (n);
	}
      if (! op2_type)
	{
	  n = java_complete_tree (op2);
	  op2_type = TREE_TYPE (n);
	}
    }

  switch (code)
    {
    /* 15.16 Multiplicative operators */
    case MULT_EXPR:		/* 15.16.1 Multiplication Operator * */
    case RDIV_EXPR:		/* 15.16.2 Division Operator / */
    case TRUNC_DIV_EXPR:	/* 15.16.2 Integral type Division Operator / */
    case TRUNC_MOD_EXPR:	/* 15.16.3 Remainder operator % */
      if (!JNUMERIC_TYPE_P (op1_type) || !JNUMERIC_TYPE_P (op2_type))
	{
	  if (!JNUMERIC_TYPE_P (op1_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op1_type);
	  if (!JNUMERIC_TYPE_P (op2_type) && (op1_type != op2_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op2_type);
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	  break;
	}
      prom_type = binary_numeric_promotion (op1_type, op2_type, &op1, &op2);

      /* Detect integral division by zero */
      if ((code == RDIV_EXPR || code == TRUNC_MOD_EXPR)
	  && TREE_CODE (prom_type) == INTEGER_TYPE
	  && (op2 == integer_zero_node || op2 == long_zero_node ||
	      (TREE_CODE (op2) == INTEGER_CST &&
	       ! TREE_INT_CST_LOW (op2)  && ! TREE_INT_CST_HIGH (op2))))
	{
	  parse_warning_context (wfl_operator, "Evaluating this expression will result in an arithmetic exception being thrown");
	  TREE_CONSTANT (node) = 0;
	}

      /* Change the division operator if necessary */
      if (code == RDIV_EXPR && TREE_CODE (prom_type) == INTEGER_TYPE)
	TREE_SET_CODE (node, TRUNC_DIV_EXPR);

      /* Before divisions as is disappear, try to simplify and bail if
         applicable, otherwise we won't perform even simple
         simplifications like (1-1)/3. We can't do that with floating
         point number, folds can't handle them at this stage. */
      if (code == RDIV_EXPR && TREE_CONSTANT (op1) && TREE_CONSTANT (op2)
	  && JINTEGRAL_TYPE_P (op1) && JINTEGRAL_TYPE_P (op2))
	{
	  TREE_TYPE (node) = prom_type;
	  node = fold (node);
	  if (TREE_CODE (node) != code)
	    return node;
	}

      if (TREE_CODE (prom_type) == INTEGER_TYPE
	  && flag_use_divide_subroutine
	  && ! flag_emit_class_files
	  && (code == RDIV_EXPR || code == TRUNC_MOD_EXPR))
	return build_java_soft_divmod (TREE_CODE (node), prom_type, op1, op2);

      /* This one is more complicated. FLOATs are processed by a
	 function call to soft_fmod. Duplicate the value of the
	 COMPOUND_ASSIGN_P flag. */
      if (code == TRUNC_MOD_EXPR)
	{
	  tree mod = build_java_binop (TRUNC_MOD_EXPR, prom_type, op1, op2);
	  COMPOUND_ASSIGN_P (mod) = COMPOUND_ASSIGN_P (node);
	  TREE_SIDE_EFFECTS (mod)
	    = TREE_SIDE_EFFECTS (op1) | TREE_SIDE_EFFECTS (op2);
	  return mod;
	}
      break;

    /* 15.17 Additive Operators */
    case PLUS_EXPR:		/* 15.17.1 String Concatenation Operator + */

      /* Operation is valid if either one argument is a string
	 constant, a String object or a StringBuffer crafted for the
	 purpose of the a previous usage of the String concatenation
	 operator */

      if (TREE_CODE (op1) == STRING_CST
	  || TREE_CODE (op2) == STRING_CST
	  || JSTRING_TYPE_P (op1_type)
	  || JSTRING_TYPE_P (op2_type)
	  || IS_CRAFTED_STRING_BUFFER_P (op1)
	  || IS_CRAFTED_STRING_BUFFER_P (op2))
	return build_string_concatenation (op1, op2);

    case MINUS_EXPR:		/* 15.17.2 Additive Operators (+ and -) for
				   Numeric Types */
      if (!JNUMERIC_TYPE_P (op1_type) || !JNUMERIC_TYPE_P (op2_type))
	{
	  if (!JNUMERIC_TYPE_P (op1_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op1_type);
	  if (!JNUMERIC_TYPE_P (op2_type) && (op1_type != op2_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op2_type);
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	  break;
	}
      prom_type = binary_numeric_promotion (op1_type, op2_type, &op1, &op2);
      break;

    /* 15.18 Shift Operators */
    case LSHIFT_EXPR:
    case RSHIFT_EXPR:
    case URSHIFT_EXPR:
      if (!JINTEGRAL_TYPE_P (op1_type) || !JINTEGRAL_TYPE_P (op2_type))
	{
	  if (!JINTEGRAL_TYPE_P (op1_type))
	    ERROR_CAST_NEEDED_TO_INTEGRAL (wfl_operator, node, op1_type);
	  else
	    {
	      if (JNUMERIC_TYPE_P (op2_type))
		parse_error_context (wfl_operator,
				     "Incompatible type for `%s'. Explicit cast needed to convert shift distance from `%s' to integral",
				     operator_string (node),
				     lang_printable_name (op2_type, 0));
	      else
		parse_error_context (wfl_operator,
				     "Incompatible type for `%s'. Can't convert shift distance from `%s' to integral",
				     operator_string (node),
				     lang_printable_name (op2_type, 0));
	    }
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	  break;
	}

      /* Unary numeric promotion (5.6.1) is performed on each operand
         separately */
      op1 = do_unary_numeric_promotion (op1);
      op2 = do_unary_numeric_promotion (op2);

      /* If the right hand side is of type `long', first cast it to
	 `int'.  */
      if (TREE_TYPE (op2) == long_type_node)
	op2 = build1 (CONVERT_EXPR, int_type_node, op2);

      /* The type of the shift expression is the type of the promoted
         type of the left-hand operand */
      prom_type = TREE_TYPE (op1);

      /* Shift int only up to 0x1f and long up to 0x3f */
      if (prom_type == int_type_node)
	op2 = fold (build (BIT_AND_EXPR, int_type_node, op2,
			   build_int_2 (0x1f, 0)));
      else
	op2 = fold (build (BIT_AND_EXPR, int_type_node, op2,
			   build_int_2 (0x3f, 0)));

      /* The >>> operator is a >> operating on unsigned quantities */
      if (code == URSHIFT_EXPR && ! flag_emit_class_files)
	{
	  tree to_return;
          tree utype = java_unsigned_type (prom_type);
          op1 = convert (utype, op1);
	  TREE_SET_CODE (node, RSHIFT_EXPR);
          TREE_OPERAND (node, 0) = op1;
          TREE_OPERAND (node, 1) = op2;
          TREE_TYPE (node) = utype;
	  to_return = convert (prom_type, node);
	  /* Copy the original value of the COMPOUND_ASSIGN_P flag */
	  COMPOUND_ASSIGN_P (to_return) = COMPOUND_ASSIGN_P (node);
	  TREE_SIDE_EFFECTS (to_return)
	    = TREE_SIDE_EFFECTS (op1) | TREE_SIDE_EFFECTS (op2);
	  return to_return;
	}
      break;

      /* 15.19.1 Type Comparison Operator instanceof */
    case INSTANCEOF_EXPR:

      TREE_TYPE (node) = boolean_type_node;

      /* OP1_TYPE might be NULL when OP1 is a string constant.  */
      if ((cn = patch_string (op1)))
	{
	  op1 = cn;
	  op1_type = TREE_TYPE (op1);
	}
      if (op1_type == NULL_TREE)
	abort ();

      if (!(op2_type = resolve_type_during_patch (op2)))
	return error_mark_node;

      /* The first operand must be a reference type or the null type */
      if (!JREFERENCE_TYPE_P (op1_type) && op1 != null_pointer_node)
	error_found = 1;	/* Error reported further below */

      /* The second operand must be a reference type */
      if (!JREFERENCE_TYPE_P (op2_type))
	{
	  SET_WFL_OPERATOR (wfl_operator, node, wfl_op2);
	  parse_error_context
	    (wfl_operator, "Invalid argument `%s' for `instanceof'",
	     lang_printable_name (op2_type, 0));
	  error_found = 1;
	}

      if (!error_found && valid_ref_assignconv_cast_p (op1_type, op2_type, 1))
	{
	  /* If the first operand is null, the result is always false */
	  if (op1 == null_pointer_node)
	    return boolean_false_node;
	  else if (flag_emit_class_files)
	    {
	      TREE_OPERAND (node, 1) = op2_type;
	      TREE_SIDE_EFFECTS (node) = TREE_SIDE_EFFECTS (op1);
	      return node;
	    }
	  /* Otherwise we have to invoke instance of to figure it out */
	  else
	    return build_instanceof (op1, op2_type);
	}
      /* There is no way the expression operand can be an instance of
	 the type operand. This is a compile time error. */
      else
	{
	  char *t1 = xstrdup (lang_printable_name (op1_type, 0));
	  SET_WFL_OPERATOR (wfl_operator, node, wfl_op1);
	  parse_error_context
	    (wfl_operator, "Impossible for `%s' to be instance of `%s'",
	     t1, lang_printable_name (op2_type, 0));
	  free (t1);
	  error_found = 1;
	}

      break;

      /* 15.21 Bitwise and Logical Operators */
    case BIT_AND_EXPR:
    case BIT_XOR_EXPR:
    case BIT_IOR_EXPR:
      if (JINTEGRAL_TYPE_P (op1_type) && JINTEGRAL_TYPE_P (op2_type))
	/* Binary numeric promotion is performed on both operand and the
	   expression retain that type */
	prom_type = binary_numeric_promotion (op1_type, op2_type, &op1, &op2);

      else if (TREE_CODE (op1_type) == BOOLEAN_TYPE
	       && TREE_CODE (op1_type) == BOOLEAN_TYPE)
	/* The type of the bitwise operator expression is BOOLEAN */
	prom_type = boolean_type_node;
      else
	{
	  if (!JINTEGRAL_TYPE_P (op1_type))
	    ERROR_CAST_NEEDED_TO_INTEGRAL (wfl_operator, node, op1_type);
	  if (!JINTEGRAL_TYPE_P (op2_type) && (op1_type != op2_type))
	    ERROR_CAST_NEEDED_TO_INTEGRAL (wfl_operator, node, op2_type);
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	  /* Insert a break here if adding thing before the switch's
             break for this case */
	}
      break;

      /* 15.22 Conditional-And Operator */
    case TRUTH_ANDIF_EXPR:
      /* 15.23 Conditional-Or Operator */
    case TRUTH_ORIF_EXPR:
      /* Operands must be of BOOLEAN type */
      if (TREE_CODE (op1_type) != BOOLEAN_TYPE ||
	  TREE_CODE (op2_type) != BOOLEAN_TYPE)
	{
	  if (TREE_CODE (op1_type) != BOOLEAN_TYPE)
	    ERROR_CANT_CONVERT_TO_BOOLEAN (wfl_operator, node, op1_type);
	  if (TREE_CODE (op2_type) != BOOLEAN_TYPE && (op1_type != op2_type))
	    ERROR_CANT_CONVERT_TO_BOOLEAN (wfl_operator, node, op2_type);
	  TREE_TYPE (node) = boolean_type_node;
	  error_found = 1;
	  break;
	}
      else if (integer_zerop (op1))
	{
	  return code == TRUTH_ANDIF_EXPR ? op1 : op2;
	}
      else if (integer_onep (op1))
	{
	  return code == TRUTH_ANDIF_EXPR ? op2 : op1;
	}
      /* The type of the conditional operators is BOOLEAN */
      prom_type = boolean_type_node;
      break;

      /* 15.19.1 Numerical Comparison Operators <, <=, >, >= */
    case LT_EXPR:
    case GT_EXPR:
    case LE_EXPR:
    case GE_EXPR:
      /* The type of each of the operands must be a primitive numeric
         type */
      if (!JNUMERIC_TYPE_P (op1_type) || ! JNUMERIC_TYPE_P (op2_type))
	{
	  if (!JNUMERIC_TYPE_P (op1_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op1_type);
	  if (!JNUMERIC_TYPE_P (op2_type) && (op1_type != op2_type))
	    ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op2_type);
	  TREE_TYPE (node) = boolean_type_node;
	  error_found = 1;
	  break;
	}
      /* Binary numeric promotion is performed on the operands */
      binary_numeric_promotion (op1_type, op2_type, &op1, &op2);
      /* The type of the relation expression is always BOOLEAN */
      prom_type = boolean_type_node;
      break;

      /* 15.20 Equality Operator */
    case EQ_EXPR:
    case NE_EXPR:
      /* It's time for us to patch the strings. */
      if ((cn = patch_string (op1)))
       {
         op1 = cn;
         op1_type = TREE_TYPE (op1);
       }
      if ((cn = patch_string (op2)))
       {
         op2 = cn;
         op2_type = TREE_TYPE (op2);
       }

      /* 15.20.1 Numerical Equality Operators == and != */
      /* Binary numeric promotion is performed on the operands */
      if (JNUMERIC_TYPE_P (op1_type) && JNUMERIC_TYPE_P (op2_type))
	binary_numeric_promotion (op1_type, op2_type, &op1, &op2);

      /* 15.20.2 Boolean Equality Operators == and != */
      else if (TREE_CODE (op1_type) == BOOLEAN_TYPE &&
	  TREE_CODE (op2_type) == BOOLEAN_TYPE)
	;			/* Nothing to do here */

      /* 15.20.3 Reference Equality Operators == and != */
      /* Types have to be either references or the null type. If
         they're references, it must be possible to convert either
         type to the other by casting conversion. */
      else if (op1 == null_pointer_node || op2 == null_pointer_node
	       || (JREFERENCE_TYPE_P (op1_type) && JREFERENCE_TYPE_P (op2_type)
		   && (valid_ref_assignconv_cast_p (op1_type, op2_type, 1)
		       || valid_ref_assignconv_cast_p (op2_type,
						       op1_type, 1))))
	;			/* Nothing to do here */

      /* Else we have an error figure what can't be converted into
	 what and report the error */
      else
	{
	  char *t1;
	  t1 = xstrdup (lang_printable_name (op1_type, 0));
	  parse_error_context
	    (wfl_operator,
	     "Incompatible type for `%s'. Can't convert `%s' to `%s'",
	     operator_string (node), t1,
	     lang_printable_name (op2_type, 0));
	  free (t1);
	  TREE_TYPE (node) = boolean_type_node;
	  error_found = 1;
	  break;
	}
      prom_type = boolean_type_node;
      break;
    default:
      abort ();
    }

  if (error_found)
    return error_mark_node;

  TREE_OPERAND (node, 0) = op1;
  TREE_OPERAND (node, 1) = op2;
  TREE_TYPE (node) = prom_type;
  TREE_SIDE_EFFECTS (node) = TREE_SIDE_EFFECTS (op1) | TREE_SIDE_EFFECTS (op2);

  if (flag_emit_xref)
    return node;

  /* fold does not respect side-effect order as required for Java but not C.
   * Also, it sometimes create SAVE_EXPRs which are bad when emitting
   * bytecode.
   */
  if (flag_emit_class_files ? (TREE_CONSTANT (op1) && TREE_CONSTANT (op2))
      : ! TREE_SIDE_EFFECTS (node))
    node = fold (node);
  return node;
}

/* Concatenate the STRING_CST CSTE and STRING. When AFTER is a non
   zero value, the value of CSTE comes after the valude of STRING */

static tree
do_merge_string_cste (tree cste, const char *string, int string_len, int after)
{
  const char *old = TREE_STRING_POINTER (cste);
  int old_len = TREE_STRING_LENGTH (cste);
  int len = old_len + string_len;
  char *new = alloca (len+1);

  if (after)
    {
      memcpy (new, string, string_len);
      memcpy (&new [string_len], old, old_len);
    }
  else
    {
      memcpy (new, old, old_len);
      memcpy (&new [old_len], string, string_len);
    }
  new [len] = '\0';
  return build_string (len, new);
}

/* Tries to merge OP1 (a STRING_CST) and OP2 (if suitable). Return a
   new STRING_CST on success, NULL_TREE on failure.  */

static tree
merge_string_cste (tree op1, tree op2, int after)
{
  /* Handle two string constants right away.  */
  if (TREE_CODE (op2) == STRING_CST)
    return do_merge_string_cste (op1, TREE_STRING_POINTER (op2),
				 TREE_STRING_LENGTH (op2), after);

  /* Reasonable integer constant can be treated right away.  */
  if (TREE_CODE (op2) == INTEGER_CST && !TREE_CONSTANT_OVERFLOW (op2))
    {
      static const char *const boolean_true = "true";
      static const char *const boolean_false = "false";
      static const char *const null_pointer = "null";
      char ch[4];
      const char *string;

      if (op2 == boolean_true_node)
	string = boolean_true;
      else if (op2 == boolean_false_node)
	string = boolean_false;
      else if (op2 == null_pointer_node
	       || (integer_zerop (op2)
		   && TREE_CODE (TREE_TYPE (op2)) == POINTER_TYPE))
	/* FIXME: null is not a compile-time constant, so it is only safe to
	   merge if the overall expression is non-constant. However, this
	   code always merges without checking the overall expression.  */
	string = null_pointer;
      else if (TREE_TYPE (op2) == char_type_node)
	{
	  /* Convert the character into UTF-8.	*/
	  unsigned int c = (unsigned int) TREE_INT_CST_LOW (op2);
	  unsigned char *p = (unsigned char *) ch;
	  if (0x01 <= c && c <= 0x7f)
	    *p++ = (unsigned char) c;
	  else if (c < 0x7ff)
	    {
	      *p++ = (unsigned char) (c >> 6 | 0xc0);
	      *p++ = (unsigned char) ((c & 0x3f) | 0x80);
	    }
	  else
	    {
	      *p++ = (unsigned char) (c >> 12 | 0xe0);
	      *p++ = (unsigned char) (((c >> 6) & 0x3f) | 0x80);
	      *p++ = (unsigned char) ((c & 0x3f) | 0x80);
	    }
	  *p = '\0';

	  string = ch;
	}
      else
	string = string_convert_int_cst (op2);

      return do_merge_string_cste (op1, string, strlen (string), after);
    }
  return NULL_TREE;
}

/* Tries to statically concatenate OP1 and OP2 if possible. Either one
   has to be a STRING_CST and the other part must be a STRING_CST or a
   INTEGRAL constant. Return a new STRING_CST if the operation
   succeed, NULL_TREE otherwise.

   If the case we want to optimize for space, we might want to return
   NULL_TREE for each invocation of this routine. FIXME */

static tree
string_constant_concatenation (tree op1, tree op2)
{
  if (TREE_CODE (op1) == STRING_CST || (TREE_CODE (op2) == STRING_CST))
    {
      tree string, rest;
      int invert;

      string = (TREE_CODE (op1) == STRING_CST ? op1 : op2);
      rest   = (string == op1 ? op2 : op1);
      invert = (string == op1 ? 0 : 1 );

      /* Walk REST, only if it looks reasonable */
      if (TREE_CODE (rest) != STRING_CST
	  && !IS_CRAFTED_STRING_BUFFER_P (rest)
	  && !JSTRING_TYPE_P (TREE_TYPE (rest))
	  && TREE_CODE (rest) == EXPR_WITH_FILE_LOCATION)
	{
	  rest = java_complete_tree (rest);
	  if (rest == error_mark_node)
	    return error_mark_node;
	  rest = fold (rest);
	}
      return merge_string_cste (string, rest, invert);
    }
  return NULL_TREE;
}

/* Implement the `+' operator. Does static optimization if possible,
   otherwise create (if necessary) and append elements to a
   StringBuffer. The StringBuffer will be carried around until it is
   used for a function call or an assignment. Then toString() will be
   called on it to turn it into a String object. */

static tree
build_string_concatenation (tree op1, tree op2)
{
  tree result;
  int side_effects = TREE_SIDE_EFFECTS (op1) | TREE_SIDE_EFFECTS (op2);

  if (flag_emit_xref)
    return build (PLUS_EXPR, string_type_node, op1, op2);

  /* Try to do some static optimization */
  if ((result = string_constant_concatenation (op1, op2)))
    return result;

  /* Discard empty strings on either side of the expression */
  if (TREE_CODE (op1) == STRING_CST && TREE_STRING_LENGTH (op1) == 0)
    {
      op1 = op2;
      op2 = NULL_TREE;
    }
  else if (TREE_CODE (op2) == STRING_CST && TREE_STRING_LENGTH (op2) == 0)
    op2 = NULL_TREE;

  /* If operands are string constant, turn then into object references */
  if (TREE_CODE (op1) == STRING_CST)
    op1 = patch_string_cst (op1);
  if (op2 && TREE_CODE (op2) == STRING_CST)
    op2 = patch_string_cst (op2);

  /* If either one of the constant is null and the other non null
     operand is a String constant, return it. */
  if ((TREE_CODE (op1) == STRING_CST) && !op2)
    return op1;

  /* If OP1 isn't already a StringBuffer, create and
     initialize a new one */
  if (!IS_CRAFTED_STRING_BUFFER_P (op1))
    {
      /* Two solutions here:
	 1) OP1 is a constant string reference, we call new StringBuffer(OP1)
	 2) OP1 is something else, we call new StringBuffer().append(OP1).  */
      if (TREE_CONSTANT (op1) && JSTRING_TYPE_P (TREE_TYPE (op1)))
	op1 = BUILD_STRING_BUFFER (op1);
      else
	{
	  tree aNew = BUILD_STRING_BUFFER (NULL_TREE);
	  op1 = make_qualified_primary (aNew, BUILD_APPEND (op1), 0);
	}
    }

  if (op2)
    {
      /* OP1 is no longer the last node holding a crafted StringBuffer */
      IS_CRAFTED_STRING_BUFFER_P (op1) = 0;
      /* Create a node for `{new...,xxx}.append (op2)' */
      if (op2)
	op1 = make_qualified_primary (op1, BUILD_APPEND (op2), 0);
    }

  /* Mark the last node holding a crafted StringBuffer */
  IS_CRAFTED_STRING_BUFFER_P (op1) = 1;

  TREE_SIDE_EFFECTS (op1) = side_effects;
  return op1;
}

/* Patch the string node NODE. NODE can be a STRING_CST of a crafted
   StringBuffer. If no string were found to be patched, return
   NULL. */

static tree
patch_string (tree node)
{
  if (node == error_mark_node)
    return error_mark_node;
  if (TREE_CODE (node) == STRING_CST)
    return patch_string_cst (node);
  else if (IS_CRAFTED_STRING_BUFFER_P (node))
    {
      int saved = ctxp->explicit_constructor_p;
      tree invoke = build_method_invocation (wfl_to_string, NULL_TREE);
      tree ret;
      /* Temporary disable forbid the use of `this'. */
      ctxp->explicit_constructor_p = 0;
      ret = java_complete_tree (make_qualified_primary (node, invoke, 0));
      /* String concatenation arguments must be evaluated in order too. */
      ret = force_evaluation_order (ret);
      /* Restore it at its previous value */
      ctxp->explicit_constructor_p = saved;
      return ret;
    }
  return NULL_TREE;
}

/* Build the internal representation of a string constant.  */

static tree
patch_string_cst (tree node)
{
  int location;
  if (! flag_emit_class_files)
    {
      node = get_identifier (TREE_STRING_POINTER (node));
      location = alloc_name_constant (CONSTANT_String, node);
      node = build_ref_from_constant_pool (location);
    }
  TREE_TYPE (node) = string_ptr_type_node;
  TREE_CONSTANT (node) = 1;
  return node;
}

/* Build an incomplete unary operator expression. */

static tree
build_unaryop (int op_token, int op_location, tree op1)
{
  enum tree_code op;
  tree unaryop;
  switch (op_token)
    {
    case PLUS_TK: op = UNARY_PLUS_EXPR; break;
    case MINUS_TK: op = NEGATE_EXPR; break;
    case NEG_TK: op = TRUTH_NOT_EXPR; break;
    case NOT_TK: op = BIT_NOT_EXPR; break;
    default: abort ();
    }

  unaryop = build1 (op, NULL_TREE, op1);
  TREE_SIDE_EFFECTS (unaryop) = 1;
  /* Store the location of the operator, for better error report. The
     string of the operator will be rebuild based on the OP value. */
  EXPR_WFL_LINECOL (unaryop) = op_location;
  return unaryop;
}

/* Special case for the ++/-- operators, since they require an extra
   argument to build, which is set to NULL and patched
   later. IS_POST_P is 1 if the operator, 0 otherwise.  */

static tree
build_incdec (int op_token, int op_location, tree op1, int is_post_p)
{
  static const enum tree_code lookup [2][2] =
    {
      { PREDECREMENT_EXPR, PREINCREMENT_EXPR, },
      { POSTDECREMENT_EXPR, POSTINCREMENT_EXPR, },
    };
  tree node = build (lookup [is_post_p][(op_token - DECR_TK)],
		     NULL_TREE, op1, NULL_TREE);
  TREE_SIDE_EFFECTS (node) = 1;
  /* Store the location of the operator, for better error report. The
     string of the operator will be rebuild based on the OP value. */
  EXPR_WFL_LINECOL (node) = op_location;
  return node;
}

/* Build an incomplete cast operator, based on the use of the
   CONVERT_EXPR. Note that TREE_TYPE of the constructed node is
   set. java_complete_tree is trained to walk a CONVERT_EXPR even
   though its type is already set.  */

static tree
build_cast (int location, tree type, tree exp)
{
  tree node = build1 (CONVERT_EXPR, type, exp);
  EXPR_WFL_LINECOL (node) = location;
  return node;
}

/* Build an incomplete class reference operator.  */
static tree
build_incomplete_class_ref (int location, tree class_name)
{
  tree node = build1 (CLASS_LITERAL, NULL_TREE, class_name);
  tree class_decl = GET_CPC ();
  tree this_class = TREE_TYPE (class_decl);

  /* Generate the synthetic static method `class$'.  (Previously we
     deferred this, causing different method tables to be emitted
     for native code and bytecode.)  */
  if (!TYPE_DOT_CLASS (this_class)
      && !JPRIMITIVE_TYPE_P (class_name)
      && !(TREE_CODE (class_name) == VOID_TYPE))
    {
      tree target_class;

      if (CLASS_INTERFACE (TYPE_NAME (this_class)))
	{
	  /* For interfaces, adding a static 'class$' method directly 
	     is illegal.  So create an inner class to contain the new
	     method.  Empirically this matches the behavior of javac.  */
	  tree t = build_wfl_node (DECL_NAME (TYPE_NAME (object_type_node)));
	  tree inner = create_anonymous_class (0, t);
	  target_class = TREE_TYPE (inner);
	  end_class_declaration (1);
	}
      else
	{
	  /* For inner classes, add a 'class$' method to their outermost
	     context, creating it if necessary.  */
	  while (INNER_CLASS_DECL_P (class_decl))
	    class_decl = DECL_CONTEXT (class_decl);
	  target_class = TREE_TYPE (class_decl);
	}

      if (TYPE_DOT_CLASS (target_class) == NULL_TREE)
	build_dot_class_method (target_class);

      if (this_class != target_class)
      	TYPE_DOT_CLASS (this_class) = TYPE_DOT_CLASS (target_class);
    }

  EXPR_WFL_LINECOL (node) = location;
  return node;
}

/* Complete an incomplete class reference operator.  */
static tree
patch_incomplete_class_ref (tree node)
{
  tree type = TREE_OPERAND (node, 0);
  tree ref_type;

  if (!(ref_type = resolve_type_during_patch (type)))
    return error_mark_node;

  /* If we're not emitting class files and we know ref_type is a
     compiled class, build a direct reference.  */
  if ((! flag_emit_class_files && is_compiled_class (ref_type))
      || JPRIMITIVE_TYPE_P (ref_type)
      || TREE_CODE (ref_type) == VOID_TYPE)
    {
      tree dot = build_class_ref (ref_type);
      /* A class referenced by `foo.class' is initialized.  */
      if (!flag_emit_class_files)
       dot = build_class_init (ref_type, dot);
      return java_complete_tree (dot);
    }

  /* If we're emitting class files and we have to deal with non
     primitive types, we invoke the synthetic static method `class$'.  */
  ref_type = build_dot_class_method_invocation (current_class, ref_type);
  return java_complete_tree (ref_type);
}

/* 15.14 Unary operators. We return error_mark_node in case of error,
   but preserve the type of NODE if the type is fixed.  */

static tree
patch_unaryop (tree node, tree wfl_op)
{
  tree op = TREE_OPERAND (node, 0);
  tree op_type = TREE_TYPE (op);
  tree prom_type = NULL_TREE, value, decl;
  int outer_field_flag = 0;
  int code = TREE_CODE (node);
  int error_found = 0;

  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  switch (code)
    {
      /* 15.13.2 Postfix Increment Operator ++ */
    case POSTINCREMENT_EXPR:
      /* 15.13.3 Postfix Increment Operator -- */
    case POSTDECREMENT_EXPR:
      /* 15.14.1 Prefix Increment Operator ++ */
    case PREINCREMENT_EXPR:
      /* 15.14.2 Prefix Decrement Operator -- */
    case PREDECREMENT_EXPR:
      op = decl = extract_field_decl (op);
      outer_field_flag = outer_field_expanded_access_p (op, NULL, NULL, NULL);
      /* We might be trying to change an outer field accessed using
         access method. */
      if (outer_field_flag)
	{
	  /* Retrieve the decl of the field we're trying to access. We
             do that by first retrieving the function we would call to
             access the field. It has been already verified that this
             field isn't final */
	  if (flag_emit_class_files)
	    decl = TREE_OPERAND (op, 0);
	  else
	    decl = TREE_OPERAND (TREE_OPERAND (TREE_OPERAND (op, 0), 0), 0);
	  decl = DECL_FUNCTION_ACCESS_DECL (decl);
	}
      /* We really should have a JAVA_ARRAY_EXPR to avoid this */
      else if (!JDECL_P (decl)
	  && TREE_CODE (decl) != COMPONENT_REF
	  && !(flag_emit_class_files && TREE_CODE (decl) == ARRAY_REF)
	  && TREE_CODE (decl) != INDIRECT_REF
	  && !(TREE_CODE (decl) == COMPOUND_EXPR
	       && TREE_OPERAND (decl, 1)
	       && (TREE_CODE (TREE_OPERAND (decl, 1)) == INDIRECT_REF)))
	{
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	}

      /* From now on, we know that op if a variable and that it has a
         valid wfl. We use wfl_op to locate errors related to the
         ++/-- operand. */
      if (!JNUMERIC_TYPE_P (op_type))
	{
	  parse_error_context
	    (wfl_op, "Invalid argument type `%s' to `%s'",
	     lang_printable_name (op_type, 0), operator_string (node));
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	}
      else
	{
	  /* Before the addition, binary numeric promotion is performed on
	     both operands, if really necessary */
	  if (JINTEGRAL_TYPE_P (op_type))
	    {
	      value = build_int_2 (1, 0);
	      TREE_TYPE (value) = TREE_TYPE (node) = op_type;
	    }
	  else
	    {
	      value = build_int_2 (1, 0);
	      TREE_TYPE (node) =
		binary_numeric_promotion (op_type,
					  TREE_TYPE (value), &op, &value);
	    }

	  /* We remember we might be accessing an outer field */
	  if (outer_field_flag)
	    {
	      /* We re-generate an access to the field */
	      value = build (PLUS_EXPR, TREE_TYPE (op),
			     build_outer_field_access (wfl_op, decl), value);

	      /* And we patch the original access$() into a write
                 with plus_op as a rhs */
	      return outer_field_access_fix (node, op, value);
	    }

	  /* And write back into the node. */
	  TREE_OPERAND (node, 0) = op;
	  TREE_OPERAND (node, 1) = value;
	  /* Convert the overall back into its original type, if
             necessary, and return */
	  if (JINTEGRAL_TYPE_P (op_type))
	    return fold (node);
	  else
	    return fold (convert (op_type, node));
	}
      break;

      /* 15.14.3 Unary Plus Operator + */
    case UNARY_PLUS_EXPR:
      /* 15.14.4 Unary Minus Operator - */
    case NEGATE_EXPR:
      if (!JNUMERIC_TYPE_P (op_type))
	{
	  ERROR_CANT_CONVERT_TO_NUMERIC (wfl_operator, node, op_type);
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	}
      /* Unary numeric promotion is performed on operand */
      else
	{
	  op = do_unary_numeric_promotion (op);
	  prom_type = TREE_TYPE (op);
	  if (code == UNARY_PLUS_EXPR)
	    return fold (op);
	}
      break;

      /* 15.14.5 Bitwise Complement Operator ~ */
    case BIT_NOT_EXPR:
      if (!JINTEGRAL_TYPE_P (op_type))
	{
	  ERROR_CAST_NEEDED_TO_INTEGRAL (wfl_operator, node, op_type);
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	}
      else
	{
	  op = do_unary_numeric_promotion (op);
	  prom_type = TREE_TYPE (op);
	}
      break;

      /* 15.14.6 Logical Complement Operator ! */
    case TRUTH_NOT_EXPR:
      if (TREE_CODE (op_type) != BOOLEAN_TYPE)
	{
	  ERROR_CANT_CONVERT_TO_BOOLEAN (wfl_operator, node, op_type);
	  /* But the type is known. We will report an error if further
	     attempt of a assignment is made with this rhs */
	  TREE_TYPE (node) = boolean_type_node;
	  error_found = 1;
	}
      else
	prom_type = boolean_type_node;
      break;

      /* 15.15 Cast Expression */
    case CONVERT_EXPR:
      value = patch_cast (node, wfl_operator);
      if (value == error_mark_node)
	{
	  /* If this cast is part of an assignment, we tell the code
	     that deals with it not to complain about a mismatch,
	     because things have been cast, anyways */
	  TREE_TYPE (node) = error_mark_node;
	  error_found = 1;
	}
      else
	{
	  value = fold (value);
	  TREE_SIDE_EFFECTS (value) = TREE_SIDE_EFFECTS (op);
	  return value;
	}
      break;
    }

  if (error_found)
    return error_mark_node;

  /* There are cases where node has been replaced by something else
     and we don't end up returning here: UNARY_PLUS_EXPR,
     CONVERT_EXPR, {POST,PRE}{INCR,DECR}EMENT_EXPR. */
  TREE_OPERAND (node, 0) = fold (op);
  TREE_TYPE (node) = prom_type;
  TREE_SIDE_EFFECTS (node) = TREE_SIDE_EFFECTS (op);
  return fold (node);
}

/* Generic type resolution that sometimes takes place during node
   patching. Returned the resolved type or generate an error
   message. Return the resolved type or NULL_TREE.  */

static tree
resolve_type_during_patch (tree type)
{
  if (unresolved_type_p (type, NULL))
    {
      tree type_decl = resolve_and_layout (EXPR_WFL_NODE (type), type);
      if (!type_decl)
	{
	  parse_error_context (type,
			       "Class `%s' not found in type declaration",
			       IDENTIFIER_POINTER (EXPR_WFL_NODE (type)));
	  return NULL_TREE;
	}

      check_deprecation (type, type_decl);

      return TREE_TYPE (type_decl);
    }
  return type;
}

/* 5.5 Casting Conversion. error_mark_node is returned if an error is
   found. Otherwise NODE or something meant to replace it is returned.  */

static tree
patch_cast (tree node, tree wfl_op)
{
  tree op = TREE_OPERAND (node, 0);
  tree cast_type = TREE_TYPE (node);
  tree patched, op_type;
  char *t1;

  /* Some string patching might be necessary at this stage */
  if ((patched = patch_string (op)))
    TREE_OPERAND (node, 0) = op = patched;
  op_type = TREE_TYPE (op);

  /* First resolve OP_TYPE if unresolved */
  if (!(cast_type = resolve_type_during_patch (cast_type)))
    return error_mark_node;

  /* Check on cast that are proven correct at compile time */
  if (JNUMERIC_TYPE_P (cast_type) && JNUMERIC_TYPE_P (op_type))
    {
      /* Same type */
      if (cast_type == op_type)
	return node;

      /* A narrowing conversion from a floating-point number to an
	 integral type requires special handling (5.1.3).  */
      if (JFLOAT_TYPE_P (op_type) && JINTEGRAL_TYPE_P (cast_type))
	if (cast_type != long_type_node)
	  op = convert (integer_type_node, op);

      /* Try widening/narrowing conversion.  Potentially, things need
	 to be worked out in gcc so we implement the extreme cases
	 correctly.  fold_convert() needs to be fixed.  */
      return convert (cast_type, op);
    }

  /* It's also valid to cast a boolean into a boolean */
  if (op_type == boolean_type_node && cast_type == boolean_type_node)
    return node;

  /* null can be casted to references */
  if (op == null_pointer_node && JREFERENCE_TYPE_P (cast_type))
    return build_null_of_type (cast_type);

  /* The remaining legal casts involve conversion between reference
     types. Check for their compile time correctness. */
  if (JREFERENCE_TYPE_P (op_type) && JREFERENCE_TYPE_P (cast_type)
      && valid_ref_assignconv_cast_p (op_type, cast_type, 1))
    {
      TREE_TYPE (node) = promote_type (cast_type);
      /* Now, the case can be determined correct at compile time if
         OP_TYPE can be converted into CAST_TYPE by assignment
         conversion (5.2) */

      if (valid_ref_assignconv_cast_p (op_type, cast_type, 0))
	{
	  TREE_SET_CODE (node, NOP_EXPR);
	  return node;
	}

      if (flag_emit_class_files)
	{
	  TREE_SET_CODE (node, CONVERT_EXPR);
	  return node;
	}

      /* The cast requires a run-time check */
      return build (CALL_EXPR, promote_type (cast_type),
		    build_address_of (soft_checkcast_node),
		    tree_cons (NULL_TREE, build_class_ref (cast_type),
			       build_tree_list (NULL_TREE, op)),
		    NULL_TREE);
    }

  /* Any other casts are proven incorrect at compile time */
  t1 = xstrdup (lang_printable_name (op_type, 0));
  parse_error_context (wfl_op, "Invalid cast from `%s' to `%s'",
		       t1, lang_printable_name (cast_type, 0));
  free (t1);
  return error_mark_node;
}

/* Build a null constant and give it the type TYPE.  */

static tree
build_null_of_type (tree type)
{
  tree node = build_int_2 (0, 0);
  TREE_TYPE (node) = promote_type (type);
  return node;
}

/* Build an ARRAY_REF incomplete tree node. Note that operand 1 isn't
   a list of indices. */
static tree
build_array_ref (int location, tree array, tree index)
{
  tree node = build (ARRAY_REF, NULL_TREE, array, index);
  EXPR_WFL_LINECOL (node) = location;
  return node;
}

/* 15.12 Array Access Expression */

static tree
patch_array_ref (tree node)
{
  tree array = TREE_OPERAND (node, 0);
  tree array_type  = TREE_TYPE (array);
  tree index = TREE_OPERAND (node, 1);
  tree index_type = TREE_TYPE (index);
  int error_found = 0;

  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  if (TREE_CODE (array_type) == POINTER_TYPE)
    array_type = TREE_TYPE (array_type);

  /* The array reference must be an array */
  if (!TYPE_ARRAY_P (array_type))
    {
      parse_error_context
	(wfl_operator,
	 "`[]' can only be applied to arrays. It can't be applied to `%s'",
	 lang_printable_name (array_type, 0));
      TREE_TYPE (node) = error_mark_node;
      error_found = 1;
    }

  /* The array index undergoes unary numeric promotion. The promoted
     type must be int */
  index = do_unary_numeric_promotion (index);
  if (TREE_TYPE (index) != int_type_node)
    {
      if (valid_cast_to_p (index_type, int_type_node))
	parse_error_context (wfl_operator,
   "Incompatible type for `[]'. Explicit cast needed to convert `%s' to `int'",
			     lang_printable_name (index_type, 0));
      else
	parse_error_context (wfl_operator,
          "Incompatible type for `[]'. Can't convert `%s' to `int'",
			     lang_printable_name (index_type, 0));
      TREE_TYPE (node) = error_mark_node;
      error_found = 1;
    }

  if (error_found)
    return error_mark_node;

  array_type = TYPE_ARRAY_ELEMENT (array_type);

  if (flag_emit_class_files || flag_emit_xref)
    {
      TREE_OPERAND (node, 0) = array;
      TREE_OPERAND (node, 1) = index;
    }
  else
    node = build_java_arrayaccess (array, array_type, index);
  TREE_TYPE (node) = array_type;
  return node;
}

/* 15.9 Array Creation Expressions */

static tree
build_newarray_node (tree type, tree dims, int extra_dims)
{
  tree node =
    build (NEW_ARRAY_EXPR, NULL_TREE, type, nreverse (dims),
	   build_int_2 (extra_dims, 0));
  return node;
}

static tree
patch_newarray (tree node)
{
  tree type = TREE_OPERAND (node, 0);
  tree dims = TREE_OPERAND (node, 1);
  tree cdim, array_type;
  int error_found = 0;
  int ndims = 0;
  int xdims = TREE_INT_CST_LOW (TREE_OPERAND (node, 2));

  /* Dimension types are verified. It's better for the types to be
     verified in order. */
  for (cdim = dims, ndims = 0; cdim; cdim = TREE_CHAIN (cdim), ndims++ )
    {
      int dim_error = 0;
      tree dim = TREE_VALUE (cdim);

      /* Dim might have been saved during its evaluation */
      dim = (TREE_CODE (dim) == SAVE_EXPR ? TREE_OPERAND (dim, 0) : dim);

      /* The type of each specified dimension must be an integral type. */
      if (!JINTEGRAL_TYPE_P (TREE_TYPE (dim)))
	dim_error = 1;

      /* Each expression undergoes an unary numeric promotion (5.6.1) and the
	 promoted type must be int. */
      else
	{
	  dim = do_unary_numeric_promotion (dim);
	  if (TREE_TYPE (dim) != int_type_node)
	    dim_error = 1;
	}

      /* Report errors on types here */
      if (dim_error)
	{
	  parse_error_context
	    (TREE_PURPOSE (cdim),
	     "Incompatible type for dimension in array creation expression. %s convert `%s' to `int'",
	     (valid_cast_to_p (TREE_TYPE (dim), int_type_node) ?
	      "Explicit cast needed to" : "Can't"),
	     lang_printable_name (TREE_TYPE (dim), 0));
	  error_found = 1;
	}

      TREE_PURPOSE (cdim) = NULL_TREE;
    }

  /* Resolve array base type if unresolved */
  if (!(type = resolve_type_during_patch (type)))
    error_found = 1;

  if (error_found)
    {
      /* We don't want further evaluation of this bogus array creation
         operation */
      TREE_TYPE (node) = error_mark_node;
      return error_mark_node;
    }

  /* Set array_type to the actual (promoted) array type of the result. */
  if (TREE_CODE (type) == RECORD_TYPE)
    type = build_pointer_type (type);
  while (--xdims >= 0)
    {
      type = promote_type (build_java_array_type (type, -1));
    }
  dims = nreverse (dims);
  array_type = type;
  for (cdim = dims; cdim; cdim = TREE_CHAIN (cdim))
    {
      type = array_type;
      array_type
	= build_java_array_type (type,
				 TREE_CODE (cdim) == INTEGER_CST
				 ? (HOST_WIDE_INT) TREE_INT_CST_LOW (cdim)
				 : -1);
      array_type = promote_type (array_type);
    }
  dims = nreverse (dims);

  /* The node is transformed into a function call. Things are done
     differently according to the number of dimensions. If the number
     of dimension is equal to 1, then the nature of the base type
     (primitive or not) matters. */
  if (ndims == 1)
    return build_new_array (type, TREE_VALUE (dims));

  /* Can't reuse what's already written in expr.c because it uses the
     JVM stack representation. Provide a build_multianewarray. FIXME */
  return build (CALL_EXPR, array_type,
		build_address_of (soft_multianewarray_node),
		tree_cons (NULL_TREE, build_class_ref (TREE_TYPE (array_type)),
			   tree_cons (NULL_TREE,
				      build_int_2 (ndims, 0), dims )),
		NULL_TREE);
}

/* 10.6 Array initializer.  */

/* Build a wfl for array element that don't have one, so we can
   pin-point errors.  */

static tree
maybe_build_array_element_wfl (tree node)
{
  if (TREE_CODE (node) != EXPR_WITH_FILE_LOCATION)
    return build_expr_wfl (NULL_TREE, ctxp->filename,
			   ctxp->elc.line, ctxp->elc.prev_col);
  else
    return NULL_TREE;
}

/* Build a NEW_ARRAY_INIT that features a CONSTRUCTOR node. This makes
   identification of initialized arrays easier to detect during walk
   and expansion.  */

static tree
build_new_array_init (int location, tree values)
{
  tree constructor = build_constructor (NULL_TREE, values);
  tree to_return = build1 (NEW_ARRAY_INIT, NULL_TREE, constructor);
  EXPR_WFL_LINECOL (to_return) = location;
  return to_return;
}

/* Expand a NEW_ARRAY_INIT node. Return error_mark_node if an error
   occurred.  Otherwise return NODE after having set its type
   appropriately.  */

static tree
patch_new_array_init (tree type, tree node)
{
  int error_seen = 0;
  tree current, element_type;
  HOST_WIDE_INT length;
  int all_constant = 1;
  tree init = TREE_OPERAND (node, 0);

  if (TREE_CODE (type) != POINTER_TYPE || ! TYPE_ARRAY_P (TREE_TYPE (type)))
    {
      parse_error_context (node,
			   "Invalid array initializer for non-array type `%s'",
			   lang_printable_name (type, 1));
      return error_mark_node;
    }
  type = TREE_TYPE (type);
  element_type = TYPE_ARRAY_ELEMENT (type);

  CONSTRUCTOR_ELTS (init) = nreverse (CONSTRUCTOR_ELTS (init));

  for (length = 0, current = CONSTRUCTOR_ELTS (init);
       current;  length++, current = TREE_CHAIN (current))
    {
      tree elt = TREE_VALUE (current);
      if (elt == NULL_TREE || TREE_CODE (elt) != NEW_ARRAY_INIT)
	{
	  error_seen |= array_constructor_check_entry (element_type, current);
	  elt = TREE_VALUE (current);
	  /* When compiling to native code, STRING_CST is converted to
	     INDIRECT_REF, but still with a TREE_CONSTANT flag. */
	  if (! TREE_CONSTANT (elt) || TREE_CODE (elt) == INDIRECT_REF)
	    all_constant = 0;
	}
      else
	{
	  TREE_VALUE (current) = patch_new_array_init (element_type, elt);
	  TREE_PURPOSE (current) = NULL_TREE;
	  all_constant = 0;
	}
      if (elt && TREE_CODE (elt) == TREE_LIST
	  && TREE_VALUE (elt) == error_mark_node)
	error_seen = 1;
    }

  if (error_seen)
    return error_mark_node;

  /* Create a new type. We can't reuse the one we have here by
     patching its dimension because it originally is of dimension -1
     hence reused by gcc. This would prevent triangular arrays. */
  type = build_java_array_type (element_type, length);
  TREE_TYPE (init) = TREE_TYPE (TREE_CHAIN (TREE_CHAIN (TYPE_FIELDS (type))));
  TREE_TYPE (node) = promote_type (type);
  TREE_CONSTANT (init) = all_constant;
  TREE_CONSTANT (node) = all_constant;
  return node;
}

/* Verify that one entry of the initializer element list can be
   assigned to the array base type. Report 1 if an error occurred, 0
   otherwise.  */

static int
array_constructor_check_entry (tree type, tree entry)
{
  char *array_type_string = NULL;	/* For error reports */
  tree value, type_value, new_value, wfl_value, patched;
  int error_seen = 0;

  new_value = NULL_TREE;
  wfl_value = TREE_VALUE (entry);

  value = java_complete_tree (TREE_VALUE (entry));
  /* patch_string return error_mark_node if arg is error_mark_node */
  if ((patched = patch_string (value)))
    value = patched;
  if (value == error_mark_node)
    return 1;

  type_value = TREE_TYPE (value);

  /* At anytime, try_builtin_assignconv can report a warning on
     constant overflow during narrowing. */
  SET_WFL_OPERATOR (wfl_operator, TREE_PURPOSE (entry), wfl_value);
  new_value = try_builtin_assignconv (wfl_operator, type, value);
  if (!new_value && (new_value = try_reference_assignconv (type, value)))
    type_value = promote_type (type);

  /* Check and report errors */
  if (!new_value)
    {
      const char *const msg = (!valid_cast_to_p (type_value, type) ?
		   "Can't" : "Explicit cast needed to");
      if (!array_type_string)
	array_type_string = xstrdup (lang_printable_name (type, 1));
      parse_error_context
	(wfl_operator, "Incompatible type for array. %s convert `%s' to `%s'",
	 msg, lang_printable_name (type_value, 1), array_type_string);
      error_seen = 1;
    }

  if (new_value)
    TREE_VALUE (entry) = new_value;

  if (array_type_string)
    free (array_type_string);

  TREE_PURPOSE (entry) = NULL_TREE;
  return error_seen;
}

static tree
build_this (int location)
{
  tree node = build_wfl_node (this_identifier_node);
  TREE_SET_CODE (node, THIS_EXPR);
  EXPR_WFL_LINECOL (node) = location;
  return node;
}

/* 14.15 The return statement. It builds a modify expression that
   assigns the returned value to the RESULT_DECL that hold the value
   to be returned. */

static tree
build_return (int location, tree op)
{
  tree node = build1 (RETURN_EXPR, NULL_TREE, op);
  EXPR_WFL_LINECOL (node) = location;
  node = build_debugable_stmt (location, node);
  return node;
}

static tree
patch_return (tree node)
{
  tree return_exp = TREE_OPERAND (node, 0);
  tree meth = current_function_decl;
  tree mtype = TREE_TYPE (TREE_TYPE (current_function_decl));
  int error_found = 0;

  TREE_TYPE (node) = error_mark_node;
  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* It's invalid to have a return value within a function that is
     declared with the keyword void or that is a constructor */
  if (return_exp && (mtype == void_type_node || DECL_CONSTRUCTOR_P (meth)))
    error_found = 1;

  /* It's invalid to use a return statement in a static block */
  if (DECL_CLINIT_P (current_function_decl))
    error_found = 1;

  /* It's invalid to have a no return value within a function that
     isn't declared with the keyword `void' */
  if (!return_exp && (mtype != void_type_node && !DECL_CONSTRUCTOR_P (meth)))
    error_found = 2;

  if (DECL_INSTINIT_P (current_function_decl))
    error_found = 1;

  if (error_found)
    {
      if (DECL_INSTINIT_P (current_function_decl))
	parse_error_context (wfl_operator,
			     "`return' inside instance initializer");

      else if (DECL_CLINIT_P (current_function_decl))
	parse_error_context (wfl_operator,
			     "`return' inside static initializer");

      else if (!DECL_CONSTRUCTOR_P (meth))
	{
	  char *t = xstrdup (lang_printable_name (mtype, 0));
	  parse_error_context (wfl_operator,
			       "`return' with%s value from `%s %s'",
			       (error_found == 1 ? "" : "out"),
			       t, lang_printable_name (meth, 0));
	  free (t);
	}
      else
	parse_error_context (wfl_operator,
			     "`return' with value from constructor `%s'",
			     lang_printable_name (meth, 0));
      return error_mark_node;
    }

  /* If we have a return_exp, build a modify expression and expand
     it. Note: at that point, the assignment is declared valid, but we
     may want to carry some more hacks */
  if (return_exp)
    {
      tree exp = java_complete_tree (return_exp);
      tree modify, patched;

      if ((patched = patch_string (exp)))
	exp = patched;

      modify = build (MODIFY_EXPR, NULL_TREE, DECL_RESULT (meth), exp);
      EXPR_WFL_LINECOL (modify) = EXPR_WFL_LINECOL (node);
      modify = java_complete_tree (modify);

      if (modify != error_mark_node)
	{
	  TREE_SIDE_EFFECTS (modify) = 1;
	  TREE_OPERAND (node, 0) = modify;
	}
      else
	return error_mark_node;
    }
  TREE_TYPE (node) = void_type_node;
  TREE_SIDE_EFFECTS (node) = 1;
  return node;
}

/* 14.8 The if Statement */

static tree
build_if_else_statement (int location, tree expression, tree if_body,
			 tree else_body)
{
  tree node;
  if (!else_body)
    else_body = empty_stmt_node;
  node = build (COND_EXPR, NULL_TREE, expression, if_body, else_body);
  EXPR_WFL_LINECOL (node) = location;
  node = build_debugable_stmt (location, node);
  return node;
}

static tree
patch_if_else_statement (tree node)
{
  tree expression = TREE_OPERAND (node, 0);
  int can_complete_normally
    = (CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 1))
       | CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 2)));

  TREE_TYPE (node) = error_mark_node;
  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* The type of expression must be boolean */
  if (TREE_TYPE (expression) != boolean_type_node
      && TREE_TYPE (expression) != promoted_boolean_type_node)
    {
      parse_error_context
	(wfl_operator,
	 "Incompatible type for `if'. Can't convert `%s' to `boolean'",
	 lang_printable_name (TREE_TYPE (expression), 0));
      return error_mark_node;
    }

  if (TREE_CODE (expression) == INTEGER_CST)
    {
      if (integer_zerop (expression))
	node = TREE_OPERAND (node, 2);
      else
	node = TREE_OPERAND (node, 1);
      if (CAN_COMPLETE_NORMALLY (node) != can_complete_normally)
	{
	  node = build (COMPOUND_EXPR, void_type_node, node, empty_stmt_node);
	  CAN_COMPLETE_NORMALLY (node) = can_complete_normally;
	}
      return node;
    }
  TREE_TYPE (node) = void_type_node;
  TREE_SIDE_EFFECTS (node) = 1;
  CAN_COMPLETE_NORMALLY (node) = can_complete_normally;
  return node;
}

/* 14.6 Labeled Statements */

/* Action taken when a labeled statement is parsed. a new
   LABELED_BLOCK_EXPR is created. No statement is attached to the
   label, yet.  LABEL can be NULL_TREE for artificially-generated blocks. */

static tree
build_labeled_block (int location, tree label)
{
  tree label_name ;
  tree label_decl, node;
  if (label == NULL_TREE || label == continue_identifier_node)
    label_name = label;
  else
    {
      label_name = merge_qualified_name (label_id, label);
      /* Issue an error if we try to reuse a label that was previously
	 declared */
      if (IDENTIFIER_LOCAL_VALUE (label_name))
	{
	  EXPR_WFL_LINECOL (wfl_operator) = location;
	  parse_error_context (wfl_operator,
            "Declaration of `%s' shadows a previous label declaration",
			       IDENTIFIER_POINTER (label));
	  EXPR_WFL_LINECOL (wfl_operator) =
	    EXPR_WFL_LINECOL (IDENTIFIER_LOCAL_VALUE (label_name));
	  parse_error_context (wfl_operator,
            "This is the location of the previous declaration of label `%s'",
			       IDENTIFIER_POINTER (label));
	  java_error_count--;
	}
    }

  label_decl = create_label_decl (label_name);
  node = build (LABELED_BLOCK_EXPR, NULL_TREE, label_decl, NULL_TREE);
  EXPR_WFL_LINECOL (node) = location;
  TREE_SIDE_EFFECTS (node) = 1;
  return node;
}

/* A labeled statement LBE is attached a statement.  */

static tree
finish_labeled_statement (tree lbe, /* Labeled block expr */
			  tree statement)
{
  /* In anyways, tie the loop to its statement */
  LABELED_BLOCK_BODY (lbe) = statement;
  pop_labeled_block ();
  POP_LABELED_BLOCK ();
  return lbe;
}

/* 14.10, 14.11, 14.12 Loop Statements */

/* Create an empty LOOP_EXPR and make it the last in the nested loop
   list. */

static tree
build_new_loop (tree loop_body)
{
  tree loop =  build (LOOP_EXPR, NULL_TREE, loop_body);
  TREE_SIDE_EFFECTS (loop) = 1;
  PUSH_LOOP (loop);
  return loop;
}

/* Create a loop body according to the following structure:
     COMPOUND_EXPR
       COMPOUND_EXPR		(loop main body)
         EXIT_EXPR		(this order is for while/for loops.
         LABELED_BLOCK_EXPR      the order is reversed for do loops)
           LABEL_DECL           (a continue occurring here branches at the
           BODY			 end of this labeled block)
       INCREMENT		(if any)

  REVERSED, if nonzero, tells that the loop condition expr comes
  after the body, like in the do-while loop.

  To obtain a loop, the loop body structure described above is
  encapsulated within a LOOP_EXPR surrounded by a LABELED_BLOCK_EXPR:

   LABELED_BLOCK_EXPR
     LABEL_DECL                   (use this label to exit the loop)
     LOOP_EXPR
       <structure described above> */

static tree
build_loop_body (int location, tree condition, int reversed)
{
  tree first, second, body;

  condition = build (EXIT_EXPR, NULL_TREE, condition); /* Force walk */
  EXPR_WFL_LINECOL (condition) = location; /* For accurate error report */
  condition = build_debugable_stmt (location, condition);
  TREE_SIDE_EFFECTS (condition) = 1;

  body = build_labeled_block (0, continue_identifier_node);
  first = (reversed ? body : condition);
  second = (reversed ? condition : body);
  return
    build (COMPOUND_EXPR, NULL_TREE,
	   build (COMPOUND_EXPR, NULL_TREE, first, second), empty_stmt_node);
}

/* Install CONDITION (if any) and loop BODY (using REVERSED to tell
   their order) on the current loop. Unlink the current loop from the
   loop list.  */

static tree
finish_loop_body (int location, tree condition, tree body, int reversed)
{
  tree to_return = ctxp->current_loop;
  tree loop_body = LOOP_EXPR_BODY (to_return);
  if (condition)
    {
      tree cnode = LOOP_EXPR_BODY_CONDITION_EXPR (loop_body, reversed);
      /* We wrapped the EXIT_EXPR around a WFL so we can debug it.
         The real EXIT_EXPR is one operand further. */
      EXPR_WFL_LINECOL (cnode) = location;
      /* This one is for accurate error reports */
      EXPR_WFL_LINECOL (TREE_OPERAND (cnode, 0)) = location;
      TREE_OPERAND (TREE_OPERAND (cnode, 0), 0) = condition;
    }
  LOOP_EXPR_BODY_BODY_EXPR (loop_body, reversed) = body;
  POP_LOOP ();
  return to_return;
}

/* Tailored version of finish_loop_body for FOR loops, when FOR
   loops feature the condition part */

static tree
finish_for_loop (int location, tree condition, tree update, tree body)
{
  /* Put the condition and the loop body in place */
  tree loop = finish_loop_body (location, condition, body, 0);
  /* LOOP is the current loop which has been now popped of the loop
     stack.  Mark the update block as reachable and install it.  We do
     this because the (current interpretation of the) JLS requires
     that the update expression be considered reachable even if the
     for loop's body doesn't complete normally.  */
  if (update != NULL_TREE && update != empty_stmt_node)
    {
      tree up2 = update;
      if (TREE_CODE (up2) == EXPR_WITH_FILE_LOCATION)
	up2 = EXPR_WFL_NODE (up2);
      /* It is possible for the update expression to be an
	 EXPR_WFL_NODE wrapping nothing.  */
      if (up2 != NULL_TREE && up2 != empty_stmt_node)
	{
	  /* Try to detect constraint violations.  These would be
	     programming errors somewhere.  */
	  if (! IS_EXPR_CODE_CLASS (TREE_CODE_CLASS (TREE_CODE (up2)))
	      || TREE_CODE (up2) == LOOP_EXPR)
	    abort ();
	  SUPPRESS_UNREACHABLE_ERROR (up2) = 1;
	}
    }
  LOOP_EXPR_BODY_UPDATE_BLOCK (LOOP_EXPR_BODY (loop)) = update;
  return loop;
}

/* Try to find the loop a block might be related to. This comprises
   the case where the LOOP_EXPR is found as the second operand of a
   COMPOUND_EXPR, because the loop happens to have an initialization
   part, then expressed as the first operand of the COMPOUND_EXPR. If
   the search finds something, 1 is returned. Otherwise, 0 is
   returned. The search is assumed to start from a
   LABELED_BLOCK_EXPR's block.  */

static tree
search_loop (tree statement)
{
  if (TREE_CODE (statement) == LOOP_EXPR)
    return statement;

  if (TREE_CODE (statement) == BLOCK)
    statement = BLOCK_SUBBLOCKS (statement);
  else
    return NULL_TREE;

  if (statement && TREE_CODE (statement) == COMPOUND_EXPR)
    while (statement && TREE_CODE (statement) == COMPOUND_EXPR)
      statement = TREE_OPERAND (statement, 1);

  return (TREE_CODE (statement) == LOOP_EXPR
	  && FOR_LOOP_P (statement) ? statement : NULL_TREE);
}

/* Return 1 if LOOP can be found in the labeled block BLOCK. 0 is
   returned otherwise.  */

static int
labeled_block_contains_loop_p (tree block, tree loop)
{
  if (!block)
    return 0;

  if (LABELED_BLOCK_BODY (block) == loop)
    return 1;

  if (FOR_LOOP_P (loop) && search_loop (LABELED_BLOCK_BODY (block)) == loop)
    return 1;

  return 0;
}

/* If the loop isn't surrounded by a labeled statement, create one and
   insert LOOP as its body.  */

static tree
patch_loop_statement (tree loop)
{
  tree loop_label;

  TREE_TYPE (loop) = void_type_node;
  if (labeled_block_contains_loop_p (ctxp->current_labeled_block, loop))
    return loop;

  loop_label = build_labeled_block (0, NULL_TREE);
  /* LOOP is an EXPR node, so it should have a valid EXPR_WFL_LINECOL
     that LOOP_LABEL could enquire about, for a better accuracy. FIXME */
  LABELED_BLOCK_BODY (loop_label) = loop;
  PUSH_LABELED_BLOCK (loop_label);
  return loop_label;
}

/* 14.13, 14.14: break and continue Statements */

/* Build a break or a continue statement. a null NAME indicates an
   unlabeled break/continue statement.  */

static tree
build_bc_statement (int location, int is_break, tree name)
{
  tree break_continue, label_block_expr = NULL_TREE;

  if (name)
    {
      if (!(label_block_expr = IDENTIFIER_LOCAL_VALUE
	    (merge_qualified_name (label_id, EXPR_WFL_NODE (name)))))
	/* Null means that we don't have a target for this named
	   break/continue. In this case, we make the target to be the
	   label name, so that the error can be reported accurately in
	   patch_bc_statement. */
	label_block_expr = EXPR_WFL_NODE (name);
    }
  /* Unlabeled break/continue will be handled during the
     break/continue patch operation */
  break_continue
    = build (EXIT_BLOCK_EXPR, NULL_TREE, label_block_expr, NULL_TREE);

  IS_BREAK_STMT_P (break_continue) = is_break;
  TREE_SIDE_EFFECTS (break_continue) = 1;
  EXPR_WFL_LINECOL (break_continue) = location;
  break_continue = build_debugable_stmt (location, break_continue);
  return break_continue;
}

/* Verification of a break/continue statement. */

static tree
patch_bc_statement (tree node)
{
  tree bc_label = EXIT_BLOCK_LABELED_BLOCK (node), target_stmt;
  tree labeled_block = ctxp->current_labeled_block;
  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* Having an identifier here means that the target is unknown. */
  if (bc_label != NULL_TREE && TREE_CODE (bc_label) == IDENTIFIER_NODE)
    {
      parse_error_context (wfl_operator, "No label definition found for `%s'",
			   IDENTIFIER_POINTER (bc_label));
      return error_mark_node;
    }
  if (! IS_BREAK_STMT_P (node))
    {
      /* It's a continue statement. */
      for (;; labeled_block = TREE_CHAIN (labeled_block))
	{
	  if (labeled_block == NULL_TREE)
	    {
	      if (bc_label == NULL_TREE)
		parse_error_context (wfl_operator,
				     "`continue' must be in loop");
	      else
		parse_error_context
		  (wfl_operator, "continue label `%s' does not name a loop",
		   IDENTIFIER_POINTER (bc_label));
	      return error_mark_node;
	    }
	  if ((DECL_NAME (LABELED_BLOCK_LABEL (labeled_block))
	       == continue_identifier_node)
	      && (bc_label == NULL_TREE
		  || TREE_CHAIN (labeled_block) == bc_label))
	    {
	      bc_label = labeled_block;
	      break;
	    }
	}
    }
  else if (!bc_label)
    {
      for (;; labeled_block = TREE_CHAIN (labeled_block))
	{
	  if (labeled_block == NULL_TREE)
	    {
	      parse_error_context (wfl_operator,
				     "`break' must be in loop or switch");
	      return error_mark_node;
	    }
	  target_stmt = LABELED_BLOCK_BODY (labeled_block);
	  if (TREE_CODE (target_stmt) == SWITCH_EXPR
	      || search_loop (target_stmt))
	    {
	      bc_label = labeled_block;
	      break;
	    }
	}
    }

  EXIT_BLOCK_LABELED_BLOCK (node) = bc_label;
  CAN_COMPLETE_NORMALLY (bc_label) = 1;

  /* Our break/continue don't return values. */
  TREE_TYPE (node) = void_type_node;
  /* Encapsulate the break within a compound statement so that it's
     expanded all the times by expand_expr (and not clobbered
     sometimes, like after a if statement) */
  node = add_stmt_to_compound (NULL_TREE, void_type_node, node);
  TREE_SIDE_EFFECTS (node) = 1;
  return node;
}

/* Process the exit expression belonging to a loop. Its type must be
   boolean.  */

static tree
patch_exit_expr (tree node)
{
  tree expression = TREE_OPERAND (node, 0);
  TREE_TYPE (node) = error_mark_node;
  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);

  /* The type of expression must be boolean */
  if (TREE_TYPE (expression) != boolean_type_node)
    {
      parse_error_context
	(wfl_operator,
    "Incompatible type for loop conditional. Can't convert `%s' to `boolean'",
	 lang_printable_name (TREE_TYPE (expression), 0));
      return error_mark_node;
    }
  /* Now we know things are allright, invert the condition, fold and
     return */
  TREE_OPERAND (node, 0) =
    fold (build1 (TRUTH_NOT_EXPR, boolean_type_node, expression));

  if (! integer_zerop (TREE_OPERAND (node, 0))
      && ctxp->current_loop != NULL_TREE
      && TREE_CODE (ctxp->current_loop) == LOOP_EXPR)
    CAN_COMPLETE_NORMALLY (ctxp->current_loop) = 1;
  if (! integer_onep (TREE_OPERAND (node, 0)))
    CAN_COMPLETE_NORMALLY (node) = 1;


  TREE_TYPE (node) = void_type_node;
  return node;
}

/* 14.9 Switch statement */

static tree
patch_switch_statement (tree node)
{
  tree se = TREE_OPERAND (node, 0), se_type;
  tree save, iter;

  /* Complete the switch expression */
  se = TREE_OPERAND (node, 0) = java_complete_tree (se);
  se_type = TREE_TYPE (se);
  /* The type of the switch expression must be char, byte, short or
     int */
  if (! JINTEGRAL_TYPE_P (se_type) || se_type == long_type_node)
    {
      EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (node);
      parse_error_context (wfl_operator,
	  "Incompatible type for `switch'. Can't convert `%s' to `int'",
			   lang_printable_name (se_type, 0));
      /* This is what java_complete_tree will check */
      TREE_OPERAND (node, 0) = error_mark_node;
      return error_mark_node;
    }

  /* Save and restore the outer case label list.  */
  save = case_label_list;
  case_label_list = NULL_TREE;

  TREE_OPERAND (node, 1) = java_complete_tree (TREE_OPERAND (node, 1));

  /* See if we've found a duplicate label.  We can't leave this until
     code generation, because in `--syntax-only' and `-C' modes we
     don't do ordinary code generation.  */
  for (iter = case_label_list; iter != NULL_TREE; iter = TREE_CHAIN (iter))
    {
      HOST_WIDE_INT val = TREE_INT_CST_LOW (TREE_VALUE (iter));
      tree subiter;
      for (subiter = TREE_CHAIN (iter);
	   subiter != NULL_TREE;
	   subiter = TREE_CHAIN (subiter))
	{
	  HOST_WIDE_INT subval = TREE_INT_CST_LOW (TREE_VALUE (subiter));
	  if (val == subval)
	    {
	      EXPR_WFL_LINECOL (wfl_operator)
		= EXPR_WFL_LINECOL (TREE_PURPOSE (iter));
	      /* The case_label_list is in reverse order, so print the
		 outer label first.  */
	      parse_error_context (wfl_operator, "duplicate case label: `"
				   HOST_WIDE_INT_PRINT_DEC "'", subval);
	      EXPR_WFL_LINECOL (wfl_operator)
		= EXPR_WFL_LINECOL (TREE_PURPOSE (subiter));
	      parse_error_context (wfl_operator, "original label is here");

	      break;
	    }
	}
    }

  case_label_list = save;

  /* Ready to return */
  if (TREE_CODE (TREE_OPERAND (node, 1)) == ERROR_MARK)
    {
      TREE_TYPE (node) = error_mark_node;
      return error_mark_node;
    }
  TREE_TYPE (node) = void_type_node;
  TREE_SIDE_EFFECTS (node) = 1;
  CAN_COMPLETE_NORMALLY (node)
    = CAN_COMPLETE_NORMALLY (TREE_OPERAND (node, 1))
      || ! SWITCH_HAS_DEFAULT (node);
  return node;
}

/* Assertions.  */

/* Build an assertion expression for `assert CONDITION : VALUE'; VALUE
   might be NULL_TREE.  */
static tree
build_assertion (int location, tree condition, tree value)
{
  tree node;
  tree klass = GET_CPC ();

  if (! CLASS_USES_ASSERTIONS (klass))
    {
      tree field, classdollar, id, call;
      tree class_type = TREE_TYPE (klass);

      field = add_field (class_type,
			 get_identifier ("$assertionsDisabled"),
			 boolean_type_node,
			 ACC_PRIVATE | ACC_STATIC | ACC_FINAL);
      MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (field);
      FIELD_SYNTHETIC (field) = 1;

      if (!TYPE_DOT_CLASS (class_type))
	build_dot_class_method (class_type);
      classdollar = build_dot_class_method_invocation (class_type, class_type);

      /* Call CLASS.desiredAssertionStatus().  */
      id = build_wfl_node (get_identifier ("desiredAssertionStatus"));
      call = build (CALL_EXPR, NULL_TREE, id, NULL_TREE, NULL_TREE);
      call = make_qualified_primary (classdollar, call, location);
      TREE_SIDE_EFFECTS (call) = 1;

      /* Invert to obtain !CLASS.desiredAssertionStatus().  This may
	 seem odd, but we do it to generate code identical to that of
	 the JDK.  */
      call = build1 (TRUTH_NOT_EXPR, NULL_TREE, call);
      TREE_SIDE_EFFECTS (call) = 1;
      DECL_INITIAL (field) = call;

      /* Record the initializer in the initializer statement list.  */
      call = build (MODIFY_EXPR, NULL_TREE, field, call);
      TREE_CHAIN (call) = CPC_STATIC_INITIALIZER_STMT (ctxp);
      SET_CPC_STATIC_INITIALIZER_STMT (ctxp, call);
      MODIFY_EXPR_FROM_INITIALIZATION_P (call) = 1;

      CLASS_USES_ASSERTIONS (klass) = 1;
    }

  if (value != NULL_TREE)
    value = tree_cons (NULL_TREE, value, NULL_TREE);

  node = build_wfl_node (get_identifier ("java"));
  node = make_qualified_name (node, build_wfl_node (get_identifier ("lang")),
			      location);
  node = make_qualified_name (node, build_wfl_node (get_identifier ("AssertionError")),
			      location);

  node = build (NEW_CLASS_EXPR, NULL_TREE, node, value, NULL_TREE);
  TREE_SIDE_EFFECTS (node) = 1;
  /* It is too early to use BUILD_THROW.  */
  node = build1 (THROW_EXPR, NULL_TREE, node);
  TREE_SIDE_EFFECTS (node) = 1;

  /* We invert the condition; if we just put NODE as the `else' part
     then we generate weird-looking bytecode.  */
  condition = build1 (TRUTH_NOT_EXPR, NULL_TREE, condition);
  /* Check $assertionsDisabled.  */
  condition
    = build (TRUTH_ANDIF_EXPR, NULL_TREE,
	     build1 (TRUTH_NOT_EXPR, NULL_TREE,
		     build_wfl_node (get_identifier ("$assertionsDisabled"))),
	     condition);
  node = build_if_else_statement (location, condition, node, NULL_TREE);
  return node;
}

/* 14.18 The try/catch statements */

/* Encapsulate TRY_STMTS' in a try catch sequence. The catch clause
   catches TYPE and executes CATCH_STMTS.  */

static tree
encapsulate_with_try_catch (int location, tree type_or_name, tree try_stmts,
			    tree catch_stmts)
{
  tree try_block, catch_clause_param, catch_block, catch;

  /* First build a try block */
  try_block = build_expr_block (try_stmts, NULL_TREE);

  /* Build a catch block: we need a catch clause parameter */
  if (TREE_CODE (type_or_name) == EXPR_WITH_FILE_LOCATION)
    {
      tree catch_type = obtain_incomplete_type (type_or_name);
      jdep *dep;
      catch_clause_param = build_decl (VAR_DECL, wpv_id, catch_type);
      register_incomplete_type (JDEP_VARIABLE, type_or_name,
				catch_clause_param, catch_type);
      dep = CLASSD_LAST (ctxp->classd_list);
      JDEP_GET_PATCH (dep) = &TREE_TYPE (catch_clause_param);
    }
  else
    catch_clause_param = build_decl (VAR_DECL, wpv_id,
				     build_pointer_type (type_or_name));

  /* And a block */
  catch_block = build_expr_block (NULL_TREE, catch_clause_param);

  /* Initialize the variable and store in the block */
  catch = build (MODIFY_EXPR, NULL_TREE, catch_clause_param,
		 build (JAVA_EXC_OBJ_EXPR, ptr_type_node));
  add_stmt_to_block (catch_block, NULL_TREE, catch);

  /* Add the catch statements */
  add_stmt_to_block (catch_block, NULL_TREE, catch_stmts);

  /* Now we can build a CATCH_EXPR */
  catch_block = build1 (CATCH_EXPR, NULL_TREE, catch_block);

  return build_try_statement (location, try_block, catch_block);
}

static tree
build_try_statement (int location, tree try_block, tree catches)
{
  tree node = build (TRY_EXPR, NULL_TREE, try_block, catches);
  EXPR_WFL_LINECOL (node) = location;
  return node;
}

static tree
build_try_finally_statement (int location, tree try_block, tree finally)
{
  tree node = build (TRY_FINALLY_EXPR, NULL_TREE, try_block, finally);
  EXPR_WFL_LINECOL (node) = location;
  return node;
}

static tree
patch_try_statement (tree node)
{
  int error_found = 0;
  tree try = TREE_OPERAND (node, 0);
  /* Exception handlers are considered in left to right order */
  tree catch = nreverse (TREE_OPERAND (node, 1));
  tree current, caught_type_list = NULL_TREE;

  /* Check catch clauses, if any. Every time we find an error, we try
     to process the next catch clause. We process the catch clause before
     the try block so that when processing the try block we can check thrown
     exceptions againts the caught type list. */
  for (current = catch; current; current = TREE_CHAIN (current))
    {
      tree carg_decl, carg_type;
      tree sub_current, catch_block, catch_clause;
      int unreachable;

      /* At this point, the structure of the catch clause is
	   CATCH_EXPR		(catch node)
	     BLOCK	        (with the decl of the parameter)
               COMPOUND_EXPR
                 MODIFY_EXPR   (assignment of the catch parameter)
		 BLOCK	        (catch clause block)
       */
      catch_clause = TREE_OPERAND (current, 0);
      carg_decl = BLOCK_EXPR_DECLS (catch_clause);
      carg_type = TREE_TYPE (TREE_TYPE (carg_decl));

      /* Catch clauses can't have more than one parameter declared,
	 but it's already enforced by the grammar. Make sure that the
	 only parameter of the clause statement in of class Throwable
	 or a subclass of Throwable, but that was done earlier. The
	 catch clause parameter type has also been resolved. */

      /* Just make sure that the catch clause parameter type inherits
	 from java.lang.Throwable */
      if (!inherits_from_p (carg_type, throwable_type_node))
	{
	  EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (current);
	  parse_error_context (wfl_operator,
			       "Can't catch class `%s'. Catch clause parameter type must be a subclass of class `java.lang.Throwable'",
			       lang_printable_name (carg_type, 0));
	  error_found = 1;
	  continue;
	}

      /* Partial check for unreachable catch statement: The catch
	 clause is reachable iff is no earlier catch block A in
	 the try statement such that the type of the catch
	 clause's parameter is the same as or a subclass of the
	 type of A's parameter */
      unreachable = 0;
      for (sub_current = catch;
	   sub_current != current; sub_current = TREE_CHAIN (sub_current))
	{
	  tree sub_catch_clause, decl;
	  sub_catch_clause = TREE_OPERAND (sub_current, 0);
	  decl = BLOCK_EXPR_DECLS (sub_catch_clause);

	  if (inherits_from_p (carg_type, TREE_TYPE (TREE_TYPE (decl))))
	    {
	      EXPR_WFL_LINECOL (wfl_operator) = EXPR_WFL_LINECOL (current);
	      parse_error_context
		(wfl_operator,
		 "`catch' not reached because of the catch clause at line %d",
		 EXPR_WFL_LINENO (sub_current));
	      unreachable = error_found = 1;
	      break;
	    }
	}
      /* Complete the catch clause block */
      catch_block = java_complete_tree (TREE_OPERAND (current, 0));
      if (catch_block == error_mark_node)
	{
	  error_found = 1;
	  continue;
	}
      if (CAN_COMPLETE_NORMALLY (catch_block))
	CAN_COMPLETE_NORMALLY (node) = 1;
      TREE_OPERAND (current, 0) = catch_block;

      if (unreachable)
	continue;

      /* Things to do here: the exception must be thrown */

      /* Link this type to the caught type list */
      caught_type_list = tree_cons (NULL_TREE, carg_type, caught_type_list);
    }

  PUSH_EXCEPTIONS (caught_type_list);
  if ((try = java_complete_tree (try)) == error_mark_node)
    error_found = 1;
  if (CAN_COMPLETE_NORMALLY (try))
    CAN_COMPLETE_NORMALLY (node) = 1;
  POP_EXCEPTIONS ();

  /* Verification ends here */
  if (error_found)
    return error_mark_node;

  TREE_OPERAND (node, 0) = try;
  TREE_OPERAND (node, 1) = catch;
  TREE_TYPE (node) = void_type_node;
  return node;
}

/* 14.17 The synchronized Statement */

static tree
patch_synchronized_statement (tree node, tree wfl_op1)
{
  tree expr = java_complete_tree (TREE_OPERAND (node, 0));
  tree block = TREE_OPERAND (node, 1);

  tree tmp, enter, exit, expr_decl, assignment;

  if (expr == error_mark_node)
    {
      block = java_complete_tree (block);
      return expr;
    }

  /* We might be trying to synchronize on a STRING_CST */
  if ((tmp = patch_string (expr)))
    expr = tmp;

  /* The TYPE of expr must be a reference type */
  if (!JREFERENCE_TYPE_P (TREE_TYPE (expr)))
    {
      SET_WFL_OPERATOR (wfl_operator, node, wfl_op1);
      parse_error_context (wfl_operator, "Incompatible type for `synchronized'. Can't convert `%s' to `java.lang.Object'",
			   lang_printable_name (TREE_TYPE (expr), 0));
      return error_mark_node;
    }

  if (flag_emit_xref)
    {
      TREE_OPERAND (node, 0) = expr;
      TREE_OPERAND (node, 1) = java_complete_tree (block);
      CAN_COMPLETE_NORMALLY (node) = 1;
      return node;
    }

  /* Generate a try-finally for the synchronized statement, except
     that the handler that catches all throw exception calls
     _Jv_MonitorExit and then rethrow the exception.
     The synchronized statement is then implemented as:
     TRY
       {
         _Jv_MonitorEnter (expression)
	 synchronized_block
         _Jv_MonitorExit (expression)
       }
     CATCH_ALL
       {
         e = _Jv_exception_info ();
	 _Jv_MonitorExit (expression)
	 Throw (e);
       } */

  expr_decl = build_decl (VAR_DECL, generate_name (), TREE_TYPE (expr));
  BUILD_MONITOR_ENTER (enter, expr_decl);
  BUILD_MONITOR_EXIT (exit, expr_decl);
  CAN_COMPLETE_NORMALLY (enter) = 1;
  CAN_COMPLETE_NORMALLY (exit) = 1;
  assignment = build (MODIFY_EXPR, NULL_TREE, expr_decl, expr);
  TREE_SIDE_EFFECTS (assignment) = 1;
  node = build (COMPOUND_EXPR, NULL_TREE,
		build (COMPOUND_EXPR, NULL_TREE, assignment, enter),
		build (TRY_FINALLY_EXPR, NULL_TREE, block, exit));
  node = build_expr_block (node, expr_decl);

  return java_complete_tree (node);
}

/* 14.16 The throw Statement */

static tree
patch_throw_statement (tree node, tree wfl_op1)
{
  tree expr = TREE_OPERAND (node, 0);
  tree type = TREE_TYPE (expr);
  int unchecked_ok = 0, tryblock_throws_ok = 0;

  /* Thrown expression must be assignable to java.lang.Throwable */
  if (!try_reference_assignconv (throwable_type_node, expr))
    {
      SET_WFL_OPERATOR (wfl_operator, node, wfl_op1);
      parse_error_context (wfl_operator,
    "Can't throw `%s'; it must be a subclass of class `java.lang.Throwable'",
			   lang_printable_name (type, 0));
      /* If the thrown expression was a reference, we further the
         compile-time check. */
      if (!JREFERENCE_TYPE_P (type))
	return error_mark_node;
    }

  /* At least one of the following must be true */

  /* The type of the throw expression is a not checked exception,
     i.e. is a unchecked expression. */
  unchecked_ok = IS_UNCHECKED_EXCEPTION_P (TREE_TYPE (type));

  SET_WFL_OPERATOR (wfl_operator, node, wfl_op1);
  /* An instance can't throw a checked exception unless that exception
     is explicitly declared in the `throws' clause of each
     constructor. This doesn't apply to anonymous classes, since they
     don't have declared constructors. */
  if (!unchecked_ok
      && DECL_INSTINIT_P (current_function_decl)
      && !ANONYMOUS_CLASS_P (current_class))
    {
      tree current;
      for (current = TYPE_METHODS (current_class); current;
	   current = TREE_CHAIN (current))
	if (DECL_CONSTRUCTOR_P (current)
	    && !check_thrown_exceptions_do (TREE_TYPE (expr)))
	  {
	    parse_error_context (wfl_operator, "Checked exception `%s' can't be thrown in instance initializer (not all declared constructor are declaring it in their `throws' clause)",
				 lang_printable_name (TREE_TYPE (expr), 0));
	    return error_mark_node;
	  }
    }

  /* Throw is contained in a try statement and at least one catch
     clause can receive the thrown expression or the current method is
     declared to throw such an exception. Or, the throw statement is
     contained in a method or constructor declaration and the type of
     the Expression is assignable to at least one type listed in the
     throws clause the declaration. */
  if (!unchecked_ok)
    tryblock_throws_ok = check_thrown_exceptions_do (TREE_TYPE (expr));
  if (!(unchecked_ok || tryblock_throws_ok))
    {
      /* If there is a surrounding try block that has no matching
	 clatch clause, report it first. A surrounding try block exits
	 only if there is something after the list of checked
	 exception thrown by the current function (if any). */
      if (IN_TRY_BLOCK_P ())
	parse_error_context (wfl_operator, "Checked exception `%s' can't be caught by any of the catch clause(s) of the surrounding `try' block",
			     lang_printable_name (type, 0));
      /* If we have no surrounding try statement and the method doesn't have
	 any throws, report it now. FIXME */

      /* We report that the exception can't be throw from a try block
         in all circumstances but when the `throw' is inside a static
         block. */
      else if (!EXCEPTIONS_P (currently_caught_type_list)
	       && !tryblock_throws_ok)
	{
	  if (DECL_CLINIT_P (current_function_decl))
	    parse_error_context (wfl_operator,
                   "Checked exception `%s' can't be thrown in initializer",
				 lang_printable_name (type, 0));
	  else
	    parse_error_context (wfl_operator,
                   "Checked exception `%s' isn't thrown from a `try' block",
				 lang_printable_name (type, 0));
	}
      /* Otherwise, the current method doesn't have the appropriate
         throws declaration */
      else
	parse_error_context (wfl_operator, "Checked exception `%s' doesn't match any of current method's `throws' declaration(s)",
			     lang_printable_name (type, 0));
      return error_mark_node;
    }

  if (! flag_emit_class_files && ! flag_emit_xref)
    BUILD_THROW (node, expr);

  /* If doing xrefs, keep the location where the `throw' was seen. */
  if (flag_emit_xref)
    EXPR_WFL_LINECOL (node) = EXPR_WFL_LINECOL (wfl_op1);
  return node;
}

/* Check that exception said to be thrown by method DECL can be
   effectively caught from where DECL is invoked.  THIS_EXPR is the
   expression that computes `this' for the method call.  */
static void
check_thrown_exceptions (int location, tree decl, tree this_expr)
{
  tree throws;
  int is_array_call = 0;

  /* Skip check within generated methods, such as access$<n>.  */
  if (OUTER_FIELD_ACCESS_IDENTIFIER_P (DECL_NAME (current_function_decl)))
    return;

  if (this_expr != NULL_TREE
      && TREE_CODE (TREE_TYPE (this_expr)) == POINTER_TYPE
      && TYPE_ARRAY_P (TREE_TYPE (TREE_TYPE (this_expr))))
    is_array_call = 1;

  /* For all the unchecked exceptions thrown by DECL.  */
  for (throws = DECL_FUNCTION_THROWS (decl); throws;
       throws = TREE_CHAIN (throws))
    if (!check_thrown_exceptions_do (TREE_VALUE (throws)))
      {
	/* Suppress errors about cloning arrays.  */
	if (is_array_call && DECL_NAME (decl) == get_identifier ("clone"))
	  continue;

	EXPR_WFL_LINECOL (wfl_operator) = location;
	if (DECL_FINIT_P (current_function_decl))
	  parse_error_context
            (wfl_operator, "Exception `%s' can't be thrown in initializer",
	     lang_printable_name (TREE_VALUE (throws), 0));
	else
	  {
	    parse_error_context
	      (wfl_operator, "Exception `%s' must be caught, or it must be declared in the `throws' clause of `%s'",
	       lang_printable_name (TREE_VALUE (throws), 0),
	       (DECL_INIT_P (current_function_decl) ?
		IDENTIFIER_POINTER (DECL_NAME (TYPE_NAME (current_class))) :
		IDENTIFIER_POINTER (DECL_NAME (current_function_decl))));
	  }
      }
}

/* Return 1 if checked EXCEPTION is caught at the current nesting level of
   try-catch blocks, OR is listed in the `throws' clause of the
   current method.  */

static int
check_thrown_exceptions_do (tree exception)
{
  tree list = currently_caught_type_list;
  resolve_and_layout (exception, NULL_TREE);
  /* First, all the nested try-catch-finally at that stage. The
     last element contains `throws' clause exceptions, if any. */
  if (IS_UNCHECKED_EXCEPTION_P (exception))
    return 1;
  while (list)
    {
      tree caught;
      for (caught = TREE_VALUE (list); caught; caught = TREE_CHAIN (caught))
	if (valid_ref_assignconv_cast_p (exception, TREE_VALUE (caught), 0))
	  return 1;
      list = TREE_CHAIN (list);
    }
  return 0;
}

static void
purge_unchecked_exceptions (tree mdecl)
{
  tree throws = DECL_FUNCTION_THROWS (mdecl);
  tree new = NULL_TREE;

  while (throws)
    {
      tree next = TREE_CHAIN (throws);
      if (!IS_UNCHECKED_EXCEPTION_P (TREE_VALUE (throws)))
	{
	  TREE_CHAIN (throws) = new;
	  new = throws;
	}
      throws = next;
    }
  /* List is inverted here, but it doesn't matter */
  DECL_FUNCTION_THROWS (mdecl) = new;
}

/* This function goes over all of CLASS_TYPE ctors and checks whether
   each of them features at least one unchecked exception in its
   `throws' clause. If it's the case, it returns `true', `false'
   otherwise.  */

static bool
ctors_unchecked_throws_clause_p (tree class_type)
{
  tree current;

  for (current = TYPE_METHODS (class_type); current;
       current = TREE_CHAIN (current))
    {
      bool ctu = false;	/* Ctor Throws Unchecked */
      if (DECL_CONSTRUCTOR_P (current))
	{
	  tree throws;
	  for (throws = DECL_FUNCTION_THROWS (current); throws && !ctu;
	       throws = TREE_CHAIN (throws))
	    if (inherits_from_p (TREE_VALUE (throws), exception_type_node))
	      ctu = true;
	}
      /* We return false as we found one ctor that is unfit. */
      if (!ctu && DECL_CONSTRUCTOR_P (current))
	return false;
    }
  /* All ctors feature at least one unchecked exception in their
     `throws' clause. */
  return true;
}

/* 15.24 Conditional Operator ?: */

static tree
patch_conditional_expr (tree node, tree wfl_cond, tree wfl_op1)
{
  tree cond = TREE_OPERAND (node, 0);
  tree op1 = TREE_OPERAND (node, 1);
  tree op2 = TREE_OPERAND (node, 2);
  tree resulting_type = NULL_TREE;
  tree t1, t2, patched;
  int error_found = 0;

  /* Operands of ?: might be StringBuffers crafted as a result of a
     string concatenation. Obtain a descent operand here.  */
  if ((patched = patch_string (op1)))
    TREE_OPERAND (node, 1) = op1 = patched;
  if ((patched = patch_string (op2)))
    TREE_OPERAND (node, 2) = op2 = patched;

  t1 = TREE_TYPE (op1);
  t2 = TREE_TYPE (op2);

  /* The first expression must be a boolean */
  if (TREE_TYPE (cond) != boolean_type_node)
    {
      SET_WFL_OPERATOR (wfl_operator, node, wfl_cond);
      parse_error_context (wfl_operator,
               "Incompatible type for `?:'. Can't convert `%s' to `boolean'",
			   lang_printable_name (TREE_TYPE (cond), 0));
      error_found = 1;
    }

  /* Second and third can be numeric, boolean (i.e. primitive),
     references or null. Anything else results in an error */
  if (!((JNUMERIC_TYPE_P (t1) && JNUMERIC_TYPE_P (t2))
	|| ((JREFERENCE_TYPE_P (t1) || op1 == null_pointer_node)
	    && (JREFERENCE_TYPE_P (t2) || op2 == null_pointer_node))
	|| (t1 == boolean_type_node && t2 == boolean_type_node)))
    error_found = 1;

  /* Determine the type of the conditional expression. Same types are
     easy to deal with */
  else if (t1 == t2)
    resulting_type = t1;

  /* There are different rules for numeric types */
  else if (JNUMERIC_TYPE_P (t1))
    {
      /* if byte/short found, the resulting type is short */
      if ((t1 == byte_type_node && t2 == short_type_node)
	  || (t1 == short_type_node && t2 == byte_type_node))
	resulting_type = short_type_node;

      /* If t1 is a constant int and t2 is of type byte, short or char
	 and t1's value fits in t2, then the resulting type is t2 */
      else if ((t1 == int_type_node && TREE_CONSTANT (TREE_OPERAND (node, 1)))
	  && JBSC_TYPE_P (t2) && int_fits_type_p (TREE_OPERAND (node, 1), t2))
	resulting_type = t2;

      /* If t2 is a constant int and t1 is of type byte, short or char
	 and t2's value fits in t1, then the resulting type is t1 */
      else if ((t2 == int_type_node && TREE_CONSTANT (TREE_OPERAND (node, 2)))
	  && JBSC_TYPE_P (t1) && int_fits_type_p (TREE_OPERAND (node, 2), t1))
	resulting_type = t1;

      /* Otherwise, binary numeric promotion is applied and the
	 resulting type is the promoted type of operand 1 and 2 */
      else
	resulting_type = binary_numeric_promotion (t1, t2,
						   &TREE_OPERAND (node, 1),
						   &TREE_OPERAND (node, 2));
    }

  /* Cases of a reference and a null type */
  else if (JREFERENCE_TYPE_P (t1) && op2 == null_pointer_node)
    resulting_type = t1;

  else if (JREFERENCE_TYPE_P (t2) && op1 == null_pointer_node)
    resulting_type = t2;

  /* Last case: different reference types. If a type can be converted
     into the other one by assignment conversion, the latter
     determines the type of the expression */
  else if ((resulting_type = try_reference_assignconv (t1, op2)))
    resulting_type = promote_type (t1);

  else if ((resulting_type = try_reference_assignconv (t2, op1)))
    resulting_type = promote_type (t2);

  /* If we don't have any resulting type, we're in trouble */
  if (!resulting_type)
    {
      char *t = xstrdup (lang_printable_name (t1, 0));
      SET_WFL_OPERATOR (wfl_operator, node, wfl_op1);
      parse_error_context (wfl_operator,
		 "Incompatible type for `?:'. Can't convert `%s' to `%s'",
			   t, lang_printable_name (t2, 0));
      free (t);
      error_found = 1;
    }

  if (error_found)
    {
      TREE_TYPE (node) = error_mark_node;
      return error_mark_node;
    }

  TREE_TYPE (node) = resulting_type;
  TREE_SET_CODE (node, COND_EXPR);
  CAN_COMPLETE_NORMALLY (node) = 1;
  return node;
}

/* Wrap EXPR with code to initialize DECL's class, if appropriate. */

static tree
maybe_build_class_init_for_field (tree decl, tree expr)
{
  tree clas = DECL_CONTEXT (decl);
  if (flag_emit_class_files || flag_emit_xref)
    return expr;

  if (TREE_CODE (decl) == VAR_DECL && FIELD_STATIC (decl)
      && FIELD_FINAL (decl))
    {
      tree init = DECL_INITIAL (decl);
      if (init != NULL_TREE)
	init = fold_constant_for_init (init, decl);
      if (init != NULL_TREE && CONSTANT_VALUE_P (init))
	return expr;
    }

  return build_class_init (clas, expr);
}

/* Try to constant fold NODE.
   If NODE is not a constant expression, return NULL_EXPR.
   CONTEXT is a static final VAR_DECL whose initializer we are folding. */

static tree
fold_constant_for_init (tree node, tree context)
{
  tree op0, op1, val;
  enum tree_code code = TREE_CODE (node);

  switch (code)
    {
    case INTEGER_CST:
      if (node == null_pointer_node)
	return NULL_TREE;
    case STRING_CST:
    case REAL_CST:
      return node;

    case PLUS_EXPR:
    case MINUS_EXPR:
    case MULT_EXPR:
    case TRUNC_MOD_EXPR:
    case RDIV_EXPR:
    case LSHIFT_EXPR:
    case RSHIFT_EXPR:
    case URSHIFT_EXPR:
    case BIT_AND_EXPR:
    case BIT_XOR_EXPR:
    case BIT_IOR_EXPR:
    case TRUTH_ANDIF_EXPR:
    case TRUTH_ORIF_EXPR:
    case EQ_EXPR:
    case NE_EXPR:
    case GT_EXPR:
    case GE_EXPR:
    case LT_EXPR:
    case LE_EXPR:
      op0 = TREE_OPERAND (node, 0);
      op1 = TREE_OPERAND (node, 1);
      val = fold_constant_for_init (op0, context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 0) = val;
      val = fold_constant_for_init (op1, context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 1) = val;
      return patch_binop (node, op0, op1);

    case UNARY_PLUS_EXPR:
    case NEGATE_EXPR:
    case TRUTH_NOT_EXPR:
    case BIT_NOT_EXPR:
    case CONVERT_EXPR:
      op0 = TREE_OPERAND (node, 0);
      val = fold_constant_for_init (op0, context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 0) = val;
      val = patch_unaryop (node, op0);
      if (! TREE_CONSTANT (val))
	return NULL_TREE;
      return val;

      break;

    case COND_EXPR:
      val = fold_constant_for_init (TREE_OPERAND (node, 0), context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 0) = val;
      val = fold_constant_for_init (TREE_OPERAND (node, 1), context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 1) = val;
      val = fold_constant_for_init (TREE_OPERAND (node, 2), context);
      if (val == NULL_TREE || ! TREE_CONSTANT (val))
	return NULL_TREE;
      TREE_OPERAND (node, 2) = val;
      return integer_zerop (TREE_OPERAND (node, 0)) ? TREE_OPERAND (node, 1)
	: TREE_OPERAND (node, 2);

    case VAR_DECL:
    case FIELD_DECL:
      if (! FIELD_FINAL (node)
	  || DECL_INITIAL (node) == NULL_TREE)
	return NULL_TREE;
      val = DECL_INITIAL (node);
      /* Guard against infinite recursion. */
      DECL_INITIAL (node) = NULL_TREE;
      val = fold_constant_for_init (val, node);
      if (val != NULL_TREE && TREE_CODE (val) != STRING_CST)
	val = try_builtin_assignconv (NULL_TREE, TREE_TYPE (node), val);
      DECL_INITIAL (node) = val;
      return val;

    case EXPR_WITH_FILE_LOCATION:
      /* Compare java_complete_tree and resolve_expression_name. */
      if (!EXPR_WFL_NODE (node) /* Or a PRIMARY flag ? */
	  || TREE_CODE (EXPR_WFL_NODE (node)) == IDENTIFIER_NODE)
	{
	  tree name = EXPR_WFL_NODE (node);
	  tree decl;
	  if (PRIMARY_P (node))
	    return NULL_TREE;
	  else if (! QUALIFIED_P (name))
	    {
	      decl = lookup_field_wrapper (DECL_CONTEXT (context), name);
	      if (decl == NULL_TREE
		  || (! FIELD_STATIC (decl) && ! FIELD_FINAL (decl)))
		return NULL_TREE;
	      return fold_constant_for_init (decl, decl);
	    }
	  else
	    {
	      /* Install the proper context for the field resolution.
		 The prior context is restored once the name is
		 properly qualified. */
	      tree saved_current_class = current_class;
	      /* Wait until the USE_COMPONENT_REF re-write.  FIXME. */
	      current_class = DECL_CONTEXT (context);
	      qualify_ambiguous_name (node);
	      current_class = saved_current_class;
	      if (resolve_field_access (node, &decl, NULL)
		  && decl != NULL_TREE)
		return fold_constant_for_init (decl, decl);
	      return NULL_TREE;
	    }
	}
      else
	{
	  op0 = TREE_OPERAND (node, 0);
	  val = fold_constant_for_init (op0, context);
	  if (val == NULL_TREE || ! TREE_CONSTANT (val))
	    return NULL_TREE;
	  TREE_OPERAND (node, 0) = val;
	  return val;
	}

#ifdef USE_COMPONENT_REF
    case IDENTIFIER:
    case COMPONENT_REF:
      ?;
#endif

    default:
      return NULL_TREE;
    }
}

#ifdef USE_COMPONENT_REF
/* Context is 'T' for TypeName, 'P' for PackageName,
   'M' for MethodName, 'E' for ExpressionName, and 'A' for AmbiguousName. */

tree
resolve_simple_name (tree name, int context)
{
}

tree
resolve_qualified_name (tree name, int context)
{
}
#endif

void
init_src_parse (void)
{
  /* Sanity check; we've been bit by this before.  */
  if (ARRAY_SIZE (ctxp->modifier_ctx) != MODIFIER_TK - PUBLIC_TK)
    abort ();
}



/* This section deals with the functions that are called when tables
   recording class initialization information are traversed.  */

/* Attach to PTR (a block) the declaration found in ENTRY. */

static int
attach_init_test_initialization_flags (void **entry, void *ptr)
{
  tree block = (tree)ptr;
  struct treetreehash_entry *ite = (struct treetreehash_entry *) *entry;

  if (block != error_mark_node)
    {
      TREE_CHAIN (ite->value) = BLOCK_EXPR_DECLS (block);
      BLOCK_EXPR_DECLS (block) = ite->value;
    }
  return true;
}

/* This function is called for each class that is known definitely
   initialized when a given static method was called. This function
   augments a compound expression (INFO) storing all assignment to
   initialized static class flags if a flag already existed, otherwise
   a new one is created.  */

static int
emit_test_initialization (void **entry_p, void *info)
{
  tree l = (tree) info;
  tree decl, init;
  tree key = (tree) *entry_p;
  tree *ite;
  htab_t cf_ht = DECL_FUNCTION_INIT_TEST_TABLE (current_function_decl);

  /* If we haven't found a flag and we're dealing with self registered
     with current_function_decl, then don't do anything. Self is
     always added as definitely initialized but this information is
     valid only if used outside the current function. */
  if (current_function_decl == TREE_PURPOSE (l)
      && java_treetreehash_find (cf_ht, key) == NULL)
    return true;

  ite = java_treetreehash_new (cf_ht, key);

  /* If we don't have a variable, create one and install it. */
  if (*ite == NULL)
    {
      tree block;

      decl = build_decl (VAR_DECL, NULL_TREE, boolean_type_node);
      MAYBE_CREATE_VAR_LANG_DECL_SPECIFIC (decl);
      LOCAL_CLASS_INITIALIZATION_FLAG (decl) = 1;
      DECL_CONTEXT (decl) = current_function_decl;
      DECL_INITIAL (decl) = boolean_true_node;
      /* Don't emit any symbolic debugging info for this decl.  */
      DECL_IGNORED_P (decl) = 1;

      /* The trick is to find the right context for it. */
      block = BLOCK_SUBBLOCKS (GET_CURRENT_BLOCK (current_function_decl));
      TREE_CHAIN (decl) = BLOCK_EXPR_DECLS (block);
      BLOCK_EXPR_DECLS (block) = decl;
      *ite = decl;
    }
  else
    decl = *ite;

  /* Now simply augment the compound that holds all the assignments
     pertaining to this method invocation. */
  init = build (MODIFY_EXPR, boolean_type_node, decl, boolean_true_node);
  TREE_SIDE_EFFECTS (init) = 1;
  TREE_VALUE (l) = add_stmt_to_compound (TREE_VALUE (l), void_type_node, init);
  TREE_SIDE_EFFECTS (TREE_VALUE (l)) = 1;

  return true;
}

#include "gt-java-parse.h"
#include "gtype-java.h"

