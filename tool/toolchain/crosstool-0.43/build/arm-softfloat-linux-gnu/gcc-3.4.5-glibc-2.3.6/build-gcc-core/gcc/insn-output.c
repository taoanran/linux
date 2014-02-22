/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"

static const char * const output_4[] = {
  "add%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   static const char * const asms[] = 
   {
     "add\t%0, %0, %2",
     "sub\t%0, %0, #%n2",
     "add\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && GET_CODE (operands[2]) == CONST_INT
       && INTVAL (operands[2]) < 0)
     return "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_6[] = {
  "add%?s\t%0, %1, %2",
  "sub%?s\t%0, %1, #%n2",
};

static const char * const output_7[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_8[] = {
  "add%?s\t%0, %1, %2",
  "sub%?s\t%0, %1, #%n2",
};

static const char * const output_9[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_10[] = {
  "sub%?s\t%0, %1, %2",
  "add%?s\t%0, %1, #%n2",
};

static const char * const output_11[] = {
  "add%?s\t%0, %1, %2",
  "sub%?s\t%0, %1, #%n2",
};

static const char * const output_12[] = {
  "add%?s\t%0, %1, %2",
  "sub%?s\t%0, %1, #%n2",
};

static const char * const output_13[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_14[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_20[] = {
  "add%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_29[] = {
  "rsb%?\t%0, %2, %1",
  "#",
};

static const char * const output_30[] = {
  "sub%?s\t%0, %1, %2",
  "rsb%?s\t%0, %2, %1",
};

static const char * const output_31[] = {
  "sub%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %0, %2";
  else
    return "mul\t%0, %0, %2";
  
}

static const char * const output_54[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_56[] = {
  "and%?s\t%0, %1, %2",
  "bic%?s\t%0, %1, #%B2",
};

static const char * const output_57[] = {
  "tst%?\t%0, %1",
  "bic%?s\t%2, %0, #%B1",
};

static const char *
output_58 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char *
output_59 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  operands[2] = GEN_INT (((1 << INTVAL (operands[2])) - 1)
			 << INTVAL (operands[3]));
  output_asm_insn ("ands\t%0, %1, %2", operands);
  return "movne\t%0, #1";
  
}

static const char * const output_61[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_69[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_71[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_76[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_83[] = {
  "cmp\t%1, %2\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tmovge\t%0, %1",
  "cmp\t%1, %2\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_84[] = {
  "cmp\t%1, %2\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tmovlt\t%0, %1",
  "cmp\t%1, %2\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_85[] = {
  "cmp\t%1, %2\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_86[] = {
  "cmp\t%1, %2\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  operands[3] = gen_rtx (minmax_code (operands[3]), SImode, operands[1],
			 operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    enum rtx_code code = GET_CODE (operands[4]);

    operands[5] = gen_rtx (minmax_code (operands[5]), SImode, operands[2],
			   operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != MINUS && code != IOR && code != XOR))
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char * const output_103[] = {
  "cmp\t%0, #0\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_104[] = {
  "cmp\t%0, #0\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char *
output_110 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_111[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%?b\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  rtx mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == LABEL_REF)
    return "ldr\t%0, %1";
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);
      rtx b = XEXP (mem, 1);

      /* This can happen due to bugs in reload.  */
      if (GET_CODE (a) == REG && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }

      else if (   GET_CODE (a) == LABEL_REF
	       && GET_CODE (b) == CONST_INT)
        return "ldr\t%0, %1";
    }
    
  return "ldrh\t%0, %1";
  
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ops[4];
    rtx mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && GET_CODE (b) == CONST_INT)
          return "ldr\t%0, %1";

        if (GET_CODE (b) == REG)
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }
      
    if (GET_CODE (ops[1]) != REG)
      {
        debug_rtx (ops[1]);
        abort ();
      }

    ops[0] = operands[0];
    ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If the address is invalid, this will split the instruction into two.  */
  if (bad_signed_byte_operand (operands[1], VOIDmode))
    return "#";
  return "ldr%?sb\t%0, %1";
  
}

static const char *
output_121 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If the address is invalid, this will split the instruction into two.  */
  if (bad_signed_byte_operand (operands[1], VOIDmode))
    return "#";
  return "ldr%?sb\t%0, %1";
  
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ops[3];
    rtx mem = XEXP (operands[1], 0);
    
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";

    if (GET_CODE (mem) == PLUS
        && GET_CODE (XEXP (mem, 0)) == LABEL_REF)
      return "ldr\t%0, %1";
      
    if (which_alternative == 0)
      return "ldrsb\t%0, %1";
      
    ops[0] = operands[0];
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
	rtx b = XEXP (mem, 1);
	
        ops[1] = a;
        ops[2] = b;

        if (GET_CODE (a) == REG)
	  {
	    if (GET_CODE (b) == REG)
              output_asm_insn ("ldrsb\t%0, [%1, %2]", ops);
            else if (REGNO (a) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%1, %2]", ops);
		output_asm_insn ("lsl\t%0, %0, #24", ops);
		output_asm_insn ("asr\t%0, %0, #24", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
	  }
        else if (GET_CODE (b) != REG)
	  abort ();
	else
          {
            if (REGNO (b) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%2, %1]", ops);
		output_asm_insn ("lsl\t%0, %0, #24", ops);
		output_asm_insn ("asr\t%0, %0, #24", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
          }
      }
    else if (GET_CODE (mem) == REG && REGNO (ops[0]) == REGNO (mem))
      {
        output_asm_insn ("ldrb\t%0, [%0, #0]", ops);
	output_asm_insn ("lsl\t%0, %0, #24", ops);
	output_asm_insn ("asr\t%0, %0, #24", ops);
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
	
        output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
      }
    return "";
  }
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return (output_move_double (operands));
  
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx (MEM, SImode,
			     plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_125[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_126[] = {
  "mov	%0, %1",
  "mov	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

#ifdef AOF_ASSEMBLER
  operands[1] = aof_pic_entry (operands[1]);
#endif
  output_asm_insn ("ldr%?\t%0, %a1", operands);
  return "";
  
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  (*targetm.asm_out.internal_label) (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[1]));
  return "add\t%0, %|pc";
  
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    (*targetm.asm_out.internal_label) (asm_out_file, "L",
			       CODE_LABEL_NUMBER (operands[1]));
    return "add%?\t%0, %|pc, %0";
  
}

static const char * const output_132[] = {
  "cmp%?\t%0, #0",
  "sub%?s\t%0, %1, #0",
};

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  switch (which_alternative)
    {
    case 0: return "add	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "mov	%0, %1";
    default: abort ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == REG
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];
    
	}
      return "ldrh	%0, %1";
    }
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ops[2];

    ops[0] = operands[0];
    ops[1] = gen_rtx_MEM (SImode, plus_constant (XEXP (operands[1], 0), 2));
    output_asm_insn ("ldr%?\t%0, %1\t%@ load-rotate", ops);
    return "";
  }
}

static const char * const output_135[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%?h\t%1, %0\t%@ movhi ",
  "ldr%?h\t%0, %1\t%@ movhi",
};

static const char * const output_136[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "ldr%?\t%0, %1\t%@ movhi",
};

static const char * const output_137[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "ldr%?\t%0, %1\t%@ movhi_bigend\n\tmov%?\t%0, %0, asr #16",
};

static const char * const output_139[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  abort ();
}

static const char * const output_141[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%?b\t%0, %1",
  "str%?b\t%1, %0",
};

static const char * const output_142[] = {
  "add\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char * const output_143[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_144[] = {
  "add\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_145 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_move_double (operands);
}

static const char *
output_146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx (MEM, SImode,
			     plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_159 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  output_asm_insn ("cmp\t%1, %2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  output_asm_insn ("add\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
{
  if (which_alternative == 0)
    output_asm_insn ("cmp\t%0, #0", operands);
  else if (which_alternative == 1)
    output_asm_insn ("sub\t%0, %1, #0", operands);
  else
    {
      output_asm_insn ("cmp\t%1, #0", operands);
      if (which_alternative == 2)
	output_asm_insn ("mov\t%0, %1", operands);
      else
	output_asm_insn ("str\t%1, %0", operands);
    }
  switch (get_attr_length (insn) - ((which_alternative > 1) ? 2 : 0))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_164 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_166 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_167 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  if (which_alternative == 0)
    output_asm_insn ("and\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_168 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  output_asm_insn ("orr\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  if (which_alternative == 0)
    output_asm_insn ("orr\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  output_asm_insn ("eor\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  if (which_alternative == 0)
    output_asm_insn ("eor\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  output_asm_insn ("bic\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  if (which_alternative == 0)
    output_asm_insn ("bic\t%0, %3", operands);
  else if (which_alternative <= 2)
    {
      output_asm_insn ("bic\t%1, %3", operands);
      /* It's ok if OP0 is a lo-reg, even though the mov will set the
	 conditions again, since we're only testing for equality.  */
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("bic\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_175 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   {
     rtx cond[3];

     
     cond[0] = (which_alternative < 3) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (GET_CODE (cond[2]) == CONST_INT && INTVAL (cond[2]) < 0)
       output_asm_insn ("sub\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("add\t%0, %1, %2", cond);

     if (which_alternative >= 3
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 3) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_176 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 output_asm_insn ("add\t%0, %1, %2", operands);
	 break;
       case 3:
	 output_asm_insn ("add\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_177 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   {
     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, %3", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - ((which_alternative != 0) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_178 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  output_asm_insn ("cmp\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char * const output_179[] = {
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_187 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state != 0)
    abort ();

  return "bvs\t%l0\n\tbeq\t%l0";
  
}

static const char *
output_188 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state != 0)
    abort ();

  return "bmi\t%l0\n\tbgt\t%l0";
  
}

static const char *
output_189 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_190 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state != 0)
    abort ();

  return "bmi\t%l0\n\tbgt\t%l0";
  
}

static const char *
output_191 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state != 0)
    abort ();

  return "bvs\t%l0\n\tbeq\t%l0";
  
}

static const char *
output_192 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char * const output_196[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "mov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "mov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "mvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "mvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_197[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_198 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return output_call (operands);
  
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return output_call_mem (operands);
  
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (TARGET_CALLER_INTERWORKING)
      return "bl\t%__interwork_call_via_%0";
    else
      return "bl\t%__call_via_%0";
  }
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (TARGET_CALLER_INTERWORKING)
      return "bl\t%__interwork_call_via_%1";
    else
      return "bl\t%__call_via_%1";
  }
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return output_call (&operands[1]);
  
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return output_call_mem (&operands[1]);
  
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, FALSE);
  }
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, TRUE);
  }
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_221 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char * const output_229[] = {
  "orr%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (operands[3] == const0_rtx)
      {
	if (GET_CODE (operands[1]) == LT)
	  return "mov\t%0, %2, lsr #31";

	if (GET_CODE (operands[1]) == GE)
	  return "mvn\t%0, %2\n\tmov\t%0, %0, lsr #31";

	if (GET_CODE (operands[1]) == EQ)
	  return "rsbs\t%0, %2, #1\n\tmovcc\t%0, #0";
      }

    if (GET_CODE (operands[1]) == NE)
      {
        if (which_alternative == 1)
	  return "adds\t%0, %2, #%n3\n\tmovne\t%0, #1";
        return "subs\t%0, %2, %3\n\tmovne\t%0, #1";
      }
    if (which_alternative == 1)
      output_asm_insn ("cmn\t%2, #%n3", operands);
    else
      output_asm_insn ("cmp\t%2, %3", operands);
    return "mov%D1\t%0, #0\n\tmov%d1\t%0, #1";
  
}

