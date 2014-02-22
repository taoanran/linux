/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"
#include "function.h"

#define operands recog_data.operand

int
insn_current_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 199:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-2044)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 178:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 177:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 176:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 175:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) < (3))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[5]) == LABEL_REF ? XEXP (operands[5], 0) : operands[5])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else if (which_alternative == 1)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }
      else if (which_alternative == 2)
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 173:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 172:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 171:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 170:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 169:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 168:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 167:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[4]) == LABEL_REF ? XEXP (operands[4], 0) : operands[4])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 166:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 165:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 164:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 163:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) <= (1))
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 4;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 6;
	        }
	      else
	        {
		  return 8;
	        }
	    }
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-248)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (256)))
	    {
	      return 6;
	    }
	  else
	    {
	      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) >= (-2038)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[2]) == LABEL_REF ? XEXP (operands[2], 0) : operands[2])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	        {
		  return 8;
	        }
	      else
	        {
		  return 10 /* 0xa */;
	        }
	    }
        }

    case 162:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case 161:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-250)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (256)))
        {
	  return 4;
        }
      else
        {
	  if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) >= (-2040)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[3]) == LABEL_REF ? XEXP (operands[3], 0) : operands[3])) : 0) - (insn_current_reference_address (insn))) <= (2048)))
	    {
	      return 6;
	    }
	  else
	    {
	      return 8;
	    }
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 199:
    case 178:
    case 177:
    case 176:
    case 175:
    case 174:
    case 173:
    case 172:
    case 171:
    case 170:
    case 169:
    case 168:
    case 167:
    case 166:
    case 165:
    case 164:
    case 163:
    case 162:
    case 161:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 406:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 24 /* 0x18 */;
        }

    case 885:
    case 884:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 16 /* 0x10 */;
        }
      else if (which_alternative == 7)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 401:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x1c))
        {
	  return 8;
        }
      else if (((1 << which_alternative) & 0x1e0))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return 8;
        }
      else
        {
	  return 4;
        }

    case 367:
    case 366:
    case 196:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (((1 << which_alternative) & 0x6))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 791:
    case 248:
    case 246:
    case 231:
    case 137:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else
        {
	  return 4;
        }

    case 244:
    case 86:
    case 85:
    case 84:
    case 83:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 33:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 758:
    case 742:
    case 54:
    case 4:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 814:
    case 809:
    case 300:
    case 273:
    case 267:
    case 265:
    case 263:
    case 249:
    case 243:
    case 232:
    case 230:
    case 217:
    case 213:
    case 212:
    case 205:
    case 204:
    case 201:
    case 200:
    case 88:
    case 87:
      return 12 /* 0xc */;

    case 882:
    case 881:
    case 880:
    case 399:
    case 398:
    case 397:
    case 272:
    case 270:
    case 262:
    case 260:
    case 258:
    case 256:
    case 769:
    case 765:
    case 760:
    case 298:
    case 254:
    case 252:
    case 229:
    case 76:
    case 69:
    case 61:
    case 31:
    case 20:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 767:
    case 743:
    case 71:
    case 29:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 311:
    case 220:
    case 144:
    case 142:
    case 130:
    case 115:
    case 107:
    case 102:
    case 92:
    case 91:
    case 90:
    case 89:
    case 79:
    case 72:
    case 64:
    case 55:
    case 28:
    case 5:
      return 2;

    case 302:
    case 216:
    case 186:
      return 0;

    case 297:
    case 296:
      return 44 /* 0x2c */;

    case 271:
    case 269:
    case 261:
    case 259:
    case 257:
    case 255:
    case 253:
    case 251:
    case 247:
    case 245:
    case 233:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 242:
      return 20 /* 0x14 */;

    case 241:
    case 240:
    case 239:
    case 238:
      return 16 /* 0x10 */;

    case 221:
      if (((thumb_code) == (IS_THUMB_YES)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 177:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 175:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) < (3))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 173:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 171:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 169:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 167:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) == (0))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 163:
      extract_constrain_insn_cached (insn);
      if ((which_alternative) <= (1))
        {
	  return 8;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 887:
    case 785:
    case 784:
    case 780:
    case 779:
    case 778:
    case 776:
    case 772:
    case 770:
    case 768:
    case 766:
    case 764:
    case 761:
    case 759:
    case 407:
    case 391:
    case 390:
    case 387:
    case 386:
    case 310:
    case 299:
    case 268:
    case 266:
    case 264:
    case 250:
    case 237:
    case 236:
    case 235:
    case 234:
    case 228:
    case 215:
    case 195:
    case 194:
    case 193:
    case 191:
    case 190:
    case 188:
    case 187:
    case 145:
    case 123:
    case 121:
    case 120:
    case 112:
    case 111:
    case 110:
    case 105:
    case 104:
    case 103:
    case 99:
    case 82:
    case 77:
    case 75:
    case 70:
    case 68:
    case 62:
    case 60:
    case 59:
    case 53:
    case 52:
    case 51:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 21:
    case 3:
    case 2:
    case 1:
    case 178:
    case 176:
    case 172:
    case 170:
    case 168:
    case 166:
    case 165:
    case 164:
    case 162:
    case 161:
      return 8;

    case 122:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 100:
      return 6;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
bypass_p (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_latency (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 1))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x1b))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x1b))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x19))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x19))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 3))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xc))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0xc))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x88)))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x88)))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x44))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x44))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xcc))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0xcc))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 401:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (which_alternative == 2)) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x1f5)))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (!((1 << which_alternative) & 0x1f5))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x51))) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x51))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x51))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x1a4))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x42))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x42))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x2d))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x2d))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x44)))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x44))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x22))) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x22))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x22))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x66))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4))
        {
	  return 5;
        }
      else if (((1 << which_alternative) & 0x3c))
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 1;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 9))
        {
	  return 5;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0xa)))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0xa))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x11))) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x11))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x11))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 32 /* 0x20 */;
        }
      else if (((1 << which_alternative) & 0x64))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4)) || ((which_alternative == 8) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 5;
        }
      else if ((which_alternative == 8) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x7f))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x3c))
        {
	  return 32 /* 0x20 */;
        }
      else if (((1 << which_alternative) & 0x43))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 874:
    case 873:
    case 872:
    case 871:
    case 870:
    case 869:
    case 868:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 303:
    case 297:
    case 296:
    case 216:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
    case 185:
    case 184:
    case 183:
      return 32 /* 0x20 */;

    case 807:
    case 804:
    case 160:
    case 158:
    case 155:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 7;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 3;
        }
      else
        {
	  return 0;
        }

    case 806:
    case 803:
    case 159:
    case 157:
    case 154:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 9;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 805:
    case 802:
    case 301:
    case 156:
    case 153:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 11 /* 0xb */;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 5;
        }
      else
        {
	  return 0;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x14))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xa))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x1e))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 144:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x1e))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x1e))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 795:
    case 143:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0)))
        {
	  return 2;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 791:
    case 790:
    case 137:
    case 136:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((which_alternative == 2) && (! (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if (((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 142:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x6))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x6))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0xa0)))
        {
	  return 5;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa0)))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x50))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x50))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xf0))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0xf0))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 794:
    case 786:
    case 141:
    case 125:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if ((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 1;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3))))
        {
	  return 2;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x50)))
        {
	  return 7;
        }
      else if (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x50))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x28))) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x28))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x28))))
        {
	  return 2;
        }
      else if (!((1 << which_alternative) & 0x78))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 145:
    case 123:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else if (((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_NO)))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES)))))
        {
	  return 3;
        }
      else if ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 887:
    case 836:
    case 835:
    case 834:
    case 833:
    case 830:
    case 829:
    case 826:
    case 825:
    case 824:
    case 823:
    case 820:
    case 819:
    case 818:
    case 817:
    case 814:
    case 811:
    case 809:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 792:
    case 788:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 407:
    case 295:
    case 294:
    case 293:
    case 292:
    case 289:
    case 288:
    case 285:
    case 284:
    case 283:
    case 282:
    case 279:
    case 278:
    case 277:
    case 276:
    case 273:
    case 219:
    case 214:
    case 213:
    case 212:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 138:
    case 134:
    case 129:
    case 128:
    case 127:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 116:
    case 115:
    case 114:
    case 113:
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((arm_tune_xscale) == (IS_XSCALE_NO))) || (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 2;
        }
      else
        {
	  return 0;
        }

    case 779:
    case 111:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 3;
        }
      else if ((((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO)))) || ((which_alternative == 1) && (! (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 2;
        }
      else if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 832:
    case 831:
    case 828:
    case 827:
    case 822:
    case 821:
    case 816:
    case 815:
    case 291:
    case 290:
    case 287:
    case 286:
    case 281:
    case 280:
    case 275:
    case 274:
    case 87:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 5;
        }
      else if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
      if (((arm_ld_sched) == (LDSCHED_NO)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_YES))))
        {
	  return 3;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_NO))))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}


#if AUTOMATON_ALTS
int
insn_alts (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 1)) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x1b))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x19))) || (((1 << which_alternative) & 0x19))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 3)) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xc))) || (!((1 << which_alternative) & 0xc))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x88))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x88))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x44))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xcc))) || (!((1 << which_alternative) & 0xcc))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 401:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2)) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (which_alternative == 2)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)) || (!((1 << which_alternative) & 0x6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x1f5))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (!((1 << which_alternative) & 0x1f5))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x51))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x51))) || (((1 << which_alternative) & 0x1a4))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x6f))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x6f))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x42))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x2d))) || (((1 << which_alternative) & 0x2d))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x44))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x44))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x22))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x22))) || (!((1 << which_alternative) & 0x66))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x20a))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0xa))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x11))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x11))) || ((!((1 << which_alternative) & 0x1b)) || (((((arm_fpu_attr) == (FPU_FPA))) && (((1 << which_alternative) & 0x1e0))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 9))) || ((which_alternative == 10) && (((arm_fpu_attr) == (FPU_FPA)))))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4)) || (((which_alternative == 8) && ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x7f))) || ((((1 << which_alternative) & 0x7f)) || (((((arm_fpu_attr) == (FPU_FPA))) && (((1 << which_alternative) & 0xf))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 4))) || ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 5)))))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 807:
    case 806:
    case 805:
    case 804:
    case 803:
    case 802:
    case 301:
    case 160:
    case 159:
    case 158:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) || (((arm_is_6_or_7) == (MODEL_WBUF_NO))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x14))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xa))) || (!((1 << which_alternative) & 0x1e))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 144:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x14))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x1e))) || (!((1 << which_alternative) & 0x1e))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 795:
    case 143:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0)) || (which_alternative == 0))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 791:
    case 790:
    case 137:
    case 136:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES)))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || ((which_alternative != 2) || (! (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2)) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) || ((((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES)))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3))) || (((1 << which_alternative) & 0x3))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 142:
    case 133:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2)) || (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x6))) || (!((1 << which_alternative) & 0x6))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0xa0))) || (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa0))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x50))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xf0))) || (!((1 << which_alternative) & 0xf0))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 794:
    case 786:
    case 141:
    case 125:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3))) || (((1 << which_alternative) & 0x3)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x50))) || (((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x50))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x28))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x28))) || (!((1 << which_alternative) & 0x78))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 145:
    case 123:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) || (((arm_is_6_or_7) == (MODEL_WBUF_NO))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)) || (which_alternative == 0))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 887:
    case 836:
    case 835:
    case 834:
    case 833:
    case 830:
    case 829:
    case 826:
    case 825:
    case 824:
    case 823:
    case 820:
    case 819:
    case 818:
    case 817:
    case 814:
    case 811:
    case 809:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 792:
    case 788:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 407:
    case 295:
    case 294:
    case 293:
    case 292:
    case 289:
    case 288:
    case 285:
    case 284:
    case 283:
    case 282:
    case 279:
    case 278:
    case 277:
    case 276:
    case 273:
    case 219:
    case 214:
    case 213:
    case 212:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 138:
    case 134:
    case 129:
    case 128:
    case 127:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 116:
    case 115:
    case 114:
    case 113:
      if (((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO)))) || (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 779:
    case 111:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES)))) && ((((arm_tune_xscale) == (IS_XSCALE_YES))) || (((arm_tune_xscale) == (IS_XSCALE_NO))))) || ((which_alternative != 1) || (! (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
      if ((((arm_ld_sched) == (LDSCHED_NO))) || ((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) || (((arm_is_strong) == (IS_STRONGARM_NO))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

#endif

static int
internal_dfa_insn_code (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 1))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x1b))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x1b))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x19)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x19))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 3))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xc)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0xc))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x88)))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x88)))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x44))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x44))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xcc)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0xcc))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 401:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x6))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x1f5)))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (!((1 << which_alternative) & 0x1f5)))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x51))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x51))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x51)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x1a4))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (!((1 << which_alternative) & 0x6f)))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x42))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x42))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x2d)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x2d))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x44)))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x44)))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x22))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x22))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x22)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x66))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4))
        {
	  return 0;
        }
      else if (((1 << which_alternative) & 0x3c))
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 9))
        {
	  return 0;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0xa)))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0xa)))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x11))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x11))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x11)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x7f))
        {
	  return 15 /* 0xf */;
        }
      else if (((1 << which_alternative) & 0x64))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4))
        {
	  return 0;
        }
      else if ((which_alternative == 8) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else if ((which_alternative == 8) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x7f)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x3c))
        {
	  return 15 /* 0xf */;
        }
      else if (((1 << which_alternative) & 0x43))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 874:
    case 873:
    case 872:
    case 871:
    case 870:
    case 869:
    case 868:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 303:
    case 297:
    case 296:
    case 216:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
    case 185:
    case 184:
    case 183:
      return 15 /* 0xf */;

    case 807:
    case 804:
    case 160:
    case 158:
    case 155:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 2;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 5;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 806:
    case 803:
    case 159:
    case 157:
    case 154:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 3;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 6;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 805:
    case 802:
    case 301:
    case 156:
    case 153:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 4;
        }
      else if (((arm_is_6_or_7) == (MODEL_WBUF_NO)))
        {
	  return 7;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x14)))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xa)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x1e))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 144:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x14)))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x1e)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x1e))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 795:
    case 143:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0))
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 791:
    case 790:
    case 137:
    case 136:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 2) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  return 8;
        }
      else if (((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 142:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x6)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x6))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0xa0)))
        {
	  return 1;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0xa0)))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x50))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x50))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0xf0)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0xf0))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 794:
    case 786:
    case 141:
    case 125:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else if ((which_alternative == 3) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 8;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (!((1 << which_alternative) & 0x3)))
        {
	  return 11 /* 0xb */;
        }
      else if (((1 << which_alternative) & 0x3))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((1 << which_alternative) & 0x50)))
        {
	  return 2;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_NO))) && (((1 << which_alternative) & 0x50)))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x28))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (((1 << which_alternative) & 0x28))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((1 << which_alternative) & 0x28)))
        {
	  return 11 /* 0xb */;
        }
      else if (!((1 << which_alternative) & 0x78))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 145:
    case 123:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_NO))))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 887:
    case 836:
    case 835:
    case 834:
    case 833:
    case 830:
    case 829:
    case 826:
    case 825:
    case 824:
    case 823:
    case 820:
    case 819:
    case 818:
    case 817:
    case 814:
    case 811:
    case 809:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 792:
    case 788:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 407:
    case 295:
    case 294:
    case 293:
    case 292:
    case 289:
    case 288:
    case 285:
    case 284:
    case 283:
    case 282:
    case 279:
    case 278:
    case 277:
    case 276:
    case 273:
    case 219:
    case 214:
    case 213:
    case 212:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 138:
    case 134:
    case 129:
    case 128:
    case 127:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 116:
    case 115:
    case 114:
    case 113:
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if (! (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 779:
    case 111:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_YES))))
        {
	  return 9;
        }
      else if (((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES)))) && (((arm_tune_xscale) == (IS_XSCALE_NO))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 1) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case 832:
    case 831:
    case 828:
    case 827:
    case 822:
    case 821:
    case 816:
    case 815:
    case 291:
    case 290:
    case 287:
    case 286:
    case 281:
    case 280:
    case 275:
    case 274:
    case 87:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 1;
        }
      else if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  return 8;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
      if (((arm_ld_sched) == (LDSCHED_NO)))
        {
	  return 12 /* 0xc */;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_YES))))
        {
	  return 13 /* 0xd */;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_NO))))
        {
	  return 14 /* 0xe */;
        }
      else
        {
	  return 31 /* 0x1f */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 16 /* 0x10 */;

    }
}

int
result_ready_cost (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
function_units_used (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return -1 /* units: none */;

    }
}

