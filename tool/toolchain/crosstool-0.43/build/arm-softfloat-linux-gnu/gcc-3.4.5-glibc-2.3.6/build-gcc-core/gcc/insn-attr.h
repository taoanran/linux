/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_is_thumb
enum attr_is_thumb {IS_THUMB_NO, IS_THUMB_YES};
extern enum attr_is_thumb get_attr_is_thumb (void);

#define HAVE_ATTR_prog_mode
enum attr_prog_mode {PROG_MODE_PROG26, PROG_MODE_PROG32};
extern enum attr_prog_mode get_attr_prog_mode (void);

#define HAVE_ATTR_is_strongarm
enum attr_is_strongarm {IS_STRONGARM_NO, IS_STRONGARM_YES};
extern enum attr_is_strongarm get_attr_is_strongarm (void);

#define HAVE_ATTR_is_xscale
enum attr_is_xscale {IS_XSCALE_NO, IS_XSCALE_YES};
extern enum attr_is_xscale get_attr_is_xscale (void);

#define HAVE_ATTR_shift
extern int get_attr_shift (rtx);
#define HAVE_ATTR_fpu
enum attr_fpu {FPU_SOFTFPA, FPU_FPA, FPU_FPE2, FPU_FPE3, FPU_MAVERICK};
extern enum attr_fpu get_attr_fpu (void);

#define HAVE_ATTR_length
extern int get_attr_length (rtx);
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

#include "insn-addr.h"

#define HAVE_ATTR_pool_range
extern int get_attr_pool_range (rtx);
#define HAVE_ATTR_neg_pool_range
extern int get_attr_neg_pool_range (rtx);
#define HAVE_ATTR_type
enum attr_type {TYPE_NORMAL, TYPE_MULT, TYPE_BLOCK, TYPE_FLOAT, TYPE_FDIVX, TYPE_FDIVD, TYPE_FDIVS, TYPE_FMUL, TYPE_FFMUL, TYPE_FARITH, TYPE_FFARITH, TYPE_FLOAT_EM, TYPE_F_LOAD, TYPE_F_STORE, TYPE_F_MEM_R, TYPE_R_MEM_F, TYPE_F_2_R, TYPE_R_2_F, TYPE_CALL, TYPE_LOAD, TYPE_STORE1, TYPE_STORE2, TYPE_STORE3, TYPE_STORE4, TYPE_MAV_FARITH, TYPE_MAV_DMULT};
extern enum attr_type get_attr_type (rtx);

#define HAVE_ATTR_ldsched
enum attr_ldsched {LDSCHED_NO, LDSCHED_YES};
extern enum attr_ldsched get_attr_ldsched (void);

#define HAVE_ATTR_conds
enum attr_conds {CONDS_USE, CONDS_SET, CONDS_CLOB, CONDS_JUMP_CLOB, CONDS_NOCOND};
extern enum attr_conds get_attr_conds (rtx);

#define HAVE_ATTR_predicable
enum attr_predicable {PREDICABLE_NO, PREDICABLE_YES};
extern enum attr_predicable get_attr_predicable (rtx);

#define HAVE_ATTR_model_wbuf
enum attr_model_wbuf {MODEL_WBUF_NO, MODEL_WBUF_YES};
extern enum attr_model_wbuf get_attr_model_wbuf (void);

#define HAVE_ATTR_write_conflict
enum attr_write_conflict {WRITE_CONFLICT_NO, WRITE_CONFLICT_YES};
extern enum attr_write_conflict get_attr_write_conflict (rtx);

#define HAVE_ATTR_core_cycles
enum attr_core_cycles {CORE_CYCLES_SINGLE, CORE_CYCLES_MULTI};
extern enum attr_core_cycles get_attr_core_cycles (rtx);

#define HAVE_ATTR_far_jump
enum attr_far_jump {FAR_JUMP_YES, FAR_JUMP_NO};
extern enum attr_far_jump get_attr_far_jump (rtx);

#define HAVE_ATTR_cirrus
enum attr_cirrus {CIRRUS_NOT, CIRRUS_NORMAL, CIRRUS_DOUBLE, CIRRUS_COMPARE, CIRRUS_MOVE};
extern enum attr_cirrus get_attr_cirrus (rtx);

#define DFA_PIPELINE_INTERFACE 1
#define INSN_SCHEDULING

extern int result_ready_cost (rtx);
extern int function_units_used (rtx);