static const char *
output_231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%0, %1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
      {"cmp\t%0, %1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    static const char *const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  static const char *const opcodes[4][2] =
  {
    {"cmp\t%0, %1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
    {"cmp\t%0, %1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
  };
  int swap =
    comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

  return opcodes[which_alternative][swap];
}

}

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (GET_CODE (operands[3]) == LT && operands[3] == const0_rtx)
    return "mov\t%0, %1, asr #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tmvnne\t%0, #0";

  if (GET_CODE (operands[3]) == GT)
    return "subs\t%0, %1, %2\n\tmvnne\t%0, %0, asr #31";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (GET_CODE (operands[4]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_246[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_248[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[5]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (GET_CODE (operands[3]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_252[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[3]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (GET_CODE (operands[5]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_254[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_256[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_258[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_260[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_262[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_270[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_272[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ldm[3];
    rtx arith[4];
    int val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }
    if (GET_CODE (XEXP (operands[2], 0)) != REG)
      val1 = INTVAL (XEXP (XEXP (operands[2], 0), 1));
    if (GET_CODE (XEXP (operands[3], 0)) != REG)
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));
    arith[0] = operands[0];
    arith[3] = operands[1];
    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }
   if (val1 && val2)
      {
	rtx ops[3];
	ldm[0] = ops[0] = operands[4];
	ops[1] = XEXP (XEXP (operands[2], 0), 0);
	ops[2] = XEXP (XEXP (operands[2], 0), 1);
	output_add_immediate (ops);
	if (val1 < val2)
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
      }
    else if (val1)
      {
	ldm[0] = XEXP (operands[3], 0);
	if (val1 < val2)
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
      }
    else
      {
	ldm[0] = XEXP (operands[2], 0);
	if (val1 < val2)
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (use_return_insn (FALSE, next_nonnote_insn (insn)))
    return output_return_instruction (const_true_rtx, FALSE, FALSE);
  return arm_output_epilogue (next_nonnote_insn (insn));
  
}

static const char *
output_297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  if (TARGET_ARM)
    return arm_output_epilogue (NULL);
  else /* TARGET_THUMB */
    return thumb_unexpanded_epilogue ();
  
}

static const char * const output_298[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.  */
    if (num_saves == 1)
      output_asm_insn ("str\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	strcpy (pattern, "stmfd\t%m0!, {%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    char pattern[100];

    sprintf (pattern, "sfmfd\t%%1, %d, [%%m0]!", XVECLEN (operands[2], 0));
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  assemble_align (32);
  return "";
  
}

static const char *
output_305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  assemble_align (64);
  return "";
  
}

static const char *
output_306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_307 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  making_const_table = TRUE;
  assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
  assemble_zeros (2);
  return "";
  
}

static const char *
output_309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
      case MODE_FLOAT:
      {
        REAL_VALUE_TYPE r;
        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
        assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
        break;
      }
      default:
        assemble_integer (operands[0], 4, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char * const output_315[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_316[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_317[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_320[] = {
  "suf%?s\t%0, %1, %2",
  "rsf%?s\t%0, %2, %1",
};

static const char * const output_321[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_323[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_330[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_331[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_355[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_356 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: return "mnf%?e\t%0, #%N1";
    case 2: return "ldf%?e\t%0, %1";
    case 3: return "stf%?e\t%1, %0";
    case 4: return output_mov_long_double_fpa_from_arm (operands);
    case 5: return output_mov_long_double_arm_from_fpa (operands);
    case 6: return output_mov_long_double_arm_from_arm (operands);
    }
  
}

static const char * const output_358[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_359[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_360[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_362[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_363[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_364[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_366[] = {
  "mvf%D3s\t%0, %2",
  "mnf%D3s\t%0, #%N2",
  "mvf%d3s\t%0, %1",
  "mnf%d3s\t%0, #%N1",
  "mvf%d3s\t%0, %1\n\tmvf%D3s\t%0, %2",
  "mvf%d3s\t%0, %1\n\tmnf%D3s\t%0, #%N2",
  "mnf%d3s\t%0, #%N1\n\tmvf%D3s\t%0, %2",
  "mnf%d3s\t%0, #%N1\n\tmnf%D3s\t%0, #%N2",
};

static const char * const output_367[] = {
  "mvf%D3d\t%0, %2",
  "mnf%D3d\t%0, #%N2",
  "mvf%d3d\t%0, %1",
  "mnf%d3d\t%0, #%N1",
  "mvf%d3d\t%0, %1\n\tmvf%D3d\t%0, %2",
  "mvf%d3d\t%0, %1\n\tmnf%D3d\t%0, #%N2",
  "mnf%d3d\t%0, #%N1\n\tmvf%D3d\t%0, %2",
  "mnf%d3d\t%0, #%N1\n\tmnf%D3d\t%0, #%N2",
};

static const char *
output_394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return (output_move_double (operands));

    case 3: return "cfmv64lr%?\t%V0, %Q1\n\tcfmv64hr%?\t%V0, %R1";
    case 4: return "cfmvr64l%?\t%Q0, %V1\n\tcfmvr64h%?\t%R0, %V1";

    case 5: return "cfldr64%?\t%V0, %1";
    case 6: return "cfstr64%?\t%V1, %0";

    /* Shifting by 0 will just copy %1 into %0.  */
    case 7: return "cfsh64%?\t%V0, %V1, #0";

    default: abort ();
    }
  }
}

static const char * const output_395[] = {
  "cfcpys%?\t%V0, %V1",
  "cfldrs%?\t%V0, %1",
  "cfmvsr%?\t%V0, %1",
  "cfmvrs%?\t%0, %V1",
  "cfstrs%?\t%V1, %0",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  switch (which_alternative)
    {
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "cfcpyd%?\t%V0, %V1";
    case 6: return "cfldrd%?\t%V0, %1";
    case 7: return "cfmvdlr\t%V0, %Q1\n\tcfmvdhr%?\t%V0, %R1";
    case 8: return "cfmvrdl%?\t%Q0, %V1\n\tcfmvrdh%?\t%R0, %V1";
    case 9: return "cfstrd%?\t%V1, %0";
    default: abort ();
    }
  }
}

static const char * const output_397[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_398[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_399[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

{
  switch (which_alternative)
    {
    default:
      return output_move_double (operands);
    case 3:
      return "wmov%?\t%0,%1";
    case 4:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 5:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 6:
      return "wldrd%?\t%0,%1";
    case 7:
      return "wstrd%?\t%1,%0";
    }
}
}

static const char *
output_402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "mov\t%0, %1";
   case 1: return "mvn\t%0, #%B1";
   case 2: return "ldr\t%0, %1";
   case 3: return "str\t%1, %0";
   case 4: return "tmcr\t%0, %1";
   case 5: return "tmrc\t%0, %1";
   case 6: return arm_output_load_gr (operands);
   case 7: return "wstrw\t%1, %0";
   default:return "wstrw\t%1, [sp, #-4]!\n\twldrw\t%0, [sp], #4\t@move CG reg";
  }
}

static const char *
output_403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_move_double (operands);
}

static const char * const output_537[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};

static const char *
output_724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_ldm_seq (operands, 4);
  
}

static const char *
output_725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_ldm_seq (operands, 3);
  
}

static const char *
output_726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_ldm_seq (operands, 2);
  
}

static const char *
output_727 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_stm_seq (operands, 4);
  
}

static const char *
output_728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_stm_seq (operands, 3);
  
}

static const char *
output_729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  return emit_stm_seq (operands, 2);
  
}

static const char * const output_742[] = {
  "add%?\t%0, %1, %2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_743[] = {
  "rsb%?\t%0, %2, %1",
  "#",
};

static const char * const output_758[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_760[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_765[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_767[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_769[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_778 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_779[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%?b\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_780 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If the address is invalid, this will split the instruction into two.  */
  if (bad_signed_byte_operand (operands[1], VOIDmode))
    return "#";
  return "ldr%?sb\t%0, %1";
  
}

static const char *
output_785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  /* If the address is invalid, this will split the instruction into two.  */
  if (bad_signed_byte_operand (operands[1], VOIDmode))
    return "#";
  return "ldr%?sb\t%0, %1";
  
}

static const char * const output_786[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

    (*targetm.asm_out.internal_label) (asm_out_file, "L",
			       CODE_LABEL_NUMBER (operands[1]));
    return "add%?\t%0, %|pc, %0";
  
}

static const char *
output_788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ops[2];

    ops[0] = operands[0];
    ops[1] = gen_rtx_MEM (SImode, plus_constant (XEXP (operands[1], 0), 2));
    output_asm_insn ("ldr%?\t%0, %1\t%@ load-rotate", ops);
    return "";
  }
}

static const char * const output_789[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%?h\t%1, %0\t%@ movhi ",
  "ldr%?h\t%0, %1\t%@ movhi",
};

static const char * const output_790[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "ldr%?\t%0, %1\t%@ movhi",
};

static const char * const output_791[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "ldr%?\t%0, %1\t%@ movhi_bigend\n\tmov%?\t%0, %0, asr #16",
};

static const char * const output_793[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_794[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%?b\t%0, %1",
  "str%?b\t%1, %0",
};

static const char * const output_795[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_808 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
    rtx ldm[3];
    rtx arith[4];
    int val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }
    if (GET_CODE (XEXP (operands[2], 0)) != REG)
      val1 = INTVAL (XEXP (XEXP (operands[2], 0), 1));
    if (GET_CODE (XEXP (operands[3], 0)) != REG)
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));
    arith[0] = operands[0];
    arith[3] = operands[1];
    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }
   if (val1 && val2)
      {
	rtx ops[3];
	ldm[0] = ops[0] = operands[4];
	ops[1] = XEXP (XEXP (operands[2], 0), 0);
	ops[2] = XEXP (XEXP (operands[2], 0), 1);
	output_add_immediate (ops);
	if (val1 < val2)
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
      }
    else if (val1)
      {
	ldm[0] = XEXP (operands[3], 0);
	if (val1 < val2)
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
      }
    else
      {
	ldm[0] = XEXP (operands[2], 0);
	if (val1 < val2)
	  output_asm_insn ("ldm%?ia\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%?da\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char * const output_838[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_839[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_840[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_843[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_845[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_852[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_853[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_877[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_878 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_879 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: return "mnf%?e\t%0, #%N1";
    case 2: return "ldf%?e\t%0, %1";
    case 3: return "stf%?e\t%1, %0";
    case 4: return output_mov_long_double_fpa_from_arm (operands);
    case 5: return output_mov_long_double_arm_from_fpa (operands);
    case 6: return output_mov_long_double_arm_from_arm (operands);
    }
  
}

static const char * const output_880[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_881[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_882[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_884 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_885 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_886 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   default: return output_move_double (operands);
   }
}

static const char *
output_887 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
 return output_move_double (operands);
}

static const char * const output_1017[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,L,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l,*r,*h,l,!k",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0,l,*0,*0,!k,!k",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,J,lL,*h,*r,!M,!O",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%?r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%?r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,0,r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%r,0,r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "V,m",
    QImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,o<>",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*lh",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*lh",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    offsettable_memory_operand,
    "o",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,m",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "r,mF,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    1
  },
  {
    thumb_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    thumb_cmpneg_operand,
    "L,J",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*h,*m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=!l,l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0,1,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l,0,*0,1,1,1",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "lL,IJ,*r,lIJ,lIJ,lIJ",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "J,l,I,L",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "X",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "X",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,rI,L,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    f_register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,m,f,r,f,r",
    XFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_shift_const,
    "",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,o<>,v,r,v,m,v",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,v,m,v,v",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,v,r,m,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "v,m,r,v,v,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,v,v,v,r,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,v,m,r,v,v",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,o<>,y,y,yr,y,yrm",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,y,yr,y,yrm,y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r,?z,m,z",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z,m,z,z",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=?r",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    alignable_memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    bad_signed_byte_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    bad_signed_byte_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,L,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%?r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,0,r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    offsettable_memory_operand,
    "o",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    index_operand,
    "rJ",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_shift_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    fpa_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,m,f,r,f,r",
    XFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,m,y,r,i",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=?r",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  {
    "*thumb_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    2,
    1
  },
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    3,
    2
  },
  {
    "*thumb_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    0,
    &operand_data[13],
    3,
    0,
    7,
    3
  },
  {
    "*addsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[16],
    3,
    2,
    2,
    2
  },
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  {
    "*addsi3_compare0_for_combiner",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_8 },
#else
    { 0, output_8, 0 },
#endif
    0,
    &operand_data[16],
    3,
    2,
    2,
    2
  },
  {
    "*addsi3_compare0_scratch_for_combiner",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  {
    "*cmpsi2_addneg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    0,
    &operand_data[19],
    4,
    1,
    2,
    2
  },
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_14 },
#else
    { 0, output_14, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  {
    "*addsi3_carryin",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_carryin_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    5,
    0,
    1,
    1
  },
  {
    "*addsi3_carryin_alt1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_carryin_alt2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_carryin_alt3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  {
    "incscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_20 },
#else
    { 0, output_20, 0 },
#endif
    (insn_gen_fn) gen_incscc,
    &operand_data[31],
    4,
    0,
    2,
    2
  },
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[35],
    3,
    0,
    3,
    1
  },
  {
    "*thumb_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[38],
    3,
    0,
    1,
    1
  },
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %1, %2\n\trsc\t%R0, %1, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[44],
    3,
    0,
    1,
    1
  },
  {
    "*thumb_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[47],
    3,
    0,
    1,
    1
  },
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_29 },
#else
    { 0, output_29, 0 },
#endif
    0,
    &operand_data[50],
    3,
    0,
    2,
    2
  },
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_30 },
#else
    { 0, output_30, 0 },
#endif
    0,
    &operand_data[53],
    3,
    2,
    2,
    2
  },
  {
    "decscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_31 },
#else
    { 0, output_31, 0 },
#endif
    (insn_gen_fn) gen_decscc,
    &operand_data[56],
    4,
    0,
    2,
    2
  },
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    3,
    0,
    2,
    1
  },
  {
    "*thumb_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[63],
    3,
    0,
    3,
    3
  },
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?s\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[60],
    3,
    2,
    2,
    1
  },
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?s\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[66],
    3,
    0,
    2,
    1
  },
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[69],
    4,
    0,
    4,
    1
  },
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?s\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[69],
    4,
    3,
    4,
    1
  },
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?s\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[73],
    4,
    0,
    4,
    1
  },
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    1,
    1
  },
  {
    "mulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[81],
    3,
    0,
    1,
    1
  },
  {
    "umulsidi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[81],
    3,
    0,
    1,
    1
  },
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    1,
    1
  },
  {
    "smulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[84],
    4,
    0,
    2,
    1
  },
  {
    "umulsi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[84],
    4,
    0,
    2,
    1
  },
  {
    "mulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulhisi3,
    &operand_data[88],
    3,
    0,
    1,
    1
  },
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[91],
    3,
    0,
    1,
    1
  },
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[94],
    3,
    0,
    1,
    1
  },
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    3,
    0,
    1,
    1
  },
  {
    "*mulhisi3addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %2, %3, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[100],
    4,
    0,
    1,
    1
  },
  {
    "*mulhidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    4,
    0,
    1,
    1
  },
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[108],
    3,
    0,
    2,
    1
  },
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_54 },
#else
    { 0, output_54, 0 },