enum attr_cirrus
get_attr_cirrus (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return CIRRUS_NOT;
        }
      else if (which_alternative == 5)
        {
	  return CIRRUS_NORMAL;
        }
      else if (which_alternative == 6)
        {
	  return CIRRUS_DOUBLE;
        }
      else if (which_alternative == 7)
        {
	  return CIRRUS_MOVE;
        }
      else if (which_alternative == 8)
        {
	  return CIRRUS_NORMAL;
        }
      else
        {
	  return CIRRUS_DOUBLE;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CIRRUS_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return CIRRUS_MOVE;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return CIRRUS_NORMAL;
        }
      else
        {
	  return CIRRUS_NOT;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return CIRRUS_NOT;
        }
      else if (which_alternative == 3)
        {
	  return CIRRUS_MOVE;
        }
      else if (which_alternative == 4)
        {
	  return CIRRUS_NORMAL;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return CIRRUS_DOUBLE;
        }
      else
        {
	  return CIRRUS_NORMAL;
        }

    case 386:
    case 387:
      return CIRRUS_MOVE;

    case 183:
    case 184:
    case 185:
      return CIRRUS_COMPARE;

    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 374:
    case 375:
    case 376:
    case 377:
    case 378:
    case 379:
    case 380:
    case 381:
    case 382:
    case 383:
    case 384:
    case 385:
    case 388:
    case 389:
    case 390:
    case 392:
    case 393:
      return CIRRUS_NORMAL;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CIRRUS_NOT;

    }
}

enum attr_core_cycles
get_attr_core_cycles (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x19))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xc))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xcc))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1a4))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x2d))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x66))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3c))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x64))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x43))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 146:
    case 144:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1e))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 401:
    case 142:
    case 133:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0xf0))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 794:
    case 791:
    case 790:
    case 789:
    case 786:
    case 141:
    case 137:
    case 136:
    case 135:
    case 125:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x78))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 795:
    case 779:
    case 145:
    case 143:
    case 123:
    case 111:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 887:
    case 874:
    case 873:
    case 872:
    case 871:
    case 870:
    case 869:
    case 868:
    case 836:
    case 835:
    case 834:
    case 833:
    case 832:
    case 831:
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 811:
    case 809:
    case 807:
    case 806:
    case 805:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 792:
    case 788:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 407:
    case 376:
    case 375:
    case 374:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 365:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 303:
    case 301:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 273:
    case 219:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
    case 185:
    case 184:
    case 183:
    case 160:
    case 159:
    case 158:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 138:
    case 134:
    case 129:
    case 128:
    case 127:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 116:
    case 115:
    case 114:
    case 113:
    case 87:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
      return CORE_CYCLES_MULTI;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CORE_CYCLES_SINGLE;

    }
}

enum attr_conds
get_attr_conds (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
      if (((arm_prog_mode) == (PROG_MODE_PROG32)))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case 104:
    case 103:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case 187:
    case 188:
    case 190:
    case 191:
      return CONDS_JUMP_CLOB;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 1:
    case 2:
    case 3:
    case 21:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 59:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 99:
    case 217:
    case 220:
    case 230:
    case 232:
    case 233:
    case 238:
    case 240:
    case 242:
    case 243:
    case 244:
    case 245:
    case 247:
    case 249:
    case 251:
    case 253:
    case 255:
    case 257:
    case 259:
    case 261:
    case 263:
    case 265:
    case 267:
    case 269:
    case 271:
    case 296:
    case 297:
    case 299:
    case 300:
    case 402:
      return CONDS_CLOB;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 30:
    case 34:
    case 35:
    case 37:
    case 38:
    case 56:
    case 57:
    case 58:
    case 66:
    case 67:
    case 73:
    case 74:
    case 80:
    case 81:
    case 94:
    case 95:
    case 97:
    case 98:
    case 108:
    case 109:
    case 117:
    case 132:
    case 179:
    case 180:
    case 181:
    case 182:
    case 186:
    case 215:
    case 223:
    case 224:
    case 226:
    case 227:
    case 234:
    case 235:
    case 236:
    case 237:
    case 239:
    case 241:
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 365:
      return CONDS_SET;

    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 31:
    case 189:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 213:
    case 214:
    case 228:
    case 229:
    case 231:
    case 246:
    case 248:
    case 250:
    case 252:
    case 254:
    case 256:
    case 258:
    case 260:
    case 262:
    case 264:
    case 266:
    case 268:
    case 270:
    case 272:
    case 298:
    case 366:
    case 367:
      return CONDS_USE;

    default:
      return CONDS_NOCOND;

    }
}

enum attr_far_jump
get_attr_far_jump (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 177:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 175:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) < (3)) && ((((which_alternative) < (3)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) < (3))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) < (3))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 174:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || (((which_alternative == 1) && (get_attr_length (insn) == 10 /* 0xa */)) || (((which_alternative == 2) && (get_attr_length (insn) == 10 /* 0xa */)) || ((which_alternative == 3) && (get_attr_length (insn) == 10 /* 0xa */)))))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 173:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 171:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 169:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 167:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) == (0)) && ((((which_alternative) == (0)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) == (0))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 163:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative) > (1)) && ((((which_alternative) <= (1)) && (get_attr_length (insn) == 8)) || ((! ((which_alternative) <= (1))) && (get_attr_length (insn) == 8)))) || ((! ((which_alternative) <= (1))) && (get_attr_length (insn) == 10 /* 0xa */)))
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 161:
    case 162:
    case 164:
    case 165:
    case 166:
    case 168:
    case 170:
    case 172:
    case 176:
    case 178:
      if (get_attr_length (insn) == 8)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 199:
      if (get_attr_length (insn) == 4)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FAR_JUMP_NO;

    }
}

int
get_attr_neg_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 244 /* 0xf4 */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 0;
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 4084 /* 0xff4 */;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 1012 /* 0x3f4 */;
        }
      else
        {
	  return 0;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 244 /* 0xf4 */;
        }
      else
        {
	  return 0;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 401:
    case 394:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1012 /* 0x3f4 */;
        }
      else
        {
	  return 0;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 1004 /* 0x3ec */;
        }
      else
        {
	  return 0;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1008 /* 0x3f0 */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  return 0;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 1012 /* 0x3f4 */;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 791:
    case 137:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else
        {
	  return 4084 /* 0xff4 */;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else
        {
	  return 244 /* 0xf4 */;
        }

    case 786:
    case 403:
    case 125:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 123:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1008 /* 0x3f0 */;
        }
      else
        {
	  return 0;
        }

    case 129:
      if (((thumb_code) == (IS_THUMB_YES)))
        {
	  return 0;
        }
      else
        {
	  return 4084 /* 0xff4 */;
        }

    case 145:
      return 1008 /* 0x3f0 */;

    case 111:
    case 779:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 4084 /* 0xff4 */;
        }

    case 143:
    case 795:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 4084 /* 0xff4 */;
        }
      else
        {
	  return 0;
        }

    case 116:
    case 127:
    case 136:
    case 138:
    case 219:
    case 782:
    case 790:
    case 792:
    case 811:
      return 4084 /* 0xff4 */;

    case 114:
    case 119:
    case 120:
    case 121:
    case 407:
    case 781:
    case 783:
    case 784:
    case 785:
    case 887:
      return 244 /* 0xf4 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_predicable
get_attr_predicable (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 30:
    case 31:
    case 33:
    case 34:
    case 35:
    case 37:
    case 38:
    case 51:
    case 52:
    case 53:
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 64:
    case 66:
    case 67:
    case 72:
    case 73:
    case 74:
    case 79:
    case 80:
    case 81:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
    case 94:
    case 95:
    case 97:
    case 98:
    case 99:
    case 100:
    case 102:
    case 103:
    case 104:
    case 107:
    case 108:
    case 109:
    case 113:
    case 115:
    case 117:
    case 118:
    case 122:
    case 123:
    case 124:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 132:
    case 133:
    case 140:
    case 142:
    case 144:
    case 145:
    case 146:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 190:
    case 191:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 220:
    case 221:
    case 223:
    case 224:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 248:
    case 249:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 258:
    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 268:
    case 269:
    case 270:
    case 271:
    case 272:
    case 296:
    case 297:
    case 298:
    case 299:
    case 300:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 313:
    case 314:
    case 320:
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 365:
    case 366:
    case 367:
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 374:
    case 375:
    case 376:
    case 377:
    case 378:
    case 379:
    case 380:
    case 381:
    case 382:
    case 383:
    case 384:
    case 385:
    case 386:
    case 387:
    case 388:
    case 389:
    case 390:
    case 391:
    case 392:
    case 393:
    case 394:
    case 395:
    case 396:
    case 401:
    case 402:
    case 403:
    case 716:
    case 717:
    case 718:
    case 719:
    case 720:
    case 721:
    case 722:
    case 724:
    case 725:
    case 726:
    case 727:
    case 728:
    case 729:
      return PREDICABLE_NO;

    default:
      return PREDICABLE_YES;

    }
}

int
get_attr_pool_range (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 256 /* 0x100 */;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return 0;
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 4096 /* 0x1000 */;
        }
      else if (((1 << which_alternative) & 0x38))
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  return 1024 /* 0x400 */;
        }
      else
        {
	  return 0;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 252 /* 0xfc */;
        }
      else
        {
	  return 0;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 0;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 1024 /* 0x400 */;
        }
      else
        {
	  return 0;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return 0;
        }
      else if (which_alternative == 4)
        {
	  return 1020 /* 0x3fc */;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 1024 /* 0x400 */;
        }
      else
        {
	  return 0;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 1024 /* 0x400 */;
        }
      else if (((1 << which_alternative) & 0x78))
        {
	  return 0;
        }
      else if (which_alternative == 7)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 0;
        }

    case 146:
    case 144:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 142:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 32 /* 0x20 */;
        }
      else
        {
	  return 0;
        }

    case 791:
    case 137:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else
        {
	  return 4092 /* 0xffc */;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return 0;
        }
      else
        {
	  return 256 /* 0x100 */;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3f))
        {
	  return 0;
        }
      else if (which_alternative == 6)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 786:
    case 403:
    case 125:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return 0;
        }
      else if (which_alternative == 2)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 0;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x1f))
        {
	  return 0;
        }
      else if (which_alternative == 5)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 113:
      return 60 /* 0x3c */;

    case 115:
    case 122:
      return 32 /* 0x20 */;

    case 401:
    case 394:
    case 123:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1020 /* 0x3fc */;
        }
      else
        {
	  return 0;
        }

    case 128:
      return 1024 /* 0x400 */;

    case 129:
      if (((thumb_code) == (IS_THUMB_YES)))
        {
	  return 1024 /* 0x400 */;
        }
      else
        {
	  return 4096 /* 0x1000 */;
        }

    case 118:
    case 145:
      return 1020 /* 0x3fc */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return 250 /* 0xfa */;

    case 111:
    case 779:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 4092 /* 0xffc */;
        }

    case 143:
    case 795:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 4096 /* 0x1000 */;
        }
      else
        {
	  return 0;
        }

    case 116:
    case 127:
    case 136:
    case 138:
    case 219:
    case 782:
    case 790:
    case 792:
    case 811:
      return 4096 /* 0x1000 */;

    case 114:
    case 119:
    case 120:
    case 121:
    case 407:
    case 781:
    case 783:
    case 784:
    case 785:
    case 887:
      return 256 /* 0x100 */;

    default:
      return 0;

    }
}