extern const struct function_unit_desc
{
  const char *const name;
  const int bitmask;
  const int multiplicity;
  const int simultaneity;
  const int default_cost;
  const int max_issue_delay;
  int (*const ready_cost_function) (rtx);
  int (*const conflict_cost_function) (rtx, rtx);
  const int max_blockage;
  unsigned int (*const blockage_range_function) (rtx);
  int (*const blockage_function) (rtx, rtx);
} function_units[];

#define FUNCTION_UNITS_SIZE 0
#define MIN_MULTIPLICITY 100000
#define MAX_MULTIPLICITY -1
#define MIN_SIMULTANEITY 100000
#define MAX_SIMULTANEITY -1
#define MIN_READY_COST 100000
#define MAX_READY_COST -1
#define MIN_ISSUE_DELAY 100000
#define MAX_ISSUE_DELAY -1
#define MIN_BLOCKAGE 100000
#define MAX_BLOCKAGE -1
#define BLOCKAGE_BITS 1
#define INSN_QUEUE_SIZE 1

/* DFA based pipeline interface.  */
#ifndef AUTOMATON_ALTS
#define AUTOMATON_ALTS 0
#endif


#ifndef AUTOMATON_STATE_ALTS
#define AUTOMATON_STATE_ALTS 0
#endif

#ifndef CPU_UNITS_QUERY
#define CPU_UNITS_QUERY 0
#endif

extern int max_dfa_issue_rate;

/* The following macro value is calculated from the
   automaton based pipeline description and is equal to
   maximal number of all insns described in constructions
   `define_insn_reservation' which can be issued on the
   same processor cycle. */
#define MAX_DFA_ISSUE_RATE max_dfa_issue_rate

/* Insn latency time defined in define_insn_reservation. */
extern int insn_default_latency (rtx);

/* Return nonzero if there is a bypass for given insn
   which is a data producer.  */
extern int bypass_p (rtx);

/* Insn latency time on data consumed by the 2nd insn.
   Use the function if bypass_p returns nonzero for
   the 1st insn. */
extern int insn_latency (rtx, rtx);


#if AUTOMATON_ALTS
/* The following function returns number of alternative
   reservations of given insn.  It may be used for better
   insns scheduling heuristics. */
extern int insn_alts (rtx);

#endif

/* Maximal possible number of insns waiting results being
   produced by insns whose execution is not finished. */
extern int max_insn_queue_index;

/* Pointer to data describing current state of DFA.  */
typedef void *state_t;

/* Size of the data in bytes.  */
extern int state_size (void);

/* Initiate given DFA state, i.e. Set up the state
   as all functional units were not reserved.  */
extern void state_reset (state_t);
/* The following function returns negative value if given
   insn can be issued in processor state described by given
   DFA state.  In this case, the DFA state is changed to
   reflect the current and future reservations by given
   insn.  Otherwise the function returns minimal time
   delay to issue the insn.  This delay may be zero
   for superscalar or VLIW processors.  If the second
   parameter is NULL the function changes given DFA state
   as new processor cycle started.  */
extern int state_transition (state_t, rtx);

#if AUTOMATON_STATE_ALTS
/* The following function returns number of possible
   alternative reservations of given insn in given
   DFA state.  It may be used for better insns scheduling
   heuristics.  By default the function is defined if
   macro AUTOMATON_STATE_ALTS is defined because its
   implementation may require much memory.  */
extern int state_alts (state_t, rtx);
#endif

extern int min_issue_delay (state_t, rtx);
/* The following function returns nonzero if no one insn
   can be issued in current DFA state. */
extern int state_dead_lock_p (state_t);
/* The function returns minimal delay of issue of the 2nd
   insn after issuing the 1st insn in given DFA state.
   The 1st insn should be issued in given state (i.e.
    state_transition should return negative value for
    the insn and the state).  Data dependencies between
    the insns are ignored by the function.  */
extern int min_insn_conflict_delay (state_t, rtx, rtx);
/* The following function outputs reservations for given
   insn as they are described in the corresponding
   define_insn_reservation.  */
extern void print_reservation (FILE *, rtx);

#if CPU_UNITS_QUERY
/* The following function returns code of functional unit
   with given name (see define_cpu_unit). */
extern int get_cpu_unit_code (const char *);
/* The following function returns nonzero if functional
   unit with given code is currently reserved in given
   DFA state.  */
extern int cpu_unit_reservation_p (state_t, int);
#endif

/* Clean insn code cache.  It should be called if there
   is a chance that condition value in a
   define_insn_reservation will be changed after
   last call of dfa_start.  */
extern void dfa_clean_insn_cache (void);

/* Initiate and finish work with DFA.  They should be
   called as the first and the last interface
   functions.  */
extern void dfa_start (void);
extern void dfa_finish (void);

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */