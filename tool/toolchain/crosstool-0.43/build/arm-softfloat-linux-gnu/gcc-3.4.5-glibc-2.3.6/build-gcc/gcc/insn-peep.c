/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "insn-config.h"
#include "rtl.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"

#include "function.h"

#ifdef HAVE_peephole
extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (rtx ins1)
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && GET_CODE (NEXT_INSN (ins1)) == BARRIER)
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L716;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != MEM) goto L716;
  if (GET_MODE (x) != QImode) goto L716;
  x = XEXP (XEXP (pat, 0), 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L716;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, QImode)) goto L716;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L716; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L716;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L716;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[0], x)) goto L716;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L716;
  if (GET_MODE (x) != SImode) goto L716;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L716;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! index_operand (x, SImode)) goto L716;
  if (! (TARGET_ARM
   && (REGNO (operands[2]) != REGNO (operands[0]))
   && (GET_CODE (operands[1]) != REG
       || (REGNO (operands[1]) != REGNO (operands[0]))))) goto L716;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 716;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L716:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L717;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, QImode)) goto L717;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L717;
  if (GET_MODE (x) != QImode) goto L717;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L717;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L717; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L717;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L717;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[1], x)) goto L717;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L717;
  if (GET_MODE (x) != SImode) goto L717;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[1], x)) goto L717;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! index_operand (x, SImode)) goto L717;
  if (! (TARGET_ARM
   && REGNO (operands[0]) != REGNO(operands[1])
   && (GET_CODE (operands[2]) != REG
       || REGNO(operands[0]) != REGNO (operands[2])))) goto L717;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 717;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L717:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L718;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != MEM) goto L718;
  if (GET_MODE (x) != SImode) goto L718;
  x = XEXP (XEXP (pat, 0), 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L718;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L718;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L718; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L718;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L718;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[0], x)) goto L718;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L718;
  if (GET_MODE (x) != SImode) goto L718;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L718;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! index_operand (x, SImode)) goto L718;
  if (! (TARGET_ARM
   && (REGNO (operands[2]) != REGNO (operands[0]))
   && (GET_CODE (operands[1]) != REG
       || (REGNO (operands[1]) != REGNO (operands[0]))))) goto L718;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 718;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L718:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L719;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, HImode)) goto L719;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L719;
  if (GET_MODE (x) != HImode) goto L719;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L719;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L719; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L719;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L719;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[1], x)) goto L719;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L719;
  if (GET_MODE (x) != SImode) goto L719;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[1], x)) goto L719;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! index_operand (x, SImode)) goto L719;
  if (! (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != REGNO(operands[1])
   && (GET_CODE (operands[2]) != REG
       || REGNO(operands[0]) != REGNO (operands[2])))) goto L719;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 719;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L719:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L720;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L720;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != MEM) goto L720;
  if (GET_MODE (x) != SImode) goto L720;
  x = XEXP (XEXP (pat, 1), 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L720;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L720; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L720;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L720;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[1], x)) goto L720;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L720;
  if (GET_MODE (x) != SImode) goto L720;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[1], x)) goto L720;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! index_operand (x, SImode)) goto L720;
  if (! (TARGET_ARM
   && REGNO (operands[0]) != REGNO(operands[1])
   && (GET_CODE (operands[2]) != REG
       || REGNO(operands[0]) != REGNO (operands[2])))) goto L720;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 720;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L720:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L721;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != MEM) goto L721;
  if (GET_MODE (x) != QImode) goto L721;
  x = XEXP (XEXP (pat, 0), 0);
  if (GET_CODE (x) != PLUS) goto L721;
  if (GET_MODE (x) != SImode) goto L721;
  x = XEXP (XEXP (XEXP (pat, 0), 0), 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L721;
  x = XEXP (XEXP (XEXP (pat, 0), 0), 1);
  operands[1] = x;
  if (! index_operand (x, SImode)) goto L721;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, QImode)) goto L721;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L721; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L721;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L721;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[0], x)) goto L721;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L721;
  if (GET_MODE (x) != SImode) goto L721;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L721;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[1], x)) goto L721;
  if (! (TARGET_ARM
   && (REGNO (operands[2]) != REGNO (operands[0]))
   && (GET_CODE (operands[1]) != REG
       || (REGNO (operands[1]) != REGNO (operands[0]))))) goto L721;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 721;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L721:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L722;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != MEM) goto L722;
  if (GET_MODE (x) != QImode) goto L722;
  x = XEXP (XEXP (pat, 0), 0);
  if (GET_CODE (x) != PLUS) goto L722;
  if (GET_MODE (x) != SImode) goto L722;
  x = XEXP (XEXP (XEXP (pat, 0), 0), 0);
  operands[4] = x;
  if (! shift_operator (x, SImode)) goto L722;
  x = XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L722;
  x = XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1);
  operands[1] = x;
  if (! const_int_operand (x, SImode)) goto L722;
  x = XEXP (XEXP (XEXP (pat, 0), 0), 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L722;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! s_register_operand (x, QImode)) goto L722;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L722; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L722;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L722;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[2], x)) goto L722;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L722;
  if (GET_MODE (x) != SImode) goto L722;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (operands[4]) != GET_CODE (x)
      || GET_MODE (operands[4]) != GET_MODE (x)) goto L722;
  operands[4] = x;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (!rtx_equal_p (operands[0], x)) goto L722;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (!rtx_equal_p (operands[1], x)) goto L722;
  x = XEXP (XEXP (pat, 1), 1);
  if (!rtx_equal_p (operands[2], x)) goto L722;
  if (! (TARGET_ARM
   && (REGNO (operands[3]) != REGNO (operands[2]))
   && (REGNO (operands[0]) != REGNO (operands[2])))) goto L722;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (5, operands));
  INSN_CODE (ins1) = 722;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L722:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L724;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L724;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L724;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L724; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L724;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L724;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L724;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L724;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L724; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L724;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L724;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L724;
  x = XEXP (pat, 1);
  operands[6] = x;
  if (! memory_operand (x, SImode)) goto L724;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L724; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L724;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L724;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! s_register_operand (x, SImode)) goto L724;
  x = XEXP (pat, 1);
  operands[7] = x;
  if (! memory_operand (x, SImode)) goto L724;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 4, NULL, NULL, NULL))) goto L724;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (8, operands));
  INSN_CODE (ins1) = 724;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L724:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L725;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L725;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L725;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L725; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L725;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L725;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L725;
  x = XEXP (pat, 1);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L725;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L725; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L725;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L725;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L725;
  x = XEXP (pat, 1);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L725;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 3, NULL, NULL, NULL))) goto L725;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 725;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L725:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L726;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L726;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! memory_operand (x, SImode)) goto L726;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L726; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L726;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L726;
  x = XEXP (pat, 0);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L726;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L726;
  if (! (TARGET_ARM && load_multiple_sequence (operands, 2, NULL, NULL, NULL))) goto L726;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 726;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L726:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L727;
  x = XEXP (pat, 0);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L727;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L727;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L727; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L727;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L727;
  x = XEXP (pat, 0);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L727;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L727;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L727; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L727;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L727;
  x = XEXP (pat, 0);
  operands[6] = x;
  if (! memory_operand (x, SImode)) goto L727;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L727;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L727; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L727;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L727;
  x = XEXP (pat, 0);
  operands[7] = x;
  if (! memory_operand (x, SImode)) goto L727;
  x = XEXP (pat, 1);
  operands[3] = x;
  if (! s_register_operand (x, SImode)) goto L727;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 4, NULL, NULL, NULL))) goto L727;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (8, operands));
  INSN_CODE (ins1) = 727;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L727:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L728;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L728;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L728;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L728; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L728;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L728;
  x = XEXP (pat, 0);
  operands[4] = x;
  if (! memory_operand (x, SImode)) goto L728;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L728;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L728; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L728;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L728;
  x = XEXP (pat, 0);
  operands[5] = x;
  if (! memory_operand (x, SImode)) goto L728;
  x = XEXP (pat, 1);
  operands[2] = x;
  if (! s_register_operand (x, SImode)) goto L728;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 3, NULL, NULL, NULL))) goto L728;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (6, operands));
  INSN_CODE (ins1) = 728;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L728:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L729;
  x = XEXP (pat, 0);
  operands[2] = x;
  if (! memory_operand (x, SImode)) goto L729;
  x = XEXP (pat, 1);
  operands[0] = x;
  if (! s_register_operand (x, SImode)) goto L729;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L729; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L729;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L729;
  x = XEXP (pat, 0);
  operands[3] = x;
  if (! memory_operand (x, SImode)) goto L729;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! s_register_operand (x, SImode)) goto L729;
  if (! (TARGET_ARM && store_multiple_sequence (operands, 2, NULL, NULL, NULL))) goto L729;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (4, operands));
  INSN_CODE (ins1) = 729;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L729:

  return 0;
}

rtx peep_operand[8];
#endif