int
get_attr_shift (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 65:
    case 260:
    case 262:
    case 763:
      return 2;

    case 93:
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 103:
    case 104:
    case 112:
    case 180:
    case 181:
    case 182:
    case 264:
    case 773:
    case 774:
    case 780:
      return 1;

    case 222:
    case 223:
    case 224:
    case 812:
      return 4;

    case 225:
    case 226:
    case 227:
    case 813:
      return 3;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

enum attr_type
get_attr_type (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE1;
        }
      else if (((1 << which_alternative) & 0x30))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 401:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x180))
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0xc))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE2;
        }
      else if (((1 << which_alternative) & 0x18))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_R_MEM_F;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_F_MEM_R;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (((1 << which_alternative) & 0x60))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_R_MEM_F;
        }
      else
        {
	  return TYPE_F_MEM_R;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_R_MEM_F;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_F_MEM_R;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 144:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 791:
    case 790:
    case 137:
    case 136:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 142:
    case 133:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xf))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_STORE1;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 794:
    case 786:
    case 141:
    case 125:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x7))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 123:
    case 145:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 146:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_STORE2;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 111:
    case 779:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 143:
    case 795:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 374:
    case 376:
      return TYPE_MAV_DMULT;

    case 183:
    case 184:
    case 185:
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 375:
      return TYPE_MAV_FARITH;

    case 153:
    case 156:
    case 301:
    case 802:
    case 805:
      return TYPE_STORE4;

    case 154:
    case 157:
    case 159:
    case 803:
    case 806:
      return TYPE_STORE3;

    case 155:
    case 158:
    case 160:
    case 804:
    case 807:
      return TYPE_STORE2;

    case 87:
    case 274:
    case 275:
    case 280:
    case 281:
    case 286:
    case 287:
    case 290:
    case 291:
    case 815:
    case 816:
    case 821:
    case 822:
    case 827:
    case 828:
    case 831:
    case 832:
      return TYPE_STORE1;

    case 113:
    case 114:
    case 115:
    case 116:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 127:
    case 128:
    case 129:
    case 134:
    case 138:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 152:
    case 212:
    case 213:
    case 214:
    case 219:
    case 273:
    case 276:
    case 277:
    case 278:
    case 279:
    case 282:
    case 283:
    case 284:
    case 285:
    case 288:
    case 289:
    case 292:
    case 293:
    case 294:
    case 295:
    case 407:
    case 781:
    case 782:
    case 783:
    case 784:
    case 785:
    case 788:
    case 792:
    case 796:
    case 797:
    case 798:
    case 799:
    case 800:
    case 801:
    case 809:
    case 811:
    case 814:
    case 817:
    case 818:
    case 819:
    case 820:
    case 823:
    case 824:
    case 825:
    case 826:
    case 829:
    case 830:
    case 833:
    case 834:
    case 835:
    case 836:
    case 887:
      return TYPE_LOAD;

    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
      return TYPE_CALL;

    case 349:
    case 350:
    case 871:
    case 872:
      return TYPE_R_2_F;

    case 351:
    case 352:
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 365:
    case 873:
    case 874:
      return TYPE_F_2_R;

    case 303:
      return TYPE_F_STORE;

    case 346:
    case 347:
    case 348:
    case 868:
    case 869:
    case 870:
      return TYPE_FLOAT_EM;

    case 340:
    case 341:
    case 342:
    case 343:
    case 344:
    case 345:
    case 353:
    case 354:
    case 366:
    case 367:
    case 862:
    case 863:
    case 864:
    case 865:
    case 866:
    case 867:
    case 875:
    case 876:
      return TYPE_FFARITH;

    case 315:
    case 316:
    case 317:
    case 318:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 838:
    case 839:
    case 840:
    case 841:
    case 842:
    case 843:
    case 844:
    case 845:
    case 846:
      return TYPE_FARITH;

    case 325:
    case 847:
      return TYPE_FFMUL;

    case 326:
    case 327:
    case 328:
    case 329:
    case 848:
    case 849:
    case 850:
    case 851:
      return TYPE_FMUL;

    case 330:
    case 335:
    case 852:
    case 857:
      return TYPE_FDIVS;

    case 331:
    case 332:
    case 333:
    case 334:
    case 336:
    case 337:
    case 338:
    case 339:
    case 853:
    case 854:
    case 855:
    case 856:
    case 858:
    case 859:
    case 860:
    case 861:
      return TYPE_FDIVD;

    case 216:
    case 296:
    case 297:
      return TYPE_BLOCK;

    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 744:
    case 745:
    case 746:
    case 747:
    case 748:
    case 749:
    case 750:
    case 751:
    case 752:
    case 753:
    case 754:
    case 755:
    case 756:
    case 757:
      return TYPE_MULT;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_NORMAL;

    }
}

enum attr_write_conflict
get_attr_write_conflict (rtx insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 886:
    case 885:
    case 884:
    case 406:
    case 405:
    case 404:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x1b))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 402:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x44))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 396:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x51))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 395:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x42))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 394:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x22))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 879:
    case 357:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x3c))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 878:
    case 356:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x6e))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 877:
    case 355:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xbc))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 146:
    case 144:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0xa))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 791:
    case 790:
    case 137:
    case 136:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x3))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 789:
    case 135:
      extract_constrain_insn_cached (insn);
      if (!((1 << which_alternative) & 0x7))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 126:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x50))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 794:
    case 786:
    case 403:
    case 141:
    case 125:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 124:
      extract_constrain_insn_cached (insn);
      if (((1 << which_alternative) & 0x28))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 795:
    case 401:
    case 145:
    case 143:
    case 142:
    case 133:
    case 123:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 779:
    case 111:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 887:
    case 870:
    case 869:
    case 868:
    case 836:
    case 835:
    case 834:
    case 833:
    case 830:
    case 829:
    case 826:
    case 825:
    case 824:
    case 823:
    case 820:
    case 819:
    case 818:
    case 817:
    case 814:
    case 811:
    case 809:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 792:
    case 788:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 407:
    case 348:
    case 347:
    case 346:
    case 303:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 289:
    case 288:
    case 285:
    case 284:
    case 283:
    case 282:
    case 279:
    case 278:
    case 277:
    case 276:
    case 273:
    case 219:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 208:
    case 207:
    case 206:
    case 205:
    case 204:
    case 203:
    case 202:
    case 201:
    case 200:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 138:
    case 134:
    case 129:
    case 128:
    case 127:
    case 122:
    case 121:
    case 120:
    case 119:
    case 118:
    case 116:
    case 115:
    case 114:
    case 113:
      return WRITE_CONFLICT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return WRITE_CONFLICT_NO;

    }
}