#endif
    0,
    &operand_data[111],
    3,
    0,
    3,
    2
  },
  {
    "*thumb_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_56 },
#else
    { 0, output_56, 0 },
#endif
    0,
    &operand_data[117],
    3,
    2,
    2,
    2
  },
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_57 },
#else
    { 0, output_57, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    2,
    2
  },
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_58 },
#else
    { 0, 0, output_58 },
#endif
    0,
    &operand_data[121],
    3,
    0,
    1,
    3
  },
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_59 },
#else
    { 0, 0, output_59 },
#endif
    0,
    &operand_data[124],
    4,
    0,
    1,
    3
  },
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[128],
    3,
    0,
    2,
    1
  },
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_61 },
#else
    { 0, output_61, 0 },
#endif
    0,
    &operand_data[131],
    3,
    0,
    2,
    2
  },
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[134],
    3,
    0,
    2,
    1
  },
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_notsi_si,
    &operand_data[97],
    3,
    0,
    1,
    1
  },
  {
    "bicsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic\t%0, %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicsi3,
    &operand_data[137],
    3,
    0,
    1,
    1
  },
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_not_shiftsi_si,
    &operand_data[140],
    5,
    0,
    1,
    1
  },
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    3,
    2,
    1,
    1
  },
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    1
  },
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[108],
    3,
    0,
    2,
    1
  },
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_69 },
#else
    { 0, output_69, 0 },
#endif
    0,
    &operand_data[131],
    3,
    0,
    2,
    2
  },
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*arm_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_71 },
#else
    { 0, output_71, 0 },
#endif
    0,
    &operand_data[148],
    3,
    0,
    2,
    2
  },
  {
    "*thumb_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[151],
    3,
    2,
    1,
    1
  },
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[154],
    3,
    0,
    1,
    1
  },
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[108],
    3,
    0,
    2,
    1
  },
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_76 },
#else
    { 0, output_76, 0 },
#endif
    0,
    &operand_data[131],
    3,
    0,
    2,
    2
  },
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[41],
    3,
    0,
    2,
    1
  },
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    0,
    1,
    1
  },
  {
    "*thumb_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[114],
    3,
    0,
    1,
    1
  },
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    3,
    2,
    1,
    1
  },
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2\n\tbic%?\t%0, %0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[157],
    4,
    0,
    3,
    1
  },
  {
    "smaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    (insn_gen_fn) gen_smaxsi3,
    &operand_data[161],
    3,
    0,
    3,
    2
  },
  {
    "sminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_84 },
#else
    { 0, output_84, 0 },
#endif
    (insn_gen_fn) gen_sminsi3,
    &operand_data[161],
    3,
    0,
    3,
    2
  },
  {
    "umaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_85 },
#else
    { 0, output_85, 0 },
#endif
    (insn_gen_fn) gen_umaxsi3,
    &operand_data[161],
    3,
    0,
    3,
    2
  },
  {
    "uminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_86 },
#else
    { 0, output_86, 0 },
#endif
    (insn_gen_fn) gen_uminsi3,
    &operand_data[161],
    3,
    0,
    3,
    2
  },
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    0,
    &operand_data[164],
    4,
    0,
    1,
    3
  },
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_88 },
#else
    { 0, 0, output_88 },
#endif
    0,
    &operand_data[168],
    6,
    0,
    2,
    3
  },
  {
    "*thumb_ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsl\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    3,
    0,
    2,
    1
  },
  {
    "*thumb_ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "asr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    3,
    0,
    2,
    1
  },
  {
    "*thumb_lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[174],
    3,
    0,
    2,
    1
  },
  {
    "*thumb_rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[177],
    3,
    0,
    1,
    1
  },
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[180],
    4,
    0,
    1,
    1
  },
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?s\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    4,
    3,
    1,
    1
  },
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?s\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    4,
    0,
    1,
    1
  },
  {
    "*notsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    4,
    0,
    1,
    1
  },
  {
    "*notsi_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?s\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[184],
    4,
    3,
    1,
    1
  },
  {
    "*not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?s\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[188],
    4,
    0,
    1,
    1
  },
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, #0\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[192],
    2,
    0,
    2,
    1
  },
  {
    "*thumb_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%R0, #0\n\tneg\t%Q0, %Q1\n\tsbc\t%R0, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[194],
    2,
    0,
    1,
    1
  },
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  {
    "*thumb_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[47],
    2,
    0,
    1,
    1
  },
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_103 },
#else
    { 0, output_103, 0 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    2,
    2
  },
  {
    "*neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_104 },
#else
    { 0, output_104, 0 },
#endif
    0,
    &operand_data[196],
    2,
    0,
    2,
    2
  },
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[41],
    2,
    0,
    2,
    1
  },
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  {
    "*thumb_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[47],
    2,
    0,
    1,
    1
  },
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[23],
    2,
    1,
    1,
    1
  },
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    2,
    0,
    1,
    1
  },
  {
    "zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_110 },
#else
    { 0, 0, output_110 },
#endif
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[44],
    2,
    0,
    1,
    3
  },
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[198],
    2,
    0,
    2,
    2
  },
  {
    "extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[44],
    2,
    0,
    1,
    3
  },
  {
    "*thumb_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    0,
    &operand_data[200],
    2,
    0,
    1,
    3
  },
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?h\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  {
    "*thumb_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrb\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[204],
    2,
    0,
    1,
    1
  },
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%0, %1\t%@ zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[206],
    2,
    0,
    1,
    1
  },
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst\t%0, #255",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[208],
    1,
    0,
    1,
    1
  },
  {
    "*thumb_extendhisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    0,
    &operand_data[209],
    3,
    0,
    1,
    3
  },
  {
    "*arm_extendhisi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?sh\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  {
    "*extendqihi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    0,
    &operand_data[212],
    2,
    0,
    1,
    3
  },
  {
    "*arm_extendqisi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_121 },
#else
    { 0, 0, output_121 },
#endif
    0,
    &operand_data[206],
    2,
    0,
    1,
    3
  },
  {
    "*thumb_extendqisi2_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    0,
    &operand_data[214],
    2,
    0,
    2,
    3
  },
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    0,
    &operand_data[216],
    2,
    0,
    3,
    3
  },
  {
    "*thumb_movdi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    0,
    &operand_data[218],
    2,
    0,
    8,
    3
  },
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_125 },
#else
    { 0, output_125, 0 },
#endif
    0,
    &operand_data[220],
    2,
    0,
    4,
    2
  },
  {
    "*thumb_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_126 },
#else
    { 0, output_126, 0 },
#endif
    0,
    &operand_data[222],
    2,
    0,
    9,
    2
  },
  {
    "pic_load_addr_arm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_arm,
    &operand_data[224],
    2,
    0,
    1,
    1
  },
  {
    "pic_load_addr_thumb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_thumb,
    &operand_data[226],
    2,
    0,
    1,
    1
  },
  {
    "*pic_load_addr_based_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    0,
    &operand_data[228],
    3,
    0,
    1,
    3
  },
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_four,
    &operand_data[231],
    2,
    1,
    1,
    3
  },
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_eight,
    &operand_data[231],
    2,
    1,
    1,
    3
  },
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_132 },
#else
    { 0, output_132, 0 },
#endif
    0,
    &operand_data[233],
    2,
    1,
    2,
    2
  },
  {
    "*thumb_movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    0,
    &operand_data[235],
    2,
    0,
    6,
    3
  },
  {
    "rotated_loadsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    (insn_gen_fn) gen_rotated_loadsi,
    &operand_data[237],
    2,
    0,
    1,
    3
  },
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_135 },
#else
    { 0, output_135, 0 },
#endif
    0,
    &operand_data[239],
    2,
    0,
    4,
    2
  },
  {
    "*movhi_insn_littleend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_136 },
#else
    { 0, output_136, 0 },
#endif
    0,
    &operand_data[241],
    2,
    0,
    3,
    2
  },
  {
    "*movhi_insn_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_137 },
#else
    { 0, output_137, 0 },
#endif
    0,
    &operand_data[241],
    2,
    0,
    3,
    2
  },
  {
    "*loadhi_si_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1\t%@ movhi_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[202],
    2,
    0,
    1,
    1
  },
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_139 },
#else
    { 0, output_139, 0 },
#endif
    0,
    &operand_data[243],
    2,
    0,
    2,
    2
  },
  {
    "thumb_movhi_clobber",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_140 },
#else
    { 0, 0, output_140 },
#endif
    (insn_gen_fn) gen_thumb_movhi_clobber,
    &operand_data[245],
    3,
    0,
    1,
    3
  },
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_141 },
#else
    { 0, output_141, 0 },
