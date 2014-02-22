/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "toplev.h"
#include "reload.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third argument to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.c) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx gen_split_545 (rtx *);
extern rtx gen_split_546 (rtx *);
extern rtx gen_split_547 (rtx *);
extern rtx gen_peephole2_549 (rtx, rtx *);
extern rtx gen_split_550 (rtx *);
extern rtx gen_peephole2_551 (rtx, rtx *);
extern rtx gen_peephole2_552 (rtx, rtx *);
extern rtx gen_split_553 (rtx *);
extern rtx gen_split_558 (rtx *);
extern rtx gen_peephole2_559 (rtx, rtx *);
extern rtx gen_split_569 (rtx *);
extern rtx gen_split_570 (rtx *);
extern rtx gen_split_571 (rtx *);
extern rtx gen_split_572 (rtx *);
extern rtx gen_split_573 (rtx *);
extern rtx gen_split_575 (rtx *);
extern rtx gen_split_576 (rtx *);
extern rtx gen_split_577 (rtx *);
extern rtx gen_split_578 (rtx *);
extern rtx gen_split_579 (rtx *);
extern rtx gen_split_581 (rtx *);
extern rtx gen_split_582 (rtx *);
extern rtx gen_split_583 (rtx *);
extern rtx gen_split_585 (rtx *);
extern rtx gen_peephole2_586 (rtx, rtx *);
extern rtx gen_split_588 (rtx *);
extern rtx gen_split_589 (rtx *);
extern rtx gen_split_590 (rtx *);
extern rtx gen_split_591 (rtx *);
extern rtx gen_split_592 (rtx *);
extern rtx gen_split_609 (rtx *);
extern rtx gen_split_617 (rtx *);
extern rtx gen_split_618 (rtx *);
extern rtx gen_split_620 (rtx *);
extern rtx gen_split_623 (rtx *);
extern rtx gen_split_624 (rtx *);
extern rtx gen_split_626 (rtx *);
extern rtx gen_split_628 (rtx *);
extern rtx gen_split_632 (rtx *);
extern rtx gen_split_633 (rtx *);
extern rtx gen_split_634 (rtx *);
extern rtx gen_split_648 (rtx *);
extern rtx gen_split_708 (rtx *);
extern rtx gen_split_709 (rtx *);
extern rtx gen_split_710 (rtx *);
extern rtx gen_split_711 (rtx *);
extern rtx gen_split_712 (rtx *);
extern rtx gen_split_713 (rtx *);
extern rtx gen_split_714 (rtx *);
extern rtx gen_split_715 (rtx *);
extern rtx gen_peephole2_723 (rtx, rtx *);
extern rtx gen_split_730 (rtx *);
extern rtx gen_split_731 (rtx *);
extern rtx gen_split_735 (rtx *);
extern rtx gen_split_736 (rtx *);
extern rtx gen_split_737 (rtx *);
extern rtx gen_split_738 (rtx *);



static int
recog_1 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L77;
    case MINUS:
      goto L349;
    case MULT:
      goto L381;
    case AND:
      goto L629;
    case IOR:
      goto L800;
    case XOR:
      goto L863;
    case NOT:
      goto L1048;
    default:
     break;
   }
 L9576: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1010;
    }
  goto ret0;

 L77: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9579;
  goto ret0;

 L9579: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == MULT)
    goto L421;
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L78;
    }
  goto ret0;

 L421: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L422;
    }
  goto ret0;

 L422: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L423;
    }
  goto ret0;

 L423: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L424;
    }
  goto ret0;

 L424: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L425;
  goto ret0;

 L425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L426;
    case CLOBBER:
      goto L443;
    default:
     break;
   }
  goto ret0;

 L426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L427;
    }
  goto ret0;

 L427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L428;
  goto ret0;

 L428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L429;
  goto ret0;

 L429: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L430;
  goto ret0;

 L430: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1]))
    goto L431;
  goto ret0;

 L431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_ARM && !arm_arch_xscale))
    {
      return 37;
    }
  goto ret0;

 L443: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L444;
    }
  goto ret0;

 L444: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !arm_arch_xscale))
    {
      return 38;
    }
  goto ret0;

 L78: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L79;
    }
  goto ret0;

 L79: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L80;
  goto ret0;

 L80: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L81;
  goto ret0;

 L81: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L82;
    }
  goto ret0;

 L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L83;
  goto ret0;

 L83: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L84;
  goto ret0;

 L84: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 6;
    }
  goto ret0;

 L349: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L350;
    }
  goto ret0;

 L350: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L351;
    }
  goto ret0;

 L351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L352;
  goto ret0;

 L352: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L353;
  goto ret0;

 L353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L354;
    }
  goto ret0;

 L354: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L355;
  goto ret0;

 L355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L356;
  goto ret0;

 L356: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 30;
    }
  goto ret0;

 L381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L382;
    }
  goto L9576;

 L382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L383;
    }
  goto L9576;

 L383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L384;
  x3 = XEXP (x2, 0);
  goto L9576;

 L384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L385;
    case CLOBBER:
      goto L398;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L386;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM && !arm_arch_xscale))
    {
      return 34;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L399;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L399: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !arm_arch_xscale))
    {
      return 35;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9576;

 L629: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9582;
  goto ret0;

 L9582: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == NOT)
    goto L734;
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L630;
    }
 L9581: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L643;
    }
  goto ret0;

 L734: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L735;
    }
  goto ret0;

 L735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L736;
    }
  goto ret0;

 L736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L737;
  goto ret0;

 L737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L738;
    case CLOBBER:
      goto L753;
    default:
     break;
   }
  goto ret0;

 L738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L739;
    }
  goto ret0;

 L739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L740;
  goto ret0;

 L740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L741;
  goto ret0;

 L741: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L742;
  goto ret0;

 L742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM))
    {
      return 66;
    }
  goto ret0;

 L753: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L754;
    }
  goto ret0;

 L754: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 67;
    }
  goto ret0;

 L630: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_not_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L631;
    }
  x4 = XEXP (x3, 0);
  goto L9581;

 L631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L632;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L632: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L633;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L634;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L635: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L636;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 56;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9581;

 L643: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_not_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L644;
    }
  goto ret0;

 L644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L645;
  goto ret0;

 L645: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L646;
  goto ret0;

 L646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L647;
    }
  goto ret0;

 L647: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 57;
    }
  goto ret0;

 L800: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L801;
    }
  goto ret0;

 L801: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L802;
    }
  goto ret0;

 L802: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L803;
  goto ret0;

 L803: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L804;
    case CLOBBER:
      goto L817;
    default:
     break;
   }
  goto ret0;

 L804: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L805;
    }
  goto ret0;

 L805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L806;
  goto ret0;

 L806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L807;
  goto ret0;

 L807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 73;
    }
  goto ret0;

 L817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L818;
    }
  goto ret0;

 L818: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 74;
    }
  goto ret0;

 L863: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L864;
    }
  goto ret0;

 L864: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L865;
    }
  goto ret0;

 L865: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L866;
  goto ret0;

 L866: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L867;
  goto ret0;

 L867: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L868;
    }
  goto ret0;

 L868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L869;
  goto ret0;

 L869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L870;
  goto ret0;

 L870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 80;
    }
  goto ret0;

 L1048: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9583;
  goto ret0;

 L9583: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L1049;
    }
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1159;
    }
  goto ret0;

 L1049: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1050;
    }
  goto ret0;

 L1050: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_rhs_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1051;
    }
  goto ret0;

 L1051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1052;
  goto ret0;

 L1052: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1053;
    case CLOBBER:
      goto L1068;
    default:
     break;
   }
  goto ret0;

 L1053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1054;
    }
  goto ret0;

 L1054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1055;
  goto ret0;

 L1055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L1056;
    }
  goto ret0;

 L1056: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1057;
  goto ret0;

 L1057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && (TARGET_ARM))
    {
      return 97;
    }
  goto ret0;

 L1068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1069;
    }
  goto ret0;

 L1069: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 98;
    }
  goto ret0;

 L1159: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1160;
  goto ret0;

 L1160: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1161;
    case CLOBBER:
      goto L1172;
    default:
     break;
   }
  goto ret0;

 L1161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1162;
    }
  goto ret0;

 L1162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L1163;
  goto ret0;

 L1163: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM))
    {
      return 108;
    }
  goto ret0;

 L1172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1173;
    }
  goto ret0;

 L1173: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 109;
    }
  goto ret0;

 L1010: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1011;
    }
  goto ret0;

 L1011: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1012;
    }
  goto ret0;

 L1012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1013;
  goto ret0;

 L1013: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1014;
    case CLOBBER:
      goto L1027;
    default:
     break;
   }
  goto ret0;

 L1014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1015;
    }
  goto ret0;

 L1015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[3]))
    {
      operands[3] = x2;
      goto L1016;
    }
  goto ret0;

 L1016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L1017;
  goto ret0;

 L1017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 94;
    }
  goto ret0;

 L1027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1028;
    }
  goto ret0;

 L1028: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 95;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_2 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L1768;
    }
 L1789: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L1790;
    }
 L1812: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[0] = x3;
      goto L1813;
    }
 L1871: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L1872;
    }
 L1888: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L1889;
    }
 L1934: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L1935;
    }
 L2101: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2102;
    }
 L2136: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2137;
    }
 L2153: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2154;
    }
  goto ret0;

 L1768: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1769;
    }
  goto L1789;

 L1769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (thumb_cmpneg_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1770;
    }
  goto L1789;

 L1770: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1771;
  x3 = XEXP (x2, 0);
  goto L1789;

 L1771: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L1772;

 L1772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1773;
  x3 = XEXP (x2, 0);
  goto L1789;

 L1773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1774;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1789;

 L1774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1775;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1789;

 L1775: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 162;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1789;

 L1790: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1791;
    }
  goto L1812;

 L1791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1792;
  goto L1812;

 L1792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1793;
  x3 = XEXP (x2, 0);
  goto L1812;

 L1793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L1794;

 L1794: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1795;
  x3 = XEXP (x2, 0);
  goto L1812;

 L1795: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1796;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1812;

 L1796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1797;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1812;

 L1797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && (TARGET_THUMB))
    {
      return 163;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1812;

 L1813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ZERO_EXTRACT)
    goto L1814;
  goto L1871;

 L1814: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1815;
    }
  goto L1871;

 L1815: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L1816;
  goto L1871;

 L1816: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 2);
  if (const_int_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1817;
    }
  goto L1871;

 L1817: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1818;
  goto L1871;

 L1818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1819;
  x3 = XEXP (x2, 0);
  goto L1871;

 L1819: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L1820;

 L1820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1821;
  x3 = XEXP (x2, 0);
  goto L1871;

 L1821: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1822;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1871;

 L1822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1823;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1871;

 L1823: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 165;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1871;

 L1872: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L1873;
  goto L1888;

 L1873: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1874;
    }
  goto L1888;

 L1874: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L1875;
    }
  goto L1888;

 L1875: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1876;
  goto L1888;

 L1876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1877;
  x3 = XEXP (x2, 0);
  goto L1888;

 L1877: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L1878;

 L1878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1879;
  x3 = XEXP (x2, 0);
  goto L1888;

 L1879: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1880;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1888;

 L1880: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1881;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1888;

 L1881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1882;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1888;

 L1882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1883;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1888;

 L1883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 167;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1888;

 L1889: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9603;
  goto L1934;

 L9603: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case IOR:
      goto L1890;
    case XOR:
      goto L1953;
    case AND:
      goto L2016;
    default:
     break;
   }
  goto L1934;

 L1890: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1891;
    }
  goto L1934;

 L1891: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1892;
    }
  goto L1934;

 L1892: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1893;
  goto L1934;

 L1893: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1894;
  x3 = XEXP (x2, 0);
  goto L1934;

 L1894: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L1895;

 L1895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1896;
  x3 = XEXP (x2, 0);
  goto L1934;

 L1896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1897;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1898;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1898: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 168;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1953: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L1954;
    }
  goto L1934;

 L1954: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1955;
    }
  goto L1934;

 L1955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1956;
  goto L1934;

 L1956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1957;
  x3 = XEXP (x2, 0);
  goto L1934;

 L1957: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L1958;

 L1958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1959;
  x3 = XEXP (x2, 0);
  goto L1934;

 L1959: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1960;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1961;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1961: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 170;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L2016: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == NOT)
    goto L2017;
  goto L1934;

 L2017: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L2018;
    }
  goto L1934;

 L2018: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2019;
    }
  goto L1934;

 L2019: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2020;
  goto L1934;

 L2020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2021;
  x3 = XEXP (x2, 0);
  goto L1934;

 L2021: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L2022;

 L2022: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2023;
  x3 = XEXP (x2, 0);
  goto L1934;

 L2023: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2024;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L2024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2025;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L2025: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 172;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1934;

 L1935: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9606;
  goto L2101;

 L9606: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case IOR:
      goto L1936;
    case XOR:
      goto L1999;
    case AND:
      goto L2066;
    default:
     break;
   }
  goto L2101;

 L1936: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1937;
    }
  goto L2101;

 L1937: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L1938;
    }
  goto L2101;

 L1938: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1939;
  goto L2101;

 L1939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1940;
  x3 = XEXP (x2, 0);
  goto L2101;

 L1940: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L1941;

 L1941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1942;
  x3 = XEXP (x2, 0);
  goto L2101;

 L1942: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1943;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L1943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1944;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L1944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L1945;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L1945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1946;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L1946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 169;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L1999: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2000;
    }
  goto L2101;

 L2000: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2001;
    }
  goto L2101;

 L2001: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2002;
  goto L2101;

 L2002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2003;
  x3 = XEXP (x2, 0);
  goto L2101;

 L2003: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2004;

 L2004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2005;
  x3 = XEXP (x2, 0);
  goto L2101;

 L2005: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2006;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2007;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L2008;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2008: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2009;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2009: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 171;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2066: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == NOT)
    goto L2067;
  goto L2101;

 L2067: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L2068;
    }
  goto L2101;

 L2068: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2069;
    }
  goto L2101;

 L2069: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2070;
  goto L2101;

 L2070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2071;
  x3 = XEXP (x2, 0);
  goto L2101;

 L2071: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2072;

 L2072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2073;
  x3 = XEXP (x2, 0);
  goto L2101;

 L2073: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2074;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2075;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2076;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2076: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L2077;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2077: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L2078;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2078: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 173;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2101;

 L2102: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2103;
    }
  goto L2136;

 L2103: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2104;
  goto L2136;

 L2104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2105;
  x3 = XEXP (x2, 0);
  goto L2136;

 L2105: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2106;

 L2106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2107;
  x3 = XEXP (x2, 0);
  goto L2136;

 L2107: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2108;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2136;

 L2108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2109;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2136;

 L2109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2110;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2136;

 L2110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2111;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2136;

 L2111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1L
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 174;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2136;

 L2137: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9609;
  goto L2153;

 L9609: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L2138;
    case MINUS:
      goto L2201;
    default:
     break;
   }
  goto L2153;

 L2138: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2139;
    }
  goto L2153;

 L2139: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2140;
    }
  goto L2153;

 L2140: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2141;
  goto L2153;

 L2141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2142;
  x3 = XEXP (x2, 0);
  goto L2153;

 L2142: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[5] = x4;
  goto L2143;

 L2143: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2144;
  x3 = XEXP (x2, 0);
  goto L2153;

 L2144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2145;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2147;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2148;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_THUMB
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 175;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2201: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2202;
    }
  goto L2153;

 L2202: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2203;
    }
  goto L2153;

 L2203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2204;
  goto L2153;

 L2204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2205;
  x3 = XEXP (x2, 0);
  goto L2153;

 L2205: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[5] = x4;
  goto L2206;

 L2206: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2207;
  x3 = XEXP (x2, 0);
  goto L2153;

 L2207: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2208;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2209;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2210;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2210: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2211;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3])
      && (TARGET_THUMB
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 177;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2153;

 L2154: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L2155;
  goto ret0;

 L2155: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2156;
    }
  goto ret0;

 L2156: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2157;
    }
  goto ret0;

 L2157: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2158;
  goto ret0;

 L2158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2159;
  goto ret0;

 L2159: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2160;

 L2160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2161;
  goto ret0;

 L2161: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2162;
  goto ret0;

 L2162: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2163;
    }
  goto ret0;

 L2163: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT)))
    {
      return 176;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_3 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L9544;
    case CC_NOOVmode:
      goto L9546;
    case CCmode:
      goto L9547;
    case CC_Cmode:
      goto L9548;
    case SImode:
      goto L9550;
    case HImode:
      goto L9553;
    default:
      break;
    }
 L1765: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L1766;
  goto ret0;

 L9544: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L3;
    }
 L9545: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L17;
    }
 L9549: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L239;
    }
  goto L1765;

 L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L4;
  x2 = XEXP (x1, 0);
  goto L9545;

 L4: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5;
    }
  x2 = XEXP (x1, 0);
  goto L9545;

 L5: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6;
    }
  x2 = XEXP (x1, 0);
  goto L9545;

 L6: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L7;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9545;

 L7: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_THUMB))
    {
      return 0;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9545;

 L17: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9554;
  x2 = XEXP (x1, 0);
  goto L9549;

 L9554: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L18;
    case MINUS:
      goto L226;
    case NEG:
      goto L1082;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9549;

 L18: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9558;
  x2 = XEXP (x1, 0);
  goto L9549;

 L9558: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L33;
    case ZERO_EXTEND:
      goto L49;
    case SUBREG:
    case REG:
      goto L9557;
    default:
      x2 = XEXP (x1, 0);
      goto L9549;
   }
 L9557: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L19;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L33: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L34;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L34: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L35;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L35: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L36;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L36: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && !TARGET_CIRRUS))
    {
      return 2;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L49: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L50;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L50: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L51;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L51: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L52;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L52: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && !TARGET_CIRRUS))
    {
      return 3;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L19: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L20;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L20: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L21;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L21: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && !TARGET_CIRRUS))
    {
      return 1;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9561;
  x2 = XEXP (x1, 0);
  goto L9549;

 L9561: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L287;
    case SIGN_EXTEND:
      goto L303;
    case SUBREG:
    case REG:
      goto L9560;
    default:
      x2 = XEXP (x1, 0);
      goto L9549;
   }
 L9560: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L227;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L287: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9563;
  x2 = XEXP (x1, 0);
  goto L9549;

 L9563: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L288;
    }
 L9564: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L320;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L289;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9564;

 L289: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L290;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9564;

 L290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 25;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9564;

 L320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L321;
  x2 = XEXP (x1, 0);
  goto L9549;

 L321: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L322;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L322: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L323;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 27;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L303: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L304;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L304: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L305;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L305: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 26;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode)
    goto L9566;
  x2 = XEXP (x1, 0);
  goto L9549;

 L9566: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L256;
    case SIGN_EXTEND:
      goto L272;
    case SUBREG:
    case REG:
      goto L9565;
    default:
      x2 = XEXP (x1, 0);
      goto L9549;
   }
 L9565: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L228;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L257;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L257: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L258;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 23;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L272: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L273;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L273: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L274;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 24;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L228: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L229;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L229: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 21;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L1082: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1083;
    }
  x2 = XEXP (x1, 0);
  goto L9549;

 L1083: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1084;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 99;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9549;

 L239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9568;
  x2 = XEXP (x1, 0);
  goto L1765;

 L9568: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L240;
    case NEG:
      goto L1094;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1765;

 L240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L241;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L242;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L242: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L243;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_THUMB))
    {
      return 22;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1094: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L1095;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L1095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_THUMB))
    {
      return 100;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9546: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L75;
  goto L1765;

 L75: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L76;
  x2 = XEXP (x1, 0);
  goto L1765;

 L76: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9570;
  x2 = XEXP (x1, 0);
  goto L1765;

 L9570: ATTRIBUTE_UNUSED_LABEL
  tem = recog_1 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L1765;

 L9547: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L95;
  goto L1765;

 L95: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L96;
  x2 = XEXP (x1, 0);
  goto L1765;

 L96: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L97;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NEG)
    goto L98;
  if (GET_CODE (x3) == CONST_INT)
    goto L9585;
  x2 = XEXP (x1, 0);
  goto L1765;

 L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L99;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L99: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L100;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L101;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L102;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L103;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 8;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9585: ATTRIBUTE_UNUSED_LABEL
  if (arm_addimm_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L117;
    }
 L9586: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x3, 0) == 0L)
    goto L1319;
  x2 = XEXP (x1, 0);
  goto L1765;

 L117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L118;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L119;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L120;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L121;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_addimm_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L122;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L122: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && INTVAL (operands[2]) == -INTVAL (operands[3])))
    {
      return 10;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9586;

 L1319: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1320;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1320: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1321;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1321: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1])
      && (TARGET_ARM))
    {
      return 132;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9548: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L126;
  goto L1765;

 L126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_Cmode
      && GET_CODE (x2) == COMPARE)
    goto L127;
  x2 = XEXP (x1, 0);
  goto L1765;

 L127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L128;
  x2 = XEXP (x1, 0);
  goto L1765;

 L128: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L129;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L130;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1]))
    goto L131;
 L143: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, operands[2]))
    goto L144;
  x2 = XEXP (x1, 0);
  goto L1765;

 L131: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L132;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L143;

 L132: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L133;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L143;

 L133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L134;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L143;

 L134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L135;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L143;

 L135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 11;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L143;

 L144: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L145;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L146;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L146: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L147;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L148;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 12;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9550: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L493;
    }
 L9551: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L946;
    }
 L9552: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1223;
    }
  goto L1765;

 L493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9587;
  x2 = XEXP (x1, 0);
  goto L9551;

 L9587: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case TRUNCATE:
      goto L494;
    case NE:
      goto L667;
    case SMAX:
      goto L891;
    case SMIN:
      goto L905;
    case UMAX:
      goto L919;
    case UMIN:
      goto L933;
    case ABS:
      goto L1116;
    case NEG:
      goto L1128;
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      goto L9593;
    default:
      x2 = XEXP (x1, 0);
      goto L9551;
   }
 L9593: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L961;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L495;
  x2 = XEXP (x1, 0);
  goto L9551;

 L495: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L496;
  x2 = XEXP (x1, 0);
  goto L9551;

 L496: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode)
    goto L9596;
  x2 = XEXP (x1, 0);
  goto L9551;

 L9596: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L497;
    case ZERO_EXTEND:
      goto L521;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9551;

 L497: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L498;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L498: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L499;
  x2 = XEXP (x1, 0);
  goto L9551;

 L499: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L500;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L500: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32L)
    goto L501;
  x2 = XEXP (x1, 0);
  goto L9551;

 L501: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L502;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L503;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L503: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 43;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L521: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L522;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L522: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L523;
  x2 = XEXP (x1, 0);
  goto L9551;

 L523: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L524;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L524: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 32L)
    goto L525;
  x2 = XEXP (x1, 0);
  goto L9551;

 L525: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L526;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L527;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L527: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 44;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L668;
  x2 = XEXP (x1, 0);
  goto L9551;

 L668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L669;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L670;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L670: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L671;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L672;
  x2 = XEXP (x1, 0);
  goto L9551;

 L672: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L673;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L673: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)))
    {
      return 59;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L892;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L893;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L893: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L894;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L894: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 83;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L906;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L907;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L908;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 84;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L920;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L921;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L921: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L922;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 85;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L933: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L934;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L934: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L935;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L935: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L936;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L936: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 86;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L1116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1117;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L1117: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1118;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L1118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 103;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L1128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ABS)
    goto L1129;
  x2 = XEXP (x1, 0);
  goto L9551;

 L1129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1130;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L1130: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1131;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L1131: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 104;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (minmax_operator (x3, SImode))
    {
      operands[5] = x3;
      goto L962;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L962: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L963;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L963: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L964;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L965;
    }
  x2 = XEXP (x1, 0);
  goto L9551;

 L965: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L966;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM
   && (GET_CODE (operands[1]) != REG
       || (REGNO(operands[1]) != FRAME_POINTER_REGNUM
           && REGNO(operands[1]) != ARG_POINTER_REGNUM))))
    {
      return 88;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9551;

 L946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (minmax_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L947;
    }
  x2 = XEXP (x1, 0);
  goto L9552;

 L947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L948;
    }
  x2 = XEXP (x1, 0);
  goto L9552;

 L948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L949;
    }
  x2 = XEXP (x1, 0);
  goto L9552;

 L949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9552;

 L950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 87;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9552;

 L1223: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9598;
  x2 = XEXP (x1, 0);
  goto L1765;

 L9598: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L1224;
    case UNSPEC:
      goto L9600;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1765;

 L1224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1225;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L1225: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1226;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1227: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 118;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9600: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 4)
    goto L1289;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1289: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1290;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1290: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[0]))
    goto L1291;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1291: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST)
    goto L1292;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1292: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == PLUS)
    goto L1293;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1293: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) == PC)
    goto L1294;
  x2 = XEXP (x1, 0);
  goto L1765;

 L1294: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT)
    goto L9601;
  x2 = XEXP (x1, 0);
  goto L1765;

 L9601: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x6, 0) == XWINT (x6, 0))
    switch ((int) XWINT (x6, 0))
      {
      case 4L:
        goto L1295;
      case 8L:
        goto L1309;
      default:
        break;
      }
  x2 = XEXP (x1, 0);
  goto L1765;

 L1295: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1296;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1297;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1298;

 L1298: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB && flag_pic))
    {
      return 130;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1309: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L1310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L1312;

 L1312: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && flag_pic))
    {
      return 131;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L9553: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L1356;
    }
  goto L1765;

 L1356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1357;
    }
  x2 = XEXP (x1, 0);
  goto L1765;

 L1357: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L1358;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1359;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1359: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 140;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1765;

 L1766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1767;
  goto ret0;

 L1767: ATTRIBUTE_UNUSED_LABEL
  return recog_2 (x0, insn, pnum_clobbers);
 ret0:
  return -1;
}

static int
recog_4 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (equality_operator (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L1852;
    }
 L2083: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2084;
    }
 L2116: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2117;
    }
  goto ret0;

 L1852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9622;
  goto L2083;

 L9622: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case AND:
      goto L1853;
    case IOR:
      goto L1916;
    case XOR:
      goto L1979;
    default:
     break;
   }
  goto L2083;

 L1853: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode)
    goto L9626;
  goto L2083;

 L9626: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == NOT)
    goto L2045;
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1854;
    }
  goto L2083;

 L2045: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L2046;
    }
  goto L2083;

 L2046: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2047;
    }
  goto L2083;

 L2047: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2048;
  goto L2083;

 L2048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2049;
  x3 = XEXP (x2, 0);
  goto L2083;

 L2049: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2050;

 L2050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2051;
  x3 = XEXP (x2, 0);
  goto L2083;

 L2051: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2052;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2053;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2053: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2054: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L2055;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2055: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L2056;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    goto L2057;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2057: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2058;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2058: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2059;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2059: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 173;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1854: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L1855;
    }
  goto L2083;

 L1855: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1856;
  goto L2083;

 L1856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1857;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L1858;

 L1858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1859;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1859: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1861;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1861: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L1862;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1863;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1863: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L1864;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1864: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1865;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1865: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1866;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1866: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 167;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1916: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1917;
    }
  goto L2083;

 L1917: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L1918;
    }
  goto L2083;

 L1918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1919;
  goto L2083;

 L1919: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1920;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1920: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L1921;

 L1921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1922;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1922: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1923;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1924;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L1925;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1926;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L1927;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1927: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1928;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1929;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1929: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 169;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1979: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L1980;
    }
  goto L2083;

 L1980: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L1981;
    }
  goto L2083;

 L1981: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L1982;
  goto L2083;

 L1982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L1983;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1983: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L1984;

 L1984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L1985;
  x3 = XEXP (x2, 0);
  goto L2083;

 L1985: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1986;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1987;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == XOR)
    goto L1988;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1988: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1989;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1989: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L1990;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1990: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L1991;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1992;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L1992: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 171;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2083;

 L2084: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2085;
    }
  goto L2116;

 L2085: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2086;
  goto L2116;

 L2086: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2087;
  x3 = XEXP (x2, 0);
  goto L2116;

 L2087: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[4] = x4;
  goto L2088;

 L2088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2089;
  x3 = XEXP (x2, 0);
  goto L2116;

 L2089: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2090;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2091;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2092;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2093;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1L)
    goto L2094;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2094: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2095;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2095: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2096;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2096: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 174;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2116;

 L2117: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9627;
  goto ret0;

 L9627: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L2118;
    case MINUS:
      goto L2181;
    default:
     break;
   }
  goto ret0;

 L2118: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2119;
    }
  goto ret0;

 L2119: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2120;
    }
  goto ret0;

 L2120: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2121;
  goto ret0;

 L2121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2122;
  goto ret0;

 L2122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[5] = x4;
  goto L2123;

 L2123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2124;
  goto ret0;

 L2124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2125;
  goto ret0;

 L2125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2126;
    }
  goto ret0;

 L2126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L2127;
  goto ret0;

 L2127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2128;
  goto ret0;

 L2128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L2129;
  goto ret0;

 L2129: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2130;
  goto ret0;

 L2130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2131;
    }
  goto ret0;

 L2131: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT)))
    {
      return 175;
    }
  goto ret0;

 L2181: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2182;
    }
  goto ret0;

 L2182: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2183;
    }
  goto ret0;

 L2183: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2184;
  goto ret0;

 L2184: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2185;
  goto ret0;

 L2185: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[5] = x4;
  goto L2186;

 L2186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == PC)
    goto L2187;
  goto ret0;

 L2187: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2188;
  goto ret0;

 L2188: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (thumb_cbrch_target_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2189;
    }
  goto ret0;

 L2189: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2190;
  goto ret0;

 L2190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L2191;
  goto ret0;

 L2191: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[3]))
    goto L2192;
  goto ret0;

 L2192: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2193;
  goto ret0;

 L2193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2194;
    }
  goto ret0;

 L2194: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT)))
    {
      return 177;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_5 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L1849;
    case CALL:
      goto L2379;
    default:
     break;
   }
  goto ret0;

 L1849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L1850;
 L2430: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x2;
  goto L2431;
 L2614: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L2615;
  if (s_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2511;
    }
 L2548: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2549;
    }
 L2578: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2579;
    }
  goto ret0;

 L1850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L1851;
  x2 = XEXP (x1, 0);
  goto L2430;

 L1851: ATTRIBUTE_UNUSED_LABEL
  tem = recog_4 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L2430;

 L2431: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2432;
  x2 = XEXP (x1, 0);
  goto L2614;

 L2432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2433;
  x2 = XEXP (x1, 0);
  goto L2614;

 L2433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9629;
  x2 = XEXP (x1, 0);
  goto L2614;

 L9629: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2434;
    }
 L9630: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2455;
    }
 L9631: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2476;
    }
  x2 = XEXP (x1, 0);
  goto L2614;

 L2434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2435;

 L2435: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2436;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9630;

 L2436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2437;

 L2437: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2438;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9630;

 L2438: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_THUMB))
    {
      return 203;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9630;

 L2455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2456;

 L2456: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2457;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9631;

 L2457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2458;

 L2458: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2459;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9631;

 L2459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_ARM))
    {
      return 204;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9631;

 L2476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2477;

 L2477: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2478;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2614;

 L2478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2479;

 L2479: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2480;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2614;

 L2480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_ARM && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))))
    {
      return 205;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2614;

 L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L2616;
  goto ret0;

 L2616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LEU)
    goto L2617;
  goto ret0;

 L2617: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2618;
    }
  goto ret0;

 L2618: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2619;
    }
  goto ret0;

 L2619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2620;
  goto ret0;

 L2620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L2621;
  goto ret0;

 L2621: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode
      && GET_CODE (x5) == MULT)
    goto L2622;
  goto ret0;

 L2622: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, operands[0]))
    goto L2623;
  goto ret0;

 L2623: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 4L)
    goto L2624;
  goto ret0;

 L2624: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == LABEL_REF)
    goto L2625;
  goto ret0;

 L2625: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  operands[2] = x6;
  goto L2626;

 L2626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF)
    goto L2627;
  goto ret0;

 L2627: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[3] = x4;
  goto L2628;

 L2628: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2629;
  goto ret0;

 L2629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L2630;
  goto ret0;

 L2630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2631;
  goto ret0;

 L2631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2632;
  goto ret0;

 L2632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 217;
    }
  goto ret0;

 L2511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2512;
  x2 = XEXP (x1, 0);
  goto L2548;

 L2512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2513;
  x2 = XEXP (x1, 0);
  goto L2548;

 L2513: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L2514;

 L2514: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2515;

 L2515: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2516;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2548;

 L2516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2517;

 L2517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2518;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2548;

 L2518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_ARM
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_longcall_p (operands[1], INTVAL (operands[3]), 1)))
    {
      return 207;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2548;

 L2549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2550;
  x2 = XEXP (x1, 0);
  goto L2578;

 L2550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2551;
  x2 = XEXP (x1, 0);
  goto L2578;

 L2551: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L2552;

 L2552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2553;

 L2553: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2554;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2578;

 L2554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2555;

 L2555: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2556;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2578;

 L2556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_THUMB
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_longcall_p (operands[1], INTVAL (operands[3]), 1)))
    {
      return 209;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2578;

 L2579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2580;
  goto ret0;

 L2580: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2581;
  goto ret0;

 L2581: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L2582;

 L2582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2583;

 L2583: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == RETURN)
    goto L2584;
  goto ret0;

 L2584: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2585;
  goto ret0;

 L2585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2586;

 L2586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && GET_CODE (operands[1]) == SYMBOL_REF))
    {
      return 211;
    }
  goto ret0;

 L2379: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2380;
  goto ret0;

 L2380: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9632;
 L2494: ATTRIBUTE_UNUSED_LABEL
  operands[0] = x3;
  goto L2495;

 L9632: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2381;
    }
 L9633: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2398;
    }
 L9634: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2415;
    }
  goto L2494;

 L2381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2382;

 L2382: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2383;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9633;

 L2383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2384;

 L2384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2385;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9633;

 L2385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_ARM))
    {
      return 200;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9633;

 L2398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2399;

 L2399: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2400;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9634;

 L2400: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2401;

 L2401: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2402;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9634;

 L2402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_ARM))
    {
      return 201;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9634;

 L2415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2416;

 L2416: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2417;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2494;

 L2417: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2418;

 L2418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2419;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2494;

 L2419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14
      && (TARGET_THUMB))
    {
      return 202;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2494;

 L2495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2496;

 L2496: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case USE:
      goto L2497;
    case RETURN:
      goto L2573;
    default:
     break;
   }
  goto ret0;

 L2497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2498;

 L2498: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == CLOBBER)
    goto L2499;
  goto ret0;

 L2499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9635;
  goto ret0;

 L9635: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L9637;
  goto ret0;

 L9637: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 14)
    goto L9639;
  goto ret0;

 L9639: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_longcall_p (operands[0], INTVAL (operands[2]), 1)))
    {
      return 206;
    }
 L9640: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_longcall_p (operands[0], INTVAL (operands[2]), 1)))
    {
      return 208;
    }
  goto ret0;

 L2573: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE)
    goto L2574;
  goto ret0;

 L2574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2575;

 L2575: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && GET_CODE (operands[0]) == SYMBOL_REF))
    {
      return 210;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_6 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L2992;
    }
 L3011: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[6] = x3;
      goto L3012;
    }
 L3081: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[9] = x3;
      goto L3082;
    }
 L3326: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[7] = x3;
      goto L3327;
    }
  goto ret0;

 L2992: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2993;
    }
  goto L3011;

 L2993: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L3227;
    }
  goto L3011;

 L3227: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L9683;
 L2994: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2995;
    }
 L3195: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3196;
    }
  x3 = XEXP (x2, 0);
  goto L3011;

 L9683: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NOT:
      goto L3228;
    case NEG:
      goto L3447;
    default:
     break;
   }
  goto L2994;

 L3228: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3229;
    }
  goto L2994;

 L3229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3230;
    }
  x3 = XEXP (x2, 1);
  goto L2994;

 L3230: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3231;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2994;

 L3231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 257;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2994;

 L3447: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3448;
    }
  goto L2994;

 L3448: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3449;
    }
  x3 = XEXP (x2, 1);
  goto L2994;

 L3449: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3450;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2994;

 L3450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 269;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2994;

 L2995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2996;
    }
  x3 = XEXP (x2, 1);
  goto L3195;

 L2996: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2997;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3195;

 L2997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 244;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3195;

 L3196: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode)
    goto L9685;
  x3 = XEXP (x2, 0);
  goto L3011;

 L9685: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case NOT:
      goto L3197;
    case NEG:
      goto L3480;
    default:
     break;
   }
  x3 = XEXP (x2, 0);
  goto L3011;

 L3197: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3198;
    }
  x3 = XEXP (x2, 0);
  goto L3011;

 L3198: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3199;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3011;

 L3199: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 255;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3011;

 L3480: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3481;
    }
  x3 = XEXP (x2, 0);
  goto L3011;

 L3481: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3482;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3011;

 L3482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 271;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3011;

 L3012: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9687;
  goto L3081;

 L9687: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L3013;
    }
 L9688: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3124;
    }
  goto L3081;

 L3013: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L3014;
    }
  x4 = XEXP (x3, 0);
  goto L9688;

 L3014: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L9689;
 L3049: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3050;
    }
 L3294: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3295;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L9689: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3015;
    case NOT:
      goto L3371;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
    case MULT:
      goto L9690;
    default:
      goto L9692;
   }
 L9690: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3260;
    }
 L9692: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3409;
    }
  goto L3049;

 L3015: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3016;
    }
  goto L9692;

 L3016: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3017;
    }
  goto L9692;

 L3017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3018;
    }
  x3 = XEXP (x2, 1);
  goto L9692;

 L3018: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3019;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9692;

 L3019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 245;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L9692;

 L3371: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3372;
    }
  goto L3049;

 L3372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shiftable_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3373;
    }
  x3 = XEXP (x2, 1);
  goto L3049;

 L3373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3374;
    }
  x3 = XEXP (x2, 1);
  goto L3049;

 L3374: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3375;
    }
  x3 = XEXP (x2, 1);
  goto L3049;

 L3375: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 265;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3260: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3261;
    }
  goto L3049;

 L3261: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3262;
    }
  goto L3049;

 L3262: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3263;
    }
  x3 = XEXP (x2, 1);
  goto L3049;

 L3263: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3264;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 259;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3409: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3410;
    }
  goto L3049;

 L3410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3411;
    }
  goto L3049;

 L3411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L3412;
  x3 = XEXP (x2, 1);
  goto L3049;

 L3412: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3413;
    }
  x3 = XEXP (x2, 1);
  goto L3049;

 L3413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3414;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 267;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3049;

 L3050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode)
    goto L9693;
  x3 = XEXP (x2, 1);
  goto L3294;

 L9693: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L3051;
 L9694: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3162;
    }
  x3 = XEXP (x2, 1);
  goto L3294;

 L3051: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3052;
    }
  goto L9694;

 L3052: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3053;
    }
  goto L9694;

 L3053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L9694;

 L3054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 247;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L9694;

 L3162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3163;
    }
  x3 = XEXP (x2, 1);
  goto L3294;

 L3163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3164;
    }
  x3 = XEXP (x2, 1);
  goto L3294;

 L3164: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3165;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3294;

 L3165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 253;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L3294;

 L3295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shift_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3296;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L3296: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3297;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L3297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3298;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L3298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3299;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L3299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 261;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9688;

 L3124: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3125;
    }
  goto L3081;

 L3125: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shiftable_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3126;
    }
  x3 = XEXP (x2, 0);
  goto L3081;

 L3126: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L3127;
    }
  x3 = XEXP (x2, 0);
  goto L3081;

 L3127: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L3128;
    }
  x3 = XEXP (x2, 0);
  goto L3081;

 L3128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3129;
    }
  x3 = XEXP (x2, 0);
  goto L3081;

 L3129: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3130;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3081;

 L3130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 251;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3081;

 L3082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L3083;
    }
  goto L3326;

 L3083: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[6] = x4;
      goto L3084;
    }
  goto L3326;

 L3084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shiftable_operator (x3, SImode))
    {
      operands[8] = x3;
      goto L3085;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3085: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3086;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3086: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3087;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shiftable_operator (x3, SImode))
    {
      operands[7] = x3;
      goto L3088;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3088: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3089;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3089: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L3090;
    }
  x3 = XEXP (x2, 0);
  goto L3326;

 L3090: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3091;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3326;

 L3091: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 249;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L3326;

 L3327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L3328;
    }
  goto ret0;

 L3328: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[6] = x4;
      goto L3329;
    }
  goto ret0;

 L3329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shift_operator (x3, SImode))
    {
      operands[8] = x3;
      goto L3330;
    }
  goto ret0;

 L3330: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3331;
    }
  goto ret0;

 L3331: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3332;
    }
  goto ret0;

 L3332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shift_operator (x3, SImode))
    {
      operands[9] = x3;
      goto L3333;
    }
  goto ret0;

 L3333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L3334;
    }
  goto ret0;

 L3334: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L3335;
    }
  goto ret0;

 L3335: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3336;
  goto ret0;

 L3336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 263;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_7 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM)
    goto L3595;
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2759;
    }
 L9645: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3569;
    }
 L9649: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3763;
    }
  goto ret0;

 L3595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9660;
  goto ret0;

 L9660: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3596;
    case MINUS:
      goto L3608;
    default:
     break;
   }
  goto ret0;

 L3596: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9662;
  goto ret0;

 L9662: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3597;
    }
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3733;
    }
  goto ret0;

 L3597: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3598;
    }
  goto ret0;

 L3598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3599;
    }
  goto ret0;

 L3599: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3600;
  goto ret0;

 L3600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3601;
    }
  goto ret0;

 L3601: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3602;
  goto ret0;

 L3602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3603;
  goto ret0;

 L3603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 280;
    }
  goto ret0;

 L3733: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3734;
    }
  goto ret0;

 L3734: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3735;
    }
  goto ret0;

 L3735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3736;
    }
  goto ret0;

 L3736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3737;
    }
  goto ret0;

 L3737: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3738;
  goto ret0;

 L3738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3739;
    }
  goto ret0;

 L3739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3740;
  goto ret0;

 L3740: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3741;
    }
  goto ret0;

 L3741: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3742;
  goto ret0;

 L3742: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4]))
    goto L3743;
  goto ret0;

 L3743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 290;
    }
  goto ret0;

 L3608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3609;
    }
  goto ret0;

 L3609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode)
    goto L9664;
  goto ret0;

 L9664: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3610;
    }
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3750;
    }
  goto ret0;

 L3610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3611;
    }
  goto ret0;

 L3611: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3612;
  goto ret0;

 L3612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3613;
    }
  goto ret0;

 L3613: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3614;
  goto ret0;

 L3614: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3615;
  goto ret0;

 L3615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 281;
    }
  goto ret0;

 L3750: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3751;
    }
  goto ret0;

 L3751: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3752;
    }
  goto ret0;

 L3752: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L3753;
    }
  goto ret0;

 L3753: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3754;
  goto ret0;

 L3754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3755;
    }
  goto ret0;

 L3755: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3756;
  goto ret0;

 L3756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3757;
  goto ret0;

 L3757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3758;
    }
  goto ret0;

 L3758: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3759;
  goto ret0;

 L3759: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 291;
    }
  goto ret0;

 L2759: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9668;
  x2 = XEXP (x1, 0);
  goto L9645;

 L9668: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MINUS:
      goto L2803;
    case IOR:
      goto L2867;
    case AND:
      goto L2910;
    case NEG:
      goto L2975;
    case IF_THEN_ELSE:
      goto L2991;
    case SIGN_EXTRACT:
      goto L3845;
    case NOT:
      goto L3861;
    case FIX:
      goto L4410;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      goto L9666;
    default:
      goto L9667;
   }
 L9666: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L2760;
    }
 L9667: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[5] = x2;
      goto L2785;
    }
 L9673: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L3507;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2804;
    }
  goto L9667;

 L2804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[4] = x3;
      goto L2805;
    }
  goto L9667;

 L2805: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2806;
    }
  goto L9667;

 L2806: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2807;
    }
  goto L9667;

 L2807: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2808;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2808: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 233;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2867: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L2868;
    }
  goto L9667;

 L2868: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2869;
    }
  goto L9667;

 L2869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2870;
    }
  goto L9667;

 L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[6] = x3;
      goto L2871;
    }
  goto L9667;

 L2871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2872;
    }
  goto L9667;

 L2872: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L2873;
    }
  goto L9667;

 L2873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2874;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode)))
    {
      return 238;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2910: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L2911;
    }
  goto L9667;

 L2911: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2912;
    }
  goto L9667;

 L2912: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2913;
    }
  goto L9667;

 L2913: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[6] = x3;
      goto L2914;
    }
  goto L9667;

 L2914: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2915;
    }
  goto L9667;

 L2915: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L2916;
    }
  goto L9667;

 L2916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2917;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L9677;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L9677: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L9679;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L9679: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 24)
    goto L9681;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L9681: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode)))
    {
      return 240;
    }
 L9682: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode)))
    {
      return 242;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9667;

 L2975: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2976;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2976: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2977;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2978;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2978: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2979;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L2979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 243;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L2991: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L9645;

 L3845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3846;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L3847;
  x2 = XEXP (x1, 0);
  goto L9645;

 L3847: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3848;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3849;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 299;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTRACT)
    goto L3862;
  x2 = XEXP (x1, 0);
  goto L9645;

 L3862: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3863;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3863: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L3864;
  x2 = XEXP (x1, 0);
  goto L9645;

 L3864: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3865;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3865: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3866;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 300;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L4410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L9695;
    case DFmode:
      goto L9696;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L9695: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FIX)
    goto L4411;
  x2 = XEXP (x1, 0);
  goto L9645;

 L4411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (cirrus_fp_register (x4, SFmode))
    {
      operands[1] = x4;
      goto L4412;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L4412: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4413;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L4413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4414;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L4414: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 390;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L9696: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FIX)
    goto L4426;
  x2 = XEXP (x1, 0);
  goto L9645;

 L4426: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (cirrus_fp_register (x4, DFmode))
    {
      operands[1] = x4;
      goto L4427;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L4427: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4428;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L4428: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4429;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L4429: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 391;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L2760: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2761;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2762;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L2762: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2763;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L2763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 230;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L2785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[4] = x3;
      goto L2786;
    }
  goto L9673;

 L2786: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2787;
    }
  goto L9673;

 L2787: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2788;
    }
  goto L9673;

 L2788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2789;
    }
  goto L9673;

 L2789: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L2790;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9673;

 L2790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM))
    {
      return 232;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L9673;

 L3507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3508;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (memory_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3509;
    }
  x2 = XEXP (x1, 0);
  goto L9645;

 L3509: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L3510;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L3511;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3511: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    {
      return 273;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9645;

 L3569: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9697;
  x2 = XEXP (x1, 0);
  goto L9649;

 L9697: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L3570;
    case MEM:
      goto L3620;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L3571;
  x2 = XEXP (x1, 0);
  goto L9649;

 L3571: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9699;
  x2 = XEXP (x1, 0);
  goto L9649;

 L9699: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L3572;
    case MINUS:
      goto L3585;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3572: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L3573;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3573: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L3574;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3574: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3575;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3575: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3576;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3577;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3578;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3578: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 278;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3585: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L3586;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3586: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L3587;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3587: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3588;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3589;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3590;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3591;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3591: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 279;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3620: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9701;
  x2 = XEXP (x1, 0);
  goto L9649;

 L9701: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3621;
    case MINUS:
      goto L3633;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3622;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3622: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3623;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3623: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3624;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3624: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3625;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3625: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3626;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3626: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3627;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 282;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3634;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3635;
    }
  x2 = XEXP (x1, 0);
  goto L9649;

 L3635: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3636;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3637;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3637: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3638;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3639: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 283;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9649;

 L3763: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L3764;
  goto ret0;

 L3764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9703;
  goto ret0;

 L9703: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3765;
    case MINUS:
      goto L3781;
    default:
     break;
   }
  goto ret0;

 L3765: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3766;
    }
  goto ret0;

 L3766: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3767;
    }
  goto ret0;

 L3767: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3768;
    }
  goto ret0;

 L3768: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3769;
    }
  goto ret0;

 L3769: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3770;
  goto ret0;

 L3770: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3771;
    }
  goto ret0;

 L3771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3772;
  goto ret0;

 L3772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3773;
    }
  goto ret0;

 L3773: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3774;
  goto ret0;

 L3774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4]))
    goto L3775;
  goto ret0;

 L3775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 292;
    }
  goto ret0;

 L3781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3782;
    }
  goto ret0;

 L3782: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3783;
    }
  goto ret0;

 L3783: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3784;
    }
  goto ret0;

 L3784: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3785;
    }
  goto ret0;

 L3785: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3786;
  goto ret0;

 L3786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3787;
    }
  goto ret0;

 L3787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3788;
  goto ret0;

 L3788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3789;
  goto ret0;

 L3789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3790;
    }
  goto ret0;

 L3790: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3791;
  goto ret0;

 L3791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 293;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_8 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L2442;
 L2656: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    case CC_NOOVmode:
      goto L9641;
    case SImode:
      goto L9646;
    case QImode:
      goto L9643;
    case HImode:
      goto L9647;
    case DImode:
      goto L9651;
    case SFmode:
      goto L9652;
    case DFmode:
      goto L9653;
    default:
      break;
    }
 L2887: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case REG:
      goto L9654;
    case PC:
      goto L3912;
    default:
     break;
   }
 L2521: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2522;
    }
 L2559: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2560;
    }
  goto ret0;

 L2442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2443;
  x2 = XEXP (x1, 0);
  goto L2656;

 L2443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2444;
  x2 = XEXP (x1, 0);
  goto L2656;

 L2444: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9655;
  x2 = XEXP (x1, 0);
  goto L2656;

 L9655: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2445;
    }
 L9656: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2466;
    }
 L9657: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2487;
    }
  x2 = XEXP (x1, 0);
  goto L2656;

 L2445: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2446;

 L2446: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2447;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9656;

 L2447: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2448;

 L2448: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 203;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9656;

 L2466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2467;

 L2467: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9657;

 L2468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2469;

 L2469: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 204;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L9657;

 L2487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2488;

 L2488: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2489;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2656;

 L2489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2490;

 L2490: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0))))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 205;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2656;

 L9641: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L2657;
  goto L2887;

 L2657: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L2658;
  x2 = XEXP (x1, 0);
  goto L2887;

 L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9659;
  x2 = XEXP (x1, 0);
  goto L2887;

 L9659: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MINUS)
    goto L2706;
 L9658: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      operands[1] = x3;
      goto L2659;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L2706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2707;
    }
  goto L9658;

 L2707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L2708;
    }
  goto L9658;

 L2708: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L2709;
    }
  goto L9658;

 L2709: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2710;
    }
  goto L9658;

 L2710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2711;
  x3 = XEXP (x2, 0);
  goto L9658;

 L2711: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2712;
    case CLOBBER:
      goto L2729;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2713;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2713: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L2714;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2714: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L2715;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L2716;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2716: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L2717;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM))
    {
      return 226;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2729: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2730;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2730: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 227;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L9658;

 L2659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L2660;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L2660: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2661;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L2661: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L2662;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L2662: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2663;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L2663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2664;
  x2 = XEXP (x1, 0);
  goto L2887;

 L2664: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2665;
    case CLOBBER:
      goto L2682;
    default:
     break;
   }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2665: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2666;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2666: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[1]))
    {
      operands[1] = x2;
      goto L2667;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2667: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L2668;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2668: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[4]))
    goto L2669;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[5]))
    goto L2670;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM))
    {
      return 223;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2682: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2683;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L2683: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 224;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9646: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L2887;

 L9643: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L3521;
  if (s_register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L3545;
    }
 L9648: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L3699;
    }
  goto L2887;

 L3521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9705;
  goto L2887;

 L9705: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3522;
    case MINUS:
      goto L3534;
    default:
     break;
   }
  goto L2887;

 L3522: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L9707;
  goto L2887;

 L9707: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3523;
    }
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3669;
    }
  goto L2887;

 L3523: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3524;
    }
  goto L2887;

 L3524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L3525;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3525: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3526;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3526: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3527;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3528;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3528: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3529;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3529: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 274;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3669: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3670;
    }
  goto L2887;

 L3670: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3671;
    }
  goto L2887;

 L3671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3672;
    }
  goto L2887;

 L3672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L3673;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3673: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3674;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3674: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3675;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3675: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3676;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3677;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3677: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3678;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3678: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4]))
    goto L3679;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 286;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3534: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3535;
    }
  goto L2887;

 L3535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode)
    goto L9709;
  goto L2887;

 L9709: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3536;
    }
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3686;
    }
  goto L2887;

 L3536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      operands[3] = x2;
      goto L3537;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3537: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3538;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3539;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3540;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3541;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 275;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3686: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3687;
    }
  goto L2887;

 L3687: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3688;
    }
  goto L2887;

 L3688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      operands[5] = x2;
      goto L3689;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3689: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3691;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3692;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3693;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3694;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3695;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3695: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 287;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L3546;
  x2 = XEXP (x1, 0);
  goto L9648;

 L3546: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9711;
  x2 = XEXP (x1, 0);
  goto L9648;

 L9711: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3547;
    case MINUS:
      goto L3559;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9648;

 L3547: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3548;
    }
  x2 = XEXP (x1, 0);
  goto L9648;

 L3548: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3549;
    }
  x2 = XEXP (x1, 0);
  goto L9648;

 L3549: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3550;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3550: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3551;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3552;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3553;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 276;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3560;
    }
  x2 = XEXP (x1, 0);
  goto L9648;

 L3560: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3561;
    }
  x2 = XEXP (x1, 0);
  goto L9648;

 L3561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3562;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3563;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3564;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3564: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3565;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 277;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9648;

 L3699: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode
      && GET_CODE (x2) == MEM)
    goto L3700;
  x2 = XEXP (x1, 0);
  goto L2887;

 L3700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9713;
  x2 = XEXP (x1, 0);
  goto L2887;

 L9713: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3701;
    case MINUS:
      goto L3717;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3701: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3702;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3702: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3703;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3703: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3704;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3705;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3705: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3706;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3707;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3707: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3708;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3708: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3709;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3710;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3710: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4]))
    goto L3711;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 288;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3718;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3718: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3719;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3719: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3720;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3720: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3721;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3721: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3722;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3723;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3724;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3724: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3725;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3725: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3726;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3726: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3727;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3727: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 289;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9647: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, HImode))
    {
      operands[3] = x2;
      goto L3643;
    }
 L9650: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, HImode))
    {
      operands[5] = x2;
      goto L3795;
    }
  goto L2887;

 L3643: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L3644;
  x2 = XEXP (x1, 0);
  goto L9650;

 L3644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9715;
  x2 = XEXP (x1, 0);
  goto L9650;

 L9715: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3645;
    case MINUS:
      goto L3657;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L9650;

 L3645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3646;
    }
  x2 = XEXP (x1, 0);
  goto L9650;

 L3646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3647;
    }
  x2 = XEXP (x1, 0);
  goto L9650;

 L3647: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3648;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3649;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3650;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3651;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 284;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3658;
    }
  x2 = XEXP (x1, 0);
  goto L9650;

 L3658: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L3659;
    }
  x2 = XEXP (x1, 0);
  goto L9650;

 L3659: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3660;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3661;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3662;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3662: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3663;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2])
      && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM)))
    {
      return 285;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9650;

 L3795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == MEM)
    goto L3796;
  x2 = XEXP (x1, 0);
  goto L2887;

 L3796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9717;
  x2 = XEXP (x1, 0);
  goto L2887;

 L9717: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case PLUS:
      goto L3797;
    case MINUS:
      goto L3813;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3797: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3798;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3798: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3799;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3799: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3800;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3800: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3801;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3801: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3802;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3803;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3803: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3804;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3805;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3805: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3806: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4]))
    goto L3807;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[1])
      && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 294;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L3814;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3814: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L3815;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3815: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L3816;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3816: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_shift_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L3817;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L3817: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L3818;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3818: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3819;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L3820;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L3821;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[2]))
    {
      operands[2] = x3;
      goto L3822;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L3823;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L3823: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[4])
      && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM))
    {
      return 295;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9651: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DImode))
    {
      operands[0] = x2;
      goto L4341;
    }
  goto L2887;

 L4341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == NEG)
    goto L4342;
  x2 = XEXP (x1, 0);
  goto L2887;

 L4342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cirrus_fp_register (x3, DImode))
    {
      operands[1] = x3;
      goto L4343;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L4343: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L4344: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && TARGET_CIRRUS))
    {
      return 381;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9652: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[0] = x2;
      goto L4373;
    }
  goto L2887;

 L4373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode
      && GET_CODE (x2) == FLOAT)
    goto L4374;
  x2 = XEXP (x1, 0);
  goto L2887;

 L4374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4375;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L4375: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4376;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L4376: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4377;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L4377: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 386;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9653: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[0] = x2;
      goto L4386;
    }
  goto L2887;

 L4386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode
      && GET_CODE (x2) == FLOAT)
    goto L4387;
  x2 = XEXP (x1, 0);
  goto L2887;

 L4387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L4388;
    }
  x2 = XEXP (x1, 0);
  goto L2887;

 L4388: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L4389;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L4389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4390;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L4390: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 387;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2887;

 L9654: ATTRIBUTE_UNUSED_LABEL
  if (dominant_cc_register (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L2888;
    }
  goto L2521;

 L2888: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L2889;
  x2 = XEXP (x1, 0);
  goto L2521;

 L2889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9719;
  x2 = XEXP (x1, 0);
  goto L2521;

 L9719: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L2890;
    case AND:
      goto L2933;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2890: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L2891;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2891: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2892;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2892: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2893;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2893: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[6] = x4;
      goto L2894;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2894: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2895;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2895: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L2896;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2897;
  x2 = XEXP (x1, 0);
  goto L2521;

 L2897: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2898;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L2899;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L2900;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L2901;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2901: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2902;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2902: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L2903;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[6]))
    {
      operands[6] = x3;
      goto L2904;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2904: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[4]))
    goto L2905;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[5])
      && (TARGET_ARM))
    {
      return 239;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L2934;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2934: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L2935;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2935: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2936;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2936: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[6] = x4;
      goto L2937;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2937: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L2938;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2938: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L2939;
    }
  x2 = XEXP (x1, 0);
  goto L2521;

 L2939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2940;
  x2 = XEXP (x1, 0);
  goto L2521;

 L2940: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L2941;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L2942;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2942: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L2943;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L2944;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2944: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L2945;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L2946;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[6]))
    {
      operands[6] = x3;
      goto L2947;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2947: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[4]))
    goto L2948;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L2948: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[5])
      && (TARGET_ARM))
    {
      return 241;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2521;

 L3912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3913;
    }
  goto ret0;

 L3913: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L3914;
  goto ret0;

 L3914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF)
    goto L3915;
  goto ret0;

 L3915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  goto L3916;

 L3916: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 311;
    }
  goto ret0;

 L2522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2523;
  x2 = XEXP (x1, 0);
  goto L2559;

 L2523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2524;
  x2 = XEXP (x1, 0);
  goto L2559;

 L2524: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L2525;

 L2525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2526;

 L2526: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2527;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2559;

 L2527: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2528;

 L2528: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_longcall_p (operands[1], INTVAL (operands[3]), 1))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 207;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2559;

 L2560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL)
    goto L2561;
  goto ret0;

 L2561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L2562;
  goto ret0;

 L2562: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L2563;

 L2563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[2] = x3;
  goto L2564;

 L2564: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2565;
  goto ret0;

 L2565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[3] = x2;
  goto L2566;

 L2566: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_longcall_p (operands[1], INTVAL (operands[3]), 1))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 209;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_9 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  switch (XVECLEN (x0, 0))
    {
    case 2:
      goto L1;
    case 8:
      goto L1625;
    case 5:
      goto L1666;
    case 6:
      goto L1700;
    case 4:
      goto L1730;
    default:
      break;
    }
 L9513: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 5
      && load_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1385;
    }
 L9514: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 4
      && load_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1413;
    }
 L9515: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 3
      && load_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1435;
    }
 L9516: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 2
      && load_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1491;
    }
 L9517: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 5
      && store_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1502;
    }
 L9518: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 4
      && store_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1531;
    }
 L9519: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 3
      && store_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1554;
    }
 L9520: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 2
      && store_multiple_operation (x0, VOIDmode))
    {
      operands[0] = x0;
      goto L1613;
    }
 L9525: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 3:
      goto L1848;
    case 2:
      goto L3825;
    default:
      break;
    }
 L9531: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) >= 1
      && multi_register_push (x0, VOIDmode))
    {
      operands[2] = x0;
      goto L3876;
    }
  goto ret0;

 L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2;
    case CALL:
      goto L2388;
    default:
     break;
   }
  goto L9516;

 L2: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9516;

 L2388: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2389;
  goto L9516;

 L2389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9611;
  goto L9516;

 L9611: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2390;
    }
 L9612: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2407;
    }
 L9613: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L2424;
    }
  goto L9516;

 L2390: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2391;

 L2391: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2392;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9612;

 L2392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2393;

 L2393: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 200;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9612;

 L2407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2408;

 L2408: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2409;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9613;

 L2409: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2410;

 L2410: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 201;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9613;

 L2424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2425;

 L2425: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2426;
  goto L9516;

 L2426: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2427;

 L2427: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 202;
    }
  goto L9516;

 L1625: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1626;
  goto L9513;

 L1626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1627;
  goto L9513;

 L1627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1628;
    }
  goto L9513;

 L1628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1629;
  goto L9513;

 L1629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1630;
    }
  goto L9513;

 L1630: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1631;
  goto L9513;

 L1631: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1632;
  goto L9513;

 L1632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1633;
  goto L9513;

 L1633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1634;
  goto L9513;

 L1634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1635;
  goto L9513;

 L1635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1636;
  goto L9513;

 L1636: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1637;
  goto L9513;

 L1637: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1638;
  goto L9513;

 L1638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1639;
  goto L9513;

 L1639: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1640;
  goto L9513;

 L1640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1641;
  goto L9513;

 L1641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1642;
  goto L9513;

 L1642: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1643;
  goto L9513;

 L1643: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1644;
  goto L9513;

 L1644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1645;
  goto L9513;

 L1645: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1646;
  goto L9513;

 L1646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1647;
  goto L9513;

 L1647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1648;
  goto L9513;

 L1648: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1649;
  goto L9513;

 L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1650;
    }
  goto L9513;

 L1650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1651;
  goto L9513;

 L1651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1652;
  goto L9513;

 L1652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L)
    goto L1653;
  goto L9513;

 L1653: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L1654;
  goto L9513;

 L1654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1655;
    }
  goto L9513;

 L1655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1656;
  goto L9513;

 L1656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L1657;
  goto L9513;

 L1657: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L)
    goto L1658;
  goto L9513;

 L1658: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L1659;
  goto L9513;

 L1659: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1660;
    }
  goto L9513;

 L1660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER)
    goto L1661;
  goto L9513;

 L1661: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1662;
    }
  goto L9513;

 L1662: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER)
    goto L1663;
  goto L9513;

 L1663: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L1664;
    }
  goto L9513;

 L1664: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 159;
    }
  goto L9513;

 L1666: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1667;
  goto L9513;

 L1667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1668;
  goto L9513;

 L1668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1669;
    }
  goto L9513;

 L1669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1670;
  goto L9513;

 L1670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1671;
    }
  goto L9513;

 L1671: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1672;
  goto L9513;

 L1672: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1673;
  goto L9513;

 L1673: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1674;
  goto L9513;

 L1674: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1675;
  goto L9513;

 L1675: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1676;
  goto L9513;

 L1676: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1677;
  goto L9513;

 L1677: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1678;
  goto L9513;

 L1678: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1679;
  goto L9513;

 L1679: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1680;
  goto L9513;

 L1680: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1681;
  goto L9513;

 L1681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1682;
  goto L9513;

 L1682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1683;
  goto L9513;

 L1683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1684;
  goto L9513;

 L1684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1685;
  goto L9513;

 L1685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1686;
  goto L9513;

 L1686: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1687;
  goto L9513;

 L1687: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1688;
  goto L9513;

 L1688: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1689;
  goto L9513;

 L1689: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1690;
  goto L9513;

 L1690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1691;
    }
  goto L9513;

 L1691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1692;
  goto L9513;

 L1692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1693;
  goto L9513;

 L1693: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L)
    goto L1694;
  goto L9513;

 L1694: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L1695;
  goto L9513;

 L1695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1696;
    }
  goto L9513;

 L1696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1697;
  goto L9513;

 L1697: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L1698;
  goto L9513;

 L1698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 3;
      return 159;
    }
  goto L9513;

 L1700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1701;
  goto L9513;

 L1701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1702;
  goto L9513;

 L1702: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1703;
    }
  goto L9513;

 L1703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1704;
  goto L9513;

 L1704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1705;
    }
  goto L9513;

 L1705: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1706;
  goto L9513;

 L1706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1707;
  goto L9513;

 L1707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1708;
  goto L9513;

 L1708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1709;
  goto L9513;

 L1709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1710;
  goto L9513;

 L1710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1711;
  goto L9513;

 L1711: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1712;
  goto L9513;

 L1712: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1713;
  goto L9513;

 L1713: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1714;
  goto L9513;

 L1714: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1715;
  goto L9513;

 L1715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1716;
    }
  goto L9513;

 L1716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1717;
  goto L9513;

 L1717: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1718;
  goto L9513;

 L1718: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1719;
  goto L9513;

 L1719: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1720;
  goto L9513;

 L1720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1721;
    }
  goto L9513;

 L1721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1722;
  goto L9513;

 L1722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L1723;
  goto L9513;

 L1723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1724;
  goto L9513;

 L1724: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER)
    goto L1725;
  goto L9513;

 L1725: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1726;
    }
  goto L9513;

 L1726: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER)
    goto L1727;
  goto L9513;

 L1727: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1728;
    }
  goto L9513;

 L1728: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 160;
    }
  goto L9513;

 L1730: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1731;
  goto L9514;

 L1731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1732;
  goto L9514;

 L1732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1733;
    }
  goto L9514;

 L1733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1734;
  goto L9514;

 L1734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L1735;
    }
  goto L9514;

 L1735: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1736;
  goto L9514;

 L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1737;
  goto L9514;

 L1737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1738;
  goto L9514;

 L1738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1739;
  goto L9514;

 L1739: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1740;
  goto L9514;

 L1740: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1741;
  goto L9514;

 L1741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1742;
  goto L9514;

 L1742: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[3]))
    goto L1743;
  goto L9514;

 L1743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1744;
  goto L9514;

 L1744: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1745;
  goto L9514;

 L1745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L1746;
    }
  goto L9514;

 L1746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1747;
  goto L9514;

 L1747: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1748;
  goto L9514;

 L1748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1749;
  goto L9514;

 L1749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1750;
  goto L9514;

 L1750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1751;
    }
  goto L9514;

 L1751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1752;
  goto L9514;

 L1752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    goto L1753;
  goto L9514;

 L1753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 2;
      return 160;
    }
  goto L9514;

 L1385: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1386;
  goto L9514;

 L1386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1387;
    }
  goto L9514;

 L1387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1388;
  goto L9514;

 L1388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1389;
    }
  goto L9514;

 L1389: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1390;
  goto L9514;

 L1390: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1391;
  goto L9514;

 L1391: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1392;
    }
  goto L9514;

 L1392: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1393;
  goto L9514;

 L1393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1394;
  goto L9514;

 L1394: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1395;
  goto L9514;

 L1395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1396;
    }
  goto L9514;

 L1396: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1397;
  goto L9514;

 L1397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1398;
  goto L9514;

 L1398: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1399;
  goto L9514;

 L1399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1400;
  goto L9514;

 L1400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1401;
  goto L9514;

 L1401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1402;
    }
  goto L9514;

 L1402: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1403;
  goto L9514;

 L1403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1404;
  goto L9514;

 L1404: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1405;
  goto L9514;

 L1405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1406;
  goto L9514;

 L1406: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L1407;
  goto L9514;

 L1407: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L1408;
    }
  goto L9514;

 L1408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1409;
  goto L9514;

 L1409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1410;
  goto L9514;

 L1410: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1411;
  goto L9514;

 L1411: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    {
      return 147;
    }
  goto L9514;

 L1413: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1414;
  goto L9515;

 L1414: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9615;
  goto L9515;

 L9615: ATTRIBUTE_UNUSED_LABEL
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1453;
    }
 L9614: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1415;
    }
  goto L9515;

 L1453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1454;
  x2 = XEXP (x1, 0);
  goto L9614;

 L1454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1455;
    }
  x2 = XEXP (x1, 0);
  goto L9614;

 L1455: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1456;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1457;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1458;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1459;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1460;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1460: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1461;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1461: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1462;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1463;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1464;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1465: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1466;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1466: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1467;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1467: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1468;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1469;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1470;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1471;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1472;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1472: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    {
      return 150;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9614;

 L1415: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1416;
  goto L9515;

 L1416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1417;
    }
  goto L9515;

 L1417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L)
    goto L1418;
  goto L9515;

 L1418: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1419;
  goto L9515;

 L1419: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1420;
    }
  goto L9515;

 L1420: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1421;
  goto L9515;

 L1421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1422;
  goto L9515;

 L1422: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1423;
  goto L9515;

 L1423: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1424;
    }
  goto L9515;

 L1424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1425;
  goto L9515;

 L1425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1426;
  goto L9515;

 L1426: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1427;
  goto L9515;

 L1427: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1428;
  goto L9515;

 L1428: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1429;
  goto L9515;

 L1429: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1430;
    }
  goto L9515;

 L1430: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1431;
  goto L9515;

 L1431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1432;
  goto L9515;

 L1432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1433;
  goto L9515;

 L1433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    {
      return 148;
    }
  goto L9515;

 L1435: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1436;
  goto L9516;

 L1436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9617;
  goto L9516;

 L9617: ATTRIBUTE_UNUSED_LABEL
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1476;
    }
 L9616: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1437;
    }
  goto L9516;

 L1476: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1477;
  x2 = XEXP (x1, 0);
  goto L9616;

 L1477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1478;
    }
  x2 = XEXP (x1, 0);
  goto L9616;

 L1478: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1479;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1479: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1480;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1480: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1481;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1482;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1482: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1483;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1484;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1484: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1485;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1485: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1486;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1486: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1487;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1488;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1488: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1489;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1489: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    {
      return 151;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L9616;

 L1437: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1438;
  goto L9516;

 L1438: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1439;
    }
  goto L9516;

 L1439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1440;
  goto L9516;

 L1440: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1441;
  goto L9516;

 L1441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1442;
    }
  goto L9516;

 L1442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1443;
  goto L9516;

 L1443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1444;
  goto L9516;

 L1444: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1445;
  goto L9516;

 L1445: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1446;
    }
  goto L9516;

 L1446: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1447;
  goto L9516;

 L1447: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1448;
  goto L9516;

 L1448: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1449;
  goto L9516;

 L1449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    {
      return 149;
    }
  goto L9516;

 L1491: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1492;
  goto L9517;

 L1492: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1493;
    }
  goto L9517;

 L1493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1494;
  goto L9517;

 L1494: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1495;
    }
  goto L9517;

 L1495: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1496;
  goto L9517;

 L1496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1497;
    }
  goto L9517;

 L1497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1498;
  goto L9517;

 L1498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1499;
  goto L9517;

 L1499: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1500;
  goto L9517;

 L1500: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L
      && (TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    {
      return 152;
    }
  goto L9517;

 L1502: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1503;
  goto L9518;

 L1503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1504;
    }
  goto L9518;

 L1504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1505;
  goto L9518;

 L1505: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1506;
    }
  goto L9518;

 L1506: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L1507;
  goto L9518;

 L1507: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1508;
  goto L9518;

 L1508: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1509;
  goto L9518;

 L1509: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1510;
  goto L9518;

 L1510: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1511;
    }
  goto L9518;

 L1511: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1512;
  goto L9518;

 L1512: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1513;
  goto L9518;

 L1513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1514;
  goto L9518;

 L1514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1515;
  goto L9518;

 L1515: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1516;
  goto L9518;

 L1516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1517;
    }
  goto L9518;

 L1517: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1518;
  goto L9518;

 L1518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1519;
  goto L9518;

 L1519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1520;
  goto L9518;

 L1520: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1521;
  goto L9518;

 L1521: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1522;
  goto L9518;

 L1522: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1523;
    }
  goto L9518;

 L1523: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET)
    goto L1524;
  goto L9518;

 L1524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1525;
  goto L9518;

 L1525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1526;
  goto L9518;

 L1526: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1527;
  goto L9518;

 L1527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L1528;
  goto L9518;

 L1528: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L1529;
    }
  goto L9518;

 L1529: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    {
      return 153;
    }
  goto L9518;

 L1531: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1532;
  goto L9519;

 L1532: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9619;
  goto L9519;

 L9619: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1573;
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1533;
    }
  goto L9519;

 L1573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1574;
    }
  goto L9519;

 L1574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1575;
    }
  goto L9519;

 L1575: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1576;
  goto L9519;

 L1576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1577;
  goto L9519;

 L1577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1578;
  goto L9519;

 L1578: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1579;
  goto L9519;

 L1579: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1580;
  goto L9519;

 L1580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1581;
    }
  goto L9519;

 L1581: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1582;
  goto L9519;

 L1582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1583;
  goto L9519;

 L1583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1584;
  goto L9519;

 L1584: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1585;
  goto L9519;

 L1585: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1586;
  goto L9519;

 L1586: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1587;
    }
  goto L9519;

 L1587: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1588;
  goto L9519;

 L1588: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1589;
  goto L9519;

 L1589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1590;
  goto L9519;

 L1590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1591;
  goto L9519;

 L1591: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L1592;
  goto L9519;

 L1592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1593;
    }
  goto L9519;

 L1593: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    {
      return 156;
    }
  goto L9519;

 L1533: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1534;
  goto L9519;

 L1534: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1535;
    }
  goto L9519;

 L1535: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 12L)
    goto L1536;
  goto L9519;

 L1536: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1537;
  goto L9519;

 L1537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1538;
  goto L9519;

 L1538: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1539;
  goto L9519;

 L1539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1540;
    }
  goto L9519;

 L1540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1541;
  goto L9519;

 L1541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1542;
  goto L9519;

 L1542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1543;
  goto L9519;

 L1543: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1544;
  goto L9519;

 L1544: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1545;
  goto L9519;

 L1545: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1546;
    }
  goto L9519;

 L1546: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET)
    goto L1547;
  goto L9519;

 L1547: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1548;
  goto L9519;

 L1548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1549;
  goto L9519;

 L1549: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1550;
  goto L9519;

 L1550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1551;
  goto L9519;

 L1551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L1552;
    }
  goto L9519;

 L1552: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    {
      return 154;
    }
  goto L9519;

 L1554: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1555;
  goto L9520;

 L1555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9621;
  goto L9520;

 L9621: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MEM)
    goto L1597;
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1556;
    }
  goto L9520;

 L1597: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1598;
    }
  goto L9520;

 L1598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1599;
    }
  goto L9520;

 L1599: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1600;
  goto L9520;

 L1600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1601;
  goto L9520;

 L1601: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1602;
  goto L9520;

 L1602: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1603;
  goto L9520;

 L1603: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1604;
  goto L9520;

 L1604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1605;
    }
  goto L9520;

 L1605: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1606;
  goto L9520;

 L1606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1607;
  goto L9520;

 L1607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1608;
  goto L9520;

 L1608: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1609;
  goto L9520;

 L1609: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L1610;
  goto L9520;

 L1610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1611;
    }
  goto L9520;

 L1611: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    {
      return 157;
    }
  goto L9520;

 L1556: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L1557;
  goto L9520;

 L1557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1558;
    }
  goto L9520;

 L1558: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 8L)
    goto L1559;
  goto L9520;

 L1559: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1560;
  goto L9520;

 L1560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1561;
  goto L9520;

 L1561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[2]))
    goto L1562;
  goto L9520;

 L1562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1563;
    }
  goto L9520;

 L1563: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET)
    goto L1564;
  goto L9520;

 L1564: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1565;
  goto L9520;

 L1565: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1566;
  goto L9520;

 L1566: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L1567;
  goto L9520;

 L1567: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1568;
  goto L9520;

 L1568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L1569;
    }
  goto L9520;

 L1569: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    {
      return 155;
    }
  goto L9520;

 L1613: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L1614;
  goto L9525;

 L1614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1615;
  goto L9525;

 L1615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1616;
    }
  goto L9525;

 L1616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1617;
    }
  goto L9525;

 L1617: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L1618;
  goto L9525;

 L1618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L1619;
  goto L9525;

 L1619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L1620;
  goto L9525;

 L1620: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L1621;
  goto L9525;

 L1621: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L1622;
  goto L9525;

 L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_hard_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L1623;
    }
  goto L9525;

 L1623: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    {
      return 158;
    }
  goto L9525;

 L1848: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9531;

 L3825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 6)
    goto L3826;
  switch (GET_CODE (x1))
    {
    case SET:
      goto L2441;
    case CALL:
      goto L2502;
    default:
     break;
   }
  goto L9531;

 L3826: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 14)
    goto L3827;
  goto L9531;

 L3827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 1)
    goto L3828;
  goto L9531;

 L3828: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == RETURN
      && (TARGET_ARM))
    {
      return 296;
    }
  goto L9531;

 L2441: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L9531;

 L2502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MEM)
    goto L2503;
  goto L9531;

 L2503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2504;

 L2504: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  operands[1] = x2;
  goto L2505;

 L2505: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE)
    goto L2506;
  goto L9531;

 L2506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  goto L2507;

 L2507: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_longcall_p (operands[0], INTVAL (operands[2]), 1))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 206;
    }
 L2545: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_longcall_p (operands[0], INTVAL (operands[2]), 1))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 208;
    }
  goto L9531;

 L3876: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L3877;
  goto ret0;

 L3877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      operands[0] = x2;
      goto L3878;
    }
  goto ret0;

 L3878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 2)
    goto L3879;
  goto ret0;

 L3879: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L9721;
    case XFmode:
      goto L9722;
    default:
      break;
    }
  goto ret0;

 L9721: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3880;
    }
  goto ret0;

 L3880: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 301;
    }
  goto ret0;

 L9722: ATTRIBUTE_UNUSED_LABEL
  if (f_register_operand (x3, XFmode))
    {
      operands[1] = x3;
      goto L3892;
    }
  goto ret0;

 L3892: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 303;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_10 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L25;
    case MINUS:
      goto L233;
    case MULT:
      goto L467;
    case AND:
      goto L595;
    case IOR:
      goto L766;
    case XOR:
      goto L829;
    case NEG:
      goto L1088;
    case NOT:
      goto L1141;
    case ZERO_EXTEND:
      goto L1183;
    case SIGN_EXTEND:
      goto L1193;
    default:
     break;
   }
  goto ret0;

 L25: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9787;
  goto ret0;

 L9787: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L41;
    case ZERO_EXTEND:
      goto L57;
    case MULT:
      goto L458;
    case SUBREG:
    case REG:
      goto L9786;
    default:
      goto ret0;
   }
 L9786: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L26;
    }
  goto ret0;

 L41: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L42;
    }
  goto ret0;

 L42: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L43;
    }
  goto ret0;

 L43: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 2;
    }
  goto ret0;

 L57: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L58;
    }
  goto ret0;

 L58: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L59;
    }
  goto ret0;

 L59: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 3;
    }
  goto ret0;

 L458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9790;
  goto ret0;

 L9790: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L459;
    case ZERO_EXTEND:
      goto L485;
    default:
     break;
   }
  goto ret0;

 L459: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L460;
    }
  goto ret0;

 L460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L461;
  goto ret0;

 L461: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L462;
    }
  goto ret0;

 L462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L463;
    }
  goto ret0;

 L463: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 39;
    }
  goto ret0;

 L485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L486;
    }
  goto ret0;

 L486: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L487;
  goto ret0;

 L487: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L488;
    }
  goto ret0;

 L488: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L489;
    }
  goto ret0;

 L489: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 42;
    }
  goto ret0;

 L26: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9793;
  goto ret0;

 L9793: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L587;
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L27;
    }
  goto ret0;

 L587: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L588;
  goto ret0;

 L588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L589;
    }
  goto ret0;

 L589: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L590;
  goto ret0;

 L590: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[3] = x4;
      goto L591;
    }
  goto ret0;

 L591: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5e))
    {
      return 50;
    }
  goto ret0;

 L27: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 1;
    }
  goto ret0;

 L233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9795;
  goto ret0;

 L9795: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L295;
    case SIGN_EXTEND:
      goto L311;
    case SUBREG:
    case REG:
      goto L9794;
    default:
      goto ret0;
   }
 L9794: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L234;
    }
  goto ret0;

 L295: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9797;
  goto ret0;

 L9797: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L296;
    }
 L9798: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L329;
    }
  goto ret0;

 L296: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L297;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9798;

 L297: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 25;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9798;

 L329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L330;
  goto ret0;

 L330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L331;
    }
  goto ret0;

 L331: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 27;
    }
  goto ret0;

 L311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L312;
    }
  goto ret0;

 L312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L313;
    }
  goto ret0;

 L313: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 26;
    }
  goto ret0;

 L234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L9800;
  goto ret0;

 L9800: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L264;
    case SIGN_EXTEND:
      goto L280;
    case SUBREG:
    case REG:
      goto L9799;
    default:
      goto ret0;
   }
 L9799: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L235;
    }
  goto ret0;

 L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L265;
    }
  goto ret0;

 L265: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 23;
    }
  goto ret0;

 L280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L281;
    }
  goto ret0;

 L281: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 24;
    }
  goto ret0;

 L235: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 21;
    }
  goto ret0;

 L467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9802;
  goto ret0;

 L9802: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L468;
    case ZERO_EXTEND:
      goto L476;
    default:
     break;
   }
  goto ret0;

 L468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L469;
    }
  goto ret0;

 L469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L470;
  goto ret0;

 L470: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L471;
    }
  goto ret0;

 L471: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 40;
    }
  goto ret0;

 L476: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L477;
    }
  goto ret0;

 L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L478;
  goto ret0;

 L478: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L479;
    }
  goto ret0;

 L479: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_fast_multiply))
    {
      return 41;
    }
  goto ret0;

 L595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9805;
  goto ret0;

 L9805: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L602;
    case SIGN_EXTEND:
      goto L609;
    case NOT:
      goto L686;
    case SUBREG:
    case REG:
      goto L9804;
    default:
      goto ret0;
   }
 L9804: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L596;
    }
  goto ret0;

 L602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L603;
    }
  goto ret0;

 L603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L604;
    }
  goto ret0;

 L604: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 52;
    }
  goto ret0;

 L609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L610;
    }
  goto ret0;

 L610: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L611;
    }
  goto ret0;

 L611: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 53;
    }
  goto ret0;

 L686: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L9809;
  goto ret0;

 L9809: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L694;
    case SIGN_EXTEND:
      goto L702;
    case SUBREG:
    case REG:
      goto L9808;
    default:
      goto ret0;
   }
 L9808: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L687;
    }
  goto ret0;

 L694: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L695;
    }
  goto ret0;

 L695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L696;
    }
  goto ret0;

 L696: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 61;
    }
  goto ret0;

 L702: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L703;
    }
  goto ret0;

 L703: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L704;
    }
  goto ret0;

 L704: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 62;
    }
  goto ret0;

 L687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L688;
    }
  goto ret0;

 L688: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 60;
    }
  goto ret0;

 L596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L597;
    }
  goto ret0;

 L597: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && ! TARGET_IWMMXT))
    {
      return 51;
    }
  goto ret0;

 L766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9812;
  goto ret0;

 L9812: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L773;
    case SIGN_EXTEND:
      goto L780;
    case SUBREG:
    case REG:
      goto L9811;
    default:
      goto ret0;
   }
 L9811: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L767;
    }
  goto ret0;

 L773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L774;
    }
  goto ret0;

 L774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L775;
    }
  goto ret0;

 L775: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 69;
    }
  goto ret0;

 L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L781;
    }
  goto ret0;

 L781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L782;
    }
  goto ret0;

 L782: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 70;
    }
  goto ret0;

 L767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L768;
    }
  goto ret0;

 L768: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && ! TARGET_IWMMXT))
    {
      return 68;
    }
  goto ret0;

 L829: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L9815;
  goto ret0;

 L9815: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L836;
    case SIGN_EXTEND:
      goto L843;
    case SUBREG:
    case REG:
      goto L9814;
    default:
      goto ret0;
   }
 L9814: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L830;
    }
  goto ret0;

 L836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L837;
    }
  goto ret0;

 L837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L838;
    }
  goto ret0;

 L838: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 76;
    }
  goto ret0;

 L843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L844;
    }
  goto ret0;

 L844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L845;
    }
  goto ret0;

 L845: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 77;
    }
  goto ret0;

 L830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L831;
    }
  goto ret0;

 L831: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !TARGET_IWMMXT))
    {
      return 75;
    }
  goto ret0;

 L1088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1089;
    }
  goto ret0;

 L1089: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 99;
    }
  goto ret0;

 L1141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1142;
    }
  goto ret0;

 L1142: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 105;
    }
  goto ret0;

 L1183: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9817;
    case QImode:
      goto L9818;
    default:
      break;
    }
  goto ret0;

 L9817: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1184;
    }
  goto ret0;

 L1184: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 110;
    }
  goto ret0;

 L9818: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1189;
    }
  goto ret0;

 L1189: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 111;
    }
  goto ret0;

 L1193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1194;
    }
  goto ret0;

 L1194: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 112;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_11 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L360;
    case MULT:
      goto L367;
    case PLUS:
      goto L410;
    case TRUNCATE:
      goto L507;
    case AND:
      goto L615;
    case NE:
      goto L677;
    case IOR:
      goto L786;
    case XOR:
      goto L849;
    case SMAX:
      goto L898;
    case SMIN:
      goto L912;
    case UMAX:
      goto L926;
    case UMIN:
      goto L940;
    default:
     break;
   }
 L9843: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x1, SImode))
    {
      operands[4] = x1;
      goto L970;
    }
  goto ret0;

 L360: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L361;
    }
 L341: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L342;
    }
  goto L9843;

 L361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_comparison_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L362;
    }
  x2 = XEXP (x1, 0);
  goto L341;

 L362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L363;
    }
  x2 = XEXP (x1, 0);
  goto L341;

 L363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && (TARGET_ARM))
    {
      return 31;
    }
  x2 = XEXP (x1, 0);
  goto L341;

 L342: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L343;
    }
  goto L9843;

 L343: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 29;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9845;
  goto ret0;

 L9845: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L542;
    case ASHIFTRT:
      goto L550;
    case SUBREG:
    case REG:
      goto L9844;
    default:
      goto ret0;
   }
 L9844: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L368;
    }
  goto ret0;

 L542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L543;
    }
  goto ret0;

 L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9847;
  goto ret0;

 L9847: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L544;
    case ASHIFTRT:
      goto L561;
    default:
     break;
   }
  goto ret0;

 L544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L545;
    }
  goto ret0;

 L545: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5e))
    {
      return 45;
    }
  goto ret0;

 L561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L562;
    }
  goto ret0;

 L562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_ARM && arm_arch5e))
    {
      return 47;
    }
  goto ret0;

 L550: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L551;
    }
  goto ret0;

 L551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L)
    goto L552;
  goto ret0;

 L552: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9849;
  goto ret0;

 L9849: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SIGN_EXTEND:
      goto L553;
    case ASHIFTRT:
      goto L570;
    default:
     break;
   }
  goto ret0;

 L553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, HImode))
    {
      operands[2] = x3;
      goto L554;
    }
  goto ret0;

 L554: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5e))
    {
      return 46;
    }
  goto ret0;

 L570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L571;
    }
  goto ret0;

 L571: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_ARM && arm_arch5e))
    {
      return 48;
    }
  goto ret0;

 L368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L369;
    }
  goto ret0;

 L369: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 32;
    }
  goto ret0;

 L410: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9851;
  goto L9843;

 L9851: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MULT)
    goto L411;
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L576;
    }
  goto L9843;

 L411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L412;
    }
  goto L9843;

 L412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L413;
    }
  goto L9843;

 L413: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L414;
    }
  goto L9843;

 L414: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 36;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L576: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MULT)
    goto L577;
  goto L9843;

 L577: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L578;
  goto L9843;

 L578: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L579;
    }
  goto L9843;

 L579: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L580;
  goto L9843;

 L580: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[3] = x4;
      goto L581;
    }
  goto L9843;

 L581: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5e))
    {
      return 49;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L507: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L508;
  goto ret0;

 L508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L509;
  goto ret0;

 L509: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L9853;
  goto ret0;

 L9853: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L510;
    case ZERO_EXTEND:
      goto L534;
    default:
     break;
   }
  goto ret0;

 L510: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L511;
    }
  goto ret0;

 L511: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L512;
  goto ret0;

 L512: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L513;
    }
  goto ret0;

 L513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32L
      && (TARGET_ARM && arm_fast_multiply)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 43;
    }
  goto ret0;

 L534: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L535;
    }
  goto ret0;

 L535: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L536;
  goto ret0;

 L536: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L537;
    }
  goto ret0;

 L537: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 32L
      && (TARGET_ARM && arm_fast_multiply)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 44;
    }
  goto ret0;

 L615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9856;
  goto L9843;

 L9856: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L709;
    case IOR:
      goto L882;
    case SUBREG:
    case REG:
      goto L9855;
    default:
      goto L9843;
   }
 L9855: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L616;
    }
  goto L9843;

 L709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9858;
  goto L9843;

 L9858: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L710;
    }
  if (shift_operator (x3, SImode))
    {
      operands[4] = x3;
      goto L724;
    }
  goto L9843;

 L710: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L711;
    }
  goto L9843;

 L711: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 63;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L725;
    }
  goto L9843;

 L725: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L726;
    }
  goto L9843;

 L726: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L727;
    }
  goto L9843;

 L727: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 65;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L883;
    }
  goto L9843;

 L883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L884;
    }
  goto L9843;

 L884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L885;
  goto L9843;

 L885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L886;
    }
  goto L9843;

 L886: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 82;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L617;
    }
  goto L9843;

 L617: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 54;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == ZERO_EXTRACT)
    goto L678;
  goto ret0;

 L678: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L679;
    }
  goto ret0;

 L679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L680;
    }
  goto ret0;

 L680: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L681;
    }
  goto ret0;

 L681: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 59;
    }
  goto ret0;

 L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L787;
    }
  goto L9843;

 L787: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L788;
    }
  goto L9843;

 L788: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 71;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L850;
    }
  goto L9843;

 L850: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L851;
    }
  goto L9843;

 L851: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 78;
    }
  x1 = XEXP (x0, 1);
  goto L9843;

 L898: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L899;
    }
  goto ret0;

 L899: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L900;
    }
  goto ret0;

 L900: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 83;
    }
  goto ret0;

 L912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L913;
    }
  goto ret0;

 L913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L914;
    }
  goto ret0;

 L914: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 84;
    }
  goto ret0;

 L926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L927;
    }
  goto ret0;

 L927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L928;
    }
  goto ret0;

 L928: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 85;
    }
  goto ret0;

 L940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L941;
    }
  goto ret0;

 L941: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L942;
    }
  goto ret0;

 L942: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 86;
    }
  goto ret0;

 L970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (minmax_operator (x2, SImode))
    {
      operands[5] = x2;
      goto L971;
    }
  goto ret0;

 L971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L972;
    }
  goto ret0;

 L972: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L973;
    }
  goto ret0;

 L973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L974;
    }
  goto ret0;

 L974: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (GET_CODE (operands[1]) != REG
       || (REGNO(operands[1]) != FRAME_POINTER_REGNUM
           && REGNO(operands[1]) != ARG_POINTER_REGNUM)))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 88;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_12 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L62;
    }
 L9726: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L68;
    }
 L9731: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L340;
    }
 L9732: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L372;
    }
 L9733: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L953;
    }
 L9734: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1001;
    }
 L9735: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1109;
    }
 L9736: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1202;
    }
 L9739: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1250;
    }
 L9742: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L1263;
    }
  goto ret0;

 L62: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == PLUS)
    goto L63;
  x1 = XEXP (x0, 0);
  goto L9726;

 L63: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9822;
  x1 = XEXP (x0, 0);
  goto L9726;

 L9822: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case LTU:
      goto L167;
    case PLUS:
      goto L189;
    case SUBREG:
    case REG:
      goto L9821;
    default:
      goto L9824;
   }
 L9821: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L64;
    }
 L9824: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L218;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_Cmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 24)
    goto L168;
  goto L9824;

 L168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L169;
  goto L9824;

 L169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L170;
  x2 = XEXP (x1, 0);
  goto L9824;

 L170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9825;
  x2 = XEXP (x1, 0);
  goto L9824;

 L9825: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L171;
    }
  if (shift_operator (x3, SImode))
    {
      operands[2] = x3;
      goto L181;
    }
  x2 = XEXP (x1, 0);
  goto L9824;

 L171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L172;
    }
  x2 = XEXP (x1, 0);
  goto L9824;

 L172: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 15;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9824;

 L181: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L182;
    }
  x2 = XEXP (x1, 0);
  goto L9824;

 L182: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L183;
    }
  x2 = XEXP (x1, 0);
  goto L9824;

 L183: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L184;
    }
  x2 = XEXP (x1, 0);
  goto L9824;

 L184: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 16;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9824;

 L189: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9828;
  x1 = XEXP (x0, 0);
  goto L9726;

 L9828: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == LTU)
    goto L199;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L190;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L199: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_Cmode
      && GET_CODE (x4) == REG
      && XINT (x4, 0) == 24)
    goto L200;
  x1 = XEXP (x0, 0);
  goto L9726;

 L200: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L201;
  x1 = XEXP (x0, 0);
  goto L9726;

 L201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L202;
    }
 L211: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L212;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L202: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L203;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L211;

 L203: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 18;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L211;

 L212: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L213;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L213: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 19;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L190: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L191;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == LTU)
    goto L192;
  x1 = XEXP (x0, 0);
  goto L9726;

 L192: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_Cmode
      && GET_CODE (x3) == REG
      && XINT (x3, 0) == 24)
    goto L193;
  x1 = XEXP (x0, 0);
  goto L9726;

 L193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && (TARGET_ARM))
    {
      return 17;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L64: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L65;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L65: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 4;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, CCmode))
    {
      operands[3] = x3;
      goto L219;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L220;
  x1 = XEXP (x0, 0);
  goto L9726;

 L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L221;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L221: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 20;
    }
  x1 = XEXP (x0, 0);
  goto L9726;

 L68: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9829;
  x1 = XEXP (x0, 0);
  goto L9731;

 L9829: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L69;
    case MINUS:
      goto L335;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9731;

 L69: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L70;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L70: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L71;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L71: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 5;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L336;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L337;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L337: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 28;
    }
  x1 = XEXP (x0, 0);
  goto L9731;

 L340: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9831;
  x1 = XEXP (x0, 0);
  goto L9732;

 L9831: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9732;

 L372: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9860;
  x1 = XEXP (x0, 0);
  goto L9733;

 L9860: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MULT:
      goto L373;
    case AND:
      goto L621;
    case IOR:
      goto L792;
    case XOR:
      goto L855;
    case ASHIFT:
      goto L978;
    case ASHIFTRT:
      goto L984;
    case LSHIFTRT:
      goto L990;
    case ROTATERT:
      goto L996;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9733;

 L373: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L374;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L375;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L375: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 33;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9869;
  x1 = XEXP (x0, 0);
  goto L9733;

 L9869: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L716;
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L622;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L716: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L717;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L718;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L718: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 64;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L623;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L623: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 55;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L792: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L793;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L793: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L794;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L794: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 72;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L856;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L856: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L857;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L857: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 79;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L979;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L980;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L980: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 89;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L984: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L985;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L985: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L986;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L986: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 90;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L991;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L991: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L992;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L992: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 91;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L997;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L997: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L998;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L998: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 92;
    }
  x1 = XEXP (x0, 0);
  goto L9733;

 L953: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (minmax_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L954;
    }
  x1 = XEXP (x0, 0);
  goto L9734;

 L954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L955;
    }
  x1 = XEXP (x0, 0);
  goto L9734;

 L955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L956;
    }
  x1 = XEXP (x0, 0);
  goto L9734;

 L956: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 87;
    }
  x1 = XEXP (x0, 0);
  goto L9734;

 L1001: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9871;
  x1 = XEXP (x0, 0);
  goto L9735;

 L9871: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NOT:
      goto L1039;
    case NEG:
      goto L1105;
    case ABS:
      goto L1122;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
    case MULT:
      goto L9870;
    default:
      x1 = XEXP (x0, 0);
      goto L9735;
   }
 L9870: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x1, SImode))
    {
      operands[3] = x1;
      goto L1002;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1039: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9874;
  x1 = XEXP (x0, 0);
  goto L9735;

 L9874: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L1040;
    }
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1147;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1041;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1042;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1042: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 96;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1147: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 106;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9877;
  x1 = XEXP (x0, 0);
  goto L9735;

 L9877: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == ABS)
    goto L1136;
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1106;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1137;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1137: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 104;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1106: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 101;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1123;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1123: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 103;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1002: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1003;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L1004;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1004: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 93;
    }
  x1 = XEXP (x0, 0);
  goto L9735;

 L1109: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9878;
  x1 = XEXP (x0, 0);
  goto L9736;

 L9878: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L1110;
    case NOT:
      goto L1151;
    case ZERO_EXTEND:
      goto L1198;
    case SIGN_EXTEND:
      goto L1231;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1111;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1111: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 102;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1152;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1152: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 107;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L9882;
    case QImode:
      goto L9883;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L9882: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1199;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1199: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 113;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L9883: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1209;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1209: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 115;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1231: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1232;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1232: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 118;
    }
  x1 = XEXP (x0, 0);
  goto L9736;

 L1202: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9884;
  x1 = XEXP (x0, 0);
  goto L9739;

 L9884: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L1203;
    case SIGN_EXTEND:
      goto L1236;
    case UNSPEC:
      goto L9889;
    case ROTATE:
      goto L1329;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L9891;
    case QImode:
      goto L9892;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9891: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1204;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1204: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4))
    {
      return 114;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9892: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1214;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1214: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 116;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1236: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case HImode:
      goto L9893;
    case QImode:
      goto L9894;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9893: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L1237;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1237: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4))
    {
      return 119;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9894: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1247;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1247: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4))
    {
      return 121;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9889: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 1:
      goto L9895;
    case 2:
      goto L9896;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9895: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 3)
    goto L1272;
  x1 = XEXP (x0, 0);
  goto L9739;

 L1272: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L1273;

 L1273: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && flag_pic))
    {
      return 127;
    }
 L1278: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB && flag_pic))
    {
      return 128;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9896: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 3)
    goto L1282;
  x1 = XEXP (x0, 0);
  goto L9739;

 L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  operands[1] = x2;
  goto L1283;

 L1283: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (s_register_operand (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L1284;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_EITHER && flag_pic && operands[2] == pic_offset_table_rtx))
    {
      return 129;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9897;
  x1 = XEXP (x0, 0);
  goto L9739;

 L9897: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MEM:
      goto L9899;
    case SUBREG:
      goto L9900;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9899: ATTRIBUTE_UNUSED_LABEL
  if (offsettable_memory_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L1330;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 16L
      && (TARGET_ARM && (!TARGET_MMU_TRAPS)))
    {
      return 134;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L9900: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L1347;
  x1 = XEXP (x0, 0);
  goto L9739;

 L1347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L1348;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 16L
      && (TARGET_ARM
   && BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS))
    {
      return 138;
    }
  x1 = XEXP (x0, 0);
  goto L9739;

 L1250: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L1251;
  x1 = XEXP (x0, 0);
  goto L9742;

 L1251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1252;
    }
  x1 = XEXP (x0, 0);
  goto L9742;

 L1252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 122;
    }
  x1 = XEXP (x0, 0);
  goto L9742;

 L1263: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L1264;
    }
  goto ret0;

 L1264: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && ! TARGET_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 125;
    }
 L1268: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode))))
    {
      return 126;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_13 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    case UNEQ:
      goto L2279;
    case LTGT:
      goto L2288;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      goto L1757;
    default:
      goto L1779;
   }
 L1757: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1758;
    }
 L1779: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1780;
    }
 L1827: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L1828;
    }
 L1839: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L1840;
    }
 L1902: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L1903;
    }
 L2167: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2168;
    }
 L2296: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L2297;
    }
  goto ret0;

 L2279: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2280;
    }
  goto L2167;

 L2280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2281;
  goto L2167;

 L2281: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2282;
    case PC:
      goto L2309;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2282: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2283;

 L2283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 187;
    }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2309: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2310;
  x2 = XEXP (x1, 0);
  goto L2167;

 L2310: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2311;

 L2311: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 190;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2167;

 L2288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2289;
    }
  goto L2167;

 L2289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2290;
  goto L2167;

 L2290: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2291;
    case PC:
      goto L2319;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2292;

 L2292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 188;
    }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2320;
  x2 = XEXP (x1, 0);
  goto L2167;

 L2320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2321;

 L2321: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 191;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2167;

 L1758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9925;
 L2592: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L2593;
    }
  goto L1779;

 L9925: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MINUS)
    goto L2217;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1803;
    }
  goto L2592;

 L2217: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2218;
    }
  goto L2592;

 L2218: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (nonmemory_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2219;
    }
  goto L2592;

 L2219: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2220;
  x3 = XEXP (x2, 0);
  goto L2592;

 L2220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2221;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L2221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L2222;

 L2222: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB
   && (GET_CODE (operands[0]) == EQ
       || GET_CODE (operands[0]) == NE
       || GET_CODE (operands[0]) == GE
       || GET_CODE (operands[0]) == LT)))
    {
      return 178;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L1803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NEG)
    goto L1804;
  if (thumb_cmp_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1760;
    }
  x3 = XEXP (x2, 0);
  goto L2592;

 L1804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1805;
    }
  x3 = XEXP (x2, 0);
  goto L2592;

 L1805: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1806;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L1806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1807;

 L1807: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB))
    {
      return 164;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L1760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1761;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L1761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1762;

 L1762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB))
    {
      return 161;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2592;

 L2593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2594;
  goto L1779;

 L2594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case RETURN:
      goto L2595;
    case PC:
      goto L2603;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L1779;

 L2595: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_ARM && USE_RETURN_INSN (TRUE)))
    {
      return 213;
    }
  x2 = XEXP (x1, 0);
  goto L1779;

 L2603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == RETURN
      && (TARGET_ARM && USE_RETURN_INSN (TRUE)))
    {
      return 214;
    }
  x2 = XEXP (x1, 0);
  goto L1779;

 L1780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1781;
    }
  goto L1827;

 L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (thumb_cmpneg_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1782;
    }
  goto L1827;

 L1782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1783;
  x2 = XEXP (x1, 0);
  goto L1827;

 L1783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1784;

 L1784: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 162;
    }
  x2 = XEXP (x1, 0);
  goto L1827;

 L1828: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L1829;
  goto L1839;

 L1829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1830;
    }
  goto L1839;

 L1830: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L1831;
  goto L1839;

 L1831: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1832;
    }
  goto L1839;

 L1832: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1833;
  goto L1839;

 L1833: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1834;
  x2 = XEXP (x1, 0);
  goto L1839;

 L1834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1835;

 L1835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 165;
    }
  x2 = XEXP (x1, 0);
  goto L1839;

 L1840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == AND)
    goto L1841;
  goto L1902;

 L1841: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L1842;
    }
  goto L1902;

 L1842: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1843;
    }
  goto L1902;

 L1843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1844;
  goto L1902;

 L1844: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1845;
  x2 = XEXP (x1, 0);
  goto L1902;

 L1845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  goto L1846;

 L1846: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB))
    {
      return 166;
    }
  x2 = XEXP (x1, 0);
  goto L1902;

 L1903: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9926;
  goto L2167;

 L9926: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L1904;
    case XOR:
      goto L1967;
    case AND:
      goto L2031;
    default:
     break;
   }
  goto L2167;

 L1904: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1905;
    }
  goto L2167;

 L1905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1906;
    }
  goto L2167;

 L1906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1907;
  goto L2167;

 L1907: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1908;
  x2 = XEXP (x1, 0);
  goto L2167;

 L1908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1909;

 L1909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 168;
    }
  x2 = XEXP (x1, 0);
  goto L2167;

 L1967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1968;
    }
  goto L2167;

 L1968: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1969;
    }
  goto L2167;

 L1969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L1970;
  goto L2167;

 L1970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L1971;
  x2 = XEXP (x1, 0);
  goto L2167;

 L1971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L1972;

 L1972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 170;
    }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2031: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == NOT)
    goto L2032;
  goto L2167;

 L2032: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L2033;
    }
  goto L2167;

 L2033: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2034;
    }
  goto L2167;

 L2034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2035;
  goto L2167;

 L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2036;
  x2 = XEXP (x1, 0);
  goto L2167;

 L2036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  goto L2037;

 L2037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 172;
    }
  x2 = XEXP (x1, 0);
  goto L2167;

 L2168: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L2169;
  goto L2296;

 L2169: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2170;
    }
  goto L2296;

 L2170: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2171;
    }
  goto L2296;

 L2171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2172;
  goto L2296;

 L2172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2173;
  x2 = XEXP (x1, 0);
  goto L2296;

 L2173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[4] = x3;
  goto L2174;

 L2174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_THUMB
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 176;
    }
  x2 = XEXP (x1, 0);
  goto L2296;

 L2297: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2298;
    }
  goto ret0;

 L2298: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2299;
  goto ret0;

 L2299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      goto L2300;
    case PC:
      goto L2329;
    default:
     break;
   }
  goto ret0;

 L2300: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2301;

 L2301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC
      && (TARGET_ARM))
    {
      return 189;
    }
  goto ret0;

 L2329: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF)
    goto L2330;
  goto ret0;

 L2330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L2331;

 L2331: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 192;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_14 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2353;
    }
 L2773: ATTRIBUTE_UNUSED_LABEL
  if (equality_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2774;
    }
 L3001: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3002;
    }
 L3023: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[6] = x2;
      goto L3024;
    }
 L3034: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L3035;
    }
 L3095: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[9] = x2;
      goto L3096;
    }
 L3108: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3204;
    }
 L3134: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[6] = x2;
      goto L3135;
    }
 L3145: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L3146;
    }
 L3279: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3280;
    }
 L3340: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[7] = x2;
      goto L3341;
    }
 L3353: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L3455;
    }
 L3464: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L3465;
    }
  goto ret0;

 L2353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2354;
    }
  goto L2773;

 L2354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2355;
  goto L2773;

 L2355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2356;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

 L2356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2357;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

 L2357: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 196;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L2773;

 L2774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2775;
    }
  goto L3001;

 L2775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (cc_register (x4, VOIDmode))
    {
      operands[5] = x4;
      goto L2776;
    }
  goto L3001;

 L2776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L2777;
  goto L3001;

 L2777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2778;
  goto L3001;

 L2778: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2779;
    }
  x2 = XEXP (x1, 0);
  goto L3001;

 L2779: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2780;
    }
  x2 = XEXP (x1, 0);
  goto L3001;

 L2780: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 231;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3001;

 L3002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3003;
    }
  goto L3023;

 L3003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3004;
    }
  goto L3023;

 L3004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3005;
    }
  x2 = XEXP (x1, 0);
  goto L3023;

 L3005: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3006;
    }
  x2 = XEXP (x1, 0);
  goto L3023;

 L3006: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 244;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3023;

 L3024: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3025;
    }
  goto L3034;

 L3025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3026;
    }
  goto L3034;

 L3026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3027;
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3062;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3027: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3028;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3029;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3029: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3030;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3030: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 245;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3034;

 L3062: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3063;
  x2 = XEXP (x1, 0);
  goto L3034;

 L3063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3064;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3065;
    }
  x2 = XEXP (x1, 0);
  goto L3034;

 L3065: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 247;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3034;

 L3035: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[5] = x3;
      goto L3036;
    }
  goto L3095;

 L3036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3037;
  goto L3095;

 L3037: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3038;
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3073;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3039;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3039: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3040;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3041;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3041: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 246;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3095;

 L3073: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L3074;
  x2 = XEXP (x1, 0);
  goto L3095;

 L3074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3075;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3076;
    }
  x2 = XEXP (x1, 0);
  goto L3095;

 L3076: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 248;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3095;

 L3096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3097;
    }
  goto L3108;

 L3097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L3098;
    }
  goto L3108;

 L3098: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      operands[8] = x2;
      goto L3099;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3099: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3100;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3101;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3102;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3103;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3104;
    }
  x2 = XEXP (x1, 0);
  goto L3108;

 L3104: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 249;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3108;

 L3204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3205;
    }
 L3109: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[8] = x3;
      goto L3110;
    }
  goto L3134;

 L3205: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3238;
    }
  x3 = XEXP (x2, 0);
  goto L3109;

 L3238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3239;
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3207;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3239: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3240;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3241;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3241: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 257;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3207: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3208;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3208: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3209;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3209: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 255;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3109;

 L3110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3111;
  goto L3134;

 L3111: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L3112;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3112: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3113;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3114;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3115;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3115: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3116;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3117;
    }
  x2 = XEXP (x1, 0);
  goto L3134;

 L3117: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 250;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3134;

 L3135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9943;
  goto L3145;

 L9943: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3136;
    }
 L9944: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3171;
    }
  goto L3145;

 L3136: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3137;
    }
  x3 = XEXP (x2, 0);
  goto L9944;

 L3137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3138;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9944;

 L3138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3139;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9944;

 L3139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3140;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9944;

 L3140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3141;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9944;

 L3141: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 251;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9944;

 L3171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3271;
    }
  goto L3145;

 L3271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9946;
 L3172: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3173;
    }
 L3306: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3307;
    }
  x2 = XEXP (x1, 0);
  goto L3145;

 L9946: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L3384;
  if (shift_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3272;
    }
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3422;
    }
  goto L3172;

 L3384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3385;
    }
  goto L3172;

 L3385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3386;
    }
  x2 = XEXP (x1, 1);
  goto L3172;

 L3386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3387;
    }
  x2 = XEXP (x1, 1);
  goto L3172;

 L3387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3388;
    }
  x2 = XEXP (x1, 1);
  goto L3172;

 L3388: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 265;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3172;

 L3272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3273;
    }
  goto L3172;

 L3273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3274;
    }
  goto L3172;

 L3274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3275;
    }
  x2 = XEXP (x1, 1);
  goto L3172;

 L3275: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 259;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3172;

 L3422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3423;
    }
  goto L3172;

 L3423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3424;
    }
  goto L3172;

 L3424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3425;
  x2 = XEXP (x1, 1);
  goto L3172;

 L3425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3426;
    }
  x2 = XEXP (x1, 1);
  goto L3172;

 L3426: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 267;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3172;

 L3173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3174;
    }
  x2 = XEXP (x1, 1);
  goto L3306;

 L3174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3175;
    }
  x2 = XEXP (x1, 1);
  goto L3306;

 L3175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3176;
    }
  x2 = XEXP (x1, 1);
  goto L3306;

 L3176: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 253;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3306;

 L3307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3308;
    }
  x2 = XEXP (x1, 0);
  goto L3145;

 L3308: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3309;
    }
  x2 = XEXP (x1, 0);
  goto L3145;

 L3309: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3310;
    }
  x2 = XEXP (x1, 0);
  goto L3145;

 L3310: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 261;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3145;

 L3146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG)
    goto L9948;
  goto L3279;

 L9948: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[6] = x3;
      goto L3147;
    }
 L9949: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3215;
    }
  goto L3279;

 L3147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3148;
  x3 = XEXP (x2, 0);
  goto L9949;

 L3148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      operands[5] = x2;
      goto L3149;
    }
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3184;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3150;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3151;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3152;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3152: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 252;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[5] = x2;
      goto L3185;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3186;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3187;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3187: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 254;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9949;

 L3215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3248;
  goto L3279;

 L3248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3249;
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3217;
    }
  x2 = XEXP (x1, 0);
  goto L3279;

 L3249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3250;
    }
  x2 = XEXP (x1, 0);
  goto L3279;

 L3250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3251;
    }
  x2 = XEXP (x1, 0);
  goto L3279;

 L3251: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 258;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3279;

 L3217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3218;
  x2 = XEXP (x1, 0);
  goto L3279;

 L3218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3219;
    }
  x2 = XEXP (x1, 0);
  goto L3279;

 L3219: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 256;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3279;

 L3280: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[6] = x3;
      goto L3281;
    }
  goto L3340;

 L3281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3282;
  goto L3340;

 L3282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3283;
    }
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3318;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3284;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3285;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3286;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3286: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 260;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3340;

 L3318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L3319;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3319: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3320;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3321;
    }
  x2 = XEXP (x1, 0);
  goto L3340;

 L3321: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 262;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3340;

 L3341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L3342;
    }
  goto L3353;

 L3342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L3343;
    }
  goto L3353;

 L3343: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      operands[8] = x2;
      goto L3344;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3344: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3345;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3346;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      operands[9] = x2;
      goto L3347;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3348;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3349;
    }
  x2 = XEXP (x1, 0);
  goto L3353;

 L3349: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 263;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3353;

 L3455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3456;
    }
 L3354: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG)
    goto L9950;
  goto L3464;

 L3456: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3457;
    }
  x3 = XEXP (x2, 0);
  goto L3354;

 L3457: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L3458;
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3490;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3458: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3459;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3459: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3460;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3460: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 269;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3490: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L3491;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3491: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3492;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L3492: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 271;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L3354;

 L9950: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[8] = x3;
      goto L3355;
    }
 L9951: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L3394;
    }
  goto L3464;

 L3355: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3356;
  x3 = XEXP (x2, 0);
  goto L9951;

 L3356: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L3357;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3357: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3358;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3359;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3359: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      operands[7] = x2;
      goto L3360;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3360: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3361;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L3362;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3362: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 264;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9951;

 L3394: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3395;
  goto L3464;

 L3395: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9952;
  x2 = XEXP (x1, 0);
  goto L3464;

 L9952: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L3396;
  if (shiftable_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L3434;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3396: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3397;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L3398;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3399;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3400;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3400: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 266;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3464;

 L3434: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3435;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3435: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L3436;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3436: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3437;
  x2 = XEXP (x1, 0);
  goto L3464;

 L3437: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3438;
    }
  x2 = XEXP (x1, 0);
  goto L3464;

 L3438: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 268;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L3464;

 L3465: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L3466;
    }
  goto ret0;

 L3466: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L3467;
  goto ret0;

 L3467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L3468;
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3500;
    }
 L3837: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3838;
    }
  goto ret0;

 L3468: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3469;
    }
  goto ret0;

 L3469: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3470;
    }
  goto ret0;

 L3470: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 270;
    }
  goto ret0;

 L3500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NEG)
    goto L3501;
  x2 = XEXP (x1, 1);
  goto L3837;

 L3501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3502;
    }
  x2 = XEXP (x1, 1);
  goto L3837;

 L3502: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 272;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L3837;

 L3838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == NOT)
    goto L3839;
  goto ret0;

 L3839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3840;
    }
  goto ret0;

 L3840: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 298;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_15 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case NEG:
      goto L2340;
    case NOT:
      goto L2346;
    case IF_THEN_ELSE:
      goto L2352;
    case MINUS:
      goto L2696;
    case AND:
      goto L2743;
    case IOR:
      goto L2751;
    case SIGN_EXTRACT:
      goto L3853;
    case CLZ:
      goto L3920;
    case FIX:
      goto L4160;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNLT:
    case UNLE:
    case UNGE:
    case UNGT:
      goto L9929;
    default:
      goto L9933;
   }
 L9929: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, SImode))
    {
      operands[1] = x1;
      goto L2335;
    }
 L9933: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x1, SImode))
    {
      operands[1] = x1;
      goto L2649;
    }
 L9937: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x1, SImode))
    {
      operands[5] = x1;
      goto L2794;
    }
  goto ret0;

 L2340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_comparison_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L2341;
    }
 L2983: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2984;
    }
  goto ret0;

 L2341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2342;
    }
  goto L2983;

 L2342: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && (TARGET_ARM))
    {
      return 194;
    }
  goto L2983;

 L2984: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2985;
    }
  goto ret0;

 L2985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2986;
    }
  goto ret0;

 L2986: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 243;
    }
  goto ret0;

 L2346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9942;
  goto ret0;

 L9942: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTRACT)
    goto L3871;
  if (arm_comparison_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L2347;
    }
  goto ret0;

 L3871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L3872;
    }
  goto ret0;

 L3872: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L)
    goto L3873;
  goto ret0;

 L3873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L3874;
    }
  goto ret0;

 L3874: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 300;
    }
  goto ret0;

 L2347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L2348;
    }
  goto ret0;

 L2348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && (TARGET_ARM))
    {
      return 195;
    }
  goto ret0;

 L2352: ATTRIBUTE_UNUSED_LABEL
  return recog_14 (x0, insn, pnum_clobbers);

 L2696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2697;
    }
  goto L9933;

 L2697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9954;
  goto L9933;

 L9954: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L2698;
    }
  if (arm_comparison_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2814;
    }
  goto L9933;

 L2698: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2699;
    }
  goto L9933;

 L2699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2700;
    }
  goto L9933;

 L2700: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 225;
    }
  x1 = XEXP (x0, 1);
  goto L9933;

 L2814: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2815;
    }
  goto L9933;

 L2815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2816;
    }
  goto L9933;

 L2816: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 233;
    }
  x1 = XEXP (x0, 1);
  goto L9933;

 L2743: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9956;
  goto L9933;

 L9956: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L2744;
    }
 L9957: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2922;
    }
  goto L9933;

 L2744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2745;
    }
  goto L9957;

 L2745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2746;
  goto L9957;

 L2746: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2747;
    }
  x2 = XEXP (x1, 0);
  goto L9957;

 L2747: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 228;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9957;

 L2922: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2923;
    }
  goto L9933;

 L2923: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2924;
    }
  goto L9933;

 L2924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_comparison_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L2925;
    }
  goto L9933;

 L2925: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2926;
    }
  goto L9933;

 L2926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L2927;
    }
  goto L9933;

 L2927: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 240;
    }
 L2970: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 242;
    }
  x1 = XEXP (x0, 1);
  goto L9933;

 L2751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9958;
  goto L9933;

 L9958: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[2] = x2;
      goto L2752;
    }
 L9959: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2879;
    }
  goto L9933;

 L2752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L2753;
    }
  goto L9959;

 L2753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2754;
  goto L9959;

 L2754: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2755;
    }
  x2 = XEXP (x1, 0);
  goto L9959;

 L2755: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 229;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L9959;

 L2879: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2880;
    }
  goto L9933;

 L2880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2881;
    }
  goto L9933;

 L2881: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_comparison_operator (x2, SImode))
    {
      operands[6] = x2;
      goto L2882;
    }
  goto L9933;

 L2882: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2883;
    }
  goto L9933;

 L2883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L2884;
    }
  goto L9933;

 L2884: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 238;
    }
  x1 = XEXP (x0, 1);
  goto L9933;

 L3853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3854;
    }
  goto ret0;

 L3854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L)
    goto L3855;
  goto ret0;

 L3855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3856;
    }
  goto ret0;

 L3856: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 299;
    }
  goto ret0;

 L3920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L3921;
    }
  goto ret0;

 L3921: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5))
    {
      return 312;
    }
  goto ret0;

 L4160: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9960;
    case DFmode:
      goto L9961;
    default:
      break;
    }
  goto ret0;

 L9960: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L4161;
  goto ret0;

 L4161: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SFmode)
    goto L9962;
  goto ret0;

 L9962: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4162;
    }
 L9963: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x3, SFmode))
    {
      operands[1] = x3;
      goto L4420;
    }
  goto ret0;

 L4162: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 351;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9963;

 L4420: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 390;
    }
  goto ret0;

 L9961: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FIX)
    goto L4167;
  goto ret0;

 L4167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L9964;
  goto ret0;

 L9964: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L4168;
    }
 L9965: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x3, DFmode))
    {
      operands[1] = x3;
      goto L4435;
    }
  goto ret0;

 L4168: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 352;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L9965;

 L4435: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 391;
    }
  goto ret0;

 L2335: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L2336;
    }
 L2767: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2768;
    }
  goto ret0;

 L2336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 193;
    }
  x2 = XEXP (x1, 0);
  goto L2767;

 L2768: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_add_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L2769;
    }
  goto ret0;

 L2769: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 230;
    }
  goto ret0;

 L2649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9966;
  goto L9937;

 L9966: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2650;
    }
  if (memory_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L3516;
    }
  goto L9937;

 L2650: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L2651;
    }
  goto L9937;

 L2651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L2652;
    }
  goto L9937;

 L2652: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L2653;
    }
  goto L9937;

 L2653: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 222;
    }
  x1 = XEXP (x0, 1);
  goto L9937;

 L3516: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (memory_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L3517;
    }
  goto L9937;

 L3517: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 273;
    }
  x1 = XEXP (x0, 1);
  goto L9937;

 L2794: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_comparison_operator (x2, SImode))
    {
      operands[4] = x2;
      goto L2795;
    }
  goto ret0;

 L2795: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2796;
    }
  goto ret0;

 L2796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L2797;
    }
  goto ret0;

 L2797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2798;
    }
  goto ret0;

 L2798: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 232;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_16 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L3938;
    case MINUS:
      goto L3972;
    case MULT:
      goto L4006;
    case DIV:
      goto L4040;
    case MOD:
      goto L4074;
    case NEG:
      goto L4107;
    case ABS:
      goto L4123;
    case SQRT:
      goto L4139;
    case FLOAT:
      goto L4155;
    case FLOAT_EXTEND:
      goto L4177;
    case IF_THEN_ELSE:
      goto L4255;
    default:
     break;
   }
  goto ret0;

 L3938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10020;
  goto ret0;

 L10020: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3945;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3939;
    }
  goto ret0;

 L3945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3946;
    }
  goto ret0;

 L3946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10022;
  goto ret0;

 L10022: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3961;
  if (fpa_add_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3947;
    }
  goto ret0;

 L3961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L3962;
    }
  goto ret0;

 L3962: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 319;
    }
  goto ret0;

 L3947: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 317;
    }
  goto ret0;

 L3939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10024;
  goto ret0;

 L10024: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3953;
  if (fpa_add_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3940;
    }
  goto ret0;

 L3953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L3954;
    }
  goto ret0;

 L3954: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 318;
    }
  goto ret0;

 L3940: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 316;
    }
  goto ret0;

 L3972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10026;
  goto ret0;

 L10026: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3979;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L3973;
    }
  goto ret0;

 L3979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L3980;
    }
  goto ret0;

 L3980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10028;
  goto ret0;

 L10028: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3995;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3981;
    }
  goto ret0;

 L3995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L3996;
    }
  goto ret0;

 L3996: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 324;
    }
  goto ret0;

 L3981: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 322;
    }
  goto ret0;

 L3973: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10030;
  goto ret0;

 L10030: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L3987;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L3974;
    }
  goto ret0;

 L3987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L3988;
    }
  goto ret0;

 L3988: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 323;
    }
  goto ret0;

 L3974: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 321;
    }
  goto ret0;

 L4006: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10032;
  goto ret0;

 L10032: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4013;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4007;
    }
  goto ret0;

 L4013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4014;
    }
  goto ret0;

 L4014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10034;
  goto ret0;

 L10034: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4029;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4015;
    }
  goto ret0;

 L4029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4030;
    }
  goto ret0;

 L4030: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 329;
    }
  goto ret0;

 L4015: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 327;
    }
  goto ret0;

 L4007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10036;
  goto ret0;

 L10036: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4021;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4008;
    }
  goto ret0;

 L4021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4022;
    }
  goto ret0;

 L4022: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 328;
    }
  goto ret0;

 L4008: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 326;
    }
  goto ret0;

 L4040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10038;
  goto ret0;

 L10038: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4047;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4041;
    }
  goto ret0;

 L4047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4048;
    }
  goto ret0;

 L4048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10040;
  goto ret0;

 L10040: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4063;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4049;
    }
  goto ret0;

 L4063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4064;
    }
  goto ret0;

 L4064: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 334;
    }
  goto ret0;

 L4049: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 332;
    }
  goto ret0;

 L4041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10042;
  goto ret0;

 L10042: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4055;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4042;
    }
  goto ret0;

 L4055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4056;
    }
  goto ret0;

 L4056: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 333;
    }
  goto ret0;

 L4042: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 331;
    }
  goto ret0;

 L4074: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10044;
  goto ret0;

 L10044: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4081;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4075;
    }
  goto ret0;

 L4081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4082;
    }
  goto ret0;

 L4082: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10046;
  goto ret0;

 L10046: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4097;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4083;
    }
  goto ret0;

 L4097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4098;
    }
  goto ret0;

 L4098: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 339;
    }
  goto ret0;

 L4083: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 337;
    }
  goto ret0;

 L4075: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10048;
  goto ret0;

 L10048: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4089;
  if (fpa_rhs_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4076;
    }
  goto ret0;

 L4089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L4090;
    }
  goto ret0;

 L4090: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 338;
    }
  goto ret0;

 L4076: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 336;
    }
  goto ret0;

 L4107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10050;
  goto ret0;

 L10050: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4113;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4108;
    }
  goto ret0;

 L4113: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4114;
    }
  goto ret0;

 L4114: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 342;
    }
  goto ret0;

 L4108: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 341;
    }
  goto ret0;

 L4123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10052;
  goto ret0;

 L10052: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4129;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4124;
    }
  goto ret0;

 L4129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4130;
    }
  goto ret0;

 L4130: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 345;
    }
  goto ret0;

 L4124: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 344;
    }
  goto ret0;

 L4139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DFmode)
    goto L10054;
  goto ret0;

 L10054: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4145;
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4140;
    }
  goto ret0;

 L4145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4146;
    }
  goto ret0;

 L4146: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 348;
    }
  goto ret0;

 L4140: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 347;
    }
  goto ret0;

 L4155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4156;
    }
  goto ret0;

 L4156: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 350;
    }
  goto ret0;

 L4177: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4178;
    }
  goto ret0;

 L4178: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 354;
    }
  goto ret0;

 L4255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4256;
    }
  goto ret0;

 L4256: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L4257;
    }
  goto ret0;

 L4257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L4258;
  goto ret0;

 L4258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4259;
    }
  goto ret0;

 L4259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (fpa_add_operand (x2, DFmode))
    {
      operands[2] = x2;
      goto L4260;
    }
  goto ret0;

 L4260: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 367;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_17 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L4461;
    case XOR:
      goto L4467;
    case AND:
      goto L4473;
    case UNSPEC:
      goto L10097;
    case ZERO_EXTEND:
      goto L5126;
    case SIGN_EXTEND:
      goto L5151;
    case ROTATERT:
      goto L5220;
    case ASHIFTRT:
      goto L5238;
    case LSHIFTRT:
      goto L5256;
    case ASHIFT:
      goto L5274;
    case PLUS:
      goto L5364;
    default:
     break;
   }
  goto ret0;

 L4461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4462;
    }
  goto ret0;

 L4462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4463;
    }
  goto ret0;

 L4463: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 397;
    }
  goto ret0;

 L4467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4468;
    }
  goto ret0;

 L4468: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4469;
    }
  goto ret0;

 L4469: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 398;
    }
  goto ret0;

 L4473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4474;
    }
  goto ret0;

 L4474: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10104;
  goto ret0;

 L10104: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NOT)
    goto L4481;
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L4475;
    }
  goto ret0;

 L4481: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4482;
    }
  goto ret0;

 L4482: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 400;
    }
  goto ret0;

 L4475: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 399;
    }
  goto ret0;

 L10097: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x1, 0))
    {
    case 3:
      goto L10105;
    case 2:
      goto L10106;
    case 1:
      goto L10109;
    default:
      break;
    }
  goto ret0;

 L10105: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 13L:
      goto L4652;
    case 14L:
      goto L4665;
    default:
      break;
    }
  goto ret0;

 L4652: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4653;
    }
  goto ret0;

 L4653: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4654;
    }
  goto ret0;

 L4654: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4HImode))
    {
      operands[3] = x2;
      goto L4655;
    }
  goto ret0;

 L4655: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 429;
    }
  goto ret0;

 L4665: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L4666;
    }
  goto ret0;

 L4666: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4667;
    }
  goto ret0;

 L4667: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4HImode))
    {
      operands[3] = x2;
      goto L4668;
    }
  goto ret0;

 L4668: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 431;
    }
  goto ret0;

 L10106: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 15L:
      goto L4659;
    case 16L:
      goto L4672;
    default:
      break;
    }
  goto ret0;

 L4659: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4660;
    }
  goto ret0;

 L4660: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4661;
    }
  goto ret0;

 L4661: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 430;
    }
  goto ret0;

 L4672: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4673;
    }
  goto ret0;

 L4673: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4674;
    }
  goto ret0;

 L4674: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 432;
    }
  goto ret0;

 L10109: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 17L:
      goto L4678;
    case 9L:
      goto L5481;
    default:
      break;
    }
  goto ret0;

 L4678: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_REALLY_IWMMXT))
    {
      return 433;
    }
  goto ret0;

 L5481: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V8QImode:
      goto L10111;
    case V4HImode:
      goto L10112;
    case V2SImode:
      goto L10113;
    default:
      break;
    }
  goto ret0;

 L10111: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5482;
    }
  goto ret0;

 L5482: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 534;
    }
  goto ret0;

 L10112: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5487;
    }
  goto ret0;

 L5487: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 535;
    }
  goto ret0;

 L10113: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5492;
    }
  goto ret0;

 L5492: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 536;
    }
  goto ret0;

 L5126: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5127;
  goto ret0;

 L5127: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L5128;
    }
  goto ret0;

 L5128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L5129;
  goto ret0;

 L5129: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10114;
  goto ret0;

 L10114: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L10116;
      case 0L:
        goto L10117;
      default:
        break;
      }
  goto ret0;

 L10116: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 486;
    }
  goto ret0;

 L10117: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 492;
    }
  goto ret0;

 L5151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5152;
  goto ret0;

 L5152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L5153;
    }
  goto ret0;

 L5153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L5154;
  goto ret0;

 L5154: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10118;
  goto ret0;

 L10118: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 1L:
        goto L10120;
      case 0L:
        goto L10121;
      default:
        break;
      }
  goto ret0;

 L10120: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 489;
    }
  goto ret0;

 L10121: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 495;
    }
  goto ret0;

 L5220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5221;
    }
  goto ret0;

 L5221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10122;
    case DImode:
      goto L10123;
    default:
      break;
    }
  goto ret0;

 L10122: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5222;
    }
  goto ret0;

 L5222: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 498;
    }
  goto ret0;

 L10123: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5294;
    }
  goto ret0;

 L5294: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 510;
    }
  goto ret0;

 L5238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5239;
    }
  goto ret0;

 L5239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10124;
    case DImode:
      goto L10125;
    default:
      break;
    }
  goto ret0;

 L10124: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5240;
    }
  goto ret0;

 L5240: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 501;
    }
  goto ret0;

 L10125: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5312;
    }
  goto ret0;

 L5312: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 513;
    }
  goto ret0;

 L5256: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5257;
    }
  goto ret0;

 L5257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10126;
    case DImode:
      goto L10127;
    default:
      break;
    }
  goto ret0;

 L10126: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5258;
    }
  goto ret0;

 L5258: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 504;
    }
  goto ret0;

 L10127: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5330;
    }
  goto ret0;

 L5330: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 516;
    }
  goto ret0;

 L5274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5275;
    }
  goto ret0;

 L5275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10128;
    case DImode:
      goto L10129;
    default:
      break;
    }
  goto ret0;

 L10128: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5276;
    }
  goto ret0;

 L5276: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 507;
    }
  goto ret0;

 L10129: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5348;
    }
  goto ret0;

 L5348: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 519;
    }
  goto ret0;

 L5364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5365;
    }
  goto ret0;

 L5365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10130;
  goto ret0;

 L10130: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L5366;
    case PLUS:
      goto L5376;
    default:
     break;
   }
  goto ret0;

 L5366: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L5367;
  goto ret0;

 L5367: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  switch (GET_MODE (x4))
    {
    case SImode:
      goto L10132;
    case HImode:
      goto L10133;
    default:
      break;
    }
  goto ret0;

 L10132: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5368;
    }
  goto ret0;

 L5368: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L5369;
  goto ret0;

 L5369: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5370;
    }
  goto ret0;

 L5370: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 522;
    }
  goto ret0;

 L10133: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == TRUNCATE)
    goto L5401;
  goto ret0;

 L5401: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode)
    goto L10135;
  goto ret0;

 L10135: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == ASHIFTRT)
    goto L5414;
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L5402;
    }
  goto ret0;

 L5414: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L5415;
    }
  goto ret0;

 L5415: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 16L)
    goto L5416;
  goto ret0;

 L5416: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L5417;
  goto ret0;

 L5417: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L5418;
  goto ret0;

 L5418: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode)
    goto L10137;
  goto ret0;

 L10137: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == ASHIFTRT)
    goto L5446;
  if (register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L5419;
    }
  goto ret0;

 L5446: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L5447;
    }
  goto ret0;

 L5447: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 16L
      && (TARGET_REALLY_IWMMXT))
    {
      return 527;
    }
  goto ret0;

 L5419: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 525;
    }
  goto ret0;

 L5402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L5403;
  goto ret0;

 L5403: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L5404;
  goto ret0;

 L5404: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode)
    goto L10139;
  goto ret0;

 L10139: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == ASHIFTRT)
    goto L5431;
  if (register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L5405;
    }
  goto ret0;

 L5431: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L5432;
    }
  goto ret0;

 L5432: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT
      && XWINT (x6, 0) == 16L
      && (TARGET_REALLY_IWMMXT))
    {
      return 526;
    }
  goto ret0;

 L5405: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 524;
    }
  goto ret0;

 L5376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L5377;
  goto ret0;

 L5377: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L5378;
  goto ret0;

 L5378: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L5379;
  goto ret0;

 L5379: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L5380;
    }
  goto ret0;

 L5380: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L5381;
  goto ret0;

 L5381: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L5382;
  goto ret0;

 L5382: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L5383;
    }
  goto ret0;

 L5383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L5384;
  goto ret0;

 L5384: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L5385;
  goto ret0;

 L5385: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L5386;
  goto ret0;

 L5386: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode
      && GET_CODE (x6) == ASHIFTRT)
    goto L5387;
  goto ret0;

 L5387: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (rtx_equal_p (x7, operands[2]))
    goto L5388;
  goto ret0;

 L5388: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 16L)
    goto L5389;
  goto ret0;

 L5389: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L5390;
  goto ret0;

 L5390: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L5391;
  goto ret0;

 L5391: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode
      && GET_CODE (x6) == ASHIFTRT)
    goto L5392;
  goto ret0;

 L5392: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (rtx_equal_p (x7, operands[3]))
    goto L5393;
  goto ret0;

 L5393: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 16L
      && (TARGET_REALLY_IWMMXT))
    {
      return 523;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_18 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4518;
    case SS_PLUS:
      goto L4536;
    case US_PLUS:
      goto L4554;
    case MINUS:
      goto L4572;
    case SS_MINUS:
      goto L4590;
    case US_MINUS:
      goto L4608;
    case CONST_VECTOR:
      goto L10159;
    case ASHIFTRT:
      goto L4705;
    case ABS:
      goto L4749;
    case VEC_MERGE:
      goto L4756;
    case SMAX:
      goto L4872;
    case UMAX:
      goto L4878;
    case SMIN:
      goto L4908;
    case UMIN:
      goto L4914;
    case VEC_CONCAT:
      goto L4944;
    case VEC_DUPLICATE:
      goto L5451;
    case SUBREG:
      goto L10160;
    case UNSPEC:
      goto L10161;
    default:
     break;
   }
  goto ret0;

 L4518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4519;
    }
  goto ret0;

 L4519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4520;
    }
  goto ret0;

 L4520: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 408;
    }
  goto ret0;

 L4536: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4537;
    }
  goto ret0;

 L4537: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4538;
    }
  goto ret0;

 L4538: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 411;
    }
  goto ret0;

 L4554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4555;
    }
  goto ret0;

 L4555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4556;
    }
  goto ret0;

 L4556: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 414;
    }
  goto ret0;

 L4572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4573;
    }
  goto ret0;

 L4573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4574;
    }
  goto ret0;

 L4574: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 417;
    }
  goto ret0;

 L4590: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4591;
    }
  goto ret0;

 L4591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4592;
    }
  goto ret0;

 L4592: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 420;
    }
  goto ret0;

 L4608: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4609;
    }
  goto ret0;

 L4609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4610;
    }
  goto ret0;

 L4610: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 423;
    }
  goto ret0;

 L10159: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 8)
    goto L4682;
  goto ret0;

 L4682: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4683;
  goto ret0;

 L4683: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4684;
  goto ret0;

 L4684: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4685;
  goto ret0;

 L4685: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4686;
  goto ret0;

 L4686: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4687;
  goto ret0;

 L4687: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4688;
  goto ret0;

 L4688: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4689;
  goto ret0;

 L4689: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 7);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_REALLY_IWMMXT))
    {
      return 434;
    }
  goto ret0;

 L4705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == PLUS)
    goto L4706;
  goto ret0;

 L4706: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode)
    goto L10163;
  goto ret0;

 L10163: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L4707;
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L4737;
    }
  goto ret0;

 L4707: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L4708;
    }
  goto ret0;

 L4708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L4709;
    }
  goto ret0;

 L4709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 8)
    goto L4710;
  goto ret0;

 L4710: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4711;
  goto ret0;

 L4711: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4712;
  goto ret0;

 L4712: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4713;
  goto ret0;

 L4713: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4714;
  goto ret0;

 L4714: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4715;
  goto ret0;

 L4715: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4716;
  goto ret0;

 L4716: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4717;
  goto ret0;

 L4717: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4718;
  goto ret0;

 L4718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 437;
    }
  goto ret0;

 L4737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L4738;
    }
  goto ret0;

 L4738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 439;
    }
  goto ret0;

 L4749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == MINUS)
    goto L4750;
  goto ret0;

 L4750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L4751;
    }
  goto ret0;

 L4751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L4752;
    }
  goto ret0;

 L4752: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 441;
    }
  goto ret0;

 L4756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V8QImode)
    goto L10166;
  goto ret0;

 L10166: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4993;
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4757;
    }
  goto ret0;

 L4993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L4994;
    }
  goto ret0;

 L4994: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L4995;
  goto ret0;

 L4995: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10167;
  goto ret0;

 L10167: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4L:
        goto L4996;
      case 0L:
        goto L5054;
      default:
        break;
      }
  goto ret0;

 L4996: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L4997;
  goto ret0;

 L4997: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L4998;
  goto ret0;

 L4998: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4999;
  goto ret0;

 L4999: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5000;
  goto ret0;

 L5000: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5001;
  goto ret0;

 L5001: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L5002;
  goto ret0;

 L5002: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5003;
  goto ret0;

 L5003: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5004;
  goto ret0;

 L5004: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L5005;
    }
  goto ret0;

 L5005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L5006;
  goto ret0;

 L5006: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5007;
  goto ret0;

 L5007: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L5008;
  goto ret0;

 L5008: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5009;
  goto ret0;

 L5009: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L5010;
  goto ret0;

 L5010: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5011;
  goto ret0;

 L5011: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5012;
  goto ret0;

 L5012: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5013;
  goto ret0;

 L5013: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L5014;
  goto ret0;

 L5014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85L
      && (TARGET_REALLY_IWMMXT))
    {
      return 478;
    }
  goto ret0;

 L5054: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L5055;
  goto ret0;

 L5055: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5056;
  goto ret0;

 L5056: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L5057;
  goto ret0;

 L5057: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5058;
  goto ret0;

 L5058: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5059;
  goto ret0;

 L5059: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5060;
  goto ret0;

 L5060: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L5061;
  goto ret0;

 L5061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5062;
  goto ret0;

 L5062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L5063;
    }
  goto ret0;

 L5063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 8)
    goto L5064;
  goto ret0;

 L5064: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 4L)
    goto L5065;
  goto ret0;

 L5065: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5066;
  goto ret0;

 L5066: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L5067;
  goto ret0;

 L5067: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5068;
  goto ret0;

 L5068: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 4);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5069;
  goto ret0;

 L5069: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 5);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5070;
  goto ret0;

 L5070: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 6);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L)
    goto L5071;
  goto ret0;

 L5071: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 7);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5072;
  goto ret0;

 L5072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 85L
      && (TARGET_REALLY_IWMMXT))
    {
      return 481;
    }
  goto ret0;

 L4757: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L4758;
  goto ret0;

 L4758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == TRUNCATE)
    goto L4759;
  goto ret0;

 L4759: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4760;
    }
  goto ret0;

 L4760: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4761;
    }
  goto ret0;

 L4761: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 442;
    }
  goto ret0;

 L4872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4873;
    }
  goto ret0;

 L4873: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4874;
    }
  goto ret0;

 L4874: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 460;
    }
  goto ret0;

 L4878: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4879;
    }
  goto ret0;

 L4879: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4880;
    }
  goto ret0;

 L4880: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 461;
    }
  goto ret0;

 L4908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4909;
    }
  goto ret0;

 L4909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4910;
    }
  goto ret0;

 L4910: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 466;
    }
  goto ret0;

 L4914: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L4915;
    }
  goto ret0;

 L4915: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L4916;
    }
  goto ret0;

 L4916: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 467;
    }
  goto ret0;

 L4944: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode)
    goto L10169;
  goto ret0;

 L10169: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L4945;
    case US_TRUNCATE:
      goto L4969;
    default:
     break;
   }
  goto ret0;

 L4945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L4946;
    }
  goto ret0;

 L4946: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L4947;
  goto ret0;

 L4947: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L4948;
    }
  goto ret0;

 L4948: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 472;
    }
  goto ret0;

 L4969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L4970;
    }
  goto ret0;

 L4970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L4971;
  goto ret0;

 L4971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L4972;
    }
  goto ret0;

 L4972: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 475;
    }
  goto ret0;

 L5451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5452;
    }
  goto ret0;

 L5452: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 528;
    }
  goto ret0;

 L10160: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 1) == 0)
    goto L5496;
  goto ret0;

 L5496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == TImode
      && GET_CODE (x2) == ASHIFTRT)
    goto L5497;
  goto ret0;

 L5497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L5498;
  goto ret0;

 L5498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V16QImode
      && GET_CODE (x4) == VEC_CONCAT)
    goto L5499;
  goto ret0;

 L5499: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V8QImode))
    {
      operands[1] = x5;
      goto L5500;
    }
  goto ret0;

 L5500: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (register_operand (x5, V8QImode))
    {
      operands[2] = x5;
      goto L5501;
    }
  goto ret0;

 L5501: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L5502;
  goto ret0;

 L5502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonmemory_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5503;
    }
  goto ret0;

 L5503: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L
      && (TARGET_REALLY_IWMMXT))
    {
      return 537;
    }
  goto ret0;

 L10161: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L10171;
  goto ret0;

 L10171: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 11L:
      goto L5516;
    case 12L:
      goto L5528;
    default:
      break;
    }
  goto ret0;

 L5516: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5517;
    }
  goto ret0;

 L5517: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L5518;
    }
  goto ret0;

 L5518: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 540;
    }
  goto ret0;

 L5528: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5529;
    }
  goto ret0;

 L5529: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L5530;
    }
  goto ret0;

 L5530: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 542;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_19 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4524;
    case SS_PLUS:
      goto L4542;
    case US_PLUS:
      goto L4560;
    case MINUS:
      goto L4578;
    case SS_MINUS:
      goto L4596;
    case US_MINUS:
      goto L4614;
    case MULT:
      goto L4626;
    case TRUNCATE:
      goto L4632;
    case CONST_VECTOR:
      goto L10200;
    case ASHIFTRT:
      goto L4722;
    case VEC_MERGE:
      goto L4765;
    case UNSPEC:
      goto L10201;
    case SMAX:
      goto L4884;
    case UMAX:
      goto L4890;
    case SMIN:
      goto L4920;
    case UMIN:
      goto L4926;
    case VEC_CONCAT:
      goto L4952;
    case ZERO_EXTEND:
      goto L5108;
    case SIGN_EXTEND:
      goto L5133;
    case ROTATERT:
      goto L5208;
    case LSHIFTRT:
      goto L5244;
    case ASHIFT:
      goto L5262;
    case VEC_DUPLICATE:
      goto L5456;
    default:
     break;
   }
  goto ret0;

 L4524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4525;
    }
  goto ret0;

 L4525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4526;
    }
  goto ret0;

 L4526: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 409;
    }
  goto ret0;

 L4542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4543;
    }
  goto ret0;

 L4543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4544;
    }
  goto ret0;

 L4544: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 412;
    }
  goto ret0;

 L4560: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4561;
    }
  goto ret0;

 L4561: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4562;
    }
  goto ret0;

 L4562: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 415;
    }
  goto ret0;

 L4578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4579;
    }
  goto ret0;

 L4579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4580;
    }
  goto ret0;

 L4580: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 418;
    }
  goto ret0;

 L4596: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4597;
    }
  goto ret0;

 L4597: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4598;
    }
  goto ret0;

 L4598: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 421;
    }
  goto ret0;

 L4614: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4615;
    }
  goto ret0;

 L4615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4616;
    }
  goto ret0;

 L4616: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 424;
    }
  goto ret0;

 L4626: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4627;
    }
  goto ret0;

 L4627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4628;
    }
  goto ret0;

 L4628: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 426;
    }
  goto ret0;

 L4632: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4SImode
      && GET_CODE (x2) == LSHIFTRT)
    goto L4633;
  goto ret0;

 L4633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == MULT)
    goto L4634;
  goto ret0;

 L4634: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode)
    goto L10206;
  goto ret0;

 L10206: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L4635;
    case ZERO_EXTEND:
      goto L4645;
    default:
     break;
   }
  goto ret0;

 L4635: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L4636;
    }
  goto ret0;

 L4636: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L4637;
  goto ret0;

 L4637: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L4638;
    }
  goto ret0;

 L4638: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_REALLY_IWMMXT))
    {
      return 427;
    }
  goto ret0;

 L4645: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L4646;
    }
  goto ret0;

 L4646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L4647;
  goto ret0;

 L4647: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L4648;
    }
  goto ret0;

 L4648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && (TARGET_REALLY_IWMMXT))
    {
      return 428;
    }
  goto ret0;

 L10200: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 4)
    goto L4693;
  goto ret0;

 L4693: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4694;
  goto ret0;

 L4694: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4695;
  goto ret0;

 L4695: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4696;
  goto ret0;

 L4696: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_REALLY_IWMMXT))
    {
      return 435;
    }
  goto ret0;

 L4722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L10208;
  goto ret0;

 L10208: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PLUS)
    goto L4723;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5227;
    }
  goto ret0;

 L4723: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4HImode)
    goto L10210;
  goto ret0;

 L10210: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L4724;
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L4744;
    }
  goto ret0;

 L4724: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L4725;
    }
  goto ret0;

 L4725: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L4726;
    }
  goto ret0;

 L4726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == CONST_VECTOR
      && XVECLEN (x3, 0) == 4)
    goto L4727;
  goto ret0;

 L4727: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4728;
  goto ret0;

 L4728: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4729;
  goto ret0;

 L4729: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4730;
  goto ret0;

 L4730: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L4731;
  goto ret0;

 L4731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 438;
    }
  goto ret0;

 L4744: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L4745;
    }
  goto ret0;

 L4745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 440;
    }
  goto ret0;

 L5227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10212;
    case DImode:
      goto L10213;
    default:
      break;
    }
  goto ret0;

 L10212: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5228;
    }
  goto ret0;

 L5228: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 499;
    }
  goto ret0;

 L10213: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5300;
    }
  goto ret0;

 L5300: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 511;
    }
  goto ret0;

 L4765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4HImode)
    goto L10215;
  goto ret0;

 L10215: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L5019;
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4766;
    }
  goto ret0;

 L5019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L5020;
    }
  goto ret0;

 L5020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5021;
  goto ret0;

 L5021: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10216;
  goto ret0;

 L10216: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 0L:
        goto L5022;
      case 2L:
        goto L5080;
      default:
        break;
      }
  goto ret0;

 L5022: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5023;
  goto ret0;

 L5023: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5024;
  goto ret0;

 L5024: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5025;
  goto ret0;

 L5025: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5026;
  goto ret0;

 L5026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L5027;
    }
  goto ret0;

 L5027: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5028;
  goto ret0;

 L5028: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5029;
  goto ret0;

 L5029: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5030;
  goto ret0;

 L5030: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5031;
  goto ret0;

 L5031: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5032;
  goto ret0;

 L5032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5L
      && (TARGET_REALLY_IWMMXT))
    {
      return 479;
    }
  goto ret0;

 L5080: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5081;
  goto ret0;

 L5081: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5082;
  goto ret0;

 L5082: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5083;
  goto ret0;

 L5083: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5084;
  goto ret0;

 L5084: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L5085;
    }
  goto ret0;

 L5085: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5086;
  goto ret0;

 L5086: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5087;
  goto ret0;

 L5087: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5088;
  goto ret0;

 L5088: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5089;
  goto ret0;

 L5089: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L)
    goto L5090;
  goto ret0;

 L5090: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 5L
      && (TARGET_REALLY_IWMMXT))
    {
      return 482;
    }
  goto ret0;

 L4766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L4767;
  goto ret0;

 L4767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == TRUNCATE)
    goto L4768;
  goto ret0;

 L4768: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4769;
    }
  goto ret0;

 L4769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4770;
    }
  goto ret0;

 L4770: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 443;
    }
  goto ret0;

 L10201: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L10218;
  goto ret0;

 L10218: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 8L:
      goto L4821;
    case 18L:
      goto L5352;
    case 19L:
      goto L5358;
    case 11L:
      goto L5522;
    case 12L:
      goto L5534;
    default:
      break;
    }
  goto ret0;

 L4821: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4822;
    }
  goto ret0;

 L4822: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (immediate_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4823;
    }
  goto ret0;

 L4823: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 450;
    }
  goto ret0;

 L5352: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5353;
    }
  goto ret0;

 L5353: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L5354;
    }
  goto ret0;

 L5354: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 520;
    }
  goto ret0;

 L5358: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5359;
    }
  goto ret0;

 L5359: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L5360;
    }
  goto ret0;

 L5360: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 521;
    }
  goto ret0;

 L5522: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5523;
    }
  goto ret0;

 L5523: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L5524;
    }
  goto ret0;

 L5524: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 541;
    }
  goto ret0;

 L5534: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5535;
    }
  goto ret0;

 L5535: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L5536;
    }
  goto ret0;

 L5536: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 543;
    }
  goto ret0;

 L4884: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4885;
    }
  goto ret0;

 L4885: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4886;
    }
  goto ret0;

 L4886: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 462;
    }
  goto ret0;

 L4890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4891;
    }
  goto ret0;

 L4891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4892;
    }
  goto ret0;

 L4892: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 463;
    }
  goto ret0;

 L4920: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4921;
    }
  goto ret0;

 L4921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4922;
    }
  goto ret0;

 L4922: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 468;
    }
  goto ret0;

 L4926: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L4927;
    }
  goto ret0;

 L4927: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L4928;
    }
  goto ret0;

 L4928: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 469;
    }
  goto ret0;

 L4952: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode)
    goto L10223;
  goto ret0;

 L10223: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L4953;
    case US_TRUNCATE:
      goto L4977;
    default:
     break;
   }
  goto ret0;

 L4953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L4954;
    }
  goto ret0;

 L4954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L4955;
  goto ret0;

 L4955: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L4956;
    }
  goto ret0;

 L4956: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 473;
    }
  goto ret0;

 L4977: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L4978;
    }
  goto ret0;

 L4978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L4979;
  goto ret0;

 L4979: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L4980;
    }
  goto ret0;

 L4980: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 476;
    }
  goto ret0;

 L5108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5109;
  goto ret0;

 L5109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L5110;
    }
  goto ret0;

 L5110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5111;
  goto ret0;

 L5111: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10225;
  goto ret0;

 L10225: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4L:
        goto L5112;
      case 0L:
        goto L5162;
      default:
        break;
      }
  goto ret0;

 L5112: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L5113;
  goto ret0;

 L5113: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5114;
  goto ret0;

 L5114: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L
      && (TARGET_REALLY_IWMMXT))
    {
      return 484;
    }
  goto ret0;

 L5162: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5163;
  goto ret0;

 L5163: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5164;
  goto ret0;

 L5164: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L
      && (TARGET_REALLY_IWMMXT))
    {
      return 490;
    }
  goto ret0;

 L5133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V4QImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5134;
  goto ret0;

 L5134: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L5135;
    }
  goto ret0;

 L5135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 4)
    goto L5136;
  goto ret0;

 L5136: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10227;
  goto ret0;

 L10227: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 4L:
        goto L5137;
      case 0L:
        goto L5187;
      default:
        break;
      }
  goto ret0;

 L5137: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 5L)
    goto L5138;
  goto ret0;

 L5138: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 6L)
    goto L5139;
  goto ret0;

 L5139: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 7L
      && (TARGET_REALLY_IWMMXT))
    {
      return 487;
    }
  goto ret0;

 L5187: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5188;
  goto ret0;

 L5188: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 2);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 2L)
    goto L5189;
  goto ret0;

 L5189: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 3);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L
      && (TARGET_REALLY_IWMMXT))
    {
      return 493;
    }
  goto ret0;

 L5208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5209;
    }
  goto ret0;

 L5209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10229;
    case DImode:
      goto L10230;
    default:
      break;
    }
  goto ret0;

 L10229: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5210;
    }
  goto ret0;

 L5210: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 496;
    }
  goto ret0;

 L10230: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5282;
    }
  goto ret0;

 L5282: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 508;
    }
  goto ret0;

 L5244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5245;
    }
  goto ret0;

 L5245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10231;
    case DImode:
      goto L10232;
    default:
      break;
    }
  goto ret0;

 L10231: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5246;
    }
  goto ret0;

 L5246: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 502;
    }
  goto ret0;

 L10232: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5318;
    }
  goto ret0;

 L5318: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 514;
    }
  goto ret0;

 L5262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5263;
    }
  goto ret0;

 L5263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10233;
    case DImode:
      goto L10234;
    default:
      break;
    }
  goto ret0;

 L10233: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5264;
    }
  goto ret0;

 L5264: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 505;
    }
  goto ret0;

 L10234: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5336;
    }
  goto ret0;

 L5336: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 517;
    }
  goto ret0;

 L5456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L5457;
    }
  goto ret0;

 L5457: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 529;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_20 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4530;
    case SS_PLUS:
      goto L4548;
    case US_PLUS:
      goto L4566;
    case MINUS:
      goto L4584;
    case SS_MINUS:
      goto L4602;
    case US_MINUS:
      goto L4620;
    case CONST_VECTOR:
      goto L10255;
    case VEC_MERGE:
      goto L4774;
    case SMAX:
      goto L4896;
    case UMAX:
      goto L4902;
    case SMIN:
      goto L4932;
    case UMIN:
      goto L4938;
    case VEC_CONCAT:
      goto L4960;
    case ZERO_EXTEND:
      goto L5118;
    case SIGN_EXTEND:
      goto L5143;
    case ROTATERT:
      goto L5214;
    case ASHIFTRT:
      goto L5232;
    case LSHIFTRT:
      goto L5250;
    case ASHIFT:
      goto L5268;
    case VEC_DUPLICATE:
      goto L5461;
    default:
     break;
   }
  goto ret0;

 L4530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4531;
    }
  goto ret0;

 L4531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4532;
    }
  goto ret0;

 L4532: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 410;
    }
  goto ret0;

 L4548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4549;
    }
  goto ret0;

 L4549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4550;
    }
  goto ret0;

 L4550: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 413;
    }
  goto ret0;

 L4566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4567;
    }
  goto ret0;

 L4567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4568;
    }
  goto ret0;

 L4568: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 416;
    }
  goto ret0;

 L4584: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4585;
    }
  goto ret0;

 L4585: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4586;
    }
  goto ret0;

 L4586: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 419;
    }
  goto ret0;

 L4602: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4603;
    }
  goto ret0;

 L4603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4604;
    }
  goto ret0;

 L4604: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 422;
    }
  goto ret0;

 L4620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4621;
    }
  goto ret0;

 L4621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4622;
    }
  goto ret0;

 L4622: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 425;
    }
  goto ret0;

 L10255: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L4700;
  goto ret0;

 L4700: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L4701;
  goto ret0;

 L4701: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_REALLY_IWMMXT))
    {
      return 436;
    }
  goto ret0;

 L4774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2SImode)
    goto L10257;
  goto ret0;

 L10257: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L5037;
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4775;
    }
  goto ret0;

 L5037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L5038;
    }
  goto ret0;

 L5038: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L5039;
  goto ret0;

 L5039: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10258;
  goto ret0;

 L10258: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 0L:
        goto L5040;
      case 1L:
        goto L5098;
      default:
        break;
      }
  goto ret0;

 L5040: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5041;
  goto ret0;

 L5041: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5042;
  goto ret0;

 L5042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L5043;
    }
  goto ret0;

 L5043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L5044;
  goto ret0;

 L5044: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5045;
  goto ret0;

 L5045: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5046;
  goto ret0;

 L5046: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 480;
    }
  goto ret0;

 L5098: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5099;
  goto ret0;

 L5099: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5100;
  goto ret0;

 L5100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L5101;
    }
  goto ret0;

 L5101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L5102;
  goto ret0;

 L5102: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5103;
  goto ret0;

 L5103: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L)
    goto L5104;
  goto ret0;

 L5104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 483;
    }
  goto ret0;

 L4775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L4776;
  goto ret0;

 L4776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (nonimmediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4777;
    }
  goto ret0;

 L4777: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (immediate_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L4778;
    }
  goto ret0;

 L4778: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 444;
    }
  goto ret0;

 L4896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4897;
    }
  goto ret0;

 L4897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4898;
    }
  goto ret0;

 L4898: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 464;
    }
  goto ret0;

 L4902: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4903;
    }
  goto ret0;

 L4903: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4904;
    }
  goto ret0;

 L4904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 465;
    }
  goto ret0;

 L4932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4933;
    }
  goto ret0;

 L4933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4934;
    }
  goto ret0;

 L4934: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 470;
    }
  goto ret0;

 L4938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4939;
    }
  goto ret0;

 L4939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L4940;
    }
  goto ret0;

 L4940: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 471;
    }
  goto ret0;

 L4960: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10260;
  goto ret0;

 L10260: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case SS_TRUNCATE:
      goto L4961;
    case US_TRUNCATE:
      goto L4985;
    default:
     break;
   }
  goto ret0;

 L4961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4962;
    }
  goto ret0;

 L4962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == SS_TRUNCATE)
    goto L4963;
  goto ret0;

 L4963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4964;
    }
  goto ret0;

 L4964: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 474;
    }
  goto ret0;

 L4985: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L4986;
    }
  goto ret0;

 L4986: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == US_TRUNCATE)
    goto L4987;
  goto ret0;

 L4987: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L4988;
    }
  goto ret0;

 L4988: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 477;
    }
  goto ret0;

 L5118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5119;
  goto ret0;

 L5119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L5120;
    }
  goto ret0;

 L5120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L5121;
  goto ret0;

 L5121: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10262;
  goto ret0;

 L10262: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L5122;
      case 0L:
        goto L5172;
      default:
        break;
      }
  goto ret0;

 L5122: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L
      && (TARGET_REALLY_IWMMXT))
    {
      return 485;
    }
  goto ret0;

 L5172: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 491;
    }
  goto ret0;

 L5143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == V2HImode
      && GET_CODE (x2) == VEC_SELECT)
    goto L5144;
  goto ret0;

 L5144: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L5145;
    }
  goto ret0;

 L5145: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 2)
    goto L5146;
  goto ret0;

 L5146: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_CODE (x4) == CONST_INT)
    goto L10264;
  goto ret0;

 L10264: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x4, 0) == XWINT (x4, 0))
    switch ((int) XWINT (x4, 0))
      {
      case 2L:
        goto L5147;
      case 0L:
        goto L5197;
      default:
        break;
      }
  goto ret0;

 L5147: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 3L
      && (TARGET_REALLY_IWMMXT))
    {
      return 488;
    }
  goto ret0;

 L5197: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 1L
      && (TARGET_REALLY_IWMMXT))
    {
      return 494;
    }
  goto ret0;

 L5214: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5215;
    }
  goto ret0;

 L5215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10266;
    case DImode:
      goto L10267;
    default:
      break;
    }
  goto ret0;

 L10266: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5216;
    }
  goto ret0;

 L5216: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 497;
    }
  goto ret0;

 L10267: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5288;
    }
  goto ret0;

 L5288: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 509;
    }
  goto ret0;

 L5232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5233;
    }
  goto ret0;

 L5233: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10268;
    case DImode:
      goto L10269;
    default:
      break;
    }
  goto ret0;

 L10268: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5234;
    }
  goto ret0;

 L5234: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 500;
    }
  goto ret0;

 L10269: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5306;
    }
  goto ret0;

 L5306: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 512;
    }
  goto ret0;

 L5250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5251;
    }
  goto ret0;

 L5251: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10270;
    case DImode:
      goto L10271;
    default:
      break;
    }
  goto ret0;

 L10270: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5252;
    }
  goto ret0;

 L5252: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 503;
    }
  goto ret0;

 L10271: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5324;
    }
  goto ret0;

 L5324: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 515;
    }
  goto ret0;

 L5268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5269;
    }
  goto ret0;

 L5269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10272;
    case DImode:
      goto L10273;
    default:
      break;
    }
  goto ret0;

 L10272: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5270;
    }
  goto ret0;

 L5270: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 506;
    }
  goto ret0;

 L10273: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5342;
    }
  goto ret0;

 L5342: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 518;
    }
  goto ret0;

 L5461: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5462;
    }
  goto ret0;

 L5462: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 530;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_21 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case DImode:
      goto L9723;
    case SImode:
      goto L9725;
    case CC_NOOVmode:
      goto L9727;
    case CCmode:
      goto L9728;
    case CC_Cmode:
      goto L9729;
    case CC_Zmode:
      goto L9737;
    case HImode:
      goto L9738;
    case QImode:
      goto L9745;
    case SFmode:
      goto L9746;
    case DFmode:
      goto L9747;
    case CC_SWPmode:
      goto L9749;
    case CCFPmode:
      goto L9750;
    case BLKmode:
      goto L9751;
    default:
      break;
    }
 L1755: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PC:
      goto L2635;
    case REG:
      goto L9752;
    default:
     break;
   }
 L2333: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L9753;
    case SFmode:
      goto L9754;
    case CC_NOOVmode:
      goto L9755;
    case DFmode:
      goto L9757;
    case XFmode:
      goto L9760;
    case CCFPmode:
      goto L9761;
    case CCFPEmode:
      goto L9762;
    case DImode:
      goto L9763;
    case V8QImode:
      goto L9769;
    case V4HImode:
      goto L9770;
    case V2SImode:
      goto L9771;
    default:
      break;
    }
 L2818: ATTRIBUTE_UNUSED_LABEL
  if (dominant_cc_register (x1, VOIDmode))
    {
      operands[6] = x1;
      goto L2819;
    }
  goto ret0;

 L9723: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L10;
    }
 L9724: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L24;
    }
 L9730: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L246;
    }
 L9740: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_di_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1255;
    }
 L9741: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L1259;
    }
  goto L1755;

 L10: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode
      && GET_CODE (x1) == PLUS)
    goto L11;
  x1 = XEXP (x0, 0);
  goto L9724;

 L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L12;
    }
  x1 = XEXP (x0, 0);
  goto L9724;

 L12: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L13;
    }
  x1 = XEXP (x0, 0);
  goto L9724;

 L13: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 0;
    }
  x1 = XEXP (x0, 0);
  goto L9724;

 L24: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9776;
  x1 = XEXP (x0, 0);
  goto L9730;

 L9776: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9730;

 L246: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L9819;
  x1 = XEXP (x0, 0);
  goto L9740;

 L9819: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case MINUS:
      goto L247;
    case NEG:
      goto L1100;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9740;

 L247: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L248;
    }
  x1 = XEXP (x0, 0);
  goto L9740;

 L248: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L249;
    }
  x1 = XEXP (x0, 0);
  goto L9740;

 L249: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 22;
    }
  x1 = XEXP (x0, 0);
  goto L9740;

 L1100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L1101;
    }
  x1 = XEXP (x0, 0);
  goto L9740;

 L1101: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 100;
    }
  x1 = XEXP (x0, 0);
  goto L9740;

 L1255: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (di_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1256;
    }
  x1 = XEXP (x0, 0);
  goto L9741;

 L1256: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && !TARGET_CIRRUS && ! TARGET_IWMMXT))
    {
      return 123;
    }
  x1 = XEXP (x0, 0);
  goto L9741;

 L1259: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L1260;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1260: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && !TARGET_CIRRUS
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))))
    {
      return 124;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9725: ATTRIBUTE_UNUSED_LABEL
  tem = recog_12 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L1755;

 L9727: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L87;
  goto L1755;

 L87: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L88;
  x1 = XEXP (x0, 0);
  goto L1755;

 L88: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L9901;
  x1 = XEXP (x0, 0);
  goto L1755;

 L9901: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L89;
    case MULT:
      goto L404;
    case AND:
      goto L652;
    case ZERO_EXTRACT:
      goto L659;
    case IOR:
      goto L823;
    case XOR:
      goto L875;
    case NOT:
      goto L1074;
    default:
     break;
   }
 L9907: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L1033;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L89: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9910;
  x1 = XEXP (x0, 0);
  goto L1755;

 L9910: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT)
    goto L450;
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L90;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L450: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L451;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L451: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L452;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L453;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM && !arm_arch_xscale)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 38;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L90: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L91: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 7;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L405;
    }
  goto L9907;

 L405: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L406;
    }
  goto L9907;

 L406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM && !arm_arch_xscale)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 35;
    }
  x2 = XEXP (x1, 0);
  goto L9907;

 L652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9912;
  x1 = XEXP (x0, 0);
  goto L1755;

 L9912: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L760;
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L653;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L761;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L762;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L762: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 67;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L653: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_not_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L654;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 57;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L660;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L661;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[2] = x3;
      goto L662;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    {
      return 58;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L823: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L824;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L825;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L825: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 74;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L876;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L876: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L877;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 81;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1074: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L9913;
  x1 = XEXP (x0, 0);
  goto L1755;

 L9913: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L1075;
    }
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1179;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1075: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L1076;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1076: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L1077;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 98;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1179: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 109;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L1034;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L1035;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 95;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9728: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L106;
  goto L1755;

 L106: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode
      && GET_CODE (x1) == COMPARE)
    goto L107;
  x1 = XEXP (x0, 0);
  goto L1755;

 L107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L9915;
    case DImode:
      goto L9916;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9915: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L108;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L108: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L9917;
 L2227: ATTRIBUTE_UNUSED_LABEL
  if (arm_add_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L2228;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9917: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == NEG)
    goto L2250;
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2234;
    }
  goto L2227;

 L2250: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L2251;
    }
  if (arm_add_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L110;
    }
  goto L2227;

 L2251: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2252;
    }
  goto L2227;

 L2252: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2253;
    }
  goto L2227;

 L2253: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 182;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2227;

 L110: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 9;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2227;

 L2234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2235;
    }
  goto L2227;

 L2235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2236;
    }
  goto L2227;

 L2236: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 180;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L2227;

 L2228: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 179;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9916: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DImode))
    {
      operands[0] = x2;
      goto L2270;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L2271;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2271: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 185;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9729: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L151;
  goto L1755;

 L151: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_Cmode
      && GET_CODE (x1) == COMPARE)
    goto L152;
  x1 = XEXP (x0, 0);
  goto L1755;

 L152: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L153;
  x1 = XEXP (x0, 0);
  goto L1755;

 L153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L154;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L155;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L155: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, operands[0])
      && (TARGET_ARM))
    {
      return 13;
    }
 L162: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, operands[1])
      && (TARGET_ARM))
    {
      return 14;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9737: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L1217;
  goto L1755;

 L1217: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_Zmode
      && GET_CODE (x1) == COMPARE)
    goto L1218;
  x1 = XEXP (x0, 0);
  goto L1755;

 L1218: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L1219;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1219: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 117;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9738: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1240;
    }
 L9743: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1324;
    }
 L9744: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L1337;
    }
  goto L1755;

 L1240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L1241;
  x1 = XEXP (x0, 0);
  goto L9743;

 L1241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L1242;
    }
  x1 = XEXP (x0, 0);
  goto L9743;

 L1242: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4))
    {
      return 120;
    }
  x1 = XEXP (x0, 0);
  goto L9743;

 L1324: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1325;
    }
  x1 = XEXP (x0, 0);
  goto L9744;

 L1325: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    {
      return 133;
    }
 L1334: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1])))))
    {
      return 135;
    }
  x1 = XEXP (x0, 0);
  goto L9744;

 L1337: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1338;
    }
 L1351: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x1, HImode))
    {
      operands[1] = x1;
      goto L1352;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1338: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && !arm_arch4
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1])))))
    {
      return 136;
    }
 L1342: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && !arm_arch4
   && BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1])))))
    {
      return 137;
    }
  x1 = XEXP (x0, 1);
  goto L1351;

 L1352: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_MMU_TRAPS))
    {
      return 139;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9745: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, QImode))
    {
      operands[0] = x1;
      goto L1362;
    }
  goto L1755;

 L1362: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      operands[1] = x1;
      goto L1363;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1363: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 141;
    }
 L1367: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    {
      return 142;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9746: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L1370;
    }
  goto L1755;

 L1370: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L1371;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1371: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && !TARGET_CIRRUS
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    {
      return 143;
    }
 L1375: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode))))
    {
      return 144;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9747: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_soft_df_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1378;
    }
 L9748: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L1382;
    }
  goto L1755;

 L1378: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (soft_df_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1379;
    }
  x1 = XEXP (x0, 0);
  goto L9748;

 L1379: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_SOFT_FLOAT
   && !TARGET_CIRRUS
  ))
    {
      return 145;
    }
  x1 = XEXP (x0, 0);
  goto L9748;

 L1382: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L1383;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L1383: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    {
      return 146;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9749: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L2239;
  goto L1755;

 L2239: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_SWPmode
      && GET_CODE (x1) == COMPARE)
    goto L2240;
  x1 = XEXP (x0, 0);
  goto L1755;

 L2240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L2241;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2242;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2242: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2243;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L2244;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2244: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 181;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9750: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L2256;
  goto L1755;

 L2256: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L2257;
  x1 = XEXP (x0, 0);
  goto L1755;

 L2257: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L9919;
    case DFmode:
      goto L9920;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9919: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[0] = x2;
      goto L2258;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2258: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L2259;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2259: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 183;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9920: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[0] = x2;
      goto L2264;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L2265;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2265: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 184;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L9751: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == MEM)
    goto L3883;
  goto L1755;

 L3883: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == SCRATCH)
    goto L3884;
  goto L1755;

 L3884: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == BLKmode
      && GET_CODE (x1) == UNSPEC
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 5)
    goto L3885;
  x1 = XEXP (x0, 0);
  goto L1755;

 L3885: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L3886;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L3886: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      return 302;
    }
  x1 = XEXP (x0, 0);
  goto L1755;

 L2635: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9921;
 L1756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2278;
    case LABEL_REF:
      goto L2370;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2333;

 L9921: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2636;
    }
 L9922: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2640;
    }
 L9923: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2644;
    }
  goto L1756;

 L2636: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 218;
    }
  x1 = XEXP (x0, 1);
  goto L9922;

 L2640: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 219;
    }
  x1 = XEXP (x0, 1);
  goto L9923;

 L2644: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 220;
    }
  x1 = XEXP (x0, 1);
  goto L1756;

 L2278: ATTRIBUTE_UNUSED_LABEL
  tem = recog_13 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2333;

 L2370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  goto L2371;

 L2371: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return 198;
    }
 L2376: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 199;
    }
  x1 = XEXP (x0, 0);
  goto L2333;

 L9752: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L2274;
    }
  goto L2333;

 L2274: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (rtx_equal_p (x1, operands[0])
      && (TARGET_ARM))
    {
      return 186;
    }
  x1 = XEXP (x0, 0);
  goto L2333;

 L9753: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L2334;
    }
 L9768: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L4489;
    }
 L9775: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L4781;
    }
  goto L2818;

 L2334: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9930;
  x1 = XEXP (x0, 0);
  goto L9768;

 L9930: ATTRIBUTE_UNUSED_LABEL
  tem = recog_15 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9768;

 L4489: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L4490;
    }
  x1 = XEXP (x0, 0);
  goto L9775;

 L4490: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 402;
    }
  x1 = XEXP (x0, 0);
  goto L9775;

 L4781: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L9968;
  x1 = XEXP (x0, 0);
  goto L2818;

 L9968: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case ZERO_EXTEND:
      goto L4782;
    case SIGN_EXTEND:
      goto L4790;
    case VEC_SELECT:
      goto L4814;
    case UNSPEC:
      goto L9973;
    case UNSPEC_VOLATILE:
      goto L9974;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L9975;
    case HImode:
      goto L9976;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9975: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4783;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L4784;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L4785;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4785: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4786;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4786: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 445;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9976: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4799;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L4800;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L4801;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4801: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4802;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4802: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 447;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case QImode:
      goto L9977;
    case HImode:
      goto L9978;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9977: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4791;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4791: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L4792;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4792: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L4793;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4793: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4794;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4794: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 446;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9978: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == VEC_SELECT)
    goto L4807;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L4808;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4808: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L4809;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4809: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L4810;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4810: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 448;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L4815;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == PARALLEL
      && XVECLEN (x2, 0) == 1)
    goto L4816;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4816: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L4817;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4817: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 449;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9973: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 10)
    goto L5466;
  x1 = XEXP (x0, 0);
  goto L2818;

 L5466: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V8QImode:
      goto L9979;
    case V4HImode:
      goto L9980;
    case V2SImode:
      goto L9981;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9979: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L5467;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L5467: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 531;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9980: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L5472;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L5472: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 532;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9981: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L5477;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L5477: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 533;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9974: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 1
      && XINT (x1, 1) == 8)
    goto L5507;
  x1 = XEXP (x0, 0);
  goto L2818;

 L5507: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5508;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L5508: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 538;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9754: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L2360;
    }
 L9764: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x1, SFmode))
    {
      operands[0] = x1;
      goto L4269;
    }
 L9758: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L4181;
    }
  goto L2818;

 L2360: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L9982;
  x1 = XEXP (x0, 0);
  goto L9764;

 L9982: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IF_THEN_ELSE:
      goto L2361;
    case PLUS:
      goto L3932;
    case MINUS:
      goto L3966;
    case MULT:
      goto L4000;
    case DIV:
      goto L4034;
    case MOD:
      goto L4068;
    case NEG:
      goto L4102;
    case ABS:
      goto L4118;
    case SQRT:
      goto L4134;
    case FLOAT:
      goto L4150;
    case FLOAT_TRUNCATE:
      goto L4172;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9764;

 L2361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (arm_comparison_operator (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L2362;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L2362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (cc_register (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2363;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L2363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2364;
  x1 = XEXP (x0, 0);
  goto L9764;

 L2364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L9993;
  x1 = XEXP (x0, 0);
  goto L9764;

 L9993: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L2365;
    }
 L9994: ATTRIBUTE_UNUSED_LABEL
  if (fpa_add_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4250;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L2365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (s_register_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L2366;
    }
  x2 = XEXP (x1, 1);
  goto L9994;

 L2366: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_SOFT_FLOAT))
    {
      return 197;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L9994;

 L4250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (fpa_add_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4251;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4251: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 366;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3932: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3933;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3934;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3934: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 315;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3966: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L3967;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3967: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L3968;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L3968: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 320;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4001;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4001: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4002;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4002: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 325;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4034: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4035;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4036;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4036: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 330;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4068: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4069;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_rhs_operand (x2, SFmode))
    {
      operands[2] = x2;
      goto L4070;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4070: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 335;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4103;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4103: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 340;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4119;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4119: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 343;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4135;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4135: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 346;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4151;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4151: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 349;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4172: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4173;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4173: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 353;
    }
  x1 = XEXP (x0, 0);
  goto L9764;

 L4269: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode)
    goto L9995;
  x1 = XEXP (x0, 0);
  goto L9758;

 L9995: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4270;
    case MINUS:
      goto L4288;
    case MULT:
      goto L4306;
    case NEG:
      goto L4353;
    case ABS:
      goto L4363;
    case FLOAT:
      goto L4381;
    case FLOAT_TRUNCATE:
      goto L4439;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4271;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4271: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[2] = x2;
      goto L4272;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4272: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 369;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4288: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4289;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[2] = x2;
      goto L4290;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4290: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 372;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4307;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4307: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[2] = x2;
      goto L4308;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4308: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 375;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4353: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4354;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4354: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 382;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4363: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4364;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4364: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 384;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10002;
    case DImode:
      goto L10003;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L10002: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4382;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4382: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 386;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L10003: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4400;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4400: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 388;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4440;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4440: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 392;
    }
  x1 = XEXP (x0, 0);
  goto L9758;

 L4181: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L4182;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4182: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    {
      return 355;
    }
 L4453: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode))))
    {
      return 395;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9755: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG)
    goto L10005;
  goto L2818;

 L10005: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x1, 0) == 24)
    goto L2686;
 L10004: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x1, CC_NOOVmode))
    {
      operands[0] = x1;
      goto L2606;
    }
  goto L2818;

 L2686: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L2687;
  x1 = XEXP (x0, 0);
  goto L10004;

 L2687: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10007;
  x1 = XEXP (x0, 0);
  goto L10004;

 L10007: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == MINUS)
    goto L2735;
 L10006: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L2688;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L2736;
    }
  goto L10006;

 L2736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shift_operator (x3, SImode))
    {
      operands[2] = x3;
      goto L2737;
    }
  goto L10006;

 L2737: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2738;
    }
  goto L10006;

 L2738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2739;
    }
  goto L10006;

 L2739: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 227;
    }
  x2 = XEXP (x1, 0);
  goto L10006;

 L2688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L2689;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2689: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L2690;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2690: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L2691;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L2692;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2692: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 224;
    }
  x1 = XEXP (x0, 0);
  goto L10004;

 L2606: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode
      && GET_CODE (x1) == COMPARE)
    goto L2607;
  x1 = XEXP (x0, 0);
  goto L2818;

 L2607: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 7)
    goto L2608;
  x1 = XEXP (x0, 0);
  goto L2818;

 L2608: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L2609;
  x1 = XEXP (x0, 0);
  goto L2818;

 L2609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 215;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9757: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L3937;
    }
 L9765: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x1, DFmode))
    {
      operands[0] = x1;
      goto L4275;
    }
 L9759: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, DFmode))
    {
      operands[0] = x1;
      goto L4185;
    }
  goto L2818;

 L3937: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10008;
  x1 = XEXP (x0, 0);
  goto L9765;

 L10008: ATTRIBUTE_UNUSED_LABEL
  tem = recog_16 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L9765;

 L4275: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode)
    goto L10055;
  x1 = XEXP (x0, 0);
  goto L9759;

 L10055: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4276;
    case MINUS:
      goto L4294;
    case MULT:
      goto L4312;
    case NEG:
      goto L4358;
    case ABS:
      goto L4368;
    case FLOAT:
      goto L4394;
    case FLOAT_EXTEND:
      goto L4444;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4277;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[2] = x2;
      goto L4278;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4278: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 370;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4294: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4295;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[2] = x2;
      goto L4296;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4296: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 373;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4312: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4313;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4313: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[2] = x2;
      goto L4314;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4314: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 376;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4358: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4359;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4359: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 383;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DFmode))
    {
      operands[1] = x2;
      goto L4369;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4369: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 385;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4394: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10062;
    case DImode:
      goto L10063;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L10062: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4395;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4395: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 387;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L10063: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4405;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4405: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 389;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, SFmode))
    {
      operands[1] = x2;
      goto L4445;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4445: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 393;
    }
  x1 = XEXP (x0, 0);
  goto L9759;

 L4185: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      operands[1] = x1;
      goto L4186;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4186: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    {
      return 356;
    }
 L4457: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && TARGET_CIRRUS
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode))))
    {
      return 396;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9760: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, XFmode))
    {
      operands[0] = x1;
      goto L4189;
    }
  goto L2818;

 L4189: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, XFmode))
    {
      operands[1] = x1;
      goto L4190;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4190: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT && reload_completed))
    {
      return 357;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9761: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L4193;
  goto L2818;

 L4193: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode
      && GET_CODE (x1) == COMPARE)
    goto L4194;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4194: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10064;
    case DFmode:
      goto L10066;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L10064: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4195;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4196;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4196: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 358;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L10066: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4207;
  if (s_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L4201;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[0] = x3;
      goto L4208;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4209;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4209: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 360;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10068;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10068: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4215;
  if (fpa_add_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4202;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4216;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4216: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 361;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4202: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 359;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9762: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG
      && XINT (x1, 0) == 24)
    goto L4219;
  goto L2818;

 L4219: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPEmode
      && GET_CODE (x1) == COMPARE)
    goto L4220;
  x1 = XEXP (x0, 0);
  goto L2818;

 L4220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SFmode:
      goto L10069;
    case DFmode:
      goto L10071;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L10069: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L4221;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L4222;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4222: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 362;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L10071: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4233;
  if (s_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L4227;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[0] = x3;
      goto L4234;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpa_add_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4235;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4235: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 364;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4227: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10073;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10073: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == FLOAT_EXTEND)
    goto L4241;
  if (fpa_add_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L4228;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4241: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L4242;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4242: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 365;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L4228: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_HARD_FLOAT))
    {
      return 363;
    }
  x1 = XEXP (x0, 0);
  goto L2818;

 L9763: ATTRIBUTE_UNUSED_LABEL
  if (cirrus_fp_register (x1, DImode))
    {
      operands[0] = x1;
      goto L4263;
    }
 L9766: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_di_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4448;
    }
 L9767: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L4460;
    }
  goto L2818;

 L4263: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10074;
  x1 = XEXP (x0, 0);
  goto L9766;

 L10074: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L4264;
    case MINUS:
      goto L4282;
    case MULT:
      goto L4300;
    case ASHIFT:
      goto L4318;
    case ASHIFTRT:
      goto L4330;
    case ABS:
      goto L4336;
    case NEG:
      goto L4348;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4264: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4265;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4265: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[2] = x2;
      goto L4266;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4266: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 368;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4283;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[2] = x2;
      goto L4284;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4284: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 371;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[2] = x2;
      goto L4301;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4301: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4302;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4302: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 374;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4319;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L4320;
    }
  if (cirrus_shift_const (x2, SImode))
    {
      operands[2] = x2;
      goto L4326;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4320: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 377;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4326: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 378;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4330: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4331;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4331: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (cirrus_shift_const (x2, SImode))
    {
      operands[2] = x2;
      goto L4332;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4332: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 379;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4337;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4337: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 380;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4348: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cirrus_fp_register (x2, DImode))
    {
      operands[1] = x2;
      goto L4349;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4349: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS)
      && pnum_clobbers != NULL)
    {
      *pnum_clobbers = 1;
      return 381;
    }
  x1 = XEXP (x0, 0);
  goto L9766;

 L4448: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (di_operand (x1, DImode))
    {
      operands[1] = x1;
      goto L4449;
    }
  x1 = XEXP (x0, 0);
  goto L9767;

 L4449: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && TARGET_CIRRUS))
    {
      return 394;
    }
 L4486: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 401;
    }
  x1 = XEXP (x0, 0);
  goto L9767;

 L4460: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10081;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10081: ATTRIBUTE_UNUSED_LABEL
  tem = recog_17 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2818;

 L9769: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L4501;
    }
 L9772: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L4517;
    }
  goto L2818;

 L4501: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L4502;
    }
  x1 = XEXP (x0, 0);
  goto L9772;

 L4502: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 404;
    }
  x1 = XEXP (x0, 0);
  goto L9772;

 L4517: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V8QImode)
    goto L10140;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10140: ATTRIBUTE_UNUSED_LABEL
  tem = recog_18 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2818;

 L9770: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L4505;
    }
 L9773: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L4523;
    }
  goto L2818;

 L4505: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L4506;
    }
  x1 = XEXP (x0, 0);
  goto L9773;

 L4506: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 405;
    }
  x1 = XEXP (x0, 0);
  goto L9773;

 L4523: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V4HImode)
    goto L10173;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10173: ATTRIBUTE_UNUSED_LABEL
  tem = recog_19 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2818;

 L9771: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L4509;
    }
 L9774: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L4529;
    }
  goto L2818;

 L4509: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L4510;
    }
 L4513: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L4514;
    }
  x1 = XEXP (x0, 0);
  goto L9774;

 L4510: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 406;
    }
  x1 = XEXP (x0, 1);
  goto L4513;

 L4514: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 407;
    }
  x1 = XEXP (x0, 0);
  goto L9774;

 L4529: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode)
    goto L10235;
  x1 = XEXP (x0, 0);
  goto L2818;

 L10235: ATTRIBUTE_UNUSED_LABEL
  tem = recog_20 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L2818;

 L2819: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE)
    goto L2820;
  goto ret0;

 L2820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode)
    goto L10274;
  goto ret0;

 L10274: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IF_THEN_ELSE:
      goto L2821;
    case AND:
      goto L2845;
    case IOR:
      goto L2856;
    default:
     break;
   }
  goto ret0;

 L2821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2822;
    }
  goto ret0;

 L2822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2823;
    }
  goto ret0;

 L2823: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2824;
    }
  goto ret0;

 L2824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[5] = x3;
      goto L2825;
    }
  goto ret0;

 L2825: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2826;
    }
  goto ret0;

 L2826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2827;
    }
  goto ret0;

 L2827: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT)
    goto L10277;
  goto ret0;

 L10277: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x3, 0) == XWINT (x3, 0))
    switch ((int) XWINT (x3, 0))
      {
      case 0L:
        goto L2828;
      case 1L:
        goto L2840;
      default:
        break;
      }
  goto ret0;

 L2828: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 234;
    }
  goto ret0;

 L2840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 235;
    }
  goto ret0;

 L2845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2846;
    }
  goto ret0;

 L2846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2847;
    }
  goto ret0;

 L2847: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2848;
    }
  goto ret0;

 L2848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[5] = x3;
      goto L2849;
    }
  goto ret0;

 L2849: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2850;
    }
  goto ret0;

 L2850: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2851;
    }
  goto ret0;

 L2851: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 236;
    }
  goto ret0;

 L2856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[4] = x3;
      goto L2857;
    }
  goto ret0;

 L2857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[0] = x4;
      goto L2858;
    }
  goto ret0;

 L2858: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L2859;
    }
  goto ret0;

 L2859: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[5] = x3;
      goto L2860;
    }
  goto ret0;

 L2860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L2861;
    }
  goto ret0;

 L2861: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L2862;
    }
  goto ret0;

 L2862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L
      && (TARGET_ARM))
    {
      return 237;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_22 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10300;
    case DImode:
      goto L10302;
    case HImode:
      goto L10303;
    case QImode:
      goto L10306;
    case SFmode:
      goto L10307;
    case DFmode:
      goto L10309;
    case XFmode:
      goto L10311;
    case V8QImode:
      goto L10312;
    case V4HImode:
      goto L10313;
    case V2SImode:
      goto L10314;
    default:
      break;
    }
  goto ret0;

 L10300: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L4497;
    }
 L10301: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6502;
    }
 L10319: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9389;
    }
  goto ret0;

 L4497: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L4498;
    }
  x2 = XEXP (x1, 0);
  goto L10301;

 L4498: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    {
      return 403;
    }
 L6602: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && ! TARGET_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))))
    {
      return 786;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10301;

 L6502: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10320;
  x2 = XEXP (x1, 0);
  goto L10319;

 L10320: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L6503;
    case NOT:
      goto L6521;
    case ZERO_EXTEND:
      goto L6557;
    case SIGN_EXTEND:
      goto L6575;
    case ROTATE:
      goto L6628;
    case CLZ:
      goto L7444;
    case FIX:
      goto L7815;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6503: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6504;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6504: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 775;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L6521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6522;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6522: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 777;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L6557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L10327;
    case QImode:
      goto L10328;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L10327: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6558;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6558: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch4)))
    {
      return 781;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L10328: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6567;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6567: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 782;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L6575: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L10329;
    case QImode:
      goto L10330;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L10329: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L6576;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6576: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch4)))
    {
      return 783;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L10330: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6594;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6594: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch4)))
    {
      return 785;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L6628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10331;
  x2 = XEXP (x1, 0);
  goto L10319;

 L10331: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MEM:
      goto L10333;
    case SUBREG:
      goto L10334;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10319;

 L10333: ATTRIBUTE_UNUSED_LABEL
  if (offsettable_memory_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6629;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && ((TARGET_ARM) && (TARGET_ARM && (!TARGET_MMU_TRAPS))))
    {
      return 788;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L10334: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x3, 1) == 0)
    goto L6662;
  x2 = XEXP (x1, 0);
  goto L10319;

 L6662: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6663;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L6663: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 16L
      && ((TARGET_ARM) && (TARGET_ARM
   && BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS)))
    {
      return 792;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L7444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7445;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L7445: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch5)))
    {
      return 837;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L7815: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SFmode:
      goto L10335;
    case DFmode:
      goto L10336;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L10335: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FIX)
    goto L7816;
  x2 = XEXP (x1, 0);
  goto L10319;

 L7816: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7817;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L7817: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 873;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L10336: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FIX)
    goto L7826;
  x2 = XEXP (x1, 0);
  goto L10319;

 L7826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, DFmode))
    {
      operands[1] = x4;
      goto L7827;
    }
  x2 = XEXP (x1, 0);
  goto L10319;

 L7827: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 874;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10319;

 L9389: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10337;
  goto ret0;

 L10337: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L10339;
    case UNSPEC_VOLATILE:
      goto L10340;
    default:
     break;
   }
  goto ret0;

 L10339: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 10)
    goto L9390;
  goto ret0;

 L9390: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case V8QImode:
      goto L10341;
    case V4HImode:
      goto L10342;
    case V2SImode:
      goto L10343;
    default:
      break;
    }
  goto ret0;

 L10341: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L9391;
    }
  goto ret0;

 L9391: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1011;
    }
  goto ret0;

 L10342: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9400;
    }
  goto ret0;

 L9400: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1012;
    }
  goto ret0;

 L10343: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9409;
    }
  goto ret0;

 L9409: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1013;
    }
  goto ret0;

 L10340: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 8)
    goto L9459;
  goto ret0;

 L9459: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (immediate_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9460;
    }
  goto ret0;

 L9460: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1018;
    }
  goto ret0;

 L10302: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6511;
    }
 L10317: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8869;
    }
  goto ret0;

 L6511: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10344;
  x2 = XEXP (x1, 0);
  goto L10317;

 L10344: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NOT:
      goto L6512;
    case ZERO_EXTEND:
      goto L6530;
    case SIGN_EXTEND:
      goto L6548;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10317;

 L6512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6513;
    }
  x2 = XEXP (x1, 0);
  goto L10317;

 L6513: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 776;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10317;

 L6530: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10347;
    case QImode:
      goto L10348;
    default:
      break;
    }
  x2 = XEXP (x1, 0);
  goto L10317;

 L10347: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6531;
    }
  x2 = XEXP (x1, 0);
  goto L10317;

 L6531: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 778;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10317;

 L10348: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6540;
    }
  x2 = XEXP (x1, 0);
  goto L10317;

 L6540: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 779;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10317;

 L6548: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6549;
    }
  x2 = XEXP (x1, 0);
  goto L10317;

 L6549: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 780;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10317;

 L8869: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10349;
  goto ret0;

 L10349: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8870;
    case SIGN_EXTEND:
      goto L8907;
    case UNSPEC:
      goto L10352;
    default:
     break;
   }
  goto ret0;

 L8870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8871;
  goto ret0;

 L8871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8872;
    }
  goto ret0;

 L8872: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8873;
  goto ret0;

 L8873: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10353;
  goto ret0;

 L10353: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 1L:
        goto L10355;
      case 0L:
        goto L10356;
      default:
        break;
      }
  goto ret0;

 L10355: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 966;
    }
  goto ret0;

 L10356: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 972;
    }
  goto ret0;

 L8907: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8908;
  goto ret0;

 L8908: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8909;
    }
  goto ret0;

 L8909: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8910;
  goto ret0;

 L8910: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10357;
  goto ret0;

 L10357: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 1L:
        goto L10359;
      case 0L:
        goto L10360;
      default:
        break;
      }
  goto ret0;

 L10359: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 969;
    }
  goto ret0;

 L10360: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 975;
    }
  goto ret0;

 L10352: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 9)
    goto L9417;
  goto ret0;

 L9417: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    case V8QImode:
      goto L10361;
    case V4HImode:
      goto L10362;
    case V2SImode:
      goto L10363;
    default:
      break;
    }
  goto ret0;

 L10361: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L9418;
    }
  goto ret0;

 L9418: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1014;
    }
  goto ret0;

 L10362: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9427;
    }
  goto ret0;

 L9427: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1015;
    }
  goto ret0;

 L10363: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9436;
    }
  goto ret0;

 L9436: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1016;
    }
  goto ret0;

 L10303: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6583;
    }
 L10304: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6636;
    }
 L10305: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, HImode))
    {
      operands[0] = x2;
      goto L6644;
    }
  goto ret0;

 L6583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode
      && GET_CODE (x2) == SIGN_EXTEND)
    goto L6584;
  x2 = XEXP (x1, 0);
  goto L10304;

 L6584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L6585;
    }
  x2 = XEXP (x1, 0);
  goto L10304;

 L6585: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch4)))
    {
      return 784;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10304;

 L6636: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6637;
    }
  x2 = XEXP (x1, 0);
  goto L10305;

 L6637: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && arm_arch4
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1]))))))
    {
      return 789;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10305;

 L6644: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6645;
    }
 L6670: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x2, HImode))
    {
      operands[1] = x2;
      goto L6671;
    }
  goto ret0;

 L6645: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && !arm_arch4
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1]))))))
    {
      return 790;
    }
 L6653: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && !arm_arch4
   && BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && (GET_CODE (operands[1]) != CONST_INT
       || const_ok_for_arm (INTVAL (operands[1]))
       || const_ok_for_arm (~INTVAL (operands[1]))))))
    {
      return 791;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6670;

 L6671: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_MMU_TRAPS)))
    {
      return 793;
    }
  goto ret0;

 L10306: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, QImode))
    {
      operands[0] = x2;
      goto L6678;
    }
  goto ret0;

 L6678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L6679;
    }
  goto ret0;

 L6679: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))))
    {
      return 794;
    }
  goto ret0;

 L10307: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L6686;
    }
 L10308: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L7712;
    }
  goto ret0;

 L6686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SFmode))
    {
      operands[1] = x2;
      goto L6687;
    }
  x2 = XEXP (x1, 0);
  goto L10308;

 L6687: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && !TARGET_CIRRUS
   && TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))))
    {
      return 795;
    }
 L7853: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], SFmode)))))
    {
      return 877;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10308;

 L7712: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L10364;
  goto ret0;

 L10364: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L7713;
    case ABS:
      goto L7741;
    case SQRT:
      goto L7769;
    case FLOAT:
      goto L7797;
    case FLOAT_TRUNCATE:
      goto L7835;
    default:
     break;
   }
  goto ret0;

 L7713: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7714;
    }
  goto ret0;

 L7714: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 862;
    }
  goto ret0;

 L7741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7742;
    }
  goto ret0;

 L7742: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 865;
    }
  goto ret0;

 L7769: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7770;
    }
  goto ret0;

 L7770: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 868;
    }
  goto ret0;

 L7797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7798;
    }
  goto ret0;

 L7798: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 871;
    }
  goto ret0;

 L7835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7836;
    }
  goto ret0;

 L7836: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 875;
    }
  goto ret0;

 L10309: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L7721;
    }
 L10310: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L7860;
    }
  goto ret0;

 L7721: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10369;
  x2 = XEXP (x1, 0);
  goto L10310;

 L10369: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case NEG:
      goto L7722;
    case ABS:
      goto L7750;
    case SQRT:
      goto L7778;
    case FLOAT:
      goto L7806;
    case FLOAT_EXTEND:
      goto L7844;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10375;
  x2 = XEXP (x1, 0);
  goto L10310;

 L10375: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7732;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7723;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7732: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7733;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7733: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 864;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7723: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 863;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7750: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10377;
  x2 = XEXP (x1, 0);
  goto L10310;

 L10377: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7760;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7751;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7761;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7761: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 867;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7751: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 866;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7778: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10379;
  x2 = XEXP (x1, 0);
  goto L10310;

 L10379: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7788;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7779;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7788: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7789;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7789: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 870;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7779: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 869;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7807;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7807: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 872;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7845;
    }
  x2 = XEXP (x1, 0);
  goto L10310;

 L7845: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 876;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10310;

 L7860: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, DFmode))
    {
      operands[1] = x2;
      goto L7861;
    }
  goto ret0;

 L7861: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM
   && TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))))
    {
      return 878;
    }
  goto ret0;

 L10311: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, XFmode))
    {
      operands[0] = x2;
      goto L7868;
    }
  goto ret0;

 L7868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, XFmode))
    {
      operands[1] = x2;
      goto L7869;
    }
  goto ret0;

 L7869: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT && reload_completed)))
    {
      return 879;
    }
  goto ret0;

 L10312: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L7917;
    }
 L10318: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L9362;
    }
  goto ret0;

 L7917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L7918;
    }
  x2 = XEXP (x1, 0);
  goto L10318;

 L7918: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 884;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10318;

 L9362: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == VEC_DUPLICATE)
    goto L9363;
  goto ret0;

 L9363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, QImode))
    {
      operands[1] = x3;
      goto L9364;
    }
  goto ret0;

 L9364: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1008;
    }
  goto ret0;

 L10313: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L7925;
    }
 L10315: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8843;
    }
  goto ret0;

 L7925: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L7926;
    }
  x2 = XEXP (x1, 0);
  goto L10315;

 L7926: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 885;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10315;

 L8843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode)
    goto L10380;
  goto ret0;

 L10380: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8844;
    case SIGN_EXTEND:
      goto L8881;
    case VEC_DUPLICATE:
      goto L9372;
    default:
     break;
   }
  goto ret0;

 L8844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4QImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8845;
  goto ret0;

 L8845: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8846;
    }
  goto ret0;

 L8846: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 4)
    goto L8847;
  goto ret0;

 L8847: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10383;
  goto ret0;

 L10383: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 4L:
        goto L8848;
      case 0L:
        goto L8922;
      default:
        break;
      }
  goto ret0;

 L8848: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8849;
  goto ret0;

 L8849: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8850;
  goto ret0;

 L8850: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 964;
    }
  goto ret0;

 L8922: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8923;
  goto ret0;

 L8923: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8924;
  goto ret0;

 L8924: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 970;
    }
  goto ret0;

 L8881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4QImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8882;
  goto ret0;

 L8882: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8883;
    }
  goto ret0;

 L8883: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 4)
    goto L8884;
  goto ret0;

 L8884: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10385;
  goto ret0;

 L10385: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 4L:
        goto L8885;
      case 0L:
        goto L8959;
      default:
        break;
      }
  goto ret0;

 L8885: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8886;
  goto ret0;

 L8886: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8887;
  goto ret0;

 L8887: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 967;
    }
  goto ret0;

 L8959: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8960;
  goto ret0;

 L8960: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8961;
  goto ret0;

 L8961: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 973;
    }
  goto ret0;

 L9372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L9373;
    }
  goto ret0;

 L9373: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1009;
    }
  goto ret0;

 L10314: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L7933;
    }
 L10316: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8857;
    }
  goto ret0;

 L7933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L7934;
    }
 L7941: ATTRIBUTE_UNUSED_LABEL
  if (immediate_operand (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L7942;
    }
  x2 = XEXP (x1, 0);
  goto L10316;

 L7934: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 886;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L7941;

 L7942: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 887;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10316;

 L8857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode)
    goto L10387;
  goto ret0;

 L10387: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8858;
    case SIGN_EXTEND:
      goto L8895;
    case VEC_DUPLICATE:
      goto L9381;
    default:
     break;
   }
  goto ret0;

 L8858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8859;
  goto ret0;

 L8859: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8860;
    }
  goto ret0;

 L8860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L8861;
  goto ret0;

 L8861: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10390;
  goto ret0;

 L10390: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 2L:
        goto L8862;
      case 0L:
        goto L8936;
      default:
        break;
      }
  goto ret0;

 L8862: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 965;
    }
  goto ret0;

 L8936: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 971;
    }
  goto ret0;

 L8895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8896;
  goto ret0;

 L8896: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8897;
    }
  goto ret0;

 L8897: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L8898;
  goto ret0;

 L8898: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10392;
  goto ret0;

 L10392: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 2L:
        goto L8899;
      case 0L:
        goto L8973;
      default:
        break;
      }
  goto ret0;

 L8899: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 968;
    }
  goto ret0;

 L8973: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 974;
    }
  goto ret0;

 L9381: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L9382;
    }
  goto ret0;

 L9382: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1010;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_23 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6163;
    }
 L10401: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L7876;
    }
  goto ret0;

 L6163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10428;
  x2 = XEXP (x1, 0);
  goto L10401;

 L10428: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case MULT:
      goto L6164;
    case AND:
      goto L6326;
    case IOR:
      goto L6385;
    case XOR:
      goto L6427;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10432;
  x2 = XEXP (x1, 0);
  goto L10401;

 L10432: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L6165;
    case ZERO_EXTEND:
      goto L6177;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6165: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6166;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6166: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == SIGN_EXTEND)
    goto L6167;
  x2 = XEXP (x1, 0);
  goto L10401;

 L6167: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6168;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6168: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 747;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6177: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6178;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6178: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == ZERO_EXTEND)
    goto L6179;
  x2 = XEXP (x1, 0);
  goto L10401;

 L6179: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6180;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6180: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 748;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6326: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == NOT)
    goto L6327;
  x2 = XEXP (x1, 0);
  goto L10401;

 L6327: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L10435;
  x2 = XEXP (x1, 0);
  goto L10401;

 L10435: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case ZERO_EXTEND:
      goto L6339;
    case SIGN_EXTEND:
      goto L6351;
    case SUBREG:
    case REG:
      goto L10434;
    default:
      x2 = XEXP (x1, 0);
      goto L10401;
   }
 L10434: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L6328;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6339: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6340;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6340: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6341;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6341: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 760;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6351: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6352;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6353;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6353: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 761;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6329;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6329: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 759;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6385: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10438;
  x2 = XEXP (x1, 0);
  goto L10401;

 L10438: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L6396;
    case SIGN_EXTEND:
      goto L6407;
    case SUBREG:
    case REG:
      goto L10437;
    default:
      x2 = XEXP (x1, 0);
      goto L10401;
   }
 L10437: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6386;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6397;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6397: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6398;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6398: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 765;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6407: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6408;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6408: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6409;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6409: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 766;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6387;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6387: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && ! TARGET_IWMMXT)))
    {
      return 764;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6427: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10441;
  x2 = XEXP (x1, 0);
  goto L10401;

 L10441: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L6438;
    case SIGN_EXTEND:
      goto L6449;
    case SUBREG:
    case REG:
      goto L10440;
    default:
      x2 = XEXP (x1, 0);
      goto L10401;
   }
 L10440: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6428;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6438: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6439;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6439: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6440;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6440: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 769;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6450;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6451;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6451: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 770;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L6428: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L6429;
    }
  x2 = XEXP (x1, 0);
  goto L10401;

 L6429: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && !TARGET_IWMMXT)))
    {
      return 768;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10401;

 L7876: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10443;
  goto ret0;

 L10443: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case IOR:
      goto L7877;
    case XOR:
      goto L7887;
    case AND:
      goto L7897;
    case UNSPEC:
      goto L10452;
    case ROTATERT:
      goto L9012;
    case ASHIFTRT:
      goto L9042;
    case LSHIFTRT:
      goto L9072;
    case ASHIFT:
      goto L9102;
    default:
     break;
   }
  goto ret0;

 L7877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7878;
    }
  goto ret0;

 L7878: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7879;
    }
  goto ret0;

 L7879: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 880;
    }
  goto ret0;

 L7887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7888;
    }
  goto ret0;

 L7888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7889;
    }
  goto ret0;

 L7889: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 881;
    }
  goto ret0;

 L7897: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L7898;
    }
  goto ret0;

 L7898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode)
    goto L10455;
  goto ret0;

 L10455: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L7909;
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L7899;
    }
  goto ret0;

 L7909: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L7910;
    }
  goto ret0;

 L7910: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 883;
    }
  goto ret0;

 L7899: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 882;
    }
  goto ret0;

 L10452: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L10456;
  goto ret0;

 L10456: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 15L:
      goto L8179;
    case 16L:
      goto L8200;
    default:
      break;
    }
  goto ret0;

 L8179: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8180;
    }
  goto ret0;

 L8180: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8181;
    }
  goto ret0;

 L8181: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 910;
    }
  goto ret0;

 L8200: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8201;
    }
  goto ret0;

 L8201: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8202;
    }
  goto ret0;

 L8202: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 912;
    }
  goto ret0;

 L9012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9013;
    }
  goto ret0;

 L9013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10458;
    case DImode:
      goto L10459;
    default:
      break;
    }
  goto ret0;

 L10458: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9014;
    }
  goto ret0;

 L9014: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 978;
    }
  goto ret0;

 L10459: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9134;
    }
  goto ret0;

 L9134: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 990;
    }
  goto ret0;

 L9042: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9043;
    }
  goto ret0;

 L9043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10460;
    case DImode:
      goto L10461;
    default:
      break;
    }
  goto ret0;

 L10460: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9044;
    }
  goto ret0;

 L9044: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 981;
    }
  goto ret0;

 L10461: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9164;
    }
  goto ret0;

 L9164: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 993;
    }
  goto ret0;

 L9072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9073;
    }
  goto ret0;

 L9073: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10462;
    case DImode:
      goto L10463;
    default:
      break;
    }
  goto ret0;

 L10462: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9074;
    }
  goto ret0;

 L9074: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 984;
    }
  goto ret0;

 L10463: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9194;
    }
  goto ret0;

 L9194: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 996;
    }
  goto ret0;

 L9102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9103;
    }
  goto ret0;

 L9103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10464;
    case DImode:
      goto L10465;
    default:
      break;
    }
  goto ret0;

 L10464: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9104;
    }
  goto ret0;

 L9104: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 987;
    }
  goto ret0;

 L10465: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9224;
    }
  goto ret0;

 L9224: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 999;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_24 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7950;
    case SS_PLUS:
      goto L7980;
    case US_PLUS:
      goto L8010;
    case MINUS:
      goto L8040;
    case SS_MINUS:
      goto L8070;
    case US_MINUS:
      goto L8100;
    case ASHIFTRT:
      goto L8253;
    case ABS:
      goto L8313;
    case SMAX:
      goto L8512;
    case UMAX:
      goto L8522;
    case SMIN:
      goto L8572;
    case UMIN:
      goto L8582;
    case VEC_CONCAT:
      goto L8632;
    case VEC_MERGE:
      goto L8704;
    case UNSPEC:
      goto L10521;
    default:
     break;
   }
  goto ret0;

 L7950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L7951;
    }
  goto ret0;

 L7951: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L7952;
    }
  goto ret0;

 L7952: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 888;
    }
  goto ret0;

 L7980: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L7981;
    }
  goto ret0;

 L7981: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L7982;
    }
  goto ret0;

 L7982: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 891;
    }
  goto ret0;

 L8010: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8011;
    }
  goto ret0;

 L8011: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8012;
    }
  goto ret0;

 L8012: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 894;
    }
  goto ret0;

 L8040: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8041;
    }
  goto ret0;

 L8041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8042;
    }
  goto ret0;

 L8042: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 897;
    }
  goto ret0;

 L8070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8071;
    }
  goto ret0;

 L8071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8072;
    }
  goto ret0;

 L8072: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 900;
    }
  goto ret0;

 L8100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8101;
    }
  goto ret0;

 L8101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8102;
    }
  goto ret0;

 L8102: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 903;
    }
  goto ret0;

 L8253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == PLUS)
    goto L8254;
  goto ret0;

 L8254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V8QImode)
    goto L10523;
  goto ret0;

 L10523: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == PLUS)
    goto L8255;
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8293;
    }
  goto ret0;

 L8255: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V8QImode))
    {
      operands[1] = x5;
      goto L8256;
    }
  goto ret0;

 L8256: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (register_operand (x5, V8QImode))
    {
      operands[2] = x5;
      goto L8257;
    }
  goto ret0;

 L8257: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V8QImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 8)
    goto L8258;
  goto ret0;

 L8258: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8259;
  goto ret0;

 L8259: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8260;
  goto ret0;

 L8260: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8261;
  goto ret0;

 L8261: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8262;
  goto ret0;

 L8262: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8263;
  goto ret0;

 L8263: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8264;
  goto ret0;

 L8264: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8265;
  goto ret0;

 L8265: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8266;
  goto ret0;

 L8266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 917;
    }
  goto ret0;

 L8293: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L8294;
    }
  goto ret0;

 L8294: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 919;
    }
  goto ret0;

 L8313: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == MINUS)
    goto L8314;
  goto ret0;

 L8314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8315;
    }
  goto ret0;

 L8315: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L8316;
    }
  goto ret0;

 L8316: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 921;
    }
  goto ret0;

 L8512: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8513;
    }
  goto ret0;

 L8513: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8514;
    }
  goto ret0;

 L8514: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 940;
    }
  goto ret0;

 L8522: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8523;
    }
  goto ret0;

 L8523: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8524;
    }
  goto ret0;

 L8524: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 941;
    }
  goto ret0;

 L8572: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8573;
    }
  goto ret0;

 L8573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8574;
    }
  goto ret0;

 L8574: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 946;
    }
  goto ret0;

 L8582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8583;
    }
  goto ret0;

 L8583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L8584;
    }
  goto ret0;

 L8584: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 947;
    }
  goto ret0;

 L8632: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4QImode)
    goto L10525;
  goto ret0;

 L10525: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SS_TRUNCATE:
      goto L8633;
    case US_TRUNCATE:
      goto L8669;
    default:
     break;
   }
  goto ret0;

 L8633: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8634;
    }
  goto ret0;

 L8634: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4QImode
      && GET_CODE (x3) == SS_TRUNCATE)
    goto L8635;
  goto ret0;

 L8635: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8636;
    }
  goto ret0;

 L8636: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 952;
    }
  goto ret0;

 L8669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8670;
    }
  goto ret0;

 L8670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4QImode
      && GET_CODE (x3) == US_TRUNCATE)
    goto L8671;
  goto ret0;

 L8671: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8672;
    }
  goto ret0;

 L8672: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 955;
    }
  goto ret0;

 L8704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8705;
  goto ret0;

 L8705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8706;
    }
  goto ret0;

 L8706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 8)
    goto L8707;
  goto ret0;

 L8707: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10527;
  goto ret0;

 L10527: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 4L:
        goto L8708;
      case 0L:
        goto L8778;
      default:
        break;
      }
  goto ret0;

 L8708: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8709;
  goto ret0;

 L8709: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8710;
  goto ret0;

 L8710: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8711;
  goto ret0;

 L8711: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8712;
  goto ret0;

 L8712: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8713;
  goto ret0;

 L8713: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L)
    goto L8714;
  goto ret0;

 L8714: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8715;
  goto ret0;

 L8715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8716;
  goto ret0;

 L8716: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L8717;
    }
  goto ret0;

 L8717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 8)
    goto L8718;
  goto ret0;

 L8718: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8719;
  goto ret0;

 L8719: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L8720;
  goto ret0;

 L8720: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8721;
  goto ret0;

 L8721: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8722;
  goto ret0;

 L8722: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8723;
  goto ret0;

 L8723: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8724;
  goto ret0;

 L8724: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8725;
  goto ret0;

 L8725: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L)
    goto L8726;
  goto ret0;

 L8726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 85L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 958;
    }
  goto ret0;

 L8778: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L8779;
  goto ret0;

 L8779: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8780;
  goto ret0;

 L8780: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8781;
  goto ret0;

 L8781: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8782;
  goto ret0;

 L8782: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8783;
  goto ret0;

 L8783: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8784;
  goto ret0;

 L8784: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L)
    goto L8785;
  goto ret0;

 L8785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8786;
  goto ret0;

 L8786: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[2] = x4;
      goto L8787;
    }
  goto ret0;

 L8787: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 8)
    goto L8788;
  goto ret0;

 L8788: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L8789;
  goto ret0;

 L8789: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8790;
  goto ret0;

 L8790: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 5L)
    goto L8791;
  goto ret0;

 L8791: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8792;
  goto ret0;

 L8792: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 4);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 6L)
    goto L8793;
  goto ret0;

 L8793: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 5);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8794;
  goto ret0;

 L8794: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 6);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 7L)
    goto L8795;
  goto ret0;

 L8795: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 7);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8796;
  goto ret0;

 L8796: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 85L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 961;
    }
  goto ret0;

 L10521: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L10529;
  goto ret0;

 L10529: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 11L:
      goto L9476;
    case 12L:
      goto L9496;
    default:
      break;
    }
  goto ret0;

 L9476: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L9477;
    }
  goto ret0;

 L9477: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L9478;
    }
  goto ret0;

 L9478: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1020;
    }
  goto ret0;

 L9496: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L9497;
    }
  goto ret0;

 L9497: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V8QImode))
    {
      operands[2] = x3;
      goto L9498;
    }
  goto ret0;

 L9498: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1022;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_25 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7960;
    case SS_PLUS:
      goto L7990;
    case US_PLUS:
      goto L8020;
    case MINUS:
      goto L8050;
    case SS_MINUS:
      goto L8080;
    case US_MINUS:
      goto L8110;
    case MULT:
      goto L8130;
    case TRUNCATE:
      goto L8140;
    case ASHIFTRT:
      goto L8274;
    case UNSPEC:
      goto L10554;
    case SMAX:
      goto L8532;
    case UMAX:
      goto L8542;
    case SMIN:
      goto L8592;
    case UMIN:
      goto L8602;
    case VEC_CONCAT:
      goto L8644;
    case VEC_MERGE:
      goto L8734;
    case ROTATERT:
      goto L8992;
    case LSHIFTRT:
      goto L9052;
    case ASHIFT:
      goto L9082;
    default:
     break;
   }
  goto ret0;

 L7960: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7961;
    }
  goto ret0;

 L7961: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7962;
    }
  goto ret0;

 L7962: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 889;
    }
  goto ret0;

 L7990: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L7991;
    }
  goto ret0;

 L7991: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L7992;
    }
  goto ret0;

 L7992: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 892;
    }
  goto ret0;

 L8020: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8021;
    }
  goto ret0;

 L8021: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8022;
    }
  goto ret0;

 L8022: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 895;
    }
  goto ret0;

 L8050: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8051;
    }
  goto ret0;

 L8051: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8052;
    }
  goto ret0;

 L8052: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 898;
    }
  goto ret0;

 L8080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8081;
    }
  goto ret0;

 L8081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8082;
    }
  goto ret0;

 L8082: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 901;
    }
  goto ret0;

 L8110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8111;
    }
  goto ret0;

 L8111: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8112;
    }
  goto ret0;

 L8112: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 904;
    }
  goto ret0;

 L8130: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8131;
    }
  goto ret0;

 L8131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8132;
    }
  goto ret0;

 L8132: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 906;
    }
  goto ret0;

 L8140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4SImode
      && GET_CODE (x3) == LSHIFTRT)
    goto L8141;
  goto ret0;

 L8141: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4SImode
      && GET_CODE (x4) == MULT)
    goto L8142;
  goto ret0;

 L8142: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V4SImode)
    goto L10559;
  goto ret0;

 L10559: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case SIGN_EXTEND:
      goto L8143;
    case ZERO_EXTEND:
      goto L8157;
    default:
     break;
   }
  goto ret0;

 L8143: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L8144;
    }
  goto ret0;

 L8144: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L8145;
  goto ret0;

 L8145: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L8146;
    }
  goto ret0;

 L8146: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 907;
    }
  goto ret0;

 L8157: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[1] = x6;
      goto L8158;
    }
  goto ret0;

 L8158: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == V4SImode
      && GET_CODE (x5) == ZERO_EXTEND)
    goto L8159;
  goto ret0;

 L8159: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V4HImode))
    {
      operands[2] = x6;
      goto L8160;
    }
  goto ret0;

 L8160: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 908;
    }
  goto ret0;

 L8274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4HImode)
    goto L10561;
  goto ret0;

 L10561: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == PLUS)
    goto L8275;
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9023;
    }
  goto ret0;

 L8275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == V4HImode)
    goto L10563;
  goto ret0;

 L10563: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == PLUS)
    goto L8276;
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8304;
    }
  goto ret0;

 L8276: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, V4HImode))
    {
      operands[1] = x5;
      goto L8277;
    }
  goto ret0;

 L8277: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (register_operand (x5, V4HImode))
    {
      operands[2] = x5;
      goto L8278;
    }
  goto ret0;

 L8278: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == V4HImode
      && GET_CODE (x4) == CONST_VECTOR
      && XVECLEN (x4, 0) == 4)
    goto L8279;
  goto ret0;

 L8279: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8280;
  goto ret0;

 L8280: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8281;
  goto ret0;

 L8281: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8282;
  goto ret0;

 L8282: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8283;
  goto ret0;

 L8283: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 918;
    }
  goto ret0;

 L8304: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8305;
    }
  goto ret0;

 L8305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 920;
    }
  goto ret0;

 L9023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10565;
    case DImode:
      goto L10566;
    default:
      break;
    }
  goto ret0;

 L10565: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9024;
    }
  goto ret0;

 L9024: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 979;
    }
  goto ret0;

 L10566: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9144;
    }
  goto ret0;

 L9144: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 991;
    }
  goto ret0;

 L10554: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 2)
    goto L10567;
  goto ret0;

 L10567: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 8L:
      goto L8421;
    case 18L:
      goto L9232;
    case 19L:
      goto L9242;
    case 11L:
      goto L9486;
    case 12L:
      goto L9506;
    default:
      break;
    }
  goto ret0;

 L8421: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8422;
    }
  goto ret0;

 L8422: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (immediate_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8423;
    }
  goto ret0;

 L8423: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 930;
    }
  goto ret0;

 L9232: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9233;
    }
  goto ret0;

 L9233: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L9234;
    }
  goto ret0;

 L9234: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1000;
    }
  goto ret0;

 L9242: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9243;
    }
  goto ret0;

 L9243: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L9244;
    }
  goto ret0;

 L9244: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1001;
    }
  goto ret0;

 L9486: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9487;
    }
  goto ret0;

 L9487: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L9488;
    }
  goto ret0;

 L9488: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1021;
    }
  goto ret0;

 L9506: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9507;
    }
  goto ret0;

 L9507: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L9508;
    }
  goto ret0;

 L9508: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1023;
    }
  goto ret0;

 L8532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8533;
    }
  goto ret0;

 L8533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8534;
    }
  goto ret0;

 L8534: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 942;
    }
  goto ret0;

 L8542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8543;
    }
  goto ret0;

 L8543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8544;
    }
  goto ret0;

 L8544: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 943;
    }
  goto ret0;

 L8592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8593;
    }
  goto ret0;

 L8593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8594;
    }
  goto ret0;

 L8594: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 948;
    }
  goto ret0;

 L8602: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8603;
    }
  goto ret0;

 L8603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8604;
    }
  goto ret0;

 L8604: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 949;
    }
  goto ret0;

 L8644: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2HImode)
    goto L10572;
  goto ret0;

 L10572: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SS_TRUNCATE:
      goto L8645;
    case US_TRUNCATE:
      goto L8681;
    default:
     break;
   }
  goto ret0;

 L8645: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8646;
    }
  goto ret0;

 L8646: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == SS_TRUNCATE)
    goto L8647;
  goto ret0;

 L8647: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8648;
    }
  goto ret0;

 L8648: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 953;
    }
  goto ret0;

 L8681: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8682;
    }
  goto ret0;

 L8682: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2HImode
      && GET_CODE (x3) == US_TRUNCATE)
    goto L8683;
  goto ret0;

 L8683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8684;
    }
  goto ret0;

 L8684: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 956;
    }
  goto ret0;

 L8734: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8735;
  goto ret0;

 L8735: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8736;
    }
  goto ret0;

 L8736: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 4)
    goto L8737;
  goto ret0;

 L8737: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10574;
  goto ret0;

 L10574: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 0L:
        goto L8738;
      case 2L:
        goto L8808;
      default:
        break;
      }
  goto ret0;

 L8738: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8739;
  goto ret0;

 L8739: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8740;
  goto ret0;

 L8740: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8741;
  goto ret0;

 L8741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8742;
  goto ret0;

 L8742: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8743;
    }
  goto ret0;

 L8743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 4)
    goto L8744;
  goto ret0;

 L8744: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8745;
  goto ret0;

 L8745: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8746;
  goto ret0;

 L8746: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8747;
  goto ret0;

 L8747: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8748;
  goto ret0;

 L8748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 5L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 959;
    }
  goto ret0;

 L8808: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8809;
  goto ret0;

 L8809: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8810;
  goto ret0;

 L8810: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8811;
  goto ret0;

 L8811: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8812;
  goto ret0;

 L8812: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[2] = x4;
      goto L8813;
    }
  goto ret0;

 L8813: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 4)
    goto L8814;
  goto ret0;

 L8814: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8815;
  goto ret0;

 L8815: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 2L)
    goto L8816;
  goto ret0;

 L8816: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 2);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8817;
  goto ret0;

 L8817: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 3);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 3L)
    goto L8818;
  goto ret0;

 L8818: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 5L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 962;
    }
  goto ret0;

 L8992: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8993;
    }
  goto ret0;

 L8993: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10576;
    case DImode:
      goto L10577;
    default:
      break;
    }
  goto ret0;

 L10576: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L8994;
    }
  goto ret0;

 L8994: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 976;
    }
  goto ret0;

 L10577: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9114;
    }
  goto ret0;

 L9114: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 988;
    }
  goto ret0;

 L9052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9053;
    }
  goto ret0;

 L9053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10578;
    case DImode:
      goto L10579;
    default:
      break;
    }
  goto ret0;

 L10578: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9054;
    }
  goto ret0;

 L9054: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 982;
    }
  goto ret0;

 L10579: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9174;
    }
  goto ret0;

 L9174: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 994;
    }
  goto ret0;

 L9082: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L9083;
    }
  goto ret0;

 L9083: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10580;
    case DImode:
      goto L10581;
    default:
      break;
    }
  goto ret0;

 L10580: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9084;
    }
  goto ret0;

 L9084: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 985;
    }
  goto ret0;

 L10581: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9204;
    }
  goto ret0;

 L9204: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 997;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_26 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7970;
    case SS_PLUS:
      goto L8000;
    case US_PLUS:
      goto L8030;
    case MINUS:
      goto L8060;
    case SS_MINUS:
      goto L8090;
    case US_MINUS:
      goto L8120;
    case SMAX:
      goto L8552;
    case UMAX:
      goto L8562;
    case SMIN:
      goto L8612;
    case UMIN:
      goto L8622;
    case VEC_CONCAT:
      goto L8656;
    case VEC_MERGE:
      goto L8756;
    case ROTATERT:
      goto L9002;
    case ASHIFTRT:
      goto L9032;
    case LSHIFTRT:
      goto L9062;
    case ASHIFT:
      goto L9092;
    default:
     break;
   }
  goto ret0;

 L7970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L7971;
    }
  goto ret0;

 L7971: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L7972;
    }
  goto ret0;

 L7972: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 890;
    }
  goto ret0;

 L8000: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8001;
    }
  goto ret0;

 L8001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8002;
    }
  goto ret0;

 L8002: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 893;
    }
  goto ret0;

 L8030: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8031;
    }
  goto ret0;

 L8031: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8032;
    }
  goto ret0;

 L8032: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 896;
    }
  goto ret0;

 L8060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8061;
    }
  goto ret0;

 L8061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8062;
    }
  goto ret0;

 L8062: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 899;
    }
  goto ret0;

 L8090: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8091;
    }
  goto ret0;

 L8091: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8092;
    }
  goto ret0;

 L8092: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 902;
    }
  goto ret0;

 L8120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8121;
    }
  goto ret0;

 L8121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8122;
    }
  goto ret0;

 L8122: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 905;
    }
  goto ret0;

 L8552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8553;
    }
  goto ret0;

 L8553: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8554;
    }
  goto ret0;

 L8554: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 944;
    }
  goto ret0;

 L8562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8563;
    }
  goto ret0;

 L8563: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8564;
    }
  goto ret0;

 L8564: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 945;
    }
  goto ret0;

 L8612: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8613;
    }
  goto ret0;

 L8613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8614;
    }
  goto ret0;

 L8614: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 950;
    }
  goto ret0;

 L8622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8623;
    }
  goto ret0;

 L8623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, V2SImode))
    {
      operands[2] = x3;
      goto L8624;
    }
  goto ret0;

 L8624: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 951;
    }
  goto ret0;

 L8656: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10598;
  goto ret0;

 L10598: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SS_TRUNCATE:
      goto L8657;
    case US_TRUNCATE:
      goto L8693;
    default:
     break;
   }
  goto ret0;

 L8657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L8658;
    }
  goto ret0;

 L8658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SS_TRUNCATE)
    goto L8659;
  goto ret0;

 L8659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L8660;
    }
  goto ret0;

 L8660: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 954;
    }
  goto ret0;

 L8693: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[1] = x4;
      goto L8694;
    }
  goto ret0;

 L8694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == US_TRUNCATE)
    goto L8695;
  goto ret0;

 L8695: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, DImode))
    {
      operands[2] = x4;
      goto L8696;
    }
  goto ret0;

 L8696: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 957;
    }
  goto ret0;

 L8756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8757;
  goto ret0;

 L8757: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[1] = x4;
      goto L8758;
    }
  goto ret0;

 L8758: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L8759;
  goto ret0;

 L8759: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT)
    goto L10600;
  goto ret0;

 L10600: ATTRIBUTE_UNUSED_LABEL
  if ((int) XWINT (x5, 0) == XWINT (x5, 0))
    switch ((int) XWINT (x5, 0))
      {
      case 0L:
        goto L8760;
      case 1L:
        goto L8830;
      default:
        break;
      }
  goto ret0;

 L8760: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8761;
  goto ret0;

 L8761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8762;
  goto ret0;

 L8762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8763;
    }
  goto ret0;

 L8763: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L8764;
  goto ret0;

 L8764: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8765;
  goto ret0;

 L8765: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8766;
  goto ret0;

 L8766: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 960;
    }
  goto ret0;

 L8830: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8831;
  goto ret0;

 L8831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_SELECT)
    goto L8832;
  goto ret0;

 L8832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V2SImode))
    {
      operands[2] = x4;
      goto L8833;
    }
  goto ret0;

 L8833: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 2)
    goto L8834;
  goto ret0;

 L8834: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 0L)
    goto L8835;
  goto ret0;

 L8835: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L8836;
  goto ret0;

 L8836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 1L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 963;
    }
  goto ret0;

 L9002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9003;
    }
  goto ret0;

 L9003: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10602;
    case DImode:
      goto L10603;
    default:
      break;
    }
  goto ret0;

 L10602: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9004;
    }
  goto ret0;

 L9004: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 977;
    }
  goto ret0;

 L10603: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9124;
    }
  goto ret0;

 L9124: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 989;
    }
  goto ret0;

 L9032: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9033;
    }
  goto ret0;

 L9033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10604;
    case DImode:
      goto L10605;
    default:
      break;
    }
  goto ret0;

 L10604: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9034;
    }
  goto ret0;

 L9034: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 980;
    }
  goto ret0;

 L10605: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9154;
    }
  goto ret0;

 L9154: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 992;
    }
  goto ret0;

 L9062: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9063;
    }
  goto ret0;

 L9063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10606;
    case DImode:
      goto L10607;
    default:
      break;
    }
  goto ret0;

 L10606: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9064;
    }
  goto ret0;

 L9064: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 983;
    }
  goto ret0;

 L10607: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9184;
    }
  goto ret0;

 L9184: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 995;
    }
  goto ret0;

 L9092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L9093;
    }
  goto ret0;

 L9093: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    case SImode:
      goto L10608;
    case DImode:
      goto L10609;
    default:
      break;
    }
  goto ret0;

 L10608: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L9094;
    }
  goto ret0;

 L9094: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 986;
    }
  goto ret0;

 L10609: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L9214;
    }
  goto ret0;

 L9214: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 998;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_27 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10397;
    case DImode:
      goto L10398;
    case SFmode:
      goto L10399;
    case DFmode:
      goto L10400;
    case V8QImode:
      goto L10402;
    case V4HImode:
      goto L10403;
    case V2SImode:
      goto L10404;
    default:
      break;
    }
  goto ret0;

 L10397: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6107;
    }
 L10405: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L8361;
    }
  goto ret0;

 L6107: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10406;
  x2 = XEXP (x1, 0);
  goto L10405;

 L10406: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6108;
    case MINUS:
      goto L6118;
    case MULT:
      goto L6128;
    case AND:
      goto L6316;
    case IOR:
      goto L6417;
    case XOR:
      goto L6459;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6109;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6109: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6110;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6110: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 742;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6119;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6120;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6120: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 743;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10413;
  x2 = XEXP (x1, 0);
  goto L10405;

 L10413: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L6239;
    case ASHIFTRT:
      goto L6251;
    case SUBREG:
    case REG:
      goto L10412;
    default:
      x2 = XEXP (x1, 0);
      goto L10405;
   }
 L10412: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6129;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6239: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L6240;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6240: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10415;
  x2 = XEXP (x1, 0);
  goto L10405;

 L10415: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L6241;
    case ASHIFTRT:
      goto L6266;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6241: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6242;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6242: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 752;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6266: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6267;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6267: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L
      && ((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 754;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6251: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6252;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6252: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L)
    goto L6253;
  x2 = XEXP (x1, 0);
  goto L10405;

 L6253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10417;
  x2 = XEXP (x1, 0);
  goto L10405;

 L10417: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L6254;
    case ASHIFTRT:
      goto L6279;
    default:
     break;
   }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, HImode))
    {
      operands[2] = x4;
      goto L6255;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6255: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 753;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6279: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6280;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6280: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L
      && ((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 755;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6129: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6130;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6130: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 744;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10420;
  x2 = XEXP (x1, 0);
  goto L10405;

 L10420: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == NOT)
    goto L6362;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6317;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6363;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6363: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6364;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6364: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 762;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6317: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6318;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6318: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 758;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6417: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6418;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6418: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6419;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6419: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 767;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L6459: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6460;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6460: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6461;
    }
  x2 = XEXP (x1, 0);
  goto L10405;

 L6461: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 771;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  goto L10405;

 L8361: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10421;
  goto ret0;

 L10421: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L8362;
    case SIGN_EXTEND:
      goto L8374;
    case VEC_SELECT:
      goto L8410;
    default:
     break;
   }
  goto ret0;

 L8362: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L10424;
    case HImode:
      goto L10425;
    default:
      break;
    }
  goto ret0;

 L10424: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == VEC_SELECT)
    goto L8363;
  goto ret0;

 L8363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8364;
    }
  goto ret0;

 L8364: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8365;
  goto ret0;

 L8365: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (immediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8366;
    }
  goto ret0;

 L8366: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 925;
    }
  goto ret0;

 L10425: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == VEC_SELECT)
    goto L8387;
  goto ret0;

 L8387: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8388;
    }
  goto ret0;

 L8388: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8389;
  goto ret0;

 L8389: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (immediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8390;
    }
  goto ret0;

 L8390: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 927;
    }
  goto ret0;

 L8374: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L10426;
    case HImode:
      goto L10427;
    default:
      break;
    }
  goto ret0;

 L10426: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == VEC_SELECT)
    goto L8375;
  goto ret0;

 L8375: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V8QImode))
    {
      operands[1] = x4;
      goto L8376;
    }
  goto ret0;

 L8376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8377;
  goto ret0;

 L8377: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (immediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8378;
    }
  goto ret0;

 L8378: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 926;
    }
  goto ret0;

 L10427: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == VEC_SELECT)
    goto L8399;
  goto ret0;

 L8399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (register_operand (x4, V4HImode))
    {
      operands[1] = x4;
      goto L8400;
    }
  goto ret0;

 L8400: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == PARALLEL
      && XVECLEN (x4, 0) == 1)
    goto L8401;
  goto ret0;

 L8401: ATTRIBUTE_UNUSED_LABEL
  x5 = XVECEXP (x4, 0, 0);
  if (immediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8402;
    }
  goto ret0;

 L8402: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 928;
    }
  goto ret0;

 L8410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8411;
    }
  goto ret0;

 L8411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == PARALLEL
      && XVECLEN (x3, 0) == 1)
    goto L8412;
  goto ret0;

 L8412: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (immediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8413;
    }
  goto ret0;

 L8413: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 929;
    }
  goto ret0;

 L10398: ATTRIBUTE_UNUSED_LABEL
  return recog_23 (x0, insn, pnum_clobbers);

 L10399: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      operands[0] = x2;
      goto L7452;
    }
  goto ret0;

 L7452: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SFmode)
    goto L10466;
  goto ret0;

 L10466: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7453;
    case MULT:
      goto L7551;
    case DIV:
      goto L7605;
    case MOD:
      goto L7659;
    default:
     break;
   }
  goto ret0;

 L7453: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7454;
    }
  goto ret0;

 L7454: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (fpa_add_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7455;
    }
  goto ret0;

 L7455: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 838;
    }
  goto ret0;

 L7551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7552;
    }
  goto ret0;

 L7552: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (fpa_rhs_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7553;
    }
  goto ret0;

 L7553: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 847;
    }
  goto ret0;

 L7605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (fpa_rhs_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7606;
    }
  goto ret0;

 L7606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (fpa_rhs_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7607;
    }
  goto ret0;

 L7607: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 852;
    }
  goto ret0;

 L7659: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      operands[1] = x3;
      goto L7660;
    }
  goto ret0;

 L7660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (fpa_rhs_operand (x3, SFmode))
    {
      operands[2] = x3;
      goto L7661;
    }
  goto ret0;

 L7661: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 857;
    }
  goto ret0;

 L10400: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DFmode))
    {
      operands[0] = x2;
      goto L7462;
    }
  goto ret0;

 L7462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DFmode)
    goto L10470;
  goto ret0;

 L10470: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L7463;
    case MINUS:
      goto L7507;
    case MULT:
      goto L7561;
    case DIV:
      goto L7615;
    case MOD:
      goto L7669;
    default:
     break;
   }
  goto ret0;

 L7463: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10476;
  goto ret0;

 L10476: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7474;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7464;
    }
  goto ret0;

 L7474: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7475;
    }
  goto ret0;

 L7475: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10478;
  goto ret0;

 L10478: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7498;
  if (fpa_add_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7476;
    }
  goto ret0;

 L7498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7499;
    }
  goto ret0;

 L7499: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 842;
    }
  goto ret0;

 L7476: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 840;
    }
  goto ret0;

 L7464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10480;
  goto ret0;

 L10480: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7486;
  if (fpa_add_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7465;
    }
  goto ret0;

 L7486: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7487;
    }
  goto ret0;

 L7487: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 841;
    }
  goto ret0;

 L7465: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 839;
    }
  goto ret0;

 L7507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10482;
  goto ret0;

 L10482: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7518;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7508;
    }
  goto ret0;

 L7518: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7519;
    }
  goto ret0;

 L7519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10484;
  goto ret0;

 L10484: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7542;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7520;
    }
  goto ret0;

 L7542: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7543;
    }
  goto ret0;

 L7543: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 846;
    }
  goto ret0;

 L7520: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 844;
    }
  goto ret0;

 L7508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10486;
  goto ret0;

 L10486: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7530;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7509;
    }
  goto ret0;

 L7530: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7531;
    }
  goto ret0;

 L7531: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 845;
    }
  goto ret0;

 L7509: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 843;
    }
  goto ret0;

 L7561: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10488;
  goto ret0;

 L10488: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7572;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7562;
    }
  goto ret0;

 L7572: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7573;
    }
  goto ret0;

 L7573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10490;
  goto ret0;

 L10490: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7596;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7574;
    }
  goto ret0;

 L7596: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7597;
    }
  goto ret0;

 L7597: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 851;
    }
  goto ret0;

 L7574: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 849;
    }
  goto ret0;

 L7562: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10492;
  goto ret0;

 L10492: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7584;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7563;
    }
  goto ret0;

 L7584: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7585;
    }
  goto ret0;

 L7585: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 850;
    }
  goto ret0;

 L7563: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 848;
    }
  goto ret0;

 L7615: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10494;
  goto ret0;

 L10494: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7626;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7616;
    }
  goto ret0;

 L7626: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7627;
    }
  goto ret0;

 L7627: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10496;
  goto ret0;

 L10496: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7650;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7628;
    }
  goto ret0;

 L7650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7651;
    }
  goto ret0;

 L7651: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 856;
    }
  goto ret0;

 L7628: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 854;
    }
  goto ret0;

 L7616: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10498;
  goto ret0;

 L10498: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7638;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7617;
    }
  goto ret0;

 L7638: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7639;
    }
  goto ret0;

 L7639: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 855;
    }
  goto ret0;

 L7617: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 853;
    }
  goto ret0;

 L7669: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DFmode)
    goto L10500;
  goto ret0;

 L10500: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7680;
  if (s_register_operand (x3, DFmode))
    {
      operands[1] = x3;
      goto L7670;
    }
  goto ret0;

 L7680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[1] = x4;
      goto L7681;
    }
  goto ret0;

 L7681: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10502;
  goto ret0;

 L10502: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7704;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7682;
    }
  goto ret0;

 L7704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7705;
    }
  goto ret0;

 L7705: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 861;
    }
  goto ret0;

 L7682: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 859;
    }
  goto ret0;

 L7670: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DFmode)
    goto L10504;
  goto ret0;

 L10504: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == FLOAT_EXTEND)
    goto L7692;
  if (fpa_rhs_operand (x3, DFmode))
    {
      operands[2] = x3;
      goto L7671;
    }
  goto ret0;

 L7692: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SFmode))
    {
      operands[2] = x4;
      goto L7693;
    }
  goto ret0;

 L7693: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 860;
    }
  goto ret0;

 L7671: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && TARGET_HARD_FLOAT)))
    {
      return 858;
    }
  goto ret0;

 L10402: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L7949;
    }
  goto ret0;

 L7949: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode)
    goto L10505;
  goto ret0;

 L10505: ATTRIBUTE_UNUSED_LABEL
  return recog_24 (x0, insn, pnum_clobbers);

 L10403: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L7959;
    }
  goto ret0;

 L7959: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode)
    goto L10531;
  goto ret0;

 L10531: ATTRIBUTE_UNUSED_LABEL
  return recog_25 (x0, insn, pnum_clobbers);

 L10404: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L7969;
    }
  goto ret0;

 L7969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode)
    goto L10582;
  goto ret0;

 L10582: ATTRIBUTE_UNUSED_LABEL
  return recog_26 (x0, insn, pnum_clobbers);
 ret0:
  return -1;
}

static int
recog_28 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L10642;
    case SImode:
      goto L10644;
    case HImode:
      goto L10646;
    default:
      break;
    }
  goto ret0;

 L10642: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L7244;
  if (s_register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L7284;
    }
  goto ret0;

 L7244: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10647;
  goto ret0;

 L10647: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7245;
    case MINUS:
      goto L7265;
    default:
     break;
   }
  goto ret0;

 L7245: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7246;
    }
  goto ret0;

 L7246: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7247;
    }
  goto ret0;

 L7247: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7248;
    }
  goto ret0;

 L7248: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7249;
    }
  goto ret0;

 L7249: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L7250;
    }
  goto ret0;

 L7250: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7251;
  goto ret0;

 L7251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7252;
    }
  goto ret0;

 L7252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7253;
  goto ret0;

 L7253: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7254;
    }
  goto ret0;

 L7254: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7255;
  goto ret0;

 L7255: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4]))
    goto L7256;
  goto ret0;

 L7256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 827;
    }
  goto ret0;

 L7265: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7266;
    }
  goto ret0;

 L7266: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7267;
    }
  goto ret0;

 L7267: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7268;
    }
  goto ret0;

 L7268: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7269;
    }
  goto ret0;

 L7269: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, QImode))
    {
      operands[5] = x3;
      goto L7270;
    }
  goto ret0;

 L7270: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7271;
  goto ret0;

 L7271: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7272;
    }
  goto ret0;

 L7272: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7273;
  goto ret0;

 L7273: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7274;
  goto ret0;

 L7274: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7275;
    }
  goto ret0;

 L7275: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7276;
  goto ret0;

 L7276: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 828;
    }
  goto ret0;

 L7284: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L7285;
  goto ret0;

 L7285: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10649;
  goto ret0;

 L10649: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7286;
    case MINUS:
      goto L7306;
    default:
     break;
   }
  goto ret0;

 L7286: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7287;
    }
  goto ret0;

 L7287: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7288;
    }
  goto ret0;

 L7288: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7289;
    }
  goto ret0;

 L7289: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7290;
    }
  goto ret0;

 L7290: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7291;
  goto ret0;

 L7291: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7292;
    }
  goto ret0;

 L7292: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7293;
  goto ret0;

 L7293: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7294;
    }
  goto ret0;

 L7294: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7295;
  goto ret0;

 L7295: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4]))
    goto L7296;
  goto ret0;

 L7296: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 829;
    }
  goto ret0;

 L7306: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7307;
    }
  goto ret0;

 L7307: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7308;
    }
  goto ret0;

 L7308: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7309;
    }
  goto ret0;

 L7309: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7310;
    }
  goto ret0;

 L7310: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7311;
  goto ret0;

 L7311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7312;
    }
  goto ret0;

 L7312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7313;
  goto ret0;

 L7313: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7314;
  goto ret0;

 L7314: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7315;
    }
  goto ret0;

 L7315: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7316;
  goto ret0;

 L7316: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 830;
    }
  goto ret0;

 L10644: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L7324;
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7364;
    }
  goto ret0;

 L7324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10651;
  goto ret0;

 L10651: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7325;
    case MINUS:
      goto L7345;
    default:
     break;
   }
  goto ret0;

 L7325: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7326;
    }
  goto ret0;

 L7326: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7327;
    }
  goto ret0;

 L7327: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7328;
    }
  goto ret0;

 L7328: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7329;
    }
  goto ret0;

 L7329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7330;
    }
  goto ret0;

 L7330: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7331;
  goto ret0;

 L7331: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7332;
    }
  goto ret0;

 L7332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7333;
  goto ret0;

 L7333: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7334;
    }
  goto ret0;

 L7334: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7335;
  goto ret0;

 L7335: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4]))
    goto L7336;
  goto ret0;

 L7336: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 831;
    }
  goto ret0;

 L7345: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7346;
    }
  goto ret0;

 L7346: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7347;
    }
  goto ret0;

 L7347: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7348;
    }
  goto ret0;

 L7348: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7349;
    }
  goto ret0;

 L7349: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L7350;
    }
  goto ret0;

 L7350: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7351;
  goto ret0;

 L7351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7352;
    }
  goto ret0;

 L7352: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7353;
  goto ret0;

 L7353: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7354;
  goto ret0;

 L7354: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7355;
    }
  goto ret0;

 L7355: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7356;
  goto ret0;

 L7356: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 832;
    }
  goto ret0;

 L7364: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L7365;
  goto ret0;

 L7365: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10653;
  goto ret0;

 L10653: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7366;
    case MINUS:
      goto L7386;
    default:
     break;
   }
  goto ret0;

 L7366: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7367;
    }
  goto ret0;

 L7367: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7368;
    }
  goto ret0;

 L7368: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7369;
    }
  goto ret0;

 L7369: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7370;
    }
  goto ret0;

 L7370: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7371;
  goto ret0;

 L7371: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7372;
    }
  goto ret0;

 L7372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7373;
  goto ret0;

 L7373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7374;
    }
  goto ret0;

 L7374: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7375;
  goto ret0;

 L7375: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4]))
    goto L7376;
  goto ret0;

 L7376: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 833;
    }
  goto ret0;

 L7386: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7387;
    }
  goto ret0;

 L7387: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7388;
    }
  goto ret0;

 L7388: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7389;
    }
  goto ret0;

 L7389: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7390;
    }
  goto ret0;

 L7390: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7391;
  goto ret0;

 L7391: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7392;
    }
  goto ret0;

 L7392: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7393;
  goto ret0;

 L7393: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7394;
  goto ret0;

 L7394: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7395;
    }
  goto ret0;

 L7395: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7396;
  goto ret0;

 L7396: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 834;
    }
  goto ret0;

 L10646: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, HImode))
    {
      operands[5] = x3;
      goto L7404;
    }
  goto ret0;

 L7404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MEM)
    goto L7405;
  goto ret0;

 L7405: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10655;
  goto ret0;

 L10655: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7406;
    case MINUS:
      goto L7426;
    default:
     break;
   }
  goto ret0;

 L7406: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7407;
    }
  goto ret0;

 L7407: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7408;
    }
  goto ret0;

 L7408: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7409;
    }
  goto ret0;

 L7409: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7410;
    }
  goto ret0;

 L7410: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7411;
  goto ret0;

 L7411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7412;
    }
  goto ret0;

 L7412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7413;
  goto ret0;

 L7413: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7414;
    }
  goto ret0;

 L7414: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7415;
  goto ret0;

 L7415: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4]))
    goto L7416;
  goto ret0;

 L7416: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[1])
      && ((TARGET_ARM) && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 835;
    }
  goto ret0;

 L7426: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7427;
    }
  goto ret0;

 L7427: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (shift_operator (x5, SImode))
    {
      operands[2] = x5;
      goto L7428;
    }
  goto ret0;

 L7428: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L7429;
    }
  goto ret0;

 L7429: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (const_shift_operand (x6, SImode))
    {
      operands[4] = x6;
      goto L7430;
    }
  goto ret0;

 L7430: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7431;
  goto ret0;

 L7431: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7432;
    }
  goto ret0;

 L7432: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7433;
  goto ret0;

 L7433: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7434;
  goto ret0;

 L7434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    {
      operands[2] = x4;
      goto L7435;
    }
  goto ret0;

 L7435: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[3]))
    goto L7436;
  goto ret0;

 L7436: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, operands[4])
      && ((TARGET_ARM) && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)))
    {
      return 836;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_29 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PARALLEL:
      goto L10641;
    case SET:
      goto L7011;
    default:
     break;
   }
  goto ret0;

 L10641: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L7242;
  if (XVECLEN (x1, 0) >= 4
      && load_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6725;
    }
 L10640: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 4
      && store_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6867;
    }
  goto ret0;

 L7242: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7243;
  goto ret0;

 L7243: ATTRIBUTE_UNUSED_LABEL
  return recog_28 (x0, insn, pnum_clobbers);

 L6725: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6726;
  goto L10640;

 L6726: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10658;
  goto L10640;

 L10658: ATTRIBUTE_UNUSED_LABEL
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6773;
    }
 L10657: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6727;
    }
  goto L10640;

 L6773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6774;
  x3 = XEXP (x2, 0);
  goto L10657;

 L6774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6775;
    }
  x3 = XEXP (x2, 0);
  goto L10657;

 L6775: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6776;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6776: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6777;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6777: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6778;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6778: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6779;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6779: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6780;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6780: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6781;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6781: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6782;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6782: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6783;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6784;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6785;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6785: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6786;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6786: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6787;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6787: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6788;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6788: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6789;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6789: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6790;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6790: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6791;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6791: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6792;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6792: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 12L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)))
    {
      return 799;
    }
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  goto L10657;

 L6727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6728;
  goto L10640;

 L6728: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6729;
    }
  goto L10640;

 L6729: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L6730;
  goto L10640;

 L6730: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6731;
  goto L10640;

 L6731: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6732;
    }
  goto L10640;

 L6732: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6733;
  goto L10640;

 L6733: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6734;
  goto L10640;

 L6734: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6735;
  goto L10640;

 L6735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6736;
    }
  goto L10640;

 L6736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6737;
  goto L10640;

 L6737: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6738;
  goto L10640;

 L6738: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6739;
  goto L10640;

 L6739: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6740;
  goto L10640;

 L6740: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6741;
  goto L10640;

 L6741: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6742;
    }
  goto L10640;

 L6742: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6743;
  goto L10640;

 L6743: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6744;
  goto L10640;

 L6744: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6745;
  goto L10640;

 L6745: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)))
    {
      return 797;
    }
  goto L10640;

 L6867: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6868;
  goto ret0;

 L6868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10660;
  goto ret0;

 L10660: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L6917;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6869;
    }
  goto ret0;

 L6917: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6918;
    }
  goto ret0;

 L6918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6919;
    }
  goto ret0;

 L6919: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6920;
  goto ret0;

 L6920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6921;
  goto ret0;

 L6921: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6922;
  goto ret0;

 L6922: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6923;
  goto ret0;

 L6923: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6924;
  goto ret0;

 L6924: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6925;
    }
  goto ret0;

 L6925: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6926;
  goto ret0;

 L6926: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6927;
  goto ret0;

 L6927: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6928;
  goto ret0;

 L6928: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6929;
  goto ret0;

 L6929: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6930;
  goto ret0;

 L6930: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6931;
    }
  goto ret0;

 L6931: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6932;
  goto ret0;

 L6932: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6933;
  goto ret0;

 L6933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6934;
  goto ret0;

 L6934: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6935;
  goto ret0;

 L6935: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 12L)
    goto L6936;
  goto ret0;

 L6936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6937;
    }
  goto ret0;

 L6937: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)))
    {
      return 805;
    }
  goto ret0;

 L6869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6870;
  goto ret0;

 L6870: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6871;
    }
  goto ret0;

 L6871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 12L)
    goto L6872;
  goto ret0;

 L6872: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6873;
  goto ret0;

 L6873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6874;
  goto ret0;

 L6874: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6875;
  goto ret0;

 L6875: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6876;
    }
  goto ret0;

 L6876: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6877;
  goto ret0;

 L6877: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6878;
  goto ret0;

 L6878: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6879;
  goto ret0;

 L6879: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6880;
  goto ret0;

 L6880: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6881;
  goto ret0;

 L6881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6882;
    }
  goto ret0;

 L6882: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6883;
  goto ret0;

 L6883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6884;
  goto ret0;

 L6884: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6885;
  goto ret0;

 L6885: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6886;
  goto ret0;

 L6886: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6887;
  goto ret0;

 L6887: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6888;
    }
  goto ret0;

 L6888: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)))
    {
      return 803;
    }
  goto ret0;

 L7011: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7012;
    }
  goto ret0;

 L7012: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L7013;
    }
  goto ret0;

 L7013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L7014;
    }
  goto ret0;

 L7014: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L7015;
    }
  goto ret0;

 L7015: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L7016;
    }
  goto ret0;

 L7016: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L7017;
    }
  goto ret0;

 L7017: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 812;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_30 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case QImode:
      goto L10669;
    case SImode:
      goto L10672;
    case HImode:
      goto L10673;
    default:
      break;
    }
  goto ret0;

 L10669: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L7050;
  if (s_register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7082;
    }
  goto ret0;

 L7050: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10674;
  goto ret0;

 L10674: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7051;
    case MINUS:
      goto L7067;
    default:
     break;
   }
  goto ret0;

 L7051: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7052;
    }
  goto ret0;

 L7052: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7053;
    }
  goto ret0;

 L7053: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7054;
    }
  goto ret0;

 L7054: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7055;
  goto ret0;

 L7055: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7056;
    }
  goto ret0;

 L7056: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7057;
  goto ret0;

 L7057: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7058;
  goto ret0;

 L7058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 815;
    }
  goto ret0;

 L7067: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7068;
    }
  goto ret0;

 L7068: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7069;
    }
  goto ret0;

 L7069: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, QImode))
    {
      operands[3] = x3;
      goto L7070;
    }
  goto ret0;

 L7070: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7071;
  goto ret0;

 L7071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7072;
    }
  goto ret0;

 L7072: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7073;
  goto ret0;

 L7073: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7074;
  goto ret0;

 L7074: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 816;
    }
  goto ret0;

 L7082: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == QImode
      && GET_CODE (x3) == MEM)
    goto L7083;
  goto ret0;

 L7083: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10676;
  goto ret0;

 L10676: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7084;
    case MINUS:
      goto L7100;
    default:
     break;
   }
  goto ret0;

 L7084: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7085;
    }
  goto ret0;

 L7085: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7086;
    }
  goto ret0;

 L7086: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7087;
  goto ret0;

 L7087: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7088;
    }
  goto ret0;

 L7088: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7089;
  goto ret0;

 L7089: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7090;
  goto ret0;

 L7090: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 817;
    }
  goto ret0;

 L7100: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7101;
    }
  goto ret0;

 L7101: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7102;
    }
  goto ret0;

 L7102: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7103;
  goto ret0;

 L7103: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7104;
    }
  goto ret0;

 L7104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7105;
  goto ret0;

 L7105: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7106;
  goto ret0;

 L7106: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 818;
    }
  goto ret0;

 L10672: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L7148;
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7114;
    }
  goto ret0;

 L7148: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10678;
  goto ret0;

 L10678: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7149;
    case MINUS:
      goto L7165;
    default:
     break;
   }
  goto ret0;

 L7149: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7150;
    }
  goto ret0;

 L7150: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7151;
    }
  goto ret0;

 L7151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7152;
    }
  goto ret0;

 L7152: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7153;
  goto ret0;

 L7153: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7154;
    }
  goto ret0;

 L7154: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7155;
  goto ret0;

 L7155: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7156;
  goto ret0;

 L7156: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 821;
    }
  goto ret0;

 L7165: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7166;
    }
  goto ret0;

 L7166: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7167;
    }
  goto ret0;

 L7167: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L7168;
    }
  goto ret0;

 L7168: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7169;
  goto ret0;

 L7169: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7170;
    }
  goto ret0;

 L7170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7171;
  goto ret0;

 L7171: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7172;
  goto ret0;

 L7172: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 822;
    }
  goto ret0;

 L7114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode)
    goto L10680;
  goto ret0;

 L10680: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L7115;
    case MEM:
      goto L7181;
    default:
     break;
   }
  goto ret0;

 L7115: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == MEM)
    goto L7116;
  goto ret0;

 L7116: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode)
    goto L10682;
  goto ret0;

 L10682: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x5))
    {
    case PLUS:
      goto L7117;
    case MINUS:
      goto L7134;
    default:
     break;
   }
  goto ret0;

 L7117: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L7118;
    }
  goto ret0;

 L7118: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (index_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L7119;
    }
  goto ret0;

 L7119: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7120;
  goto ret0;

 L7120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7121;
    }
  goto ret0;

 L7121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7122;
  goto ret0;

 L7122: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7123;
  goto ret0;

 L7123: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 819;
    }
  goto ret0;

 L7134: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      operands[1] = x6;
      goto L7135;
    }
  goto ret0;

 L7135: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (s_register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L7136;
    }
  goto ret0;

 L7136: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7137;
  goto ret0;

 L7137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7138;
    }
  goto ret0;

 L7138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7139;
  goto ret0;

 L7139: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7140;
  goto ret0;

 L7140: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 820;
    }
  goto ret0;

 L7181: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10684;
  goto ret0;

 L10684: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7182;
    case MINUS:
      goto L7198;
    default:
     break;
   }
  goto ret0;

 L7182: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7183;
    }
  goto ret0;

 L7183: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7184;
    }
  goto ret0;

 L7184: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7185;
  goto ret0;

 L7185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7186;
    }
  goto ret0;

 L7186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7187;
  goto ret0;

 L7187: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7188;
  goto ret0;

 L7188: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 823;
    }
  goto ret0;

 L7198: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7199;
    }
  goto ret0;

 L7199: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7200;
    }
  goto ret0;

 L7200: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7201;
  goto ret0;

 L7201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7202;
    }
  goto ret0;

 L7202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7203;
  goto ret0;

 L7203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7204;
  goto ret0;

 L7204: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 824;
    }
  goto ret0;

 L10673: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, HImode))
    {
      operands[3] = x3;
      goto L7212;
    }
  goto ret0;

 L7212: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == HImode
      && GET_CODE (x3) == MEM)
    goto L7213;
  goto ret0;

 L7213: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10686;
  goto ret0;

 L10686: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case PLUS:
      goto L7214;
    case MINUS:
      goto L7230;
    default:
     break;
   }
  goto ret0;

 L7214: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7215;
    }
  goto ret0;

 L7215: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7216;
    }
  goto ret0;

 L7216: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7217;
  goto ret0;

 L7217: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7218;
    }
  goto ret0;

 L7218: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L7219;
  goto ret0;

 L7219: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7220;
  goto ret0;

 L7220: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 825;
    }
  goto ret0;

 L7230: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L7231;
    }
  goto ret0;

 L7231: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L7232;
    }
  goto ret0;

 L7232: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L7233;
  goto ret0;

 L7233: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7234;
    }
  goto ret0;

 L7234: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MINUS)
    goto L7235;
  goto ret0;

 L7235: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L7236;
  goto ret0;

 L7236: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2])
      && ((TARGET_ARM) && (TARGET_ARM
   && !BYTES_BIG_ENDIAN
   && !TARGET_MMU_TRAPS
   && !arm_arch4
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))))
    {
      return 826;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_31 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L10688;
    case V8QImode:
      goto L10689;
    case V4HImode:
      goto L10690;
    case V2SImode:
      goto L10691;
    default:
      break;
    }
  goto ret0;

 L10688: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8167;
    }
  goto ret0;

 L8167: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode)
    goto L10692;
  goto ret0;

 L10692: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case UNSPEC:
      goto L10695;
    case PLUS:
      goto L9252;
    default:
     break;
   }
  goto ret0;

 L10695: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x2, 0) == 3)
    goto L10697;
  goto ret0;

 L10697: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x2, 1))
    {
    case 13L:
      goto L8168;
    case 14L:
      goto L8189;
    default:
      break;
    }
  goto ret0;

 L8168: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8169;
    }
  goto ret0;

 L8169: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8170;
    }
  goto ret0;

 L8170: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V4HImode))
    {
      operands[3] = x3;
      goto L8171;
    }
  goto ret0;

 L8171: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 909;
    }
  goto ret0;

 L8189: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L8190;
    }
  goto ret0;

 L8190: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (register_operand (x3, V4HImode))
    {
      operands[2] = x3;
      goto L8191;
    }
  goto ret0;

 L8191: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (register_operand (x3, V4HImode))
    {
      operands[3] = x3;
      goto L8192;
    }
  goto ret0;

 L8192: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 911;
    }
  goto ret0;

 L9252: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L9253;
    }
  goto ret0;

 L9253: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode)
    goto L10699;
  goto ret0;

 L10699: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case MULT:
      goto L9254;
    case PLUS:
      goto L9268;
    default:
     break;
   }
  goto ret0;

 L9254: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L9255;
  goto ret0;

 L9255: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  switch (GET_MODE (x5))
    {
    case SImode:
      goto L10701;
    case HImode:
      goto L10702;
    default:
      break;
    }
  goto ret0;

 L10701: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L9256;
    }
  goto ret0;

 L9256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L9257;
  goto ret0;

 L9257: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L9258;
    }
  goto ret0;

 L9258: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1002;
    }
  goto ret0;

 L10702: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == TRUNCATE)
    goto L9297;
  goto ret0;

 L9297: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode)
    goto L10704;
  goto ret0;

 L10704: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x6) == ASHIFTRT)
    goto L9314;
  if (register_operand (x6, SImode))
    {
      operands[2] = x6;
      goto L9298;
    }
  goto ret0;

 L9314: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L9315;
    }
  goto ret0;

 L9315: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 16L)
    goto L9316;
  goto ret0;

 L9316: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L9317;
  goto ret0;

 L9317: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L9318;
  goto ret0;

 L9318: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode)
    goto L10706;
  goto ret0;

 L10706: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x6) == ASHIFTRT)
    goto L9354;
  if (register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L9319;
    }
  goto ret0;

 L9354: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[3] = x7;
      goto L9355;
    }
  goto ret0;

 L9355: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 16L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1007;
    }
  goto ret0;

 L9319: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1005;
    }
  goto ret0;

 L9298: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L9299;
  goto ret0;

 L9299: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == HImode
      && GET_CODE (x5) == TRUNCATE)
    goto L9300;
  goto ret0;

 L9300: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode)
    goto L10708;
  goto ret0;

 L10708: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x6) == ASHIFTRT)
    goto L9335;
  if (register_operand (x6, SImode))
    {
      operands[3] = x6;
      goto L9301;
    }
  goto ret0;

 L9335: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[3] = x7;
      goto L9336;
    }
  goto ret0;

 L9336: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 16L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1006;
    }
  goto ret0;

 L9301: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1004;
    }
  goto ret0;

 L9268: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L9269;
  goto ret0;

 L9269: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L9270;
  goto ret0;

 L9270: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == HImode
      && GET_CODE (x6) == TRUNCATE)
    goto L9271;
  goto ret0;

 L9271: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L9272;
    }
  goto ret0;

 L9272: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L9273;
  goto ret0;

 L9273: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == HImode
      && GET_CODE (x6) == TRUNCATE)
    goto L9274;
  goto ret0;

 L9274: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (register_operand (x7, SImode))
    {
      operands[3] = x7;
      goto L9275;
    }
  goto ret0;

 L9275: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == MULT)
    goto L9276;
  goto ret0;

 L9276: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L9277;
  goto ret0;

 L9277: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == HImode
      && GET_CODE (x6) == TRUNCATE)
    goto L9278;
  goto ret0;

 L9278: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) == SImode
      && GET_CODE (x7) == ASHIFTRT)
    goto L9279;
  goto ret0;

 L9279: ATTRIBUTE_UNUSED_LABEL
  x8 = XEXP (x7, 0);
  if (rtx_equal_p (x8, operands[2]))
    goto L9280;
  goto ret0;

 L9280: ATTRIBUTE_UNUSED_LABEL
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) == CONST_INT
      && XWINT (x8, 0) == 16L)
    goto L9281;
  goto ret0;

 L9281: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == SIGN_EXTEND)
    goto L9282;
  goto ret0;

 L9282: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == HImode
      && GET_CODE (x6) == TRUNCATE)
    goto L9283;
  goto ret0;

 L9283: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (GET_MODE (x7) == SImode
      && GET_CODE (x7) == ASHIFTRT)
    goto L9284;
  goto ret0;

 L9284: ATTRIBUTE_UNUSED_LABEL
  x8 = XEXP (x7, 0);
  if (rtx_equal_p (x8, operands[3]))
    goto L9285;
  goto ret0;

 L9285: ATTRIBUTE_UNUSED_LABEL
  x8 = XEXP (x7, 1);
  if (GET_CODE (x8) == CONST_INT
      && XWINT (x8, 0) == 16L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1003;
    }
  goto ret0;

 L10689: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L8323;
    }
  goto ret0;

 L8323: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode)
    goto L10709;
  goto ret0;

 L10709: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case VEC_MERGE:
      goto L8324;
    case SUBREG:
      goto L10711;
    default:
     break;
   }
  goto ret0;

 L8324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V8QImode))
    {
      operands[1] = x3;
      goto L8325;
    }
  goto ret0;

 L8325: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V8QImode
      && GET_CODE (x3) == VEC_DUPLICATE)
    goto L8326;
  goto ret0;

 L8326: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == QImode
      && GET_CODE (x4) == TRUNCATE)
    goto L8327;
  goto ret0;

 L8327: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8328;
    }
  goto ret0;

 L8328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L8329;
    }
  goto ret0;

 L8329: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 922;
    }
  goto ret0;

 L10711: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 1) == 0)
    goto L9444;
  goto ret0;

 L9444: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == TImode
      && GET_CODE (x3) == ASHIFTRT)
    goto L9445;
  goto ret0;

 L9445: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == TImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L9446;
  goto ret0;

 L9446: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == V16QImode
      && GET_CODE (x5) == VEC_CONCAT)
    goto L9447;
  goto ret0;

 L9447: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (register_operand (x6, V8QImode))
    {
      operands[1] = x6;
      goto L9448;
    }
  goto ret0;

 L9448: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (register_operand (x6, V8QImode))
    {
      operands[2] = x6;
      goto L9449;
    }
  goto ret0;

 L9449: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == MULT)
    goto L9450;
  goto ret0;

 L9450: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonmemory_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L9451;
    }
  goto ret0;

 L9451: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1017;
    }
  goto ret0;

 L10690: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8336;
    }
  goto ret0;

 L8336: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == VEC_MERGE)
    goto L8337;
  goto ret0;

 L8337: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V4HImode))
    {
      operands[1] = x3;
      goto L8338;
    }
  goto ret0;

 L8338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V4HImode
      && GET_CODE (x3) == VEC_DUPLICATE)
    goto L8339;
  goto ret0;

 L8339: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == HImode
      && GET_CODE (x4) == TRUNCATE)
    goto L8340;
  goto ret0;

 L8340: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (nonimmediate_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L8341;
    }
  goto ret0;

 L8341: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L8342;
    }
  goto ret0;

 L8342: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 923;
    }
  goto ret0;

 L10691: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8349;
    }
  goto ret0;

 L8349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == VEC_MERGE)
    goto L8350;
  goto ret0;

 L8350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, V2SImode))
    {
      operands[1] = x3;
      goto L8351;
    }
  goto ret0;

 L8351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == V2SImode
      && GET_CODE (x3) == VEC_DUPLICATE)
    goto L8352;
  goto ret0;

 L8352: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (nonimmediate_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L8353;
    }
  goto ret0;

 L8353: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (immediate_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L8354;
    }
  goto ret0;

 L8354: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 924;
    }
  goto ret0;
 ret0:
  return -1;
}

static int
recog_32 (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[2] = x1;
      goto L4493;
    }
 L6102: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[3] = x1;
      goto L6103;
    }
 L6132: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[4] = x1;
      goto L6133;
    }
 L6366: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[5] = x1;
      goto L6367;
    }
 L6689: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[7] = x1;
      goto L6690;
    }
 L6721: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[6] = x1;
      goto L6722;
    }
 L6794: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[5] = x1;
      goto L6795;
    }
 L6815: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[4] = x1;
      goto L6816;
    }
 L6977: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[1] = x1;
      goto L6978;
    }
 L6986: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6987;
    }
  goto ret0;

 L4493: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[3] = x2;
      goto L4494;
    }
  goto L6102;

 L4494: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L9465;
  goto L6102;

 L9465: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 2
      && XINT (x1, 1) == 9)
    goto L9466;
  switch (GET_CODE (x1))
    {
    case SET:
      goto L4496;
    case PARALLEL:
      goto L10299;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6102;

 L9466: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (immediate_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L9467;
    }
  x1 = XEXP (x0, 0);
  goto L6102;

 L9467: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L9468;
    }
  x1 = XEXP (x0, 0);
  goto L6102;

 L9468: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 1019;
    }
  x1 = XEXP (x0, 0);
  goto L6102;

 L4496: ATTRIBUTE_UNUSED_LABEL
  tem = recog_22 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6102;

 L10299: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L6608;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6608: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6609;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6609: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6610;
    }
  x1 = XEXP (x0, 0);
  goto L6102;

 L6610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == UNSPEC
      && XVECLEN (x3, 0) == 1
      && XINT (x3, 1) == 4)
    goto L6611;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6611: ATTRIBUTE_UNUSED_LABEL
  x4 = XVECEXP (x3, 0, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6612;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6612: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[0]))
    goto L6613;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6613: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST)
    goto L6614;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6614: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == SImode
      && GET_CODE (x6) == PLUS)
    goto L6615;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6615: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) == PC)
    goto L6616;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6616: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 1);
  if (GET_CODE (x7) == CONST_INT
      && XWINT (x7, 0) == 8L)
    goto L6617;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6617: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == USE)
    goto L6618;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LABEL_REF)
    goto L6619;
  x1 = XEXP (x0, 0);
  goto L6102;

 L6619: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L6620;

 L6620: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && flag_pic)))
    {
      return 787;
    }
  x1 = XEXP (x0, 0);
  goto L6102;

 L6103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[4] = x2;
      goto L6104;
    }
  goto L6132;

 L6104: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L8446;
  goto L6132;

 L8446: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == V2SImode
      && GET_CODE (x1) == UNSPEC_VOLATILE
      && XVECLEN (x1, 0) == 3
      && XINT (x1, 1) == 11)
    goto L8447;
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6106;
    case UNSPEC_VOLATILE:
      goto L10394;
    default:
      x1 = XEXP (x0, 0);
      goto L6132;
   }
 L8428: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == UNSPEC_VOLATILE)
    goto L10394;
  x1 = XEXP (x0, 0);
  goto L6132;

 L8447: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8448;
    }
  goto L8428;

 L8448: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8449;
    }
  goto L8428;

 L8449: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8450;
    }
  goto L8428;

 L8450: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 933;
    }
  x1 = XEXP (x0, 1);
  goto L8428;

 L6106: ATTRIBUTE_UNUSED_LABEL
  tem = recog_27 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6132;

 L10394: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 3)
    goto L10610;
  x1 = XEXP (x0, 0);
  goto L6132;

 L10610: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x1, 1))
    {
    case 11L:
      goto L8429;
    case 12L:
      goto L8456;
    case 13L:
      goto L8483;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8429: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V8QImode:
      goto L10613;
    case V4HImode:
      goto L10614;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10613: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L8430;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8430: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8431;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8431: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8432;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8432: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 931;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10614: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8439;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8439: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8440;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8440: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8441;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8441: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 932;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8456: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V8QImode:
      goto L10615;
    case V4HImode:
      goto L10616;
    case V2SImode:
      goto L10617;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10615: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L8457;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8457: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8458;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8458: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8459;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8459: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 934;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10616: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8466;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8466: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8467;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8467: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8468;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8468: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 935;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10617: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8475;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8475: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8476;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8476: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8477;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8477: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 936;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8483: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_MODE (x2))
    {
    case V8QImode:
      goto L10618;
    case V4HImode:
      goto L10619;
    case V2SImode:
      goto L10620;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10618: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L8484;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8484: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V8QImode))
    {
      operands[1] = x2;
      goto L8485;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8485: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V8QImode))
    {
      operands[2] = x2;
      goto L8486;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8486: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 937;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10619: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8493;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8493: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V4HImode))
    {
      operands[1] = x2;
      goto L8494;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8494: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V4HImode))
    {
      operands[2] = x2;
      goto L8495;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8495: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 938;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L10620: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8502;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8502: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (register_operand (x2, V2SImode))
    {
      operands[1] = x2;
      goto L8503;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8503: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (register_operand (x2, V2SImode))
    {
      operands[2] = x2;
      goto L8504;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L8504: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 939;
    }
  x1 = XEXP (x0, 0);
  goto L6132;

 L6133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L6134;
    }
  goto L6366;

 L6134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6135;
  goto L6366;

 L6135: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6136;
    case PARALLEL:
      goto L10621;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case SImode:
      goto L10622;
    case DImode:
      goto L10623;
    default:
      break;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L10622: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6137;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6137: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10624;
  x1 = XEXP (x0, 0);
  goto L6366;

 L10624: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L6138;
    case AND:
      goto L6469;
    case NOT:
      goto L6492;
    case ASHIFT:
    case ASHIFTRT:
    case LSHIFTRT:
    case ROTATERT:
    case MULT:
      goto L10626;
    default:
      x1 = XEXP (x0, 0);
      goto L6366;
   }
 L10626: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L6482;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10628;
  x1 = XEXP (x0, 0);
  goto L6366;

 L10628: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT)
    goto L6139;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6289;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6139: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6140;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6140: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6141;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6142;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6142: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 745;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6289: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MULT)
    goto L6290;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6290: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6291;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6291: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L6292;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6292: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6293;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6293: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, HImode))
    {
      operands[3] = x5;
      goto L6294;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6294: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 756;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == IOR)
    goto L6470;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6471;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6471: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6472;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6472: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L6473;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6473: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L6474;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6474: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 772;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6492: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L6493;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6493: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6494;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6494: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6495;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6495: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 774;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6483;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6484;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6484: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 773;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L10623: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L6149;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L6150;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10630;
  x1 = XEXP (x0, 0);
  goto L6366;

 L10630: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT)
    goto L6151;
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6303;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6151: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode)
    goto L10632;
  x1 = XEXP (x0, 0);
  goto L6366;

 L10632: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      goto L6152;
    case ZERO_EXTEND:
      goto L6190;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6152: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6153;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6153: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6154;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6154: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6155;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6156;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6156: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 746;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6190: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6191;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6191: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == ZERO_EXTEND)
    goto L6192;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6192: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6193;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6193: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L6194;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6194: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 749;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6303: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode
      && GET_CODE (x3) == MULT)
    goto L6304;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6304: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6305;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6305: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, HImode))
    {
      operands[2] = x5;
      goto L6306;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6306: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == SIGN_EXTEND)
    goto L6307;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6307: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, HImode))
    {
      operands[3] = x5;
      goto L6308;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6308: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_arch5e)))
    {
      return 757;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L10621: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L6200;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6200: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6201;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6201: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L6202;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6202: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == TRUNCATE)
    goto L6203;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6203: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode
      && GET_CODE (x4) == LSHIFTRT)
    goto L6204;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6204: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == DImode
      && GET_CODE (x5) == MULT)
    goto L6205;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6205: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) == DImode)
    goto L10634;
  x1 = XEXP (x0, 0);
  goto L6366;

 L10634: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x6))
    {
    case SIGN_EXTEND:
      goto L6206;
    case ZERO_EXTEND:
      goto L6224;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6206: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (s_register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L6207;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6207: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == SIGN_EXTEND)
    goto L6208;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6208: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (s_register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L6209;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6209: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32L)
    goto L6210;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6210: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6211;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (scratch_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6212;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6212: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 750;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6224: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (s_register_operand (x7, SImode))
    {
      operands[1] = x7;
      goto L6225;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6225: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_MODE (x6) == DImode
      && GET_CODE (x6) == ZERO_EXTEND)
    goto L6226;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6226: ATTRIBUTE_UNUSED_LABEL
  x7 = XEXP (x6, 0);
  if (s_register_operand (x7, SImode))
    {
      operands[2] = x7;
      goto L6227;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6227: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 32L)
    goto L6228;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6228: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L6229;
  x1 = XEXP (x0, 0);
  goto L6366;

 L6229: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (scratch_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6230;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6230: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && arm_fast_multiply)))
    {
      return 751;
    }
  x1 = XEXP (x0, 0);
  goto L6366;

 L6367: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[6] = x2;
      goto L6368;
    }
  goto L6689;

 L6368: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6369;
  goto L6689;

 L6369: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case SET:
      goto L6370;
    case PARALLEL:
      goto L10636;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6371;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6371: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L6372;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6372: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L6373;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6373: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[4] = x4;
      goto L6374;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6374: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6375;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6375: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_rhs_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6376;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6377;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6377: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 763;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L10636: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 3
      && load_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6751;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6751: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6752;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6753;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6754;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6755;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6755: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L6756;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6756: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6757;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6757: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6758;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6758: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6759;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6759: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6760;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6760: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6761;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6762;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6762: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6763;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6763: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6764;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6764: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6765;
  x1 = XEXP (x0, 0);
  goto L6689;

 L6765: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)))
    {
      return 798;
    }
  x1 = XEXP (x0, 0);
  goto L6689;

 L6690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[8] = x2;
      goto L6691;
    }
  goto L6721;

 L6691: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6692;
  goto L6721;

 L6692: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PARALLEL)
    goto L10637;
  x1 = XEXP (x0, 0);
  goto L6721;

 L10637: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 5
      && load_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6693;
    }
 L10638: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 5
      && store_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6834;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6693: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6694;
  goto L10638;

 L6694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6695;
    }
  goto L10638;

 L6695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6696;
  goto L10638;

 L6696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6697;
    }
  goto L10638;

 L6697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L)
    goto L6698;
  goto L10638;

 L6698: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6699;
  goto L10638;

 L6699: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6700;
    }
  goto L10638;

 L6700: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6701;
  goto L10638;

 L6701: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6702;
  goto L10638;

 L6702: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6703;
  goto L10638;

 L6703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6704;
    }
  goto L10638;

 L6704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6705;
  goto L10638;

 L6705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6706;
  goto L10638;

 L6706: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6707;
  goto L10638;

 L6707: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6708;
  goto L10638;

 L6708: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6709;
  goto L10638;

 L6709: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6710;
    }
  goto L10638;

 L6710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6711;
  goto L10638;

 L6711: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6712;
  goto L10638;

 L6712: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6713;
  goto L10638;

 L6713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6714;
  goto L10638;

 L6714: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x2) == SET)
    goto L6715;
  goto L10638;

 L6715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L6716;
    }
  goto L10638;

 L6716: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6717;
  goto L10638;

 L6717: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6718;
  goto L10638;

 L6718: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6719;
  goto L10638;

 L6719: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 12L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)))
    {
      return 796;
    }
  goto L10638;

 L6834: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6835;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6836;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6836: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6837;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6837: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6838;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 16L)
    goto L6839;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6839: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6840;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6840: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6841;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6841: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6842;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6842: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6843;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6843: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6844;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6844: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6845;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6845: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6846;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6846: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6847;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6847: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6848;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6848: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6849;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6849: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) == SET)
    goto L6850;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6850: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6851;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6851: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6852;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6852: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6853;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6853: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6854;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6854: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L6855;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6855: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x2) == SET)
    goto L6856;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6857;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6858;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6858: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6859;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6859: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 12L)
    goto L6860;
  x1 = XEXP (x0, 0);
  goto L6721;

 L6860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[6] = x3;
      goto L6861;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6861: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)))
    {
      return 802;
    }
  x1 = XEXP (x0, 0);
  goto L6721;

 L6722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[7] = x2;
      goto L6723;
    }
  goto L6794;

 L6723: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6724;
  goto L6794;

 L6724: ATTRIBUTE_UNUSED_LABEL
  tem = recog_29 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6794;

 L6795: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[6] = x2;
      goto L6796;
    }
  goto L6815;

 L6796: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6797;
  goto L6815;

 L6797: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PARALLEL:
      goto L10663;
    case SET:
      goto L7023;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6815;

 L10663: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L7035;
  if (XVECLEN (x1, 0) >= 3
      && load_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6798;
    }
 L10662: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 3
      && store_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6894;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7035: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7036;
  x1 = XEXP (x0, 0);
  goto L6815;

 L7036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[0] = x3;
      goto L7037;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shiftable_operator (x3, SImode))
    {
      operands[1] = x3;
      goto L7038;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7038: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L7039;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7039: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (memory_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7040;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7040: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == CLOBBER)
    goto L7041;
  x1 = XEXP (x0, 0);
  goto L6815;

 L7041: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (scratch_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L7042;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7042: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))))
    {
      return 814;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6798: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6799;
  goto L10662;

 L6799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6800;
    }
  goto L10662;

 L6800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6801;
  goto L10662;

 L6801: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6802;
    }
  goto L10662;

 L6802: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6803;
  goto L10662;

 L6803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6804;
    }
  goto L10662;

 L6804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6805;
  goto L10662;

 L6805: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6806;
  goto L10662;

 L6806: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6807;
  goto L10662;

 L6807: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6808;
  goto L10662;

 L6808: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6809;
  goto L10662;

 L6809: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6810;
    }
  goto L10662;

 L6810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6811;
  goto L10662;

 L6811: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6812;
  goto L10662;

 L6812: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6813;
  goto L10662;

 L6813: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)))
    {
      return 800;
    }
  goto L10662;

 L6894: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6895;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6895: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10665;
  x1 = XEXP (x0, 0);
  goto L6815;

 L10665: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MEM)
    goto L6945;
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L6896;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6946;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6947;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6947: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6948;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6948: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6949;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6949: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6950;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6950: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6951;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6951: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6952;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6952: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6953;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6953: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6954;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6954: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6955;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6956;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6956: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6957;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6957: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 8L)
    goto L6958;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6958: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6959;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6959: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)))
    {
      return 806;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6896: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == PLUS)
    goto L6897;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6897: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6898;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6898: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 8L)
    goto L6899;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6899: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6900;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6900: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6901;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6901: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L6902;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6903;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6903: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x2) == SET)
    goto L6904;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6904: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6905;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6906;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6906: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[2]))
    goto L6907;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6907: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6908;
  x1 = XEXP (x0, 0);
  goto L6815;

 L6908: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6909;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6909: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)))
    {
      return 804;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7023: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7024;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7024: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == MINUS)
    goto L7025;
  x1 = XEXP (x0, 0);
  goto L6815;

 L7025: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L7026;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shift_operator (x3, SImode))
    {
      operands[2] = x3;
      goto L7027;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7027: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L7028;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7028: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L7029;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L7029: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 813;
    }
  x1 = XEXP (x0, 0);
  goto L6815;

 L6816: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[5] = x2;
      goto L6817;
    }
  goto L6977;

 L6817: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6818;
  goto L6977;

 L6818: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    case PARALLEL:
      goto L10668;
    case SET:
      goto L8166;
    default:
     break;
   }
  x1 = XEXP (x0, 0);
  goto L6977;

 L10668: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) == 2)
    goto L7048;
 L10666: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 2
      && load_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6819;
    }
 L10667: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x1, 0) >= 2
      && store_multiple_operation (x1, VOIDmode))
    {
      operands[0] = x1;
      goto L6965;
    }
  x1 = XEXP (x0, 0);
  goto L6977;

 L7048: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L7049;
  goto L10666;

 L7049: ATTRIBUTE_UNUSED_LABEL
  tem = recog_30 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  goto L10666;

 L6819: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6820;
  goto L10667;

 L6820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6821;
    }
  goto L10667;

 L6821: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6822;
  goto L10667;

 L6822: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6823;
    }
  goto L10667;

 L6823: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6824;
  goto L10667;

 L6824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6825;
    }
  goto L10667;

 L6825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6826;
  goto L10667;

 L6826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6827;
  goto L10667;

 L6827: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6828;
  goto L10667;

 L6828: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L
      && ((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)))
    {
      return 801;
    }
  goto L10667;

 L6965: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) == SET)
    goto L6966;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6966: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6967;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6968;
    }
  x1 = XEXP (x0, 0);
  goto L6977;

 L6968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L6969;
    }
  x1 = XEXP (x0, 0);
  goto L6977;

 L6969: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) == SET)
    goto L6970;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6970: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == MEM)
    goto L6971;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6971: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == PLUS)
    goto L6972;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6972: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, operands[1]))
    goto L6973;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6973: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 4L)
    goto L6974;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6974: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_hard_register_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L6975;
    }
  x1 = XEXP (x0, 0);
  goto L6977;

 L6975: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)))
    {
      return 807;
    }
  x1 = XEXP (x0, 0);
  goto L6977;

 L8166: ATTRIBUTE_UNUSED_LABEL
  tem = recog_31 (x0, insn, pnum_clobbers);
  if (tem >= 0)
    return tem;
  x1 = XEXP (x0, 0);
  goto L6977;

 L6978: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L6979;
    }
  goto L6986;

 L6979: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6980;
  goto L6986;

 L6980: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == SET)
    goto L8208;
  x1 = XEXP (x0, 0);
  goto L6986;

 L8208: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L10712;
    case V8QImode:
      goto L10713;
    case V4HImode:
      goto L10714;
    case V2SImode:
      goto L10715;
    default:
      break;
    }
 L6981: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC)
    goto L6996;
  x1 = XEXP (x0, 0);
  goto L6986;

 L10712: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L8209;
    }
  goto L6981;

 L8209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == UNSPEC
      && XVECLEN (x2, 0) == 1
      && XINT (x2, 1) == 17)
    goto L8210;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8210: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 913;
    }
  x2 = XEXP (x1, 0);
  goto L6981;

 L10713: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V8QImode))
    {
      operands[0] = x2;
      goto L8217;
    }
  goto L6981;

 L8217: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V8QImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 8)
    goto L8218;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8218: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8219;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8219: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8220;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8220: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8221;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8221: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8222;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8222: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 4);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8223;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8223: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 5);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8224;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8224: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 6);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8225;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8225: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 7);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 914;
    }
  x2 = XEXP (x1, 0);
  goto L6981;

 L10714: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V4HImode))
    {
      operands[0] = x2;
      goto L8232;
    }
  goto L6981;

 L8232: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V4HImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 4)
    goto L8233;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8233: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8234;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8234: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8235;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8235: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8236;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8236: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 3);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 915;
    }
  x2 = XEXP (x1, 0);
  goto L6981;

 L10715: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x2, V2SImode))
    {
      operands[0] = x2;
      goto L8243;
    }
  goto L6981;

 L8243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == V2SImode
      && GET_CODE (x2) == CONST_VECTOR
      && XVECLEN (x2, 0) == 2)
    goto L8244;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8244: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L8245;
  x2 = XEXP (x1, 0);
  goto L6981;

 L8245: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && ((TARGET_ARM) && (TARGET_REALLY_IWMMXT)))
    {
      return 916;
    }
  x2 = XEXP (x1, 0);
  goto L6981;

 L6996: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10716;
 L6982: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == LABEL_REF)
    goto L6983;
  x1 = XEXP (x0, 0);
  goto L6986;

 L10716: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L6997;
    }
 L10717: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L7005;
    }
  goto L6982;

 L6997: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 810;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L10717;

 L7005: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 811;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L6982;

 L6983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  operands[0] = x3;
  goto L6984;

 L6984: ATTRIBUTE_UNUSED_LABEL
  if (((TARGET_ARM) && (TARGET_ARM)))
    {
      return 808;
    }
  x1 = XEXP (x0, 0);
  goto L6986;

 L6987: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[1] = x2;
      goto L6988;
    }
  goto ret0;

 L6988: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT
      && XWINT (x2, 0) == 0L)
    goto L6989;
  goto ret0;

 L6989: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == RETURN
      && ((TARGET_ARM) && (TARGET_ARM && USE_RETURN_INSN (FALSE))))
    {
      return 809;
    }
  goto ret0;
 ret0:
  return -1;
}

int
recog (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_MODE (x0))
    {
    case SImode:
      goto L9509;
    case V2SImode:
      goto L9510;
    default:
      break;
    }
 L0: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L9512;
    case SET:
      goto L9;
    case RETURN:
      goto L9527;
    case UNSPEC_VOLATILE:
      goto L9528;
    case CONST_INT:
      goto L9529;
    case PREFETCH:
      goto L3923;
    case COND_EXEC:
      goto L4492;
    default:
     break;
   }
  goto ret0;

 L9509: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    case UNSPEC:
      goto L9542;
    case UNSPEC_VOLATILE:
      goto L9543;
    default:
     break;
   }
  goto L0;

 L9542: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 1
      && XINT (x0, 1) == 6)
    goto L3928;
  goto L0;

 L3928: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      return 314;
    }
  goto L0;

 L9543: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2
      && XINT (x0, 1) == 9)
    goto L5510;
  goto L0;

 L5510: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (immediate_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5511;
    }
  goto L0;

 L5511: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5512;
    }
  goto L0;

 L5512: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 539;
    }
  goto L0;

 L9510: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == UNSPEC_VOLATILE
      && XVECLEN (x0, 0) == 3
      && XINT (x0, 1) == 11)
    goto L4835;
  goto L0;

 L4835: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L4836;
    }
  goto L0;

 L4836: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L4837;
    }
  goto L0;

 L4837: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V2SImode))
    {
      operands[2] = x1;
      goto L4838;
    }
  goto L0;

 L4838: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 453;
    }
  goto L0;

 L9512: ATTRIBUTE_UNUSED_LABEL
  return recog_9 (x0, insn, pnum_clobbers);

 L9: ATTRIBUTE_UNUSED_LABEL
  return recog_21 (x0, insn, pnum_clobbers);

 L9527: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && USE_RETURN_INSN (FALSE)))
    {
      return 212;
    }
  goto ret0;

 L9528: ATTRIBUTE_UNUSED_LABEL
  switch (XVECLEN (x0, 0))
    {
    case 1:
      goto L10279;
    case 3:
      goto L10288;
    default:
      break;
    }
  goto ret0;

 L10279: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 0L:
      goto L2611;
    case 1L:
      goto L3830;
    case 2L:
      goto L3894;
    case 10L:
      goto L3896;
    case 3L:
      goto L3898;
    case 4L:
      goto L3900;
    case 5L:
      goto L3903;
    case 6L:
      goto L3906;
    case 7L:
      goto L3908;
    default:
      break;
    }
  goto ret0;

 L2611: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0L)
    {
      return 216;
    }
  goto ret0;

 L3830: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == RETURN)
    {
      return 297;
    }
  goto ret0;

 L3894: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0L)
    {
      return 304;
    }
  goto ret0;

 L3896: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0L
      && (TARGET_REALLY_IWMMXT))
    {
      return 305;
    }
  goto ret0;

 L3898: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT
      && XWINT (x1, 0) == 0L)
    {
      return 306;
    }
  goto ret0;

 L3900: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L3901;

 L3901: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 307;
    }
  goto ret0;

 L3903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  goto L3904;

 L3904: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return 308;
    }
  goto ret0;

 L3906: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 309;

 L3908: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  operands[0] = x1;
  return 310;

 L10288: ATTRIBUTE_UNUSED_LABEL
  switch (XINT (x0, 1))
    {
    case 11L:
      goto L4825;
    case 12L:
      goto L4840;
    case 13L:
      goto L4855;
    default:
      break;
    }
  goto ret0;

 L4825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case V8QImode:
      goto L10291;
    case V4HImode:
      goto L10292;
    default:
      break;
    }
  goto ret0;

 L10291: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L4826;
    }
  goto ret0;

 L4826: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L4827;
    }
  goto ret0;

 L4827: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V8QImode))
    {
      operands[2] = x1;
      goto L4828;
    }
  goto ret0;

 L4828: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 451;
    }
  goto ret0;

 L10292: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L4831;
    }
  goto ret0;

 L4831: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L4832;
    }
  goto ret0;

 L4832: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V4HImode))
    {
      operands[2] = x1;
      goto L4833;
    }
  goto ret0;

 L4833: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 452;
    }
  goto ret0;

 L4840: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case V8QImode:
      goto L10293;
    case V4HImode:
      goto L10294;
    case V2SImode:
      goto L10295;
    default:
      break;
    }
  goto ret0;

 L10293: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L4841;
    }
  goto ret0;

 L4841: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L4842;
    }
  goto ret0;

 L4842: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V8QImode))
    {
      operands[2] = x1;
      goto L4843;
    }
  goto ret0;

 L4843: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 454;
    }
  goto ret0;

 L10294: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L4846;
    }
  goto ret0;

 L4846: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L4847;
    }
  goto ret0;

 L4847: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V4HImode))
    {
      operands[2] = x1;
      goto L4848;
    }
  goto ret0;

 L4848: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 455;
    }
  goto ret0;

 L10295: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L4851;
    }
  goto ret0;

 L4851: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L4852;
    }
  goto ret0;

 L4852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V2SImode))
    {
      operands[2] = x1;
      goto L4853;
    }
  goto ret0;

 L4853: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 456;
    }
  goto ret0;

 L4855: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_MODE (x1))
    {
    case V8QImode:
      goto L10296;
    case V4HImode:
      goto L10297;
    case V2SImode:
      goto L10298;
    default:
      break;
    }
  goto ret0;

 L10296: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V8QImode))
    {
      operands[0] = x1;
      goto L4856;
    }
  goto ret0;

 L4856: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V8QImode))
    {
      operands[1] = x1;
      goto L4857;
    }
  goto ret0;

 L4857: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V8QImode))
    {
      operands[2] = x1;
      goto L4858;
    }
  goto ret0;

 L4858: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 457;
    }
  goto ret0;

 L10297: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V4HImode))
    {
      operands[0] = x1;
      goto L4861;
    }
  goto ret0;

 L4861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V4HImode))
    {
      operands[1] = x1;
      goto L4862;
    }
  goto ret0;

 L4862: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V4HImode))
    {
      operands[2] = x1;
      goto L4863;
    }
  goto ret0;

 L4863: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 458;
    }
  goto ret0;

 L10298: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, V2SImode))
    {
      operands[0] = x1;
      goto L4866;
    }
  goto ret0;

 L4866: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (register_operand (x1, V2SImode))
    {
      operands[1] = x1;
      goto L4867;
    }
  goto ret0;

 L4867: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (register_operand (x1, V2SImode))
    {
      operands[2] = x1;
      goto L4868;
    }
  goto ret0;

 L4868: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_REALLY_IWMMXT))
    {
      return 459;
    }
  goto ret0;

 L9529: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x0, 0) == 0L)
    {
      return 221;
    }
  goto ret0;

 L3923: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (address_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L3924;
    }
  goto ret0;

 L3924: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  operands[1] = x1;
  goto L3925;

 L3925: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 2);
  operands[2] = x1;
  goto L3926;

 L3926: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch5e))
    {
      return 313;
    }
  goto ret0;

 L4492: ATTRIBUTE_UNUSED_LABEL
  return recog_32 (x0, insn, pnum_clobbers);
 ret0:
  return -1;
}

static rtx
split_1 (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case PLUS:
      goto L5610;
    case ZERO_EXTRACT:
      goto L5674;
    case IOR:
      goto L5751;
    case ZERO_EXTEND:
      goto L5833;
    case SIGN_EXTEND:
      goto L5860;
    case AND:
      goto L5950;
    case IF_THEN_ELSE:
      goto L6060;
    default:
     break;
   }
 L10728: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L5684;
    }
 L10730: ATTRIBUTE_UNUSED_LABEL
  if (logical_binary_operator (x2, SImode))
    {
      operands[1] = x2;
      goto L5764;
    }
 L10732: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      operands[3] = x2;
      goto L5841;
    }
  goto ret0;

 L5610: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L5611;
  goto L10728;

 L5611: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (const_int_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5612;
    }
  goto L10728;

 L5612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5613;
    }
  goto L10728;

 L5613: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1L)
    goto L5614;
  goto L10728;

 L5614: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5615;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5616;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5616: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_553 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[1] = x3;
      goto L5675;
    }
  goto ret0;

 L5675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5676;
    }
  goto ret0;

 L5676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (const_int_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5677;
    }
  goto ret0;

 L5677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5678;
  goto ret0;

 L5678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5679;
    }
  goto ret0;

 L5679: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return gen_split_576 (operands);
    }
  goto ret0;

 L5751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10736;
  goto L10728;

 L10736: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == AND)
    goto L5752;
  if (arm_comparison_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L5918;
    }
  goto L10728;

 L5752: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == NOT)
    goto L5753;
  goto L10728;

 L5753: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L5754;
    }
  goto L10728;

 L5754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == NOT)
    goto L5755;
  goto L10728;

 L5755: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (arm_rhs_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L5756;
    }
  goto L10728;

 L5756: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[3] = x3;
      goto L5757;
    }
  goto L10728;

 L5757: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5758;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5758: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L5759;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5759: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_588 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5918: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5919;
    }
  goto L10728;

 L5919: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5920;
    }
  goto L10728;

 L5920: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[6] = x3;
      goto L5921;
    }
  goto L10728;

 L5921: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5922;
    }
  goto L10728;

 L5922: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L5923;
    }
  goto L10728;

 L5923: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5924;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5924: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_709 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5833: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    case HImode:
      goto L10738;
    case QImode:
      goto L10739;
    default:
      break;
    }
  goto ret0;

 L10738: ATTRIBUTE_UNUSED_LABEL
  if (alignable_memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5834;
    }
  goto ret0;

 L5834: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5835;
  goto ret0;

 L5835: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5836;
    }
  goto ret0;

 L5836: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (!arm_arch4)))
    {
      return gen_split_617 (operands);
    }
  goto ret0;

 L10739: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == SUBREG
      && XINT (x3, 1) == 0)
    goto L5852;
  goto ret0;

 L5852: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  goto L5853;

 L5853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5854;
  goto ret0;

 L5854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5855;
    }
  goto ret0;

 L5855: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (GET_CODE (operands[1]) != MEM) && ! BYTES_BIG_ENDIAN))
    {
      return gen_split_620 (operands);
    }
  goto ret0;

 L5860: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (alignable_memory_operand (x3, HImode))
    {
      operands[1] = x3;
      goto L5861;
    }
  goto ret0;

 L5861: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5862;
  goto ret0;

 L5862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5863;
    }
  goto ret0;

 L5863: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (!arm_arch4)))
    {
      return gen_split_623 (operands);
    }
  goto ret0;

 L5950: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10741;
  goto L10728;

 L10741: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == GE)
    goto L6035;
 L10740: ATTRIBUTE_UNUSED_LABEL
  if (arm_comparison_operator (x3, SImode))
    {
      operands[3] = x3;
      goto L5951;
    }
  goto L10728;

 L6035: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L6036;
    }
  goto L10740;

 L6036: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L6037;
  goto L10740;

 L6037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NEG)
    goto L6038;
  x3 = XEXP (x2, 0);
  goto L10740;

 L6038: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[2] = x4;
      goto L6039;
    }
  x3 = XEXP (x2, 0);
  goto L10740;

 L6039: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6040;
    }
  x3 = XEXP (x2, 0);
  goto L10740;

 L6040: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_rhs_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L6041;
    }
  x3 = XEXP (x2, 0);
  goto L10740;

 L6041: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6042;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L10740;

 L6042: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[5] = x2;
      goto L6043;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L10740;

 L6043: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_730 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L10740;

 L5951: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[1] = x4;
      goto L5952;
    }
  goto L10728;

 L5952: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5953;
    }
  goto L10728;

 L5953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_comparison_operator (x3, SImode))
    {
      operands[6] = x3;
      goto L5954;
    }
  goto L10728;

 L5954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5955;
    }
  goto L10728;

 L5955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L5956;
    }
  goto L10728;

 L5956: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5957;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L5957: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode)
    goto L10742;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L10742: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG)
    goto L10744;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L10744: ATTRIBUTE_UNUSED_LABEL
  if (XINT (x2, 0) == 24)
    goto L10746;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L10746: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode)))
    {
      return gen_split_711 (operands);
    }
 L10747: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed))
    {
      return gen_split_713 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10728;

 L6060: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_comparison_operator (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L6061;
    }
  goto ret0;

 L6061: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  goto L6062;
 L6094: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L6095;
    }
  goto ret0;

 L6062: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  goto L6063;

 L6063: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[0]))
    goto L6064;
 L6074: ATTRIBUTE_UNUSED_LABEL
  operands[4] = x3;
  goto L6075;

 L6064: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  operands[4] = x3;
  goto L6065;

 L6065: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6066;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6074;

 L6066: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_735 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L6074;

 L6075: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (rtx_equal_p (x3, operands[0]))
    goto L6076;
 L6086: ATTRIBUTE_UNUSED_LABEL
  operands[5] = x3;
  goto L6087;

 L6076: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6077;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L6086;

 L6077: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_736 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L6086;

 L6087: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6088;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L6094;

 L6088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_737 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L6094;

 L6095: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L6096;
    }
  goto ret0;

 L6096: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L6097;
    }
  goto ret0;

 L6097: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == NOT)
    goto L6098;
  goto ret0;

 L6098: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[5] = x4;
      goto L6099;
    }
  goto ret0;

 L6099: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6100;
  goto ret0;

 L6100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_738 (operands);
    }
  goto ret0;

 L5684: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10748;
  goto L10730;

 L10748: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTRACT:
      goto L5685;
    case SIGN_EXTRACT:
      goto L5704;
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      goto L10750;
    default:
      goto L10730;
   }
 L10750: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      operands[2] = x3;
      goto L5905;
    }
  goto L10730;

 L5685: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5686;
    }
  goto L10730;

 L5686: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5687;
    }
  goto L10730;

 L5687: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5688;
    }
  goto L10730;

 L5688: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L5689;
    }
  goto L10730;

 L5689: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5690;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5691;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5691: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_577 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5704: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5705;
    }
  goto L10730;

 L5705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5706;
    }
  goto L10730;

 L5706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5707;
    }
  goto L10730;

 L5707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[5] = x3;
      goto L5708;
    }
  goto L10730;

 L5708: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5709;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[6] = x2;
      goto L5710;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5710: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_579 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5905: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L5906;
    }
  goto L10730;

 L5906: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L5907;
    }
  goto L10730;

 L5907: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5908;
    }
  goto L10730;

 L5908: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[6] = x4;
      goto L5909;
    }
  goto L10730;

 L5909: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      operands[7] = x3;
      goto L5910;
    }
  goto L10730;

 L5910: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5911;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5911: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[8] = x2;
      goto L5912;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5912: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_708 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10730;

 L5764: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10751;
  goto L10732;

 L10751: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTRACT:
      goto L5765;
    case SIGN_EXTRACT:
      goto L5797;
    case AND:
    case IOR:
    case XOR:
      goto L10752;
    default:
      goto L10732;
   }
 L10752: ATTRIBUTE_UNUSED_LABEL
  if (logical_binary_operator (x3, SImode))
    {
      operands[9] = x3;
      goto L5781;
    }
  goto L10732;

 L5765: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5766;
    }
  goto L10732;

 L5766: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5767;
    }
  goto L10732;

 L5767: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5768;
    }
  goto L10732;

 L5768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (logical_binary_operator (x3, SImode))
    {
      operands[9] = x3;
      goto L5769;
    }
  goto L10732;

 L5769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == LSHIFTRT)
    goto L5770;
  goto L10732;

 L5770: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5771;
    }
  goto L10732;

 L5771: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_int_operand (x5, SImode))
    {
      operands[6] = x5;
      goto L5772;
    }
  goto L10732;

 L5772: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[7] = x4;
      goto L5773;
    }
  goto L10732;

 L5773: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5774;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[8] = x2;
      goto L5775;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5775: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])))
    {
      return gen_split_589 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5797: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5798;
    }
  goto L10732;

 L5798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5799;
    }
  goto L10732;

 L5799: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5800;
    }
  goto L10732;

 L5800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (logical_binary_operator (x3, SImode))
    {
      operands[9] = x3;
      goto L5801;
    }
  goto L10732;

 L5801: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == ASHIFTRT)
    goto L5802;
  goto L10732;

 L5802: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5803;
    }
  goto L10732;

 L5803: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_int_operand (x5, SImode))
    {
      operands[6] = x5;
      goto L5804;
    }
  goto L10732;

 L5804: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[7] = x4;
      goto L5805;
    }
  goto L10732;

 L5805: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5806: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[8] = x2;
      goto L5807;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5807: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])))
    {
      return gen_split_591 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5781: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10754;
  goto L10732;

 L10754: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x4))
    {
    case LSHIFTRT:
      goto L5782;
    case ASHIFTRT:
      goto L5814;
    default:
     break;
   }
  goto L10732;

 L5782: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5783;
    }
  goto L10732;

 L5783: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_int_operand (x5, SImode))
    {
      operands[6] = x5;
      goto L5784;
    }
  goto L10732;

 L5784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[7] = x4;
      goto L5785;
    }
  goto L10732;

 L5785: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ZERO_EXTRACT)
    goto L5786;
  goto L10732;

 L5786: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5787;
    }
  goto L10732;

 L5787: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5788;
    }
  goto L10732;

 L5788: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5789;
    }
  goto L10732;

 L5789: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5790;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[8] = x2;
      goto L5791;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5791: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])))
    {
      return gen_split_590 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5814: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5815;
    }
  goto L10732;

 L5815: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (const_int_operand (x5, SImode))
    {
      operands[6] = x5;
      goto L5816;
    }
  goto L10732;

 L5816: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      operands[7] = x4;
      goto L5817;
    }
  goto L10732;

 L5817: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == SIGN_EXTRACT)
    goto L5818;
  goto L10732;

 L5818: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5819;
    }
  goto L10732;

 L5819: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (const_int_operand (x4, SImode))
    {
      operands[3] = x4;
      goto L5820;
    }
  goto L10732;

 L5820: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (const_int_operand (x4, SImode))
    {
      operands[4] = x4;
      goto L5821;
    }
  goto L10732;

 L5821: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5822;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5822: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[8] = x2;
      goto L5823;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5823: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])))
    {
      return gen_split_592 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L10732;

 L5841: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10756;
  goto ret0;

 L10756: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L5842;
    case SIGN_EXTEND:
      goto L5869;
    default:
     break;
   }
  goto ret0;

 L5842: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (alignable_memory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5843;
    }
  goto ret0;

 L5843: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5844;
    }
  goto ret0;

 L5844: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5845;
  goto ret0;

 L5845: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5846;
    }
  goto ret0;

 L5846: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (!arm_arch4)))
    {
      return gen_split_618 (operands);
    }
  goto ret0;

 L5869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (alignable_memory_operand (x4, HImode))
    {
      operands[1] = x4;
      goto L5870;
    }
  goto ret0;

 L5870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      operands[4] = x3;
      goto L5871;
    }
  goto ret0;

 L5871: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5872;
  goto ret0;

 L5872: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5873;
    }
  goto ret0;

 L5873: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && (!arm_arch4)))
    {
      return gen_split_624 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
split_insns (rtx x0 ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  switch (GET_CODE (x0))
    {
    case PARALLEL:
      goto L10718;
    case SET:
      goto L5571;
    default:
     break;
   }
  goto ret0;

 L10718: ATTRIBUTE_UNUSED_LABEL
  if (XVECLEN (x0, 0) == 2)
    goto L5538;
  goto ret0;

 L5538: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET)
    goto L5539;
  goto ret0;

 L5539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    case DImode:
      goto L10719;
    case SImode:
      goto L10720;
    case CC_NOOVmode:
      goto L10721;
    case CC_Zmode:
      goto L10722;
    default:
      break;
    }
 L5927: ATTRIBUTE_UNUSED_LABEL
  if (dominant_cc_register (x2, VOIDmode))
    {
      operands[0] = x2;
      goto L5928;
    }
  goto ret0;

 L10719: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, DImode))
    {
      operands[0] = x2;
      goto L5540;
    }
  goto L5927;

 L5540: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == PLUS)
    goto L5541;
  x2 = XEXP (x1, 0);
  goto L5927;

 L5541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10724;
  x2 = XEXP (x1, 0);
  goto L5927;

 L10724: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case SIGN_EXTEND:
      goto L5550;
    case ZERO_EXTEND:
      goto L5559;
    case SUBREG:
    case REG:
      goto L10723;
    default:
      x2 = XEXP (x1, 0);
      goto L5927;
   }
 L10723: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5542;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5551;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5551: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5552;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5552: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5553;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5553: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_546 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5559: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5560;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5560: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5561;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5561: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5562;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5562: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_547 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5542: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      operands[2] = x3;
      goto L5543;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5543: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L5544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_545 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L10720: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SImode))
    {
      operands[0] = x2;
      goto L5609;
    }
  goto L5927;

 L5609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode)
    goto L10726;
  x2 = XEXP (x1, 0);
  goto L5927;

 L10726: ATTRIBUTE_UNUSED_LABEL
  tem = split_1 (x0, insn);
  if (tem != 0)
    return tem;
  x2 = XEXP (x1, 0);
  goto L5927;

 L10721: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L5994;
  goto L5927;

 L5994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode
      && GET_CODE (x2) == COMPARE)
    goto L5995;
  x2 = XEXP (x1, 0);
  goto L5927;

 L5995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == IOR)
    goto L5996;
  x2 = XEXP (x1, 0);
  goto L5927;

 L5996: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode)
    goto L10758;
  x2 = XEXP (x1, 0);
  goto L5927;

 L10758: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == AND)
    goto L5997;
  if (comparison_operator (x4, SImode))
    {
      operands[1] = x4;
      goto L6012;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5997: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L5998;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L5998: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L5999;
  x2 = XEXP (x1, 0);
  goto L5927;

 L5999: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (comparison_operator (x4, SImode))
    {
      operands[1] = x4;
      goto L6000;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6000: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6001;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6001: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6002;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6002: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L6003;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6003: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6004;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L6005;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6005: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_714 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6012: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L6013;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6013: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[3] = x5;
      goto L6014;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6014: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == AND)
    goto L6015;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6015: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[0] = x5;
      goto L6016;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6016: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT
      && XWINT (x5, 0) == 1L)
    goto L6017;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6017: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L6018;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6018: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6019;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6019: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[4] = x2;
      goto L6020;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6020: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM))
    {
      return gen_split_715 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L10722: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L6047;
  goto L5927;

 L6047: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_Zmode
      && GET_CODE (x2) == COMPARE)
    goto L6048;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6048: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode
      && GET_CODE (x3) == ASHIFT)
    goto L6049;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6049: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode
      && GET_CODE (x4) == SUBREG
      && XINT (x4, 1) == 0)
    goto L6050;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6050: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      operands[0] = x5;
      goto L6051;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6051: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 24L)
    goto L6052;
  x2 = XEXP (x1, 0);
  goto L5927;

 L6052: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (const_int_operand (x3, VOIDmode))
    {
      operands[1] = x3;
      goto L6053;
    }
  x2 = XEXP (x1, 0);
  goto L5927;

 L6053: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER)
    goto L6054;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6054: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L6055;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L6055: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)))
    {
      return gen_split_731 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L5927;

 L5928: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L5929;
  goto ret0;

 L5929: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode)
    goto L10760;
  goto ret0;

 L10760: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case IOR:
      goto L5930;
    case AND:
      goto L5963;
    default:
     break;
   }
  goto ret0;

 L5930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L5931;
    }
  goto ret0;

 L5931: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L5932;
    }
  goto ret0;

 L5932: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L5933;
    }
  goto ret0;

 L5933: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[6] = x4;
      goto L5934;
    }
  goto ret0;

 L5934: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L5935;
    }
  goto ret0;

 L5935: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5936;
    }
  goto ret0;

 L5936: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L5937;
  goto ret0;

 L5937: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5938;
  goto ret0;

 L5938: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L5939;
    }
  goto ret0;

 L5939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == IOR)
    goto L5940;
  goto ret0;

 L5940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L5941;
    }
  goto ret0;

 L5941: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5942;
  goto ret0;

 L5942: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L5943;
  goto ret0;

 L5943: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[6]))
    {
      operands[6] = x3;
      goto L5944;
    }
  goto ret0;

 L5944: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[4]))
    goto L5945;
  goto ret0;

 L5945: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[5])
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_710 (operands);
    }
  goto ret0;

 L5963: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[3] = x4;
      goto L5964;
    }
  goto ret0;

 L5964: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[1] = x5;
      goto L5965;
    }
  goto ret0;

 L5965: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[2] = x5;
      goto L5966;
    }
  goto ret0;

 L5966: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_comparison_operator (x4, SImode))
    {
      operands[6] = x4;
      goto L5967;
    }
  goto ret0;

 L5967: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      operands[4] = x5;
      goto L5968;
    }
  goto ret0;

 L5968: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_add_operand (x5, SImode))
    {
      operands[5] = x5;
      goto L5969;
    }
  goto ret0;

 L5969: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L)
    goto L5970;
  goto ret0;

 L5970: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET)
    goto L5971;
  goto ret0;

 L5971: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[7] = x2;
      goto L5972;
    }
  goto ret0;

 L5972: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == AND)
    goto L5973;
  goto ret0;

 L5973: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[3]))
    {
      operands[3] = x3;
      goto L5974;
    }
  goto ret0;

 L5974: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[1]))
    goto L5975;
  goto ret0;

 L5975: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[2]))
    goto L5976;
  goto ret0;

 L5976: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, operands[6]))
    {
      operands[6] = x3;
      goto L5977;
    }
  goto ret0;

 L5977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[4]))
    goto L5978;
  goto ret0;

 L5978: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, operands[5])
      && (TARGET_ARM && reload_completed))
    {
      return gen_split_712 (operands);
    }
  goto ret0;

 L5571: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    case SImode:
      goto L10762;
    case DImode:
      goto L10763;
    case HImode:
      goto L10764;
    case SFmode:
      goto L10766;
    default:
      break;
    }
  goto ret0;

 L10762: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5572;
    }
 L10765: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5890;
    }
  goto ret0;

 L5572: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10767;
 L5886: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5887;
    }
  x1 = XEXP (x0, 0);
  goto L10765;

 L10767: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5573;
    case MINUS:
      goto L5620;
    case AND:
      goto L5667;
    case SIGN_EXTRACT:
      goto L5695;
    case IOR:
      goto L5737;
    case SIGN_EXTEND:
      goto L5882;
    default:
     break;
   }
  goto L5886;

 L5573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5574;
    }
  goto L5886;

 L5574: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5575;
    }
  goto L5886;

 L5575: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM &&
   GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || const_ok_for_arm (-INTVAL (operands[2])))))
    {
      return gen_split_550 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5621;
    }
  goto L5886;

 L5621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5622;
    }
  goto L5886;

 L5622: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[1]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[1]))))
    {
      return gen_split_558 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5668;
    }
  goto L5886;

 L5668: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5669;
    }
  goto L5886;

 L5669: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[2]) == CONST_INT
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2])))))
    {
      return gen_split_575 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5695: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5696;
    }
  goto L5886;

 L5696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5697;
    }
  goto L5886;

 L5697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (const_int_operand (x2, SImode))
    {
      operands[3] = x2;
      goto L5698;
    }
  goto L5886;

 L5698: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB))
    {
      return gen_split_578 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5737: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5738;
    }
  goto L5886;

 L5738: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5739;
    }
  goto L5886;

 L5739: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && GET_CODE (operands[2]) == CONST_INT
   && !const_ok_for_arm (INTVAL (operands[2]))))
    {
      return gen_split_585 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bad_signed_byte_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5883;
    }
  goto L5886;

 L5883: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4 && reload_completed))
    {
      return gen_split_628 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L5886;

 L5887: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1]))))))
    {
      return gen_split_632 (operands);
    }
  x1 = XEXP (x0, 0);
  goto L10765;

 L5890: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5891;
    }
  goto ret0;

 L5891: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB && CONST_OK_FOR_THUMB_LETTER (INTVAL (operands[1]), 'J')))
    {
      return gen_split_633 (operands);
    }
 L5895: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB && CONST_OK_FOR_THUMB_LETTER (INTVAL (operands[1]), 'K')))
    {
      return gen_split_634 (operands);
    }
  goto ret0;

 L10763: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, DImode))
    {
      operands[0] = x1;
      goto L5632;
    }
  goto ret0;

 L5632: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DImode)
    goto L10774;
  goto ret0;

 L10774: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case IOR:
      goto L5646;
    case XOR:
      goto L5653;
    case AND:
      goto L5660;
    case NOT:
      goto L5827;
    default:
     break;
   }
 L10773: ATTRIBUTE_UNUSED_LABEL
  if (logical_binary_operator (x1, DImode))
    {
      operands[6] = x1;
      goto L5633;
    }
  goto ret0;

 L5646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L5647;
  goto L10773;

 L5647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5648;
    }
  goto L10773;

 L5648: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5649;
    }
  goto L10773;

 L5649: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && operands[0] != operands[1] && reload_completed))
    {
      return gen_split_571 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode
      && GET_CODE (x2) == ZERO_EXTEND)
    goto L5654;
  goto L10773;

 L5654: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5655;
    }
  goto L10773;

 L5655: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5656;
    }
  goto L10773;

 L5656: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && operands[0] != operands[1] && reload_completed))
    {
      return gen_split_572 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5660: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L10778;
  goto L10773;

 L10778: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      goto L5661;
    case NOT:
      goto L5715;
    default:
     break;
   }
  goto L10773;

 L5661: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5662;
    }
  goto L10773;

 L5662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5663;
    }
  goto L10773;

 L5663: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed))
    {
      return gen_split_573 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5715: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode)
    goto L10781;
  goto L10773;

 L10781: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x3))
    {
    case ZERO_EXTEND:
      goto L5723;
    case SIGN_EXTEND:
      goto L5731;
    case SUBREG:
    case REG:
      goto L10780;
    default:
      goto L10773;
   }
 L10780: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, DImode))
    {
      operands[1] = x3;
      goto L5716;
    }
  goto L10773;

 L5723: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5724;
    }
  goto L10773;

 L5724: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5725;
    }
  goto L10773;

 L5725: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && reload_completed
   && operands[0] != operands[1]))
    {
      return gen_split_582 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5731: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      operands[2] = x4;
      goto L5732;
    }
  goto L10773;

 L5732: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5733;
    }
  goto L10773;

 L5733: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed))
    {
      return gen_split_583 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5717;
    }
  goto L10773;

 L5717: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))))
    {
      return gen_split_581 (operands);
    }
  x1 = XEXP (x0, 1);
  goto L10773;

 L5827: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5828;
    }
  goto ret0;

 L5828: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed))
    {
      return gen_split_609 (operands);
    }
  goto ret0;

 L5633: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode)
    goto L10784;
  goto ret0;

 L10784: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == SIGN_EXTEND)
    goto L5640;
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5634;
    }
  goto ret0;

 L5640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5641;
    }
  goto ret0;

 L5641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[1] = x2;
      goto L5642;
    }
  goto ret0;

 L5642: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed))
    {
      return gen_split_570 (operands);
    }
  goto ret0;

 L5634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      operands[2] = x2;
      goto L5635;
    }
  goto ret0;

 L5635: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && reload_completed && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))))
    {
      return gen_split_569 (operands);
    }
  goto ret0;

 L10764: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, HImode))
    {
      operands[0] = x1;
      goto L5876;
    }
  goto ret0;

 L5876: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode
      && GET_CODE (x1) == SIGN_EXTEND)
    goto L5877;
  goto ret0;

 L5877: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (bad_signed_byte_operand (x2, QImode))
    {
      operands[1] = x2;
      goto L5878;
    }
  goto ret0;

 L5878: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && arm_arch4 && reload_completed))
    {
      return gen_split_626 (operands);
    }
  goto ret0;

 L10766: ATTRIBUTE_UNUSED_LABEL
  if (nonimmediate_operand (x1, SFmode))
    {
      operands[0] = x1;
      goto L5898;
    }
  goto ret0;

 L5898: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (immediate_operand (x1, SFmode))
    {
      operands[1] = x1;
      goto L5899;
    }
  goto ret0;

 L5899: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM
   && !TARGET_HARD_FLOAT
   && reload_completed
   && GET_CODE (operands[1]) == CONST_DOUBLE))
    {
      return gen_split_648 (operands);
    }
  goto ret0;
 ret0:
  return 0;
}

rtx
peephole2_insns (rtx x0 ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	int *_pmatch_len ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x1 ATTRIBUTE_UNUSED;
  rtx x2 ATTRIBUTE_UNUSED;
  rtx x3 ATTRIBUTE_UNUSED;
  rtx x4 ATTRIBUTE_UNUSED;
  rtx x5 ATTRIBUTE_UNUSED;
  rtx x6 ATTRIBUTE_UNUSED;
  rtx x7 ATTRIBUTE_UNUSED;
  rtx x8 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;
  recog_data.insn = NULL_RTX;

  if (GET_CODE (x0) == SET)
    goto L5565;
  goto ret0;

 L5565: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode)
    goto L10785;
  goto ret0;

 L10785: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5566;
    }
 L10786: ATTRIBUTE_UNUSED_LABEL
  if (register_operand (x1, SImode))
    {
      operands[0] = x1;
      goto L5579;
    }
  goto ret0;

 L5566: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode)
    goto L10787;
  x1 = XEXP (x0, 0);
  goto L10786;

 L10787: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    case PLUS:
      goto L5567;
    case MINUS:
      goto L5627;
    case IOR:
      goto L5744;
    case SUBREG:
    case REG:
      goto L10790;
    default:
      x1 = XEXP (x0, 0);
      goto L10786;
   }
 L10790: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L6025;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5568;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT)
    goto L10791;
  x1 = XEXP (x0, 0);
  goto L10786;

 L10791: ATTRIBUTE_UNUSED_LABEL
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5569;
    }
 L10792: ATTRIBUTE_UNUSED_LABEL
  if (XWINT (x2, 0) == -1L)
    goto L5592;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5569: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L10792;
  x1 = PATTERN (tem);
  if ((TARGET_ARM &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2]))))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_549 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 1);
  goto L10792;

 L5592: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L10786;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5593;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5593: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (cc_register (x2, VOIDmode))
    {
      operands[2] = x2;
      goto L5594;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == COMPARE)
    goto L5595;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5595: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5596;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5596: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == -1L)
    goto L5597;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5597: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (2);
  if (tem == NULL_RTX)
    goto L10786;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5598;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC)
    goto L5599;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE)
    goto L5600;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (equality_operator (x3, VOIDmode))
    {
      operands[3] = x3;
      goto L5601;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, operands[2]))
    goto L5602;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5602: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT
      && XWINT (x4, 0) == 0L)
    goto L5603;
  x1 = XEXP (x0, 0);
  goto L10786;

 L5603: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  operands[4] = x3;
  goto L5604;

 L5604: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  operands[5] = x3;
  goto L5605;

 L5605: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_ARM && peep2_reg_dead_p (3, operands[2])))
    {
      *_pmatch_len = 2;
      tem = gen_peephole2_552 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (const_int_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5628;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5629;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5629: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L10786;
  x1 = PATTERN (tem);
  if ((TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1]))))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_559 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5744: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      operands[1] = x2;
      goto L5745;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5745: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (const_int_operand (x2, SImode))
    {
      operands[2] = x2;
      goto L5746;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5746: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (0);
  if (tem == NULL_RTX)
    goto L10786;
  x1 = PATTERN (tem);
  if ((TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2]))))
    {
      *_pmatch_len = 0;
      tem = gen_peephole2_586 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L6025: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto L10786;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L6026;
  x1 = XEXP (x0, 0);
  goto L10786;

 L6026: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == REG
      && XINT (x2, 0) == 24)
    goto L6027;
  x1 = XEXP (x0, 0);
  goto L10786;

 L6027: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode
      && GET_CODE (x2) == COMPARE)
    goto L6028;
  x1 = XEXP (x0, 0);
  goto L10786;

 L6028: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[1]))
    goto L6029;
  x1 = XEXP (x0, 0);
  goto L10786;

 L6029: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT
      && XWINT (x3, 0) == 0L
      && (TARGET_ARM
   && (!TARGET_CIRRUS
       || (!cirrus_fp_register (operands[0], SImode)
           && !cirrus_fp_register (operands[1], SImode)))
  ))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_723 (insn, operands);
      if (tem != 0)
        return tem;
    }
  x1 = XEXP (x0, 0);
  goto L10786;

 L5579: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (const_int_operand (x1, SImode))
    {
      operands[1] = x1;
      goto L5580;
    }
  goto ret0;

 L5580: ATTRIBUTE_UNUSED_LABEL
  tem = peep2_next_insn (1);
  if (tem == NULL_RTX)
    goto ret0;
  x1 = PATTERN (tem);
  if (GET_CODE (x1) == SET)
    goto L5581;
  goto ret0;

 L5581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, operands[0]))
    goto L5582;
  goto ret0;

 L5582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode
      && GET_CODE (x2) == PLUS)
    goto L5583;
  goto ret0;

 L5583: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, operands[0]))
    goto L5584;
  goto ret0;

 L5584: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (register_operand (x3, SImode))
    {
      operands[2] = x3;
      goto L5585;
    }
  goto ret0;

 L5585: ATTRIBUTE_UNUSED_LABEL
  if ((TARGET_THUMB
   && REGNO (operands[2]) == STACK_POINTER_REGNUM 
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0))
    {
      *_pmatch_len = 1;
      tem = gen_peephole2_551 (insn, operands);
      if (tem != 0)
        return tem;
    }
  goto ret0;
 ret0:
  return 0;
}