const struct function_unit_desc function_units[] = {
{"dummy", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} /* a dummy element */};


int max_dfa_issue_rate = 1;
/* Vector translating external insn codes to internal ones.*/
static const unsigned char arm_translate[] ATTRIBUTE_UNUSED = {
    0,     1,     2,     3,     4,     5,     6,     7,     8,     8,
    8,     9,    10,     9,     6,    11,     8,     8,     8,     8,
    8,     8,     8,     8,     8,     8,     5,     6,    12,    13,
   14};

/* Comb vector for state transitions.  */
static const unsigned char arm_transitions[] ATTRIBUTE_UNUSED = {
   44,    62,   109,    98,    33,     5,     4,     3,     7,     6,
   24,     8,     2,     1,     0,    62,     2,     3,     4,     5,
   58,    61,     3,    60,    59,    24,     8,     2,     1,    40,
   54,     6,     7,     0,     9,    51,     4,     3,    53,    52,
   24,     8,     2,     1,    41,    44,    10,    11,    12,    13,
    5,     4,     3,    50,    49,    24,     8,     2,     1,    42,
   44,    14,    15,    16,    17,     5,     4,     3,    48,     6,
   24,     8,     2,     1,    43,    44,    18,    19,    20,    21,
    5,     4,     3,     7,     6,    24,     8,     2,     1,     0,
   93,    97,    96,    95,    94,    24,     8,    92,    91,    35,
   86,    90,    89,    88,    87,    24,     8,    85,    84,    36,
   79,    83,    82,    81,    80,    24,     8,    78,    77,    37,
   72,    76,    75,    74,    73,    24,     8,    71,     1,    38,
   66,    70,    69,    68,    67,    24,     8,     2,     1,    39,
    5,     4,     3,    46,     6,    24,     8,     2,     1,    47,
    5,     4,     3,     7,     6,    24,     8,     2,     1,     0,
    5,     4,     3,    57,    49,    24,     8,     2,     1,    56,
    5,     4,     3,    48,     6,    24,     8,     2,     1,    43,
   51,     4,     3,    65,    52,    24,     8,     2,     1,    64,
    5,     4,     3,    50,    49,    24,     8,     2,     1,    42,
  106,    83,    82,   108,   107,    24,     8,    78,    77,   100,
   72,    76,    75,   105,   104,    24,     8,    71,     1,   101,
   66,    70,    69,   103,    67,    24,     8,     2,     1,   102,
   58,    61,     3,    60,    59,    24,     8,     2,     1,    40,
   66,    70,    69,   115,   114,    24,     8,     2,     1,   111,
   58,    61,     3,   113,    59,    24,     8,     2,     1,   112,
   51,     4,     3,    53,    52,    24,     8,     2,     1,    41,
   22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
   32,     1,    34,    45,    47,    43,    48,    42,    49,    50,
   41,    55,    56,    52,    53,    40,    51,    63,    64,    59,
   60,    39,    61,    58,    69,    67,    68,    38,    70,    66,
   71,    75,    73,    74,    37,    76,    72,    78,    82,    80,
   81,    36,    83,    79,    85,    89,    87,    88,    35,    90,
   86,    99,   102,   103,   101,   104,   105,   100,   110,   112,
  113,   111};

/* Check vector for state transitions.  */
static const unsigned char arm_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,    39,     1,     2,     3,     4,
   39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
   40,     5,     6,     7,     8,    40,    40,    40,    40,    40,
   40,    40,    40,    40,    40,    41,     9,    10,    11,    12,
   41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
   42,    13,    14,    15,    16,    42,    42,    42,    42,    42,
   42,    42,    42,    42,    42,    43,    17,    18,    19,    20,
   43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
   34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
   35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
   36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
   37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
   38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
   45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
   47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
   55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
   56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
   63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
   64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
   99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
  100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
  101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
  102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
  110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
  111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
  112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
   31,    32,    33,    44,    46,    48,    49,    50,    51,    52,
   53,    54,    57,    58,    59,    60,    61,    62,    65,    66,
   67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
   77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
   87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
   97,    98,   103,   104,   105,   106,   107,   108,   109,   113,
  114,   115};

/* Base vector for state transitions.  */
static const unsigned short arm_base[] = {
    0,     2,     3,     4,     5,    17,    18,    19,    20,    32,
   33,    34,    35,    47,    48,    49,    50,    62,    63,    64,
   65,   256,   257,   258,   259,   260,   261,   262,   263,   264,
  265,   266,   267,   268,    85,    95,   105,   115,   125,    15,
   30,    45,    60,    75,   269,   135,   270,   145,   271,   272,
  273,   274,   275,   276,   277,   155,   165,   278,   279,   280,
  281,   282,   283,   175,   185,   284,   285,   286,   287,   288,
  289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
  299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
  309,   310,   311,   312,   313,   314,   315,   316,   317,   195,
  205,   215,   225,   318,   319,   320,   321,   322,   323,   324,
  235,   245,   255,   325,   326,   327};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char arm_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1};

/* Check vector for state insn alternatives.  */
static const unsigned char arm_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,    39,     1,     2,     3,     4,
   39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
   40,     5,     6,     7,     8,    40,    40,    40,    40,    40,
   40,    40,    40,    40,    40,    41,     9,    10,    11,    12,
   41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
   42,    13,    14,    15,    16,    42,    42,    42,    42,    42,
   42,    42,    42,    42,    42,    43,    17,    18,    19,    20,
   43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
   34,    34,    34,    34,    34,    34,    34,    34,    34,    34,
   35,    35,    35,    35,    35,    35,    35,    35,    35,    35,
   36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
   37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
   38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
   45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
   47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
   55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
   56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
   63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
   64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
   99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
  100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
  101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
  102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
  110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
  111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
  112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
   21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
   31,    32,    33,    44,    46,    48,    49,    50,    51,    52,
   53,    54,    57,    58,    59,    60,    61,    62,    65,    66,
   67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
   77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
   87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
   97,    98,   103,   104,   105,   106,   107,   108,   109,   113,
  114,   115};