#endif
    0,
    &operand_data[248],
    2,
    0,
    4,
    2
  },
  {
    "*thumb_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_142 },
#else
    { 0, output_142, 0 },
#endif
    0,
    &operand_data[250],
    2,
    0,
    6,
    2
  },
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_143 },
#else
    { 0, output_143, 0 },
#endif
    0,
    &operand_data[252],
    2,
    0,
    3,
    2
  },
  {
    "*thumb_movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    0,
    &operand_data[254],
    2,
    0,
    7,
    2
  },
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_145 },
#else
    { 0, 0, output_145 },
#endif
    0,
    &operand_data[256],
    2,
    0,
    3,
    3
  },
  {
    "*thumb_movdf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_146 },
#else
    { 0, 0, output_146 },
#endif
    0,
    &operand_data[258],
    2,
    0,
    6,
    3
  },
  {
    "*ldmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[260],
    7,
    4,
    1,
    1
  },
  {
    "*ldmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[260],
    6,
    3,
    1,
    1
  },
  {
    "*ldmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[260],
    5,
    2,
    1,
    1
  },
  {
    "*ldmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    6,
    3,
    1,
    1
  },
  {
    "*ldmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    5,
    2,
    1,
    1
  },
  {
    "*ldmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[267],
    4,
    1,
    1,
    1
  },
  {
    "*stmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[273],
    7,
    4,
    1,
    1
  },
  {
    "*stmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[273],
    6,
    3,
    1,
    1
  },
  {
    "*stmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[273],
    5,
    2,
    1,
    1
  },
  {
    "*stmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[280],
    6,
    3,
    1,
    1
  },
  {
    "*stmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[280],
    5,
    2,
    1,
    1
  },
  {
    "*stmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[280],
    4,
    1,
    1,
    1
  },
  {
    "movmem12b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_159 },
#else
    { 0, 0, output_159 },
#endif
    (insn_gen_fn) gen_movmem12b,
    &operand_data[286],
    7,
    6,
    1,
    3
  },
  {
    "movmem8b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_160 },
#else
    { 0, 0, output_160 },
#endif
    (insn_gen_fn) gen_movmem8b,
    &operand_data[286],
    6,
    4,
    1,
    3
  },
  {
    "*cbranchsi4_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    0,
    &operand_data[293],
    4,
    0,
    2,
    3
  },
  {
    "cbranchsi4_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    (insn_gen_fn) gen_cbranchsi4_scratch,
    &operand_data[297],
    5,
    0,
    2,
    3
  },
  {
    "*movsi_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    0,
    &operand_data[302],
    4,
    1,
    4,
    3
  },
  {
    "*negated_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_164 },
#else
    { 0, 0, output_164 },
#endif
    0,
    &operand_data[305],
    4,
    0,
    1,
    3
  },
  {
    "*tbit_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_165 },
#else
    { 0, 0, output_165 },
#endif
    0,
    &operand_data[309],
    5,
    0,
    1,
    3
  },
  {
    "*tstsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_166 },
#else
    { 0, 0, output_166 },
#endif
    0,
    &operand_data[314],
    4,
    0,
    1,
    3
  },
  {
    "*andsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_167 },
#else
    { 0, 0, output_167 },
#endif
    0,
    &operand_data[318],
    6,
    2,
    4,
    3
  },
  {
    "*orrsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_168 },
#else
    { 0, 0, output_168 },
#endif
    0,
    &operand_data[324],
    5,
    0,
    1,
    3
  },
  {
    "*orrsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_169 },
#else
    { 0, 0, output_169 },
#endif
    0,
    &operand_data[318],
    6,
    2,
    4,
    3
  },
  {
    "*xorsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    0,
    &operand_data[324],
    5,
    0,
    1,
    3
  },
  {
    "*xorsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    0,
    &operand_data[318],
    6,
    2,
    4,
    3
  },
  {
    "*bicsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_172 },
#else
    { 0, 0, output_172 },
#endif
    0,
    &operand_data[329],
    5,
    0,
    1,
    3
  },
  {
    "*bicsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_173 },
#else
    { 0, 0, output_173 },
#endif
    0,
    &operand_data[334],
    6,
    2,
    5,
    3
  },
  {
    "*cbranchne_decr1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    0,
    &operand_data[340],
    5,
    1,
    4,
    3
  },
  {
    "*addsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_175 },
#else
    { 0, 0, output_175 },
#endif
    0,
    &operand_data[345],
    6,
    2,
    6,
    3
  },
  {
    "*addsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_176 },
#else
    { 0, 0, output_176 },
#endif
    0,
    &operand_data[351],
    5,
    0,
    4,
    3
  },
  {
    "*subsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_177 },
#else
    { 0, 0, output_177 },
#endif
    0,
    &operand_data[356],
    6,
    2,
    4,
    3
  },
  {
    "*subsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_178 },
#else
    { 0, 0, output_178 },
#endif
    0,
    &operand_data[362],
    4,
    0,
    1,
    3
  },
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_179 },
#else
    { 0, output_179, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  {
    "*cmpsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[141],
    4,
    0,
    1,
    1
  },
  {
    "*cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[366],
    4,
    0,
    1,
    1
  },
  {
    "*cmpsi_neg_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[141],
    4,
    0,
    1,
    1
  },
  {
    "*cirrus_cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmps%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[370],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmpd%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[372],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmp64%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[374],
    2,
    0,
    1,
    1
  },
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    1,
    1,
    0,
    1
  },
  {
    "*arm_buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_187 },
#else
    { 0, 0, output_187 },
#endif
    0,
    &operand_data[376],
    2,
    0,
    0,
    3
  },
  {
    "*arm_bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_188 },
#else
    { 0, 0, output_188 },
#endif
    0,
    &operand_data[376],
    2,
    0,
    0,
    3
  },
  {
    "*arm_cond_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_189 },
#else
    { 0, 0, output_189 },
#endif
    0,
    &operand_data[378],
    3,
    0,
    0,
    3
  },
  {
    "*arm_buneq_reversed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_190 },
#else
    { 0, 0, output_190 },
#endif
    0,
    &operand_data[376],
    2,
    0,
    0,
    3
  },
  {
    "*arm_bltgt_reversed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_191 },
#else
    { 0, 0, output_191 },
#endif
    0,
    &operand_data[376],
    2,
    0,
    0,
    3
  },
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_192 },
#else
    { 0, 0, output_192 },
#endif
    0,
    &operand_data[378],
    3,
    0,
    0,
    3
  },
  {
    "*mov_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[381],
    3,
    0,
    1,
    1
  },
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[381],
    3,
    0,
    1,
    1
  },
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[381],
    3,
    0,
    1,
    1
  },
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_196 },
#else
    { 0, output_196, 0 },
#endif
    0,
    &operand_data[384],
    5,
    0,
    8,
    2
  },
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_197 },
#else
    { 0, output_197, 0 },
#endif
    0,
    &operand_data[389],
    5,
    0,
    2,
    2
  },
  {
    "*arm_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_198 },
#else
    { 0, 0, output_198 },
#endif
    0,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "*thumb_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    0,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "*call_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    0,
    &operand_data[394],
    3,
    0,
    1,
    3
  },
  {
    "*call_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    0,
    &operand_data[397],
    3,
    0,
    1,
    3
  },
  {
    "*call_indirect",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    0,
    &operand_data[400],
    3,
    0,
    1,
    3
  },
  {
    "*call_value_indirect",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[399],
    4,
    0,
    1,
    3
  },
  {
    "*call_value_reg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[402],
    4,
    0,
    1,
    3
  },
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[396],
    4,
    0,
    1,
    3
  },
  {
    "*call_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[406],
    3,
    0,
    0,
    3
  },
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[409],
    4,
    0,
    0,
    3
  },
  {
    "*call_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[410],
    3,
    0,
    0,
    1
  },
  {
    "*call_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[413],
    4,
    0,
    0,
    1
  },
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[417],
    3,
    0,
    1,
    3
  },
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[420],
    4,
    0,
    1,
    3
  },
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*cond_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[379],
    2,
    0,
    0,
    3
  },
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[379],
    2,
    0,
    0,
    3
  },
  {
    "*check_arch2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[424],
    1,
    0,
    0,
    1
  },
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    (insn_gen_fn) gen_casesi_internal,
    &operand_data[425],
    4,
    2,
    1,
    3
  },
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[24],
    1,
    0,
    1,
    1
  },
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[397],
    1,
    0,
    1,
    1
  },
  {
    "*thumb_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tpc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    1,
    0,
    1,
    1
  },
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_221 },
#else
    { 0, 0, output_221 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*arith_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[429],
    6,
    0,
    1,
    1
  },
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?s\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[429],
    6,
    5,
    1,
    1
  },
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?s\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[435],
    6,
    0,
    1,
    1
  },
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    5,
    0,
    1,
    1
  },
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?s\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    5,
    4,
    1,
    1
  },
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?s\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[441],
    5,
    0,
    1,
    1
  },
  {
    "*and_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[446],
    4,
    0,
    1,
    1
  },
  {
    "*ior_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_229 },
#else
    { 0, output_229, 0 },
#endif
    0,
    &operand_data[56],
    4,
    0,
    2,
    2
  },
  {
    "*compare_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_230 },
#else
    { 0, 0, output_230 },
#endif
    0,
    &operand_data[450],
    4,
    0,
    2,
    3
  },
  {
    "*cond_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_231 },
#else
    { 0, 0, output_231 },
#endif
    0,
    &operand_data[454],
    6,
    0,
    3,
    3
  },
  {
    "*cond_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_232 },
#else
    { 0, 0, output_232 },
#endif
    0,
    &operand_data[460],
    6,
    0,
    2,
    3
  },
  {
    "*cond_sub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_233 },
#else
    { 0, 0, output_233 },
#endif
    0,
    &operand_data[460],
    5,
    0,
    2,
    3
  },
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_234 },
#else
    { 0, 0, output_234 },
#endif
    0,
    &operand_data[466],
    7,
    0,
    4,
    3
  },
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_235 },
#else
    { 0, 0, output_235 },
#endif
    0,
    &operand_data[466],
    7,
    0,
    4,
    3
  },
  {
    "*cmp_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_236 },
#else
    { 0, 0, output_236 },
#endif
    0,
    &operand_data[466],
    7,
    0,
    4,
    3
  },
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_237 },
#else
    { 0, 0, output_237 },
#endif
    0,
    &operand_data[466],
    7,
    0,
    4,
    3
  },
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[473],
    7,
    0,
    1,
    1
  },
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    8,
    6,
    1,
    1
  },
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[473],
    7,
    0,
    1,
    1
  },
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[480],
    8,
    6,
    1,
    1
  },
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[488],
    7,
    0,
    3,
    1
  },
  {
    "*negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    0,
    &operand_data[495],
    4,
    0,
    1,
    3
  },
  {
    "movcond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    (insn_gen_fn) gen_movcond,
    &operand_data[499],
    6,
    0,
    3,
    3
  },
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[505],
    7,
    0,
    2,
    1
  },
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_246 },
#else
    { 0, output_246, 0 },
#endif
    0,
    &operand_data[512],
    6,
    0,
    4,
    2
  },
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[505],
    7,
    0,
    2,
    1
  },
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_248 },
#else
    { 0, output_248, 0 },
#endif
    0,
    &operand_data[512],
    6,
    0,
    4,
    2
  },
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[518],
    10,
    0,
    1,
    1
  },
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[528],
    9,
    0,
    1,
    1
  },
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    0,
    &operand_data[537],
    8,
    0,
    2,
    3
  },
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_252 },
#else
    { 0, output_252, 0 },
#endif
    0,
    &operand_data[545],
    7,
    0,
    2,
    2
  },
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_253 },
#else
    { 0, 0, output_253 },
#endif
    0,
    &operand_data[552],
    8,
    0,
    2,
    3
  },
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_254 },
#else
    { 0, output_254, 0 },
#endif
    0,
    &operand_data[545],
    7,
    0,
    2,
    2
  },
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    6,
    0,
    2,
    1
  },
  {
    "*if_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_256 },
#else
    { 0, output_256, 0 },
#endif
    0,
    &operand_data[566],
    5,
    0,
    3,
    2
  },
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    6,
    0,
    2,
    1
  },
  {
    "*if_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_258 },
#else
    { 0, output_258, 0 },
#endif
    0,
    &operand_data[566],
    5,
    0,
    3,
    2
  },
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[571],
    8,
    0,
    2,
    1
  },
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_260 },
#else
    { 0, output_260, 0 },
#endif
    0,
    &operand_data[579],
    7,
    0,
    3,
    2
  },
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[571],
    8,
    0,
    2,
    1
  },
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_262 },
#else
    { 0, output_262, 0 },
#endif
    0,
    &operand_data[579],
    7,
    0,
    3,
    2
  },
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[586],
    10,
    0,
    1,
    1
  },
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[596],
    9,
    0,
    1,
    1
  },
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[605],
    8,
    0,
    1,
    1
  },
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[613],
    7,
    0,
    1,
    1
  },
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[605],
    8,
    0,
    1,
    1
  },
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[613],
    7,
    0,
    1,
    1
  },
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    6,
    0,
    2,
    1
  },
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_270 },
#else
    { 0, output_270, 0 },
#endif
    0,
    &operand_data[566],
    5,
    0,
    3,
    2
  },
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[560],
    6,
    0,
    2,
    1
  },
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_272 },
#else
    { 0, output_272, 0 },
#endif
    0,
    &operand_data[566],
    5,
    0,
    3,
    2
  },
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    0,
    &operand_data[620],
    5,
    0,
    1,
    3
  },
  {
    "*strqi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[625],
    4,
    2,
    1,
    1
  },
  {
    "*strqi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[629],
    4,
    2,
    1,
    1
  },
  {
    "*loadqi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[633],
    4,
    2,
    1,
    1
  },
  {
    "*loadqi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[637],
    4,
    2,
    1,
    1
  },
  {
    "*loadqisi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, %2]!\t%@ z_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[641],
    4,
    2,
    1,
    1
  },
  {
    "*loadqisi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, -%2]!\t%@ z_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    4,
    2,
    1,
    1
  },
  {
    "*strsi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[647],
    4,
    2,
    1,
    1
  },
  {
    "*strsi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[651],
    4,
    2,
    1,
    1
  },
  {
    "*loadsi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[641],
    4,
    2,
    1,
    1
  },
  {
    "*loadsi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[644],
    4,
    2,
    1,
    1
  },
  {
    "*loadhi_preinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, %2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[655],
    4,
    2,
    1,
    1
  },
  {
    "*loadhi_predec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, -%2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[659],
    4,
    2,
    1,
    1
  },
  {
    "*strqi_shiftpreinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[663],
    6,
    4,
    1,
    1
  },
  {
    "*strqi_shiftpredec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[663],
    6,
    4,
    1,
    1
  },
  {
    "*loadqi_shiftpreinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    6,
    4,
    1,
    1
  },
  {
    "*loadqi_shiftpredec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[669],
    6,
    4,
    1,
    1
  },
  {
    "*strsi_shiftpreinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    6,
    4,
    1,
    1
  },
  {
    "*strsi_shiftpredec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[675],
    6,
    4,
    1,
    1
  },
  {
    "*loadsi_shiftpreinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[681],
    6,
    4,
    1,
    1
  },
  {
    "*loadsi_shiftpredec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[681],
    6,
    4,
    1,
    1
  },
  {
    "*loadhi_shiftpreinc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, %3%S2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    6,
    4,
    1,
    1
  },
  {
    "*loadhi_shiftpredec",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, -%3%S2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[686],
    6,
    4,
    1,
    1
  },
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_297 },
#else
    { 0, 0, output_297 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_298 },
#else
    { 0, output_298, 0 },
#endif
    0,
    &operand_data[692],
    5,
    0,
    2,
    2
  },
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_299 },
#else
    { 0, 0, output_299 },
#endif
    0,
    &operand_data[124],
    3,
    0,
    1,
    3
  },
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_300 },
#else
    { 0, 0, output_300 },
#endif
    0,
    &operand_data[124],
    3,
    0,
    1,
    3
  },
  {
    "*push_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_301 },
#else
    { 0, 0, output_301 },
#endif
    0,
    &operand_data[697],
    3,
    0,
    1,
    3
  },
  {
    "stack_tie",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tie,
    &operand_data[45],
    2,
    0,
    1,
    1
  },
  {
    "*push_fp_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_303 },
#else
    { 0, 0, output_303 },
#endif
    0,
    &operand_data[700],
    3,
    0,
    1,
    3
  },
  {
    "align_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_304 },
#else
    { 0, 0, output_304 },
#endif
    (insn_gen_fn) gen_align_4,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "align_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_305 },
#else
    { 0, 0, output_305 },
#endif
    (insn_gen_fn) gen_align_8,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "consttable_end",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_306 },
#else
    { 0, 0, output_306 },
#endif
    (insn_gen_fn) gen_consttable_end,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  {
    "consttable_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_307 },
#else
    { 0, 0, output_307 },
#endif
    (insn_gen_fn) gen_consttable_1,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "consttable_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_308 },
#else
    { 0, 0, output_308 },
#endif
    (insn_gen_fn) gen_consttable_2,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "consttable_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_309 },
#else
    { 0, 0, output_309 },
#endif
    (insn_gen_fn) gen_consttable_4,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "consttable_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_310 },
#else
    { 0, 0, output_310 },
#endif
    (insn_gen_fn) gen_consttable_8,
    &operand_data[229],
    1,
    0,
    0,
    3
  },
  {
    "*thumb_tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%|pc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[400],
    2,
    0,
    1,
    1
  },
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[23],
    2,
    0,
    1,
    1
  },
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[703],
    3,
    0,
    1,
    1
  },
  {
    "prologue_use",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed for prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[706],
    1,
    0,
    0,
    1
  },
  {
    "*addsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_315 },
#else
    { 0, output_315, 0 },
#endif
    0,
    &operand_data[707],
    3,
    0,
    2,
    2
  },
  {
    "*adddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_316 },
#else
    { 0, output_316, 0 },
#endif
    0,
    &operand_data[710],
    3,
    0,
    2,
    2
  },
  {
    "*adddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_317 },
#else
    { 0, output_317, 0 },
#endif
    0,
    &operand_data[713],
    3,
    0,
    2,
    2
  },
  {
    "*adddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    3,
    0,
    1,
    1
  },
  {
    "*adddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    3,
    0,
    1,
    1
  },
  {
    "*subsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_320 },
#else
    { 0, output_320, 0 },
#endif
    0,
    &operand_data[722],
    3,
    0,
    2,
    2
  },
  {
    "*subdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_321 },
#else
    { 0, output_321, 0 },
#endif
    0,
    &operand_data[725],
    3,
    0,
    2,
    2
  },
  {
    "*subdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    1,
    1
  },
  {
    "*subdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_323 },
#else
    { 0, output_323, 0 },
#endif
    0,
    &operand_data[731],
    3,
    0,
    2,
    2
  },
  {
    "*subdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    3,
    0,
    1,
    1
  },
  {
    "*mulsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fml%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  {
    "*muldf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    1,
    1
  },
  {
    "*muldf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    1,
    1
  },
  {
    "*muldf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    3,
    0,
    1,
    1
  },
  {
    "*muldf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    3,
    0,
    1,
    1
  },
  {
    "*divsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_330 },
#else
    { 0, output_330, 0 },
#endif
    0,
    &operand_data[722],
    3,
    0,
    2,
    2
  },
  {
    "*divdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_331 },
#else
    { 0, output_331, 0 },
#endif
    0,
    &operand_data[725],
    3,
    0,
    2,
    2
  },
  {
    "*divdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    1,
    1
  },
  {
    "*divdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdf%?d\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[740],
    3,
    0,
    1,
    1
  },
  {
    "*divdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    3,
    0,
    1,
    1
  },
  {
    "*modsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    3,
    0,
    1,
    1
  },
  {
    "*moddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[737],
    3,
    0,
    1,
    1
  },
  {
    "*moddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[728],
    3,
    0,
    1,
    1
  },
  {
    "*moddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    3,
    0,
    1,
    1
  },
  {
    "*moddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    3,
    0,
    1,
    1
  },
  {
    "*negsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*negdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    2,
    0,
    1,
    1
  },
  {
    "*negdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  {
    "*abssf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*absdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    2,
    0,
    1,
    1
  },
  {
    "*absdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[716],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  {
    "*floatsisf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[743],
    2,
    0,
    1,
    1
  },
  {
    "*floatsidf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[745],
    2,
    0,
    1,
    1
  },
  {
    "*fix_truncsfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[747],
    2,
    0,
    1,
    1
  },
  {
    "*fix_truncdfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[749],
    2,
    0,
    1,
    1
  },
  {
    "*truncdfsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    2,
    0,
    1,
    1
  },
  {
    "*extendsfdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[719],
    2,
    0,
    1,
    1
  },
  {
    "*movsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_355 },
#else
    { 0, output_355, 0 },
#endif
    0,
    &operand_data[753],
    2,
    0,
    9,
    2
  },
  {
    "*movdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_356 },
#else
    { 0, 0, output_356 },
#endif
    0,
    &operand_data[755],
    2,
    0,
    11,
    3
  },
  {
    "*movxf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_357 },
#else
    { 0, 0, output_357 },
#endif
    0,
    &operand_data[757],
    2,
    0,
    7,
    3
  },
  {
    "*cmpsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_358 },
#else
    { 0, output_358, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    2,
    2
  },
  {
    "*cmpdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_359 },
#else
    { 0, output_359, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    2,
    2
  },
  {
    "*cmpesfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_360 },
#else
    { 0, output_360, 0 },
#endif
    0,
    &operand_data[714],
    2,
    0,
    2,
    2
  },
  {
    "*cmpdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[717],
    2,
    0,
    1,
    1
  },
  {
    "*cmpsf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_362 },
#else
    { 0, output_362, 0 },
#endif
    0,
    &operand_data[759],
    2,
    0,
    2,
    2
  },
  {
    "*cmpdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_363 },
#else
    { 0, output_363, 0 },
#endif
    0,
    &operand_data[761],
    2,
    0,
    2,
    2
  },
  {
    "*cmp_esfdf_df_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_364 },
#else
    { 0, output_364, 0 },
#endif
    0,
    &operand_data[714],
    2,
    0,
    2,
    2
  },
  {
    "*cmp_df_esfdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?e\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[717],
    2,
    0,
    1,
    1
  },
  {
    "*movsfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_366 },
#else
    { 0, output_366, 0 },
#endif
    0,
    &operand_data[763],
    5,
    0,
    8,
    2
  },
  {
    "*movdfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_367 },
#else
    { 0, output_367, 0 },
#endif
    0,
    &operand_data[768],
    5,
    0,
    8,
    2
  },
  {
    "cirrus_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadd64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_adddi3,
    &operand_data[773],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadds%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfaddd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    1,
    1
  },
  {
    "cirrus_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsub64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_subdi3,
    &operand_data[773],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubs%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    1,
    1
  },
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmul64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[773],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuls%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuld%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[779],
    3,
    0,
    1,
    1
  },
  {
    "ashldi3_cirrus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfrshl64%?\t%V1, %V0, %s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_cirrus,
    &operand_data[782],
    3,
    0,
    1,
    1
  },
  {
    "cirrus_ashldi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashldi_const,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  {
    "cirrus_ashiftrtdi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #-%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashiftrtdi_const,
    &operand_data[785],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabs64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[773],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfneg64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[773],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegs%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[779],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabss%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[776],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[779],
    2,
    0,
    1,
    1
  },
  {
    "cirrus_floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32s%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsisf2,
    &operand_data[788],
    3,
    0,
    1,
    1
  },
  {
    "cirrus_floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32d%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsidf2,
    &operand_data[791],
    3,
    0,
    1,
    1
  },
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64s%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[794],
    2,
    0,
    1,
    1
  },
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64d%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[796],
    2,
    0,
    1,
    1
  },
  {
    "cirrus_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncs32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncsfsi2,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  {
    "cirrus_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncd32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncdfsi2,
    &operand_data[801],
    3,
    0,
    1,
    1
  },
  {
    "*cirrus_truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtds%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[804],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[806],
    2,
    0,
    1,
    1
  },
  {
    "*cirrus_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_394 },
#else
    { 0, 0, output_394 },
#endif
    0,
    &operand_data[808],
    2,
    0,
    8,
    3
  },
  {
    "*cirrus_movsf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_395 },
#else
    { 0, output_395, 0 },
#endif
    0,
    &operand_data[810],
    2,
    0,
    8,
    2
  },
  {
    "*cirrus_movdf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_396 },
#else
    { 0, 0, output_396 },
#endif
    0,
    &operand_data[812],
    2,
    0,
    10,
    3
  },
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_397 },
#else
    { 0, output_397, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_iordi3,
    &operand_data[814],
    3,
    0,
    3,
    2
  },
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_398 },
#else
    { 0, output_398, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_xordi3,
    &operand_data[814],
    3,
    0,
    3,
    2
  },
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_399 },
#else
    { 0, output_399, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_anddi3,
    &operand_data[814],
    3,
    0,
    3,
    2
  },
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_nanddi3,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_401 },
#else
    { 0, 0, output_401 },