/* Base vector for state insn alternatives.  */
static const unsigned short arm_base_state_alts[] = {
    0,     2,     3,     4,     5,    17,    18,    19,    20,    32,
   33,    34,    35,    47,    48,    49,    50,    62,    63,    64,
   65,   256,   257,   258,   259,   260,   261,   262,   263,   264,
  265,   266,   267,   268,    85,    95,   105,   115,   125,    15,
   30,    45,    60,    75,   269,   135,   270,   145,   271,   272,
  273,   274,   275,   276,   277,   155,   165,   278,   279,   280,
  281,   282,   283,   175,   185,   284,   285,   286,   287,   288,
  289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
  299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
  309,   310,   311,   312,   313,   314,   315,   316,   317,   195,
  205,   215,   225,   318,   319,   320,   321,   322,   323,   324,
  235,   245,   255,   325,   326,   327};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char arm_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     7,     7,     7,     7,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     0,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     0,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     0,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
   32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
   32,    32,    32,    32,     0,    31,    31,    31,    31,    31,
   31,    31,    31,    31,    31,    31,    31,    31,    31,     0,
   30,    30,    30,    30,    30,    30,    30,    30,    30,    30,
   30,    30,    30,    30,     0,    29,    29,    29,    29,    29,
   29,    29,    29,    29,    29,    29,    29,    29,    29,     0,
   28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
   28,    28,    28,    28,     0,    27,    27,    27,    27,    27,
   27,    27,    27,    27,    27,    27,    27,    27,    27,     0,
   26,    26,    26,    26,    26,    26,    26,    26,    26,    26,
   26,    26,    26,    26,     0,    25,    25,    25,    25,    25,
   25,    25,    25,    25,    25,    25,    25,    25,    25,     0,
   24,    24,    24,    24,    24,    24,    24,    24,    24,    24,
   24,    24,    24,    24,     0,    23,    23,    23,    23,    23,
   23,    23,    23,    23,    23,    23,    23,    23,    23,     0,
   22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
   22,    22,    22,    22,     0,    21,    21,    21,    21,    21,
   21,    21,    21,    21,    21,    21,    21,    21,    21,     0,
   20,    20,    20,    20,    20,    20,    20,    20,    20,    20,
   20,    20,    20,    20,     0,    19,    19,    19,    19,    19,
   19,    19,    19,    19,    19,    19,    19,    19,    19,     0,
   18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
   18,    18,    18,    18,     0,    17,    17,    17,    17,    17,
   17,    17,    17,    17,    17,    17,    17,    17,    17,     0,
   16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
   16,    16,    16,    16,     0,    15,    15,    15,    15,    15,
   15,    15,    15,    15,    15,    15,    15,    15,    15,     0,
   14,    14,    14,    14,    14,    14,    14,    14,    14,    14,
   14,    14,    14,    14,     0,    13,    13,    13,    13,    13,
   13,    13,    13,    13,    13,    13,    13,    13,    13,     0,
   12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
   12,    12,    12,    12,     0,    11,    11,    11,    11,    11,
   11,    11,    11,    11,    11,    11,    11,    11,    11,     0,
   10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
   10,    10,    10,    10,     0,     9,     9,     9,     9,     9,
    9,     9,     9,     9,     9,     9,     9,     9,     9,     0,
    8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     8,     8,     8,     0,     6,    11,    11,    11,    11,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    5,    10,    10,    10,    10,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     4,     9,     9,     9,     9,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3,     8,     8,     8,     8,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     7,     7,     7,     7,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     6,     6,     6,     6,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     5,     5,     5,     5,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     4,     4,     4,     4,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     3,     3,     3,     3,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     2,     2,     2,     2,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     1,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     2,     2,     2,     2,     2,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     2,     3,     3,     3,     3,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    1,     3,     3,     3,     3,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     3,     4,     4,     4,     4,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
    2,     4,     4,     4,     4,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     1,     4,     4,     4,     4,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     4,     4,     4,     4,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     2,     3,     3,     3,     3,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     2,     2,     2,     2,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     3,     3,     3,     3,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     5,     5,     5,     5,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     0,     2,     5,     5,     5,     5,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    1,     5,     5,     5,     5,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     4,     5,     5,     5,     5,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
    3,     5,     5,     5,     5,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     2,     4,     4,     4,     4,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     3,     3,     3,     3,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     4,     4,     4,     4,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     6,     6,     6,     6,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     0,     2,     6,     6,     6,     6,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    1,     6,     6,     6,     6,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     5,     6,     6,     6,     6,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    4,     6,     6,     6,     6,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     0,     6,     7,     7,     7,     7,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     0,
    3,     7,     7,     7,     7,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     0,     2,     7,     7,     7,     7,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    2,     7,     7,     7,     7,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     5,     7,     7,     7,     7,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    4,     7,     7,     7,     7,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     0,     7,     8,     8,     8,     8,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     0,
    6,     8,     8,     8,     8,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     0,     3,     8,     8,     8,     8,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
    3,     8,     8,     8,     8,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     3,     8,     8,     8,     8,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    5,     8,     8,     8,     8,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     4,     8,     8,     8,     8,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
    7,     9,     9,     9,     9,     7,     7,     7,     7,     7,
    7,     7,     7,     7,     0,     6,     9,     9,     9,     9,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     0,
    4,     9,     9,     9,     9,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     0,     4,     9,     9,     9,     9,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    4,     9,     9,     9,     9,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     5,     9,     9,     9,     9,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    4,     9,     9,     9,     9,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     0,     7,    10,    10,    10,    10,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     0,
    6,    10,    10,    10,    10,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     0,     5,    10,    10,    10,    10,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
    5,    10,    10,    10,    10,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     5,    10,    10,    10,    10,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    5,    10,    10,    10,    10,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     5,    10,    10,    10,    10,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
    5,     9,     9,     9,     9,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     4,     8,     8,     8,     8,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3,     7,     7,     7,     7,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     6,     6,     6,     6,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     5,     5,     5,     5,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     6,     6,     6,     6,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     7,     7,     7,     7,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     3,     7,     7,     7,     7,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    4,     8,     8,     8,     8,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     0,     4,     8,     8,     8,     8,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    4,     8,     8,     8,     8,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     4,     7,     7,     7,     7,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     6,     6,     6,     6,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     5,     5,     5,     5,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1,     4,     4,     4,     4,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     2,     5,     5,     5,     5,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    3,     6,     6,     6,     6,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     3,     6,     6,     6,     6,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
};

/* Vector for locked state flags.  */
static const unsigned char arm_dead_lock[] = {
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     1,     0,     1,     0,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     1,     1,     1,
    1,     1,     1,     0,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
    0,     0,     0,     1,     1,     1};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char arm_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */

/* Vector translating external insn codes to internal ones.*/
static const unsigned char armfp_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
    4,     5,     6,     6,     7,     6,     0,     0,     0,     0,
    8};

/* Comb vector for state transitions.  */
static const unsigned char armfp_transitions[] ATTRIBUTE_UNUSED = {
    0,    58,    30,     8,     5,     4,     2,     1,     0,     1,
    2,     3,     4,     5,     6,     7,     8,     2,     3,     0,
    1,     6,     7,     4,     9,     9,    10,    11,    12,    13,
   14,    15,    16,    10,    11,    12,    13,    14,    15,    16,
   17,    17,    18,    19,    20,    21,    22,    23,    24,    18,
   19,    20,    21,    22,    23,    24,    25,    25,    26,    27,
   28,    29,    30,    31,    32,    26,    27,    28,    29,     5,
   31,    32,    33,    33,    34,    35,    36,    37,    38,    39,
   40,    34,    35,    36,    37,    38,    39,    40,    41,    41,
   42,    43,    44,    45,    46,    47,    48,    42,    43,    44,
   45,    46,    47,    48,    49,    49,    50,    51,    52,    53,
   54,    55,    56,    50,    51,    52,    53,    54,    55,    56,
   57,    57,    58,    59,    60,    61,    62,    63,    64,     8,
   59,    60,    61,    62,    63,    64,    65,    65,    66,    67,
   68,    69,    70,    70,    70,    66,    67,    68,    69,    30,
};

/* Check vector for state transitions.  */
static const unsigned char armfp_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    2,     3,     4,     5,     6,     7,     8,     1,     2,     3,
    4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
   14,    15,    16,     9,    10,    11,    12,    13,    14,    15,
   16,    17,    18,    19,    20,    21,    22,    23,    24,    17,
   18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
   28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    33,    34,    35,    36,    37,    38,    39,    40,    41,
   42,    43,    44,    45,    46,    47,    48,    41,    42,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    49,    50,    51,    52,    53,    54,    55,
   56,    57,    58,    59,    60,    61,    62,    63,    64,    57,
   58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
   68,    69,    70,    70,    70,    65,    66,    67,    68,    69,
};

/* Base vector for state transitions.  */
static const unsigned char armfp_base[] = {
    0,     9,    10,    11,    12,    13,    14,    15,    16,    25,
   26,    27,    28,    29,    30,    31,    32,    41,    42,    43,
   44,    45,    46,    47,    48,    57,    58,    59,    60,    61,
   62,    63,    64,    73,    74,    75,    76,    77,    78,    79,
   80,    89,    90,    91,    92,    93,    94,    95,    96,   105,
  106,   107,   108,   109,   110,   111,   112,   121,   122,   123,
  124,   125,   126,   127,   128,   137,   138,   139,   140,   141,
};


#if AUTOMATON_STATE_ALTS
/* Comb vector for state insn alternatives.  */
static const unsigned char armfp_state_alts[] ATTRIBUTE_UNUSED = {
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     0,     0,     0,     1,     1,     1,     1,     1,
};

/* Check vector for state insn alternatives.  */
static const unsigned char armfp_check_state_alts[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    2,     3,     4,     5,     6,     7,     8,     1,     2,     3,
    4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
   14,    15,    16,     9,    10,    11,    12,    13,    14,    15,
   16,    17,    18,    19,    20,    21,    22,    23,    24,    17,
   18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
   28,    29,    30,    31,    32,    25,    26,    27,    28,    29,
   30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
   40,    33,    34,    35,    36,    37,    38,    39,    40,    41,
   42,    43,    44,    45,    46,    47,    48,    41,    42,    43,
   44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
   54,    55,    56,    49,    50,    51,    52,    53,    54,    55,
   56,    57,    58,    59,    60,    61,    62,    63,    64,    57,
   58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
   68,    69,    70,    70,    70,    65,    66,    67,    68,    69,
};

/* Base vector for state insn alternatives.  */
static const unsigned char armfp_base_state_alts[] = {
    0,     9,    10,    11,    12,    13,    14,    15,    16,    25,
   26,    27,    28,    29,    30,    31,    32,    41,    42,    43,
   44,    45,    46,    47,    48,    57,    58,    59,    60,    61,
   62,    63,    64,    73,    74,    75,    76,    77,    78,    79,
   80,    89,    90,    91,    92,    93,    94,    95,    96,   105,
  106,   107,   108,   109,   110,   111,   112,   121,   122,   123,
  124,   125,   126,   127,   128,   137,   138,   139,   140,   141,
};