#endif
    0,
    &operand_data[820],
    2,
    0,
    8,
    3
  },
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_402 },
#else
    { 0, 0, output_402 },
#endif
    0,
    &operand_data[822],
    2,
    0,
    9,
    3
  },
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_403 },
#else
    { 0, 0, output_403 },
#endif
    0,
    &operand_data[824],
    4,
    0,
    6,
    3
  },
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_404 },
#else
    { 0, 0, output_404 },
#endif
    (insn_gen_fn) gen_movv8qi_internal,
    &operand_data[828],
    2,
    0,
    6,
    3
  },
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_405 },
#else
    { 0, 0, output_405 },
#endif
    (insn_gen_fn) gen_movv4hi_internal,
    &operand_data[830],
    2,
    0,
    6,
    3
  },
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_406 },
#else
    { 0, 0, output_406 },
#endif
    (insn_gen_fn) gen_movv2si_internal,
    &operand_data[832],
    2,
    0,
    6,
    3
  },
  {
    "movv2si_internal_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_407 },
#else
    { 0, 0, output_407 },
#endif
    (insn_gen_fn) gen_movv2si_internal_2,
    &operand_data[834],
    2,
    0,
    1,
    3
  },
  {
    "addv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "addv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "addv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_addv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "ssaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "usaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "subv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "subv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "subv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_subv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "sssubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "ussubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "mulv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulv4hi3_highpart,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulv4hi3_highpart,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmacs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacs,
    &operand_data[845],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmacsz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacsz,
    &operand_data[849],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmacu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacu,
    &operand_data[845],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmacuz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacuz,
    &operand_data[849],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_clrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_clrdi,
    &operand_data[817],
    1,
    0,
    1,
    1
  },
  {
    "*iwmmxt_clrv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[836],
    1,
    0,
    1,
    1
  },
  {
    "*iwmmxt_clrv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[839],
    1,
    0,
    1,
    1
  },
  {
    "*iwmmxt_clrv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[842],
    1,
    0,
    1,
    1
  },
  {
    "iwmmxt_uavgrndv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_uavgrndv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_psadbw,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_tinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrb,
    &operand_data[852],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tinsrh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrh%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrh,
    &operand_data[856],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrw%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrw,
    &operand_data[860],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_textrmub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmub,
    &operand_data[864],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_textrmsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsb,
    &operand_data[864],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_textrmuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmuh,
    &operand_data[867],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_textrmsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsh,
    &operand_data[867],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_textrmw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmw,
    &operand_data[870],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wshufh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wshufh,
    &operand_data[873],
    3,
    0,
    1,
    1
  },
  {
    "eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "gtuv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "gtuv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "gtuv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "smaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "umaxv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "smaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "umaxv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "smaxv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smaxv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "umaxv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umaxv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "sminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "uminv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv8qi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "sminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "uminv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv4hi3,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "sminv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sminv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "uminv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_uminv2si3,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackhss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhss,
    &operand_data[876],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackwss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwss,
    &operand_data[879],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackdss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdss,
    &operand_data[882],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackhus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhus,
    &operand_data[876],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackwus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwus,
    &operand_data[879],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wpackdus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdus,
    &operand_data[882],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckihb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihb,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckihh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihh,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckihw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihw,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckilb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilb,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckilh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilh,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckilw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilw,
    &operand_data[842],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehub,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuh,
    &operand_data[887],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuw,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsb,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsh,
    &operand_data[887],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckehsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsw,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckelub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelub,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckeluh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluh,
    &operand_data[887],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckeluw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluw,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckelsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsb,
    &operand_data[885],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckelsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsh,
    &operand_data[887],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wunpckelsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsw,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  {
    "rorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  {
    "rorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  {
    "rordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrordg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  {
    "ashrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrahg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  {
    "ashrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrawg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  {
    "ashrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsradg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  {
    "lshrv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  {
    "lshrv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  {
    "lshrdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  {
    "ashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3,
    &operand_data[891],
    3,
    0,
    1,
    1
  },
  {
    "ashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3,
    &operand_data[894],
    3,
    0,
    1,
    1
  },
  {
    "ashldi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_iwmmxt,
    &operand_data[897],
    3,
    0,
    1,
    1
  },
  {
    "rorv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3_di,
    &operand_data[900],
    3,
    0,
    1,
    1
  },
  {
    "rorv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3_di,
    &operand_data[903],
    3,
    0,
    1,
    1
  },
  {
    "rordi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrord%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3_di,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  {
    "ashrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrah%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3_di,
    &operand_data[900],
    3,
    0,
    1,
    1
  },
  {
    "ashrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsraw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3_di,
    &operand_data[903],
    3,
    0,
    1,
    1
  },
  {
    "ashrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrad%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_di,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  {
    "lshrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3_di,
    &operand_data[900],
    3,
    0,
    1,
    1
  },
  {
    "lshrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3_di,
    &operand_data[903],
    3,
    0,
    1,
    1
  },
  {
    "lshrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_di,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  {
    "ashlv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_di,
    &operand_data[900],
    3,
    0,
    1,
    1
  },
  {
    "ashlv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_di,
    &operand_data[903],
    3,
    0,
    1,
    1
  },
  {
    "ashldi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_di,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmadds",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmadds,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wmaddu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaddu%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmaddu,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmia",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmia%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmia,
    &operand_data[906],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmiaph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiaph%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiaph,
    &operand_data[906],
    4,
    2,
    1,
    1
  },
  {
    "iwmmxt_tmiabb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabb,
    &operand_data[906],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmiatb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatb,
    &operand_data[906],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmiabt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabt,
    &operand_data[906],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmiatt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatt,
    &operand_data[906],
    4,
    0,
    1,
    1
  },
  {
    "iwmmxt_tbcstqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstqi,
    &operand_data[910],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tbcsthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcsthi,
    &operand_data[912],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tbcstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstsi,
    &operand_data[914],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskb,
    &operand_data[864],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmovmskh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskh,
    &operand_data[867],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmovmskw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskw,
    &operand_data[870],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_waccb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccb,
    &operand_data[916],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wacch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wacch%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wacch,
    &operand_data[849],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_waccw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccw,
    &operand_data[889],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_walign",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_537 },
#else
    { 0, output_537, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_walign,
    &operand_data[918],
    4,
    0,
    2,
    2
  },
  {
    "iwmmxt_tmrc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmrc%?\t%0, %w1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmrc,
    &operand_data[922],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_tmcr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmcr%?\t%w0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmcr,
    &operand_data[923],
    2,
    0,
    1,
    1
  },
  {
    "iwmmxt_wsadb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadb,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wsadh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadh,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wsadbz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadbz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadbz,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  {
    "iwmmxt_wsadhz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadhz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadhz,
    &operand_data[839],
    3,
    0,
    1,
    1
  },
  {
    "adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddi3,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  {
    "adddi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  {
    "adddi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "addsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "addsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[931],
    4,
    0,
    0,
    0
  },
  {
    "addsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "addsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[935],
    3,
    0,
    0,
    0
  },
  {
    "addsf3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[938],
    6,
    0,
    0,
    0
  },
  {
    "addsf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[944],
    4,
    0,
    0,
    0
  },
  {
    "addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_addsf3,
    &operand_data[948],
    3,
    0,
    0,
    0
  },
  {
    "adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_adddf3,
    &operand_data[951],
    3,
    0,
    0,
    0
  },
  {
    "subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdi3,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  {
    "subsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsi3,
    &operand_data[929],
    3,
    0,
    0,
    0
  },
  {
    "subsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[929],
    3,
    0,
    0,
    0
  },
  {
    "subsf3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[954],
    4,
    0,
    0,
    0
  },
  {
    "subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subsf3,
    &operand_data[958],
    3,
    0,
    0,
    0
  },
  {
    "subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_subdf3,
    &operand_data[961],
    3,
    0,
    0,
    0
  },
  {
    "mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsi3,
    &operand_data[964],
    3,
    0,
    0,
    0
  },
  {
    "mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_mulsf3,
    &operand_data[967],
    3,
    0,
    0,
    0
  },
  {
    "muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_muldf3,
    &operand_data[970],
    3,
    0,
    0,
    0
  },
  {
    "divsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divsf3,
    &operand_data[958],
    3,
    0,
    0,
    0
  },
  {
    "divdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_divdf3,
    &operand_data[961],
    3,
    0,
    0,
    0
  },
  {
    "modsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_modsf3,
    &operand_data[967],
    3,
    0,
    0,
    0
  },
  {
    "moddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_moddf3,
    &operand_data[970],
    3,
    0,
    0,
    0
  },
  {
    "moddf3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[973],
    7,
    0,
    0,
    0
  },
  {
    "moddf3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[980],
    7,
    0,
    0,
    0
  },
  {
    "moddf3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "andsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "andsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "andsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_andsi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "andsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "andsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[987],
    5,
    0,
    0,
    0
  },
  {
    "andsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    0,
    0
  },
  {
    "insv-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[987],
    4,
    0,
    0,
    0
  },
  {
    "insv-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[991],
    7,
    0,
    0,
    0
  },
  {
    "insv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_insv,
    &operand_data[997],
    4,
    0,
    0,
    0
  },
  {
    "insv+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[925],
    3,
    0,
    0,
    0
  },
  {
    "insv+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[926],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_iorsi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "xorsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[931],
    4,
    0,
    0,
    0
  },
  {
    "xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_xorsi3,
    &operand_data[1001],
    3,
    0,
    0,
    0
  },
  {
    "xorsi3+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1001],
    5,
    0,
    0,
    0
  },
  {
    "xorsi3+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1005],
    10,
    0,
    0,
    0
  },
  {
    "xorsi3+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1005],
    10,
    0,
    0,
    0
  },
  {
    "ashlsi3-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1005],
    10,
    0,
    0,
    0
  },
  {
    "ashlsi3-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1005],
    10,
    0,
    0,
    0
  },
  {
    "ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[1001],
    3,
    0,
    0,
    0
  },
  {
    "ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[1001],
    3,
    0,
    0,
    0
  },
  {
    "lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[1001],
    3,
    0,
    0,
    0
  },
  {
    "rotlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[928],
    3,
    0,
    0,
    0
  },
  {
    "rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[1001],
    3,
    0,
    0,
    0
  },
  {
    "ashldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3,
    &operand_data[1015],
    3,
    0,
    0,
    0
  },
  {
    "extzv",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extzv,
    &operand_data[1018],
    4,
    2,
    0,
    0
  },
  {
    "negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdi2,
    &operand_data[925],
    2,
    0,
    0,
    0
  },
  {
    "negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsi2,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negsf2,
    &operand_data[948],
    2,
    0,
    0,
    0
  },
  {
    "negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_negdf2,
    &operand_data[951],
    2,
    0,
    0,
    0
  },
  {
    "abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssi2,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_abssf2,
    &operand_data[948],
    2,
    0,
    0,
    0
  },
  {
    "absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_absdf2,
    &operand_data[951],
    2,
    0,
    0,
    0
  },
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[948],
    2,
    0,
    0,
    0
  },
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[951],
    2,
    0,
    0,
    0
  },
  {
    "sqrtdf2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[925],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[1022],
    2,
    0,
    0,
    0
  },
  {
    "floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[1024],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[947],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[1023],
    2,
    0,
    0,
    0
  },
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[1026],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[1028],
    2,
    2,
    0,
    0
  },
  {
    "zero_extendhisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1030],
    3,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1030],
    5,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[1034],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1036],
    3,
    0,
    0,
    0
  },
  {
    "extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[1028],
    2,
    2,
    0,
    0
  },
  {
    "extendhisi2_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendhisi2_mem,
    &operand_data[1039],
    2,
    7,
    0,
    0
  },
  {
    "extendhisi2_mem+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1030],
    3,
    0,
    0,
    0
  },
  {
    "extendqihi2-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1030],
    5,
    0,
    0,
    0
  },
  {
    "extendqihi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[1041],
    2,
    2,
    0,
    0
  },
  {
    "extendqihi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1043],
    2,
    0,
    0,
    0
  },
  {
    "extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[1045],
    2,
    2,
    0,
    0
  },
  {
    "extendqisi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1047],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[1049],
    2,
    0,
    0,
    0
  },
  {
    "movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdi,
    &operand_data[1051],
    2,
    0,
    0,
    0
  },
  {
    "movsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsi,
    &operand_data[998],
    2,
    0,
    0,
    0
  },
  {
    "movsi+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[932],
    2,
    0,
    0,
    0
  },
  {
    "movsi+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[935],
    2,
    0,
    0,
    0
  },
  {
    "pic_load_addr_based-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[935],
    2,
    0,
    0,
    0
  },
  {
    "pic_load_addr_based",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_based,
    &operand_data[1053],
    2,
    1,
    0,
    0
  },
  {
    "builtin_setjmp_receiver",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_builtin_setjmp_receiver,
    &operand_data[229],
    1,
    0,
    0,
    0
  },
  {
    "storehi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_storehi,
    &operand_data[395],
    2,
    4,
    0,
    0
  },
  {
    "storehi_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_storehi_bigend,
    &operand_data[395],
    2,
    4,
    0,
    0
  },
  {
    "storeinthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_storeinthi,
    &operand_data[395],
    2,
    2,
    0,
    0
  },
  {
    "storehi_single_op",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_storehi_single_op,
    &operand_data[1055],
    2,
    0,
    0,
    0
  },
  {
    "movhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi,
    &operand_data[1056],
    2,
    0,
    0,
    0
  },
  {
    "movhi_bytes",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi_bytes,
    &operand_data[1039],
    2,
    5,
    0,
    0
  },
  {
    "movhi_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movhi_bigend,
    &operand_data[1058],
    2,
    4,
    0,
    0
  },
  {
    "reload_outhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outhi,
    &operand_data[1060],
    3,
    0,
    1,
    0
  },
  {
    "reload_inhi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_inhi,
    &operand_data[1063],
    3,
    0,
    1,
    0
  },
  {
    "movqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movqi,
    &operand_data[1066],
    2,
    0,
    0,
    0
  },
  {
    "movsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsf,
    &operand_data[1068],
    2,
    0,
    0,
    0
  },
  {
    "movsf+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1070],
    2,
    0,
    0,
    0
  },
  {
    "movdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdf,
    &operand_data[1072],
    2,
    0,
    0,
    0
  },
  {
    "reload_outdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_reload_outdf,
    &operand_data[1074],
    3,
    0,
    1,
    0
  },
  {
    "movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv2si,
    &operand_data[1077],
    2,
    0,
    0,
    0
  },
  {
    "movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv4hi,
    &operand_data[1079],
    2,
    0,
    0,
    0
  },
  {
    "movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movv8qi,
    &operand_data[1081],
    2,
    0,
    0,
    0
  },
  {
    "load_multiple",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_load_multiple,
    &operand_data[1083],
    3,
    1,
    0,
    0
  },
  {
    "store_multiple",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_store_multiple,
    &operand_data[1083],
    3,
    1,
    0,
    0
  },
  {
    "movstrqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movstrqi,
    &operand_data[1086],
    4,
    0,
    0,
    0
  },
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cbranchsi4,
    &operand_data[1090],
    4,
    0,
    0,
    0
  },
  {
    "cmpsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsi,
    &operand_data[1094],
    2,
    0,
    0,
    0
  },
  {
    "cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpsf,
    &operand_data[958],
    2,
    0,
    0,
    0
  },
  {
    "cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdf,
    &operand_data[961],
    2,
    0,
    0,
    0
  },
  {
    "cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_cmpdi,
    &operand_data[1096],
    2,
    0,
    0,
    0
  },
  {
    "beq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_beq,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bne,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgt,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "ble",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ble,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bge,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "blt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_blt,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgtu,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bleu,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bgeu,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltu,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunordered,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bordered,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bungt,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunlt,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunge,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bunle,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "buneq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_buneq,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "bltgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_bltgt,
    &operand_data[229],
    1,
    1,
    0,
    0
  },
  {
    "seq",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_seq,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sne",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sne,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sgt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgt,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sle,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sge,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "slt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_slt,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sgtu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgtu,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sleu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sleu,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sgeu,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sltu",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sltu,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sunordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunordered,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sordered",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sordered,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sungt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sungt,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sunge",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunge,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sunlt",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunlt,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "sunle",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sunle,
    &operand_data[928],
    1,
    1,
    0,
    0
  },
  {
    "movsicc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsicc,
    &operand_data[1098],
    4,
    0,
    0,
    0
  },
  {
    "movsfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movsfcc,
    &operand_data[1102],
    4,
    0,
    0,
    0
  },
  {
    "movdfcc",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_movdfcc,
    &operand_data[1106],
    4,
    0,
    0,
    0
  },
  {
    "jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_jump,
    &operand_data[229],
    1,
    0,
    0,
    0
  },
  {
    "call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call,
    &operand_data[1110],
    3,
    0,
    0,
    0
  },
  {
    "call_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_call_value,
    &operand_data[1112],
    4,
    0,
    0,
    0
  },
  {
    "sibcall",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall,
    &operand_data[1110],
    3,
    0,
    0,
    0
  },
  {
    "sibcall_value",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_sibcall_value,
    &operand_data[1116],
    4,
    0,
    0,
    0
  },
  {
    "return_addr_mask",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_return_addr_mask,
    &operand_data[928],
    1,
    2,
    0,
    0
  },
  {
    "untyped_call",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_untyped_call,
    &operand_data[414],
    3,
    0,
    0,
    0
  },
  {
    "casesi",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_casesi,
    &operand_data[1120],
    5,
    0,
    0,
    0
  },
  {
    "indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[928],
    1,
    0,
    0,
    0
  },
  {
    "indirect_jump+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1125],
    9,
    0,
    0,
    0
  },
  {
    "indirect_jump+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1133],
    7,
    0,
    0,
    0
  },
  {
    "indirect_jump+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1140],
    8,
    0,
    0,
    0
  },
  {
    "indirect_jump+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1133],
    7,
    0,
    0,
    0
  },
  {
    "indirect_jump+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1140],
    8,
    0,
    0,
    0
  },
  {
    "indirect_jump+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1133],
    7,
    0,
    0,
    0
  },
  {
    "indirect_jump+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1147],
    5,
    0,
    0,
    0
  },
  {
    "indirect_jump+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1147],
    5,
    0,
    0,
    0
  },
  {
    "indirect_jump+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%2, [%0], %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1152],
    3,
    0,
    1,
    1
  },
  {
    "indirect_jump+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%0, [%1], %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1155],
    3,
    0,
    1,
    1
  },
  {
    "indirect_jump+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%2, [%0], %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1156],
    3,
    0,
    1,
    1
  },
  {
    "indirect_jump+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, [%1], %2\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1159],
    3,
    0,
    1,
    1
  },
  {
    "prologue-12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, [%1], %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1162],
    3,
    0,
    1,
    1
  },
  {
    "prologue-11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%2, [%0, %1]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1152],
    3,
    0,
    1,
    1
  },
  {
    "prologue-10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%3, [%2, %0%S4]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1165],
    5,
    0,
    1,
    1
  },
  {
    "prologue-9",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "prologue-8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_724 },
#else
    { 0, 0, output_724 },
#endif
    0,
    &operand_data[1170],
    8,
    0,
    1,
    3
  },
  {
    "prologue-7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_725 },
#else
    { 0, 0, output_725 },
#endif
    0,
    &operand_data[1171],
    6,
    0,
    1,
    3
  },
  {
    "prologue-6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_726 },
#else
    { 0, 0, output_726 },
#endif
    0,
    &operand_data[1172],
    4,
    0,
    1,
    3
  },
  {
    "prologue-5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_727 },
#else
    { 0, 0, output_727 },
#endif
    0,
    &operand_data[1178],
    8,
    0,
    1,
    3
  },
  {
    "prologue-4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_728 },
#else
    { 0, 0, output_728 },
#endif
    0,
    &operand_data[1179],
    6,
    0,
    1,
    3
  },
  {
    "prologue-3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_729 },
#else
    { 0, 0, output_729 },
#endif
    0,
    &operand_data[1180],
    4,
    0,
    1,
    3
  },
  {
    "prologue-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1186],
    6,
    0,
    0,
    0
  },
  {
    "prologue-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1192],
    3,
    0,
    0,
    0
  },
  {
    "prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "eh_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_eh_epilogue,
    &operand_data[1195],
    3,
    0,
    0,
    0
  },
  {
    "eh_epilogue+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1198],
    5,
    0,
    0,
    0
  },
  {
    "eh_epilogue+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1198],
    5,
    0,
    0,
    0
  },
  {
    "tablejump-2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1198],
    6,
    0,
    0,
    0
  },
  {
    "tablejump-1",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    0,
    &operand_data[1204],
    6,
    0,
    0,
    0
  },
  {
    "tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_tablejump,
    &operand_data[1210],
    2,
    0,
    0,
    0
  },
  {
    "ffssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ffssi2,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "ctzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    (insn_gen_fn) gen_ctzsi2,
    &operand_data[928],
    2,
    0,
    0,
    0
  },
  {
    "ctzsi2+1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_742 },
#else
    { 0, output_742, 0 },
#endif
    0,
    &operand_data[1212],
    5,
    0,
    3,
    2
  },
  {
    "ctzsi2+2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_743 },
#else
    { 0, output_743, 0 },
#endif
    0,
    &operand_data[1217],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1222],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1227],
    6,
    0,
    4,
    1
  },
  {
    "ctzsi2+5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1233],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1239],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+7",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1239],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1233],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+9",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1244],
    6,
    0,
    2,
    1
  },
  {
    "ctzsi2+10",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1244],
    6,
    0,
    2,
    1
  },
  {
    "ctzsi2+11",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1250],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+12",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1255],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+13",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1260],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+14",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1265],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+15",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %2, %3, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1270],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1276],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+17",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_758 },
#else
    { 0, output_758, 0 },
#endif
    0,
    &operand_data[1282],
    5,
    0,
    3,
    2
  },
  {
    "ctzsi2+18",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1287],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+19",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_760 },
#else
    { 0, output_760, 0 },
#endif
    0,
    &operand_data[1292],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+20",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1297],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+21",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1265],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+22",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1302],
    7,
    0,
    1,
    1
  },
  {
    "ctzsi2+23",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1309],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+24",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_765 },
#else
    { 0, output_765, 0 },
#endif
    0,
    &operand_data[1292],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+25",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1314],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+26",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_767 },
#else
    { 0, output_767, 0 },
#endif
    0,
    &operand_data[1319],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+27",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1309],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+28",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_769 },
#else
    { 0, output_769, 0 },
#endif
    0,
    &operand_data[1292],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+29",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1314],
    5,
    0,
    2,
    1
  },
  {
    "ctzsi2+30",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1324],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+31",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2\n\tbic%?\t%0, %0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1329],
    6,
    0,
    3,
    1
  },
  {
    "ctzsi2+32",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1335],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+33",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1341],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+34",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+35",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1351],
    4,
    0,
    2,
    1
  },
  {
    "ctzsi2+36",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+37",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_778 },
#else
    { 0, 0, output_778 },
#endif
    0,
    &operand_data[1355],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+38",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_779 },
#else
    { 0, output_779, 0 },
#endif
    0,
    &operand_data[1359],
    4,
    0,
    2,
    2
  },
  {
    "ctzsi2+39",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_780 },