#endif /* #if AUTOMATON_STATE_ALTS */

/* Vector of min issue delay of insns.  */
static const unsigned char armfp_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    3,     3,     3,     3,     3,     3,     3,     0,     0,     2,
    2,     2,     2,     2,     2,     2,     0,     0,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     4,     4,     4,
    4,     4,     4,     4,     0,     0,     7,     7,     7,     7,
    7,     7,     7,     0,     0,     6,     6,     6,     6,     6,
    6,     6,     0,     0,     5,     5,     5,     5,     5,     5,
    5,     0,     0,    29,    29,    29,    29,    29,    29,    29,
    0,     0,    28,    28,    28,    28,    28,    28,    28,     0,
    0,    27,    27,    27,    27,    27,    27,    27,     0,     0,
   26,    26,    26,    26,    26,    26,    26,     0,     0,    25,
   25,    25,    25,    25,    25,    25,     0,     0,    24,    24,
   24,    24,    24,    24,    24,     0,     0,    23,    23,    23,
   23,    23,    23,    23,     0,     0,    22,    22,    22,    22,
   22,    22,    22,     0,     0,    21,    21,    21,    21,    21,
   21,    21,     0,     0,    20,    20,    20,    20,    20,    20,
   20,     0,     0,    19,    19,    19,    19,    19,    19,    19,
    0,     0,    18,    18,    18,    18,    18,    18,    18,     0,
    0,    17,    17,    17,    17,    17,    17,    17,     0,     0,
   16,    16,    16,    16,    16,    16,    16,     0,     0,    15,
   15,    15,    15,    15,    15,    15,     0,     0,    14,    14,
   14,    14,    14,    14,    14,     0,     0,    13,    13,    13,
   13,    13,    13,    13,     0,     0,    12,    12,    12,    12,
   12,    12,    12,     0,     0,    11,    11,    11,    11,    11,
   11,    11,     0,     0,    10,    10,    10,    10,    10,    10,
   10,     0,     0,     9,     9,     9,     9,     9,     9,     9,
    0,     0,     8,     8,     8,     8,     8,     8,     8,     0,
    0,    57,    57,    57,    57,    57,    57,    57,     0,     0,
   56,    56,    56,    56,    56,    56,    56,     0,     0,    55,
   55,    55,    55,    55,    55,    55,     0,     0,    54,    54,
   54,    54,    54,    54,    54,     0,     0,    53,    53,    53,
   53,    53,    53,    53,     0,     0,    52,    52,    52,    52,
   52,    52,    52,     0,     0,    51,    51,    51,    51,    51,
   51,    51,     0,     0,    50,    50,    50,    50,    50,    50,
   50,     0,     0,    49,    49,    49,    49,    49,    49,    49,
    0,     0,    48,    48,    48,    48,    48,    48,    48,     0,
    0,    47,    47,    47,    47,    47,    47,    47,     0,     0,
   46,    46,    46,    46,    46,    46,    46,     0,     0,    45,
   45,    45,    45,    45,    45,    45,     0,     0,    44,    44,
   44,    44,    44,    44,    44,     0,     0,    43,    43,    43,
   43,    43,    43,    43,     0,     0,    42,    42,    42,    42,
   42,    42,    42,     0,     0,    41,    41,    41,    41,    41,
   41,    41,     0,     0,    40,    40,    40,    40,    40,    40,
   40,     0,     0,    39,    39,    39,    39,    39,    39,    39,
    0,     0,    38,    38,    38,    38,    38,    38,    38,     0,
    0,    37,    37,    37,    37,    37,    37,    37,     0,     0,
   36,    36,    36,    36,    36,    36,    36,     0,     0,    35,
   35,    35,    35,    35,    35,    35,     0,     0,    34,    34,
   34,    34,    34,    34,    34,     0,     0,    33,    33,    33,
   33,    33,    33,    33,     0,     0,    32,    32,    32,    32,
   32,    32,    32,     0,     0,    31,    31,    31,    31,    31,
   31,    31,     0,     0,    30,    30,    30,    30,    30,    30,
   30,     0,     0,    69,    69,    69,    69,    69,    69,    69,
    0,     0,    68,    68,    68,    68,    68,    68,    68,     0,
    0,    67,    67,    67,    67,    67,    67,    67,     0,     0,
   66,    66,    66,    66,    66,    66,    66,     0,     0,    65,
   65,    65,    65,    65,    65,    65,     0,     0,    64,    64,
   64,    64,    64,    64,    64,     0,     0,    63,    63,    63,
   63,    63,    63,    63,     0,     0,    62,    62,    62,    62,
   62,    62,    62,     0,     0,    61,    61,    61,    61,    61,
   61,    61,     0,     0,    60,    60,    60,    60,    60,    60,
   60,     0,     0,    59,    59,    59,    59,    59,    59,    59,
    0,     0,    58,    58,    58,    58,    58,    58,    58,     0,
};

/* Vector for locked state flags.  */
static const unsigned char armfp_dead_lock[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
};


#if CPU_UNITS_QUERY

/* Vector for reserved units of states.  */
static const unsigned char armfp_reserved_units[] = {
0 /* This is dummy el because the vect is empty */};


#endif /* #if CPU_UNITS_QUERY */


#define DFA__ADVANCE_CYCLE 30

struct DFA_chip
{
  unsigned char arm_automaton_state;
  unsigned char armfp_automaton_state;
};


int max_insn_queue_index = 127;

static int
internal_min_issue_delay (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;
  int res = -1;

  switch (insn_code)
    {
    case 0: /* r_mem_f_wbuf */
    case 1: /* store1_wbuf */
    case 2: /* store2_wbuf */
    case 3: /* store3_wbuf */
    case 4: /* store4_wbuf */
    case 5: /* store2 */
    case 6: /* store3 */
    case 7: /* store4 */
    case 8: /* store1_ldsched */
    case 9: /* load_ldsched_xscale */
    case 10: /* load_ldsched */
    case 11: /* load_or_store */
    case 12: /* mult */
    case 13: /* mult_ldsched_strongarm */
    case 14: /* mult_ldsched */
    case 15: /* multi_cycle */
    case 16: /* single_cycle */
    case 26: /* f_load */
    case 27: /* f_store */
    case 28: /* r_mem_f */
    case 29: /* f_mem_r */

      temp = arm_min_issue_delay [arm_translate [insn_code] + chip->arm_automaton_state * 15];
      res = temp;
      break;

    case 17: /* fdivx */
    case 18: /* fdivd */
    case 19: /* fdivs */
    case 20: /* fmul */
    case 21: /* ffmul */
    case 22: /* farith */
    case 23: /* ffarith */
    case 24: /* r_2_f */
    case 25: /* f_2_r */
    case 30: /* $advance_cycle */

      temp = armfp_min_issue_delay [armfp_translate [insn_code] + chip->armfp_automaton_state * 9];
      res = temp;

      temp = arm_min_issue_delay [arm_translate [insn_code] + chip->arm_automaton_state * 15];
      if (temp > res)
        res = temp;
      break;


    default:
      res = -1;
      break;
    }
  return res;
}

static int
internal_state_transition (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;

  switch (insn_code)
    {
    case 0: /* r_mem_f_wbuf */
    case 1: /* store1_wbuf */
    case 2: /* store2_wbuf */
    case 3: /* store3_wbuf */
    case 4: /* store4_wbuf */
    case 5: /* store2 */
    case 6: /* store3 */
    case 7: /* store4 */
    case 8: /* store1_ldsched */
    case 9: /* load_ldsched_xscale */
    case 10: /* load_ldsched */
    case 11: /* load_or_store */
    case 12: /* mult */
    case 13: /* mult_ldsched_strongarm */
    case 14: /* mult_ldsched */
    case 15: /* multi_cycle */
    case 16: /* single_cycle */
    case 26: /* f_load */
    case 27: /* f_store */
    case 28: /* r_mem_f */
    case 29: /* f_mem_r */
      {

        temp = arm_base [chip->arm_automaton_state] + arm_translate [insn_code];
        if (arm_check [temp] != chip->arm_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->arm_automaton_state = arm_transitions [temp];
        return -1;
      }
    case 17: /* fdivx */
    case 18: /* fdivd */
    case 19: /* fdivs */
    case 20: /* fmul */
    case 21: /* ffmul */
    case 22: /* farith */
    case 23: /* ffarith */
    case 24: /* r_2_f */
    case 25: /* f_2_r */
    case 30: /* $advance_cycle */
      {
        unsigned char _armfp_automaton_state;

        temp = armfp_base [chip->armfp_automaton_state] + armfp_translate [insn_code];
        if (armfp_check [temp] != chip->armfp_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          _armfp_automaton_state = armfp_transitions [temp];

        temp = arm_base [chip->arm_automaton_state] + arm_translate [insn_code];
        if (arm_check [temp] != chip->arm_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->arm_automaton_state = arm_transitions [temp];
        chip->armfp_automaton_state = _armfp_automaton_state;
        return -1;
      }

    default:
      return -1;
    }
}


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

static void
dfa_insn_code_enlarge (int uid)
{
  int i = dfa_insn_codes_length;
  dfa_insn_codes_length = 2 * uid;
  dfa_insn_codes = xrealloc (dfa_insn_codes,
                 dfa_insn_codes_length * sizeof(int));
  for (; i < dfa_insn_codes_length; i++)
    dfa_insn_codes[i] = -1;
}

static inline int
dfa_insn_code (rtx insn)
{
  int uid = INSN_UID (insn);
  int insn_code;

  if (uid >= dfa_insn_codes_length)
    dfa_insn_code_enlarge (uid);

  insn_code = dfa_insn_codes[uid];
  if (insn_code < 0)
    {
      insn_code = internal_dfa_insn_code (insn);
      dfa_insn_codes[uid] = insn_code;
    }
  return insn_code;
}

int
state_transition (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return -1;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_transition (insn_code, state);
}


#if AUTOMATON_STATE_ALTS

static int
internal_state_alts (int insn_code, struct DFA_chip *chip)
{
  int res;

  switch (insn_code)
    {
    case 0: /* r_mem_f_wbuf */
    case 1: /* store1_wbuf */
    case 2: /* store2_wbuf */
    case 3: /* store3_wbuf */
    case 4: /* store4_wbuf */
    case 5: /* store2 */
    case 6: /* store3 */
    case 7: /* store4 */
    case 8: /* store1_ldsched */
    case 9: /* load_ldsched_xscale */
    case 10: /* load_ldsched */
    case 11: /* load_or_store */
    case 12: /* mult */
    case 13: /* mult_ldsched_strongarm */
    case 14: /* mult_ldsched */
    case 15: /* multi_cycle */
    case 16: /* single_cycle */
    case 26: /* f_load */
    case 27: /* f_store */
    case 28: /* r_mem_f */
    case 29: /* f_mem_r */
      {
        int temp;

        temp = arm_base_state_alts [chip->arm_automaton_state] + arm_translate [insn_code];
        if (arm_check_state_alts [temp] != chip->arm_automaton_state)
          return 0;
        else
          res = arm_state_alts [temp];
        break;
      }

    case 17: /* fdivx */
    case 18: /* fdivd */
    case 19: /* fdivs */
    case 20: /* fmul */
    case 21: /* ffmul */
    case 22: /* farith */
    case 23: /* ffarith */
    case 24: /* r_2_f */
    case 25: /* f_2_r */
    case 30: /* $advance_cycle */
      {
        int temp;

        temp = armfp_base_state_alts [chip->armfp_automaton_state] + armfp_translate [insn_code];
        if (armfp_check_state_alts [temp] != chip->armfp_automaton_state)
          return 0;
        else
          res = armfp_state_alts [temp];

        temp = arm_base_state_alts [chip->arm_automaton_state] + arm_translate [insn_code];
        if (arm_check_state_alts [temp] != chip->arm_automaton_state)
          return 0;
        else
          res += arm_state_alts [temp];
        break;
      }


    default:
      res = 0;
      break;
    }
  return res;
}

int
state_alts (state, insn)
	state_t state;
	rtx insn;
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_state_alts (insn_code, state);
}


#endif /* #if AUTOMATON_STATE_ALTS */

int
min_issue_delay (state_t state, rtx insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_min_issue_delay (insn_code, state);
}

static int
internal_state_dead_lock_p (struct DFA_chip *chip)
{
  if (arm_dead_lock [chip->arm_automaton_state])
    return 1/* TRUE */;
  if (armfp_dead_lock [chip->armfp_automaton_state])
    return 1/* TRUE */;
  return 0/* FALSE */;
}

int
state_dead_lock_p (state_t state)
{
  return internal_state_dead_lock_p (state);
}

int
state_size (void)
{
  return sizeof (struct DFA_chip);
}

static inline void
internal_reset (struct DFA_chip *chip)
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state_t state)
{
  internal_reset (state);
}

int
min_insn_conflict_delay (state_t state, rtx insn, rtx insn2)
{
  struct DFA_chip DFA_chip;
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  memcpy (&DFA_chip, state, sizeof (DFA_chip));
  internal_reset (&DFA_chip);
  if (internal_state_transition (insn_code, &DFA_chip) > 0)
    abort ();
  return internal_min_issue_delay (insn2_code, &DFA_chip);
}

static int
internal_insn_latency (int insn_code ATTRIBUTE_UNUSED,
	int insn2_code ATTRIBUTE_UNUSED,
	rtx insn ATTRIBUTE_UNUSED,
	rtx insn2 ATTRIBUTE_UNUSED)
{
  static const unsigned char default_latencies[] =
    {
        5,   5,   7,   9,  11,   3,   4,   5,
        1,   3,   2,   2,  16,   3,   4,  32,
        1,  71,  59,  31,   9,   6,   4,   2,
        5,   1,   3,   4,   6,   7,
    };
  if (insn_code >= DFA__ADVANCE_CYCLE || insn2_code >= DFA__ADVANCE_CYCLE)
    return 0;
  switch (insn_code)
    {
    }
  return default_latencies[insn_code];
}

int
insn_latency (rtx insn, rtx insn2)
{
  int insn_code, insn2_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;


  if (insn2 != 0)
    {
      insn2_code = dfa_insn_code (insn2);
      if (insn2_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn2_code = DFA__ADVANCE_CYCLE;

  return internal_insn_latency (insn_code, insn2_code, insn, insn2);
}

void
print_reservation (FILE *f, rtx insn ATTRIBUTE_UNUSED)
{
  static const char *const reservation_names[] =
    {
      "(core+write_buf*3)",
      "(core+write_buf*3+write_blockage*5)",
      "(core+write_buf*4+write_blockage*7)",
      "(core+write_buf*5+write_blockage*9)",
      "(core+write_buf*6+write_blockage*11)",
      "core*3",
      "core*4",
      "core*5",
      "core",
      "core",
      "core",
      "core*2",
      "core*16",
      "core*2",
      "core*4",
      "core*32",
      "core",
      "(core+fpa*69)",
      "(core+fpa*57)",
      "(core+fpa*29)",
      "(core+fpa*7)",
      "(core+fpa*4)",
      "(core+fpa*2)",
      "(core+fpa*2)",
      "(core+fpa*3)",
      "(core+fpa*2)",
      "(fpa_mem+core*3)",
      "core*4",
      "core*6",
      "core*7",
      "nothing"
    };
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        insn_code = DFA__ADVANCE_CYCLE;
    }
  fputs (reservation_names[insn_code], f);
}


#if CPU_UNITS_QUERY

int
get_cpu_unit_code (cpu_unit_name)
	const char *cpu_unit_name;
{
  struct name_code {const char *name; int code;};
  int cmp, l, m, h;
  static struct name_code name_code_table [] =
    {
    };

  /* The following is binary search: */
  l = 0;
  h = sizeof (name_code_table) / sizeof (struct name_code) - 1;
  while (l <= h)
    {
      m = (l + h) / 2;
      cmp = strcmp (cpu_unit_name, name_code_table [m].name);
      if (cmp < 0)
        h = m - 1;
      else if (cmp > 0)
        l = m + 1;
      else
        return name_code_table [m].code;
    }
  return -1;
}

int
cpu_unit_reservation_p (state, cpu_unit_code)
	state_t state;
	int cpu_unit_code;
{
  if (cpu_unit_code < 0 || cpu_unit_code >= 0)
    abort ();
  if ((arm_reserved_units [((struct DFA_chip *) state)->arm_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  if ((armfp_reserved_units [((struct DFA_chip *) state)->armfp_automaton_state * 0 + cpu_unit_code / 8] >> (cpu_unit_code % 8)) & 1)
    return 1;
  return 0;
}


#endif /* #if CPU_UNITS_QUERY */

void
dfa_clean_insn_cache (void)
{
  int i;

  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_start (void)
{
  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = xmalloc (dfa_insn_codes_length * sizeof (int));
  dfa_clean_insn_cache ();
}

void
dfa_finish (void)
{
  free (dfa_insn_codes);
}

int length_unit_log = 1;