#else
    { 0, 0, output_780 },
#endif
    0,
    &operand_data[1355],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+40",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?h\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1363],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+41",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%0, %1\t%@ zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1367],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+42",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?sh\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1363],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+43",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_784 },
#else
    { 0, 0, output_784 },
#endif
    0,
    &operand_data[1371],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+44",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_785 },
#else
    { 0, 0, output_785 },
#endif
    0,
    &operand_data[1367],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+45",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_786 },
#else
    { 0, output_786, 0 },
#endif
    0,
    &operand_data[1375],
    4,
    0,
    4,
    2
  },
  {
    "ctzsi2+46",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_787 },
#else
    { 0, 0, output_787 },
#endif
    0,
    &operand_data[1379],
    4,
    1,
    1,
    3
  },
  {
    "ctzsi2+47",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_788 },
#else
    { 0, 0, output_788 },
#endif
    0,
    &operand_data[1383],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+48",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_789 },
#else
    { 0, output_789, 0 },
#endif
    0,
    &operand_data[1387],
    4,
    0,
    4,
    2
  },
  {
    "ctzsi2+49",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_790 },
#else
    { 0, output_790, 0 },
#endif
    0,
    &operand_data[1391],
    4,
    0,
    3,
    2
  },
  {
    "ctzsi2+50",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_791 },
#else
    { 0, output_791, 0 },
#endif
    0,
    &operand_data[1391],
    4,
    0,
    3,
    2
  },
  {
    "ctzsi2+51",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1\t%@ movhi_bigend",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1363],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+52",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_793 },
#else
    { 0, output_793, 0 },
#endif
    0,
    &operand_data[1395],
    4,
    0,
    2,
    2
  },
  {
    "ctzsi2+53",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_794 },
#else
    { 0, output_794, 0 },
#endif
    0,
    &operand_data[1399],
    4,
    0,
    4,
    2
  },
  {
    "ctzsi2+54",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_795 },
#else
    { 0, output_795, 0 },
#endif
    0,
    &operand_data[1403],
    4,
    0,
    3,
    2
  },
  {
    "ctzsi2+55",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1407],
    9,
    4,
    1,
    1
  },
  {
    "ctzsi2+56",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1416],
    8,
    3,
    1,
    1
  },
  {
    "ctzsi2+57",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1424],
    7,
    2,
    1,
    1
  },
  {
    "ctzsi2+58",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1431],
    8,
    3,
    1,
    1
  },
  {
    "ctzsi2+59",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1439],
    7,
    2,
    1,
    1
  },
  {
    "ctzsi2+60",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%?ia\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1446],
    6,
    1,
    1,
    1
  },
  {
    "ctzsi2+61",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1452],
    9,
    4,
    1,
    1
  },
  {
    "ctzsi2+62",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1461],
    8,
    3,
    1,
    1
  },
  {
    "ctzsi2+63",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1469],
    7,
    2,
    1,
    1
  },
  {
    "ctzsi2+64",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1476],
    8,
    3,
    1,
    1
  },
  {
    "ctzsi2+65",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1484],
    7,
    2,
    1,
    1
  },
  {
    "ctzsi2+66",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%?ia\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1491],
    6,
    1,
    1,
    1
  },
  {
    "ctzsi2+67",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_808 },
#else
    { 0, 0, output_808 },
#endif
    0,
    &operand_data[378],
    3,
    0,
    0,
    3
  },
  {
    "ctzsi2+68",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_809 },
#else
    { 0, 0, output_809 },
#endif
    0,
    &operand_data[379],
    2,
    0,
    0,
    3
  },
  {
    "ctzsi2+69",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1236],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+70",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1497],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+71",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1500],
    8,
    0,
    1,
    1
  },
  {
    "ctzsi2+72",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1508],
    7,
    0,
    1,
    1
  },
  {
    "ctzsi2+73",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_814 },
#else
    { 0, 0, output_814 },
#endif
    0,
    &operand_data[1515],
    7,
    0,
    1,
    3
  },
  {
    "ctzsi2+74",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1522],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+75",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1528],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+76",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1534],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+77",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1540],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+78",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, %2]!\t%@ z_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+79",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%3, [%0, -%2]!\t%@ z_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1552],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+80",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1558],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+81",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1564],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+82",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, %2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1546],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+83",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, -%2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1552],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+84",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, %2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1570],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+85",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%3, [%0, -%2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1576],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+86",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1582],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+87",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?b\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1582],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+88",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1590],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+89",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?b\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1590],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+90",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+91",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "str%?\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1598],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+92",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, %3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+93",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, -%3%S2]!",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1606],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+94",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, %3%S2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1614],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+95",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%5, [%0, -%3%S2]!\t%@ loadhi",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1614],
    8,
    4,
    1,
    1
  },
  {
    "ctzsi2+96",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1347],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+97",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_838 },
#else
    { 0, output_838, 0 },
#endif
    0,
    &operand_data[1622],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+98",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_839 },
#else
    { 0, output_839, 0 },
#endif
    0,
    &operand_data[1627],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+99",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_840 },
#else
    { 0, output_840, 0 },
#endif
    0,
    &operand_data[1632],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+100",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1637],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+101",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+102",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_843 },
#else
    { 0, output_843, 0 },
#endif
    0,
    &operand_data[1647],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+103",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+104",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_845 },
#else
    { 0, output_845, 0 },
#endif
    0,
    &operand_data[1657],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+105",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+106",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fml%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1662],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+107",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1667],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+108",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+109",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1637],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+110",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+111",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_852 },
#else
    { 0, output_852, 0 },
#endif
    0,
    &operand_data[1672],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+112",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_853 },
#else
    { 0, output_853, 0 },
#endif
    0,
    &operand_data[1647],
    5,
    0,
    2,
    2
  },
  {
    "ctzsi2+113",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+114",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdf%?d\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1677],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+115",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+116",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1662],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+117",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1667],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+118",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1652],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+119",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1637],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+120",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1642],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+121",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+122",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1686],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+123",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1690],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+124",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+125",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1686],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+126",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1690],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+127",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1682],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+128",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1686],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+129",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1690],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+130",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1694],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+131",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1698],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+132",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1702],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+133",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1706],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+134",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1710],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+135",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1690],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+136",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_877 },
#else
    { 0, output_877, 0 },
#endif
    0,
    &operand_data[1714],
    4,
    0,
    9,
    2
  },
  {
    "ctzsi2+137",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_878 },
#else
    { 0, 0, output_878 },
#endif
    0,
    &operand_data[1718],
    4,
    0,
    11,
    3
  },
  {
    "ctzsi2+138",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_879 },
#else
    { 0, 0, output_879 },
#endif
    0,
    &operand_data[1722],
    4,
    0,
    7,
    3
  },
  {
    "ctzsi2+139",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_880 },
#else
    { 0, output_880, 0 },
#endif
    0,
    &operand_data[1726],
    5,
    0,
    3,
    2
  },
  {
    "ctzsi2+140",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_881 },
#else
    { 0, output_881, 0 },
#endif
    0,
    &operand_data[1726],
    5,
    0,
    3,
    2
  },
  {
    "ctzsi2+141",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_882 },
#else
    { 0, output_882, 0 },
#endif
    0,
    &operand_data[1726],
    5,
    0,
    3,
    2
  },
  {
    "ctzsi2+142",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+143",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_884 },
#else
    { 0, 0, output_884 },
#endif
    0,
    &operand_data[1736],
    4,
    0,
    6,
    3
  },
  {
    "ctzsi2+144",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_885 },
#else
    { 0, 0, output_885 },
#endif
    0,
    &operand_data[1740],
    4,
    0,
    6,
    3
  },
  {
    "ctzsi2+145",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_886 },
#else
    { 0, 0, output_886 },
#endif
    0,
    &operand_data[1744],
    4,
    0,
    6,
    3
  },
  {
    "ctzsi2+146",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_887 },
#else
    { 0, 0, output_887 },
#endif
    0,
    &operand_data[1748],
    4,
    0,
    1,
    3
  },
  {
    "ctzsi2+147",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+148",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+149",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+150",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+151",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+152",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+153",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+154",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+155",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+156",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+157",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+158",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+159",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+160",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+161",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+162",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+163",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+164",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+165",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+166",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+167",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+168",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1767],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+169",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1773],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+170",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1767],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+171",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1773],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+172",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1778],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+173",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1781],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+174",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1784],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+175",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1787],
    3,
    0,
    1,
    1
  },
  {
    "ctzsi2+176",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+177",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+178",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+179",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+180",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+181",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1790],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+182",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrh%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1796],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+183",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrw%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1802],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+184",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1808],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+185",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1808],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+186",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1813],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+187",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1813],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+188",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1818],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+189",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1823],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+190",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+191",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+192",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+193",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+194",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+195",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+196",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+197",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+198",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+199",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+200",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+201",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+202",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+203",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+204",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+205",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+206",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+207",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+208",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+209",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+210",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+211",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1828],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+212",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1833],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+213",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1838],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+214",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1828],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+215",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1833],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+216",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1838],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+217",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+218",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+219",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+220",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+221",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+222",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1762],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+223",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1843],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+224",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1847],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+225",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+226",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1843],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+227",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1847],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+228",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+229",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1843],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+230",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1847],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+231",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+232",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1843],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+233",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1847],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+234",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+235",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1855],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+236",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1860],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+237",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrordg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1865],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+238",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrahg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1855],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+239",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrawg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1860],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+240",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsradg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1865],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+241",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1855],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+242",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1860],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+243",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1865],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+244",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1855],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+245",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1860],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+246",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1865],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+247",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1870],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+248",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1875],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+249",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrord%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+250",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrah%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1870],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+251",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsraw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1875],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+252",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrad%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+253",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1870],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+254",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1875],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+255",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+256",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1870],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+257",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1875],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+258",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1731],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+259",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+260",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaddu%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+261",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmia%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+262",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiaph%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    2,
    1,
    1
  },
  {
    "ctzsi2+263",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+264",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+265",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+266",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1880],
    6,
    0,
    1,
    1
  },
  {
    "ctzsi2+267",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1886],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+268",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1890],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+269",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1894],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+270",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1898],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+271",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1902],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+272",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1906],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+273",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1910],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+274",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wacch%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1914],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+275",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1851],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+276",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_1017 },
#else
    { 0, output_1017, 0 },
#endif
    0,
    &operand_data[1918],
    6,
    0,
    2,
    2
  },
  {
    "ctzsi2+277",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmrc%?\t%0, %w1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1924],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+278",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmcr%?\t%w0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1928],
    4,
    0,
    1,
    1
  },
  {
    "ctzsi2+279",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+280",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+281",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadbz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1752],
    5,
    0,
    1,
    1
  },
  {
    "ctzsi2+282",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadhz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1757],
    5,
    0,
    1,
    1
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
