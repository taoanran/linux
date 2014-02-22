/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = *(ro_loc[i] = &XVECEXP (pat, 0, i));
      break;

    case 1019:  /* iwmmxt_wsadhz+476 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1017:  /* iwmmxt_wsadhz+474 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1018:  /* iwmmxt_wsadhz+475 */
    case 1016:  /* iwmmxt_wsadhz+473 */
    case 1015:  /* iwmmxt_wsadhz+472 */
    case 1014:  /* iwmmxt_wsadhz+471 */
    case 1013:  /* iwmmxt_wsadhz+470 */
    case 1012:  /* iwmmxt_wsadhz+469 */
    case 1011:  /* iwmmxt_wsadhz+468 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1007:  /* iwmmxt_wsadhz+464 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1006:  /* iwmmxt_wsadhz+463 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1005:  /* iwmmxt_wsadhz+462 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1004:  /* iwmmxt_wsadhz+461 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1003:  /* iwmmxt_wsadhz+460 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 939:  /* iwmmxt_wsadhz+396 */
    case 938:  /* iwmmxt_wsadhz+395 */
    case 937:  /* iwmmxt_wsadhz+394 */
    case 936:  /* iwmmxt_wsadhz+393 */
    case 935:  /* iwmmxt_wsadhz+392 */
    case 934:  /* iwmmxt_wsadhz+391 */
    case 933:  /* iwmmxt_wsadhz+390 */
    case 932:  /* iwmmxt_wsadhz+389 */
    case 931:  /* iwmmxt_wsadhz+388 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 929:  /* iwmmxt_wsadhz+386 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 928:  /* iwmmxt_wsadhz+385 */
    case 927:  /* iwmmxt_wsadhz+384 */
    case 926:  /* iwmmxt_wsadhz+383 */
    case 925:  /* iwmmxt_wsadhz+382 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 924:  /* iwmmxt_wsadhz+381 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 923:  /* iwmmxt_wsadhz+380 */
    case 922:  /* iwmmxt_wsadhz+379 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 921:  /* iwmmxt_wsadhz+378 */
    case 920:  /* iwmmxt_wsadhz+377 */
    case 919:  /* iwmmxt_wsadhz+376 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 918:  /* iwmmxt_wsadhz+375 */
    case 917:  /* iwmmxt_wsadhz+374 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 916:  /* iwmmxt_wsadhz+373 */
    case 915:  /* iwmmxt_wsadhz+372 */
    case 914:  /* iwmmxt_wsadhz+371 */
    case 913:  /* iwmmxt_wsadhz+370 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1023:  /* iwmmxt_wsadhz+480 */
    case 1022:  /* iwmmxt_wsadhz+479 */
    case 1021:  /* iwmmxt_wsadhz+478 */
    case 1020:  /* iwmmxt_wsadhz+477 */
    case 1001:  /* iwmmxt_wsadhz+458 */
    case 1000:  /* iwmmxt_wsadhz+457 */
    case 930:  /* iwmmxt_wsadhz+387 */
    case 912:  /* iwmmxt_wsadhz+369 */
    case 910:  /* iwmmxt_wsadhz+367 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 911:  /* iwmmxt_wsadhz+368 */
    case 909:  /* iwmmxt_wsadhz+366 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 908:  /* iwmmxt_wsadhz+365 */
    case 907:  /* iwmmxt_wsadhz+364 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 883:  /* iwmmxt_wsadhz+340 */
    case 860:  /* iwmmxt_wsadhz+317 */
    case 855:  /* iwmmxt_wsadhz+312 */
    case 850:  /* iwmmxt_wsadhz+307 */
    case 845:  /* iwmmxt_wsadhz+302 */
    case 841:  /* iwmmxt_wsadhz+298 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 836:  /* iwmmxt_wsadhz+293 */
    case 834:  /* iwmmxt_wsadhz+291 */
    case 830:  /* iwmmxt_wsadhz+287 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 835:  /* iwmmxt_wsadhz+292 */
    case 833:  /* iwmmxt_wsadhz+290 */
    case 829:  /* iwmmxt_wsadhz+286 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[3] = 1;
      break;

    case 832:  /* iwmmxt_wsadhz+289 */
    case 828:  /* iwmmxt_wsadhz+285 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 831:  /* iwmmxt_wsadhz+288 */
    case 827:  /* iwmmxt_wsadhz+284 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[3] = 1;
      break;

    case 820:  /* iwmmxt_wsadhz+277 */
    case 819:  /* iwmmxt_wsadhz+276 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 826:  /* iwmmxt_wsadhz+283 */
    case 825:  /* iwmmxt_wsadhz+282 */
    case 824:  /* iwmmxt_wsadhz+281 */
    case 823:  /* iwmmxt_wsadhz+280 */
    case 818:  /* iwmmxt_wsadhz+275 */
    case 817:  /* iwmmxt_wsadhz+274 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 822:  /* iwmmxt_wsadhz+279 */
    case 821:  /* iwmmxt_wsadhz+278 */
    case 816:  /* iwmmxt_wsadhz+273 */
    case 815:  /* iwmmxt_wsadhz+272 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 814:  /* iwmmxt_wsadhz+271 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 813:  /* iwmmxt_wsadhz+270 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 812:  /* iwmmxt_wsadhz+269 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 811:  /* iwmmxt_wsadhz+268 */
    case 810:  /* iwmmxt_wsadhz+267 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 809:  /* iwmmxt_wsadhz+266 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 808:  /* iwmmxt_wsadhz+265 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 807:  /* iwmmxt_wsadhz+264 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 806:  /* iwmmxt_wsadhz+263 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 805:  /* iwmmxt_wsadhz+262 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 804:  /* iwmmxt_wsadhz+261 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 803:  /* iwmmxt_wsadhz+260 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 802:  /* iwmmxt_wsadhz+259 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 801:  /* iwmmxt_wsadhz+258 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 800:  /* iwmmxt_wsadhz+257 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 799:  /* iwmmxt_wsadhz+256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 798:  /* iwmmxt_wsadhz+255 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 797:  /* iwmmxt_wsadhz+254 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 796:  /* iwmmxt_wsadhz+253 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 0));
      ro[7] = *(ro_loc[7] = &XEXP (pat, 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 1), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 975:  /* iwmmxt_wsadhz+432 */
    case 974:  /* iwmmxt_wsadhz+431 */
    case 973:  /* iwmmxt_wsadhz+430 */
    case 972:  /* iwmmxt_wsadhz+429 */
    case 971:  /* iwmmxt_wsadhz+428 */
    case 970:  /* iwmmxt_wsadhz+427 */
    case 969:  /* iwmmxt_wsadhz+426 */
    case 968:  /* iwmmxt_wsadhz+425 */
    case 967:  /* iwmmxt_wsadhz+424 */
    case 966:  /* iwmmxt_wsadhz+423 */
    case 965:  /* iwmmxt_wsadhz+422 */
    case 964:  /* iwmmxt_wsadhz+421 */
    case 874:  /* iwmmxt_wsadhz+331 */
    case 873:  /* iwmmxt_wsadhz+330 */
    case 870:  /* iwmmxt_wsadhz+327 */
    case 867:  /* iwmmxt_wsadhz+324 */
    case 864:  /* iwmmxt_wsadhz+321 */
    case 792:  /* iwmmxt_wsadhz+249 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 787:  /* iwmmxt_wsadhz+244 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1010:  /* iwmmxt_wsadhz+467 */
    case 1009:  /* iwmmxt_wsadhz+466 */
    case 1008:  /* iwmmxt_wsadhz+465 */
    case 876:  /* iwmmxt_wsadhz+333 */
    case 875:  /* iwmmxt_wsadhz+332 */
    case 872:  /* iwmmxt_wsadhz+329 */
    case 871:  /* iwmmxt_wsadhz+328 */
    case 869:  /* iwmmxt_wsadhz+326 */
    case 868:  /* iwmmxt_wsadhz+325 */
    case 866:  /* iwmmxt_wsadhz+323 */
    case 865:  /* iwmmxt_wsadhz+322 */
    case 863:  /* iwmmxt_wsadhz+320 */
    case 862:  /* iwmmxt_wsadhz+319 */
    case 837:  /* iwmmxt_wsadhz+294 */
    case 788:  /* iwmmxt_wsadhz+245 */
    case 785:  /* iwmmxt_wsadhz+242 */
    case 784:  /* iwmmxt_wsadhz+241 */
    case 783:  /* iwmmxt_wsadhz+240 */
    case 782:  /* iwmmxt_wsadhz+239 */
    case 781:  /* iwmmxt_wsadhz+238 */
    case 780:  /* iwmmxt_wsadhz+237 */
    case 779:  /* iwmmxt_wsadhz+236 */
    case 778:  /* iwmmxt_wsadhz+235 */
    case 777:  /* iwmmxt_wsadhz+234 */
    case 776:  /* iwmmxt_wsadhz+233 */
    case 775:  /* iwmmxt_wsadhz+232 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 774:  /* iwmmxt_wsadhz+231 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 773:  /* iwmmxt_wsadhz+230 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 772:  /* iwmmxt_wsadhz+229 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 763:  /* iwmmxt_wsadhz+220 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (pat, 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 770:  /* iwmmxt_wsadhz+227 */
    case 769:  /* iwmmxt_wsadhz+226 */
    case 766:  /* iwmmxt_wsadhz+223 */
    case 765:  /* iwmmxt_wsadhz+222 */
    case 762:  /* iwmmxt_wsadhz+219 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 761:  /* iwmmxt_wsadhz+218 */
    case 760:  /* iwmmxt_wsadhz+217 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 859:  /* iwmmxt_wsadhz+316 */
    case 854:  /* iwmmxt_wsadhz+311 */
    case 849:  /* iwmmxt_wsadhz+306 */
    case 844:  /* iwmmxt_wsadhz+301 */
    case 840:  /* iwmmxt_wsadhz+297 */
    case 759:  /* iwmmxt_wsadhz+216 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 1002:  /* iwmmxt_wsadhz+459 */
    case 757:  /* iwmmxt_wsadhz+214 */
    case 756:  /* iwmmxt_wsadhz+213 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 751:  /* iwmmxt_wsadhz+208 */
    case 750:  /* iwmmxt_wsadhz+207 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 963:  /* iwmmxt_wsadhz+420 */
    case 962:  /* iwmmxt_wsadhz+419 */
    case 961:  /* iwmmxt_wsadhz+418 */
    case 960:  /* iwmmxt_wsadhz+417 */
    case 959:  /* iwmmxt_wsadhz+416 */
    case 958:  /* iwmmxt_wsadhz+415 */
    case 957:  /* iwmmxt_wsadhz+414 */
    case 956:  /* iwmmxt_wsadhz+413 */
    case 955:  /* iwmmxt_wsadhz+412 */
    case 954:  /* iwmmxt_wsadhz+411 */
    case 953:  /* iwmmxt_wsadhz+410 */
    case 952:  /* iwmmxt_wsadhz+409 */
    case 861:  /* iwmmxt_wsadhz+318 */
    case 856:  /* iwmmxt_wsadhz+313 */
    case 851:  /* iwmmxt_wsadhz+308 */
    case 846:  /* iwmmxt_wsadhz+303 */
    case 842:  /* iwmmxt_wsadhz+299 */
    case 755:  /* iwmmxt_wsadhz+212 */
    case 754:  /* iwmmxt_wsadhz+211 */
    case 753:  /* iwmmxt_wsadhz+210 */
    case 752:  /* iwmmxt_wsadhz+209 */
    case 748:  /* iwmmxt_wsadhz+205 */
    case 747:  /* iwmmxt_wsadhz+204 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 749:  /* iwmmxt_wsadhz+206 */
    case 746:  /* iwmmxt_wsadhz+203 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 745:  /* iwmmxt_wsadhz+202 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (pat, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 744:  /* iwmmxt_wsadhz+201 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 999:  /* iwmmxt_wsadhz+456 */
    case 998:  /* iwmmxt_wsadhz+455 */
    case 997:  /* iwmmxt_wsadhz+454 */
    case 996:  /* iwmmxt_wsadhz+453 */
    case 995:  /* iwmmxt_wsadhz+452 */
    case 994:  /* iwmmxt_wsadhz+451 */
    case 993:  /* iwmmxt_wsadhz+450 */
    case 992:  /* iwmmxt_wsadhz+449 */
    case 991:  /* iwmmxt_wsadhz+448 */
    case 990:  /* iwmmxt_wsadhz+447 */
    case 989:  /* iwmmxt_wsadhz+446 */
    case 988:  /* iwmmxt_wsadhz+445 */
    case 987:  /* iwmmxt_wsadhz+444 */
    case 986:  /* iwmmxt_wsadhz+443 */
    case 985:  /* iwmmxt_wsadhz+442 */
    case 984:  /* iwmmxt_wsadhz+441 */
    case 983:  /* iwmmxt_wsadhz+440 */
    case 982:  /* iwmmxt_wsadhz+439 */
    case 981:  /* iwmmxt_wsadhz+438 */
    case 980:  /* iwmmxt_wsadhz+437 */
    case 979:  /* iwmmxt_wsadhz+436 */
    case 978:  /* iwmmxt_wsadhz+435 */
    case 977:  /* iwmmxt_wsadhz+434 */
    case 976:  /* iwmmxt_wsadhz+433 */
    case 951:  /* iwmmxt_wsadhz+408 */
    case 950:  /* iwmmxt_wsadhz+407 */
    case 949:  /* iwmmxt_wsadhz+406 */
    case 948:  /* iwmmxt_wsadhz+405 */
    case 947:  /* iwmmxt_wsadhz+404 */
    case 946:  /* iwmmxt_wsadhz+403 */
    case 945:  /* iwmmxt_wsadhz+402 */
    case 944:  /* iwmmxt_wsadhz+401 */
    case 943:  /* iwmmxt_wsadhz+400 */
    case 942:  /* iwmmxt_wsadhz+399 */
    case 941:  /* iwmmxt_wsadhz+398 */
    case 940:  /* iwmmxt_wsadhz+397 */
    case 906:  /* iwmmxt_wsadhz+363 */
    case 905:  /* iwmmxt_wsadhz+362 */
    case 904:  /* iwmmxt_wsadhz+361 */
    case 903:  /* iwmmxt_wsadhz+360 */
    case 902:  /* iwmmxt_wsadhz+359 */
    case 901:  /* iwmmxt_wsadhz+358 */
    case 900:  /* iwmmxt_wsadhz+357 */
    case 899:  /* iwmmxt_wsadhz+356 */
    case 898:  /* iwmmxt_wsadhz+355 */
    case 897:  /* iwmmxt_wsadhz+354 */
    case 896:  /* iwmmxt_wsadhz+353 */
    case 895:  /* iwmmxt_wsadhz+352 */
    case 894:  /* iwmmxt_wsadhz+351 */
    case 893:  /* iwmmxt_wsadhz+350 */
    case 892:  /* iwmmxt_wsadhz+349 */
    case 891:  /* iwmmxt_wsadhz+348 */
    case 890:  /* iwmmxt_wsadhz+347 */
    case 889:  /* iwmmxt_wsadhz+346 */
    case 888:  /* iwmmxt_wsadhz+345 */
    case 882:  /* iwmmxt_wsadhz+339 */
    case 881:  /* iwmmxt_wsadhz+338 */
    case 880:  /* iwmmxt_wsadhz+337 */
    case 858:  /* iwmmxt_wsadhz+315 */
    case 857:  /* iwmmxt_wsadhz+314 */
    case 853:  /* iwmmxt_wsadhz+310 */
    case 852:  /* iwmmxt_wsadhz+309 */
    case 848:  /* iwmmxt_wsadhz+305 */
    case 847:  /* iwmmxt_wsadhz+304 */
    case 843:  /* iwmmxt_wsadhz+300 */
    case 839:  /* iwmmxt_wsadhz+296 */
    case 838:  /* iwmmxt_wsadhz+295 */
    case 771:  /* iwmmxt_wsadhz+228 */
    case 768:  /* iwmmxt_wsadhz+225 */
    case 767:  /* iwmmxt_wsadhz+224 */
    case 764:  /* iwmmxt_wsadhz+221 */
    case 758:  /* iwmmxt_wsadhz+215 */
    case 743:  /* iwmmxt_wsadhz+200 */
    case 742:  /* iwmmxt_wsadhz+199 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 539:  /* iwmmxt_tmcr */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 537:  /* iwmmxt_walign */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 527:  /* iwmmxt_tmiatt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 526:  /* iwmmxt_tmiabt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0));
      break;

    case 525:  /* iwmmxt_tmiatb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 524:  /* iwmmxt_tmiabb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      break;

    case 523:  /* iwmmxt_tmiaph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 459:  /* gtv2si3 */
    case 458:  /* gtv4hi3 */
    case 457:  /* gtv8qi3 */
    case 456:  /* gtuv2si3 */
    case 455:  /* gtuv4hi3 */
    case 454:  /* gtuv8qi3 */
    case 453:  /* eqv2si3 */
    case 452:  /* eqv4hi3 */
    case 451:  /* eqv8qi3 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 449:  /* iwmmxt_textrmw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 448:  /* iwmmxt_textrmsh */
    case 447:  /* iwmmxt_textrmuh */
    case 446:  /* iwmmxt_textrmsb */
    case 445:  /* iwmmxt_textrmub */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 444:  /* iwmmxt_tinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 443:  /* iwmmxt_tinsrh */
    case 442:  /* iwmmxt_tinsrb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 438:  /* iwmmxt_uavgrndv4hi3 */
    case 437:  /* iwmmxt_uavgrndv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 431:  /* iwmmxt_wmacu */
    case 429:  /* iwmmxt_wmacs */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 428:  /* umulv4hi3_highpart */
    case 427:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 887:  /* iwmmxt_wsadhz+344 */
    case 886:  /* iwmmxt_wsadhz+343 */
    case 885:  /* iwmmxt_wsadhz+342 */
    case 884:  /* iwmmxt_wsadhz+341 */
    case 879:  /* iwmmxt_wsadhz+336 */
    case 878:  /* iwmmxt_wsadhz+335 */
    case 877:  /* iwmmxt_wsadhz+334 */
    case 795:  /* iwmmxt_wsadhz+252 */
    case 794:  /* iwmmxt_wsadhz+251 */
    case 793:  /* iwmmxt_wsadhz+250 */
    case 791:  /* iwmmxt_wsadhz+248 */
    case 790:  /* iwmmxt_wsadhz+247 */
    case 789:  /* iwmmxt_wsadhz+246 */
    case 786:  /* iwmmxt_wsadhz+243 */
    case 403:  /* *cond_iwmmxt_movsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 0), 0));
      break;

    case 391:  /* cirrus_truncdfsi2 */
    case 390:  /* cirrus_truncsfsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 364:  /* *cmp_esfdf_df_trap_fpa */
    case 360:  /* *cmpesfdf_df_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 400:  /* iwmmxt_nanddi3 */
    case 338:  /* *moddf_df_esfdf_fpa */
    case 333:  /* *divdf_df_esfdf_fpa */
    case 328:  /* *muldf_df_esfdf_fpa */
    case 323:  /* *subdf_df_esfdf_fpa */
    case 318:  /* *adddf_df_esfdf_fpa */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 313:  /* prefetch */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 2));
      break;

    case 311:  /* *thumb_tablejump */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 314:  /* prologue_use */
    case 310:  /* consttable_8 */
    case 309:  /* consttable_4 */
    case 308:  /* consttable_2 */
    case 307:  /* consttable_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 302:  /* stack_tie */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 303:  /* *push_fp_multi */
    case 301:  /* *push_multi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 300:  /* *not_signextract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 299:  /* *sign_extract_onebit */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 295:  /* *loadhi_shiftpredec */
    case 293:  /* *loadsi_shiftpredec */
    case 289:  /* *loadqi_shiftpredec */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 294:  /* *loadhi_shiftpreinc */
    case 292:  /* *loadsi_shiftpreinc */
    case 288:  /* *loadqi_shiftpreinc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 1;
      break;

    case 291:  /* *strsi_shiftpredec */
    case 287:  /* *strqi_shiftpredec */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 290:  /* *strsi_shiftpreinc */
    case 286:  /* *strqi_shiftpreinc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 1;
      break;

    case 279:  /* *loadqisi_predec */
    case 278:  /* *loadqisi_preinc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 285:  /* *loadhi_predec */
    case 284:  /* *loadhi_preinc */
    case 283:  /* *loadsi_predec */
    case 282:  /* *loadsi_preinc */
    case 277:  /* *loadqi_predec */
    case 276:  /* *loadqi_preinc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 281:  /* *strsi_predec */
    case 280:  /* *strsi_preinc */
    case 275:  /* *strqi_predec */
    case 274:  /* *strqi_preinc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 273:  /* *arith_adjacentmem */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 268:  /* *if_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 267:  /* *ifcompare_arith_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 266:  /* *if_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 265:  /* *ifcompare_not_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 263:  /* *ifcompare_shift_shift */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 262:  /* *if_move_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 260:  /* *if_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 259:  /* *ifcompare_shift_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 270:  /* *if_neg_move */
    case 258:  /* *if_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 269:  /* *ifcompare_neg_move */
    case 257:  /* *ifcompare_not_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 298:  /* *cond_move_not */
    case 272:  /* *if_move_neg */
    case 256:  /* *if_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 271:  /* *ifcompare_move_neg */
    case 255:  /* *ifcompare_move_not */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 254:  /* *if_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 261:  /* *ifcompare_move_shift */
    case 253:  /* *ifcompare_move_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 252:  /* *if_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 251:  /* *ifcompare_arith_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 264:  /* *if_shift_shift */
    case 250:  /* *if_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 249:  /* *ifcompare_arith_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[9] = *(ro_loc[9] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 248:  /* *if_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 247:  /* *ifcompare_move_plus */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 246:  /* *if_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 245:  /* *ifcompare_plus_move */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 244:  /* movcond */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 243:  /* *negscc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 241:  /* *and_scc_scc_cmp */
    case 239:  /* *ior_scc_scc_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 6;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[4] = 5;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[5] = 4;
      break;

    case 242:  /* *and_scc_scc_nodom */
    case 240:  /* *and_scc_scc */
    case 238:  /* *ior_scc_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 237:  /* *cmp_ior */
    case 236:  /* *cmp_and */
    case 235:  /* *cmp_ite1 */
    case 234:  /* *cmp_ite0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (pat, 0));
      break;

    case 233:  /* *cond_sub */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 232:  /* *cond_arith */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 231:  /* *cond_move */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 230:  /* *compare_scc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 228:  /* *and_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 227:  /* *sub_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 226:  /* *sub_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 225:  /* *sub_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 224:  /* *arith_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 223:  /* *arith_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[3] = 5;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[4] = 4;
      break;

    case 222:  /* *arith_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 220:  /* *thumb_indirect_jump */
    case 219:  /* *load_indirect_jump */
    case 218:  /* *arm_indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 217:  /* casesi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 436:  /* *iwmmxt_clrv2si */
    case 435:  /* *iwmmxt_clrv4hi */
    case 434:  /* *iwmmxt_clrv8qi */
    case 433:  /* iwmmxt_clrdi */
    case 215:  /* *check_arch2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 214:  /* *cond_return_inverted */
    case 213:  /* *cond_return */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 306:  /* consttable_end */
    case 305:  /* align_8 */
    case 304:  /* align_4 */
    case 297:  /* *epilogue_insns */
    case 296:  /* sibcall_epilogue */
    case 221:  /* nop */
    case 216:  /* blockage */
    case 212:  /* return */
      break;

    case 211:  /* *sibcall_value_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 210:  /* *sibcall_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 209:  /* *call_value_insn */
    case 207:  /* *call_value_symbol */
    case 205:  /* *call_value_mem */
    case 204:  /* *call_value_reg */
    case 203:  /* *call_value_indirect */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 208:  /* *call_insn */
    case 206:  /* *call_symbol */
    case 202:  /* *call_indirect */
    case 201:  /* *call_mem */
    case 200:  /* *call_reg */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 367:  /* *movdfcc_fpa */
    case 366:  /* *movsfcc_fpa */
    case 197:  /* *movsfcc_soft_insn */
    case 196:  /* *movsicc_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 195:  /* *mov_notscc */
    case 194:  /* *mov_negscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 193:  /* *mov_scc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 192:  /* *arm_cond_branch_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 191:  /* *arm_bltgt_reversed */
    case 190:  /* *arm_buneq_reversed */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 189:  /* *arm_cond_branch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 188:  /* *arm_bltgt */
    case 187:  /* *arm_buneq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 186:  /* *deleted_compare */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XEXP (pat, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 182:  /* *cmpsi_neg_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 181:  /* *cmpsi_shiftsi_swp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 180:  /* *cmpsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 363:  /* *cmpdf_trap_fpa */
    case 362:  /* *cmpsf_trap_fpa */
    case 359:  /* *cmpdf_fpa */
    case 358:  /* *cmpsf_fpa */
    case 185:  /* *cirrus_cmpdi */
    case 184:  /* *cirrus_cmpdf */
    case 183:  /* *cirrus_cmpsf */
    case 179:  /* *arm_cmpsi_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 178:  /* *subsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 176:  /* *addsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 177:  /* *subsi3_cbranch */
    case 175:  /* *addsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 174:  /* *cbranchne_decr1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 173:  /* *bicsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 172:  /* *bicsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 170:  /* *xorsi3_cbranch_scratch */
    case 168:  /* *orrsi3_cbranch_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 171:  /* *xorsi3_cbranch */
    case 169:  /* *orrsi3_cbranch */
    case 167:  /* *andsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 166:  /* *tstsi3_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 165:  /* *tbit_cbranch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 164:  /* *negated_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 163:  /* *movsi_cbranchsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 162:  /* cbranchsi4_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 161:  /* *cbranchsi4_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 160:  /* movmem8b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      break;

    case 159:  /* movmem12b */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 158:  /* *stmsi2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 157:  /* *stmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 156:  /* *stmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 155:  /* *stmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 154:  /* *stmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 153:  /* *stmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 152:  /* *ldmsi2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 151:  /* *ldmsi3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 150:  /* *ldmsi4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 149:  /* *ldmsi_postinc2 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 148:  /* *ldmsi_postinc3 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 147:  /* *ldmsi_postinc4 */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[3] = 2;
      break;

    case 140:  /* thumb_movhi_clobber */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 495:  /* iwmmxt_wunpckelsw */
    case 494:  /* iwmmxt_wunpckelsh */
    case 493:  /* iwmmxt_wunpckelsb */
    case 492:  /* iwmmxt_wunpckeluw */
    case 491:  /* iwmmxt_wunpckeluh */
    case 490:  /* iwmmxt_wunpckelub */
    case 489:  /* iwmmxt_wunpckehsw */
    case 488:  /* iwmmxt_wunpckehsh */
    case 487:  /* iwmmxt_wunpckehsb */
    case 486:  /* iwmmxt_wunpckehuw */
    case 485:  /* iwmmxt_wunpckehuh */
    case 484:  /* iwmmxt_wunpckehub */
    case 352:  /* *fix_truncdfsi2_fpa */
    case 351:  /* *fix_truncsfsi2_fpa */
    case 348:  /* *sqrtdf_esfdf_fpa */
    case 345:  /* *absdf_esfdf_fpa */
    case 342:  /* *negdf_esfdf_fpa */
    case 138:  /* *loadhi_si_bigend */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 132:  /* *movsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 131:  /* pic_add_dot_plus_eight */
    case 130:  /* pic_add_dot_plus_four */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 543:  /* iwmmxt_wsadhz */
    case 542:  /* iwmmxt_wsadbz */
    case 541:  /* iwmmxt_wsadh */
    case 540:  /* iwmmxt_wsadb */
    case 521:  /* iwmmxt_wmaddu */
    case 520:  /* iwmmxt_wmadds */
    case 450:  /* iwmmxt_wshufh */
    case 432:  /* iwmmxt_wmacuz */
    case 430:  /* iwmmxt_wmacsz */
    case 129:  /* *pic_load_addr_based_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 538:  /* iwmmxt_tmrc */
    case 536:  /* iwmmxt_waccw */
    case 535:  /* iwmmxt_wacch */
    case 534:  /* iwmmxt_waccb */
    case 533:  /* iwmmxt_tmovmskw */
    case 532:  /* iwmmxt_tmovmskh */
    case 531:  /* iwmmxt_tmovmskb */
    case 128:  /* pic_load_addr_thumb */
    case 127:  /* pic_load_addr_arm */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 407:  /* movv2si_internal_2 */
    case 406:  /* movv2si_internal */
    case 405:  /* movv4hi_internal */
    case 404:  /* movv8qi_internal */
    case 402:  /* *iwmmxt_movsi_insn */
    case 401:  /* *iwmmxt_arm_movdi */
    case 396:  /* *cirrus_movdf_hard_insn */
    case 395:  /* *cirrus_movsf_hard_insn */
    case 394:  /* *cirrus_arm_movdi */
    case 357:  /* *movxf_fpa */
    case 356:  /* *movdf_fpa */
    case 355:  /* *movsf_fpa */
    case 146:  /* *thumb_movdf_insn */
    case 145:  /* *movdf_soft_insn */
    case 144:  /* *thumb_movsf_insn */
    case 143:  /* *arm_movsf_soft_insn */
    case 142:  /* *thumb_movqi_insn */
    case 141:  /* *arm_movqi_insn */
    case 139:  /* *movhi_bytes */
    case 137:  /* *movhi_insn_bigend */
    case 136:  /* *movhi_insn_littleend */
    case 135:  /* *movhi_insn_arch4 */
    case 133:  /* *thumb_movhi_insn */
    case 126:  /* *thumb_movsi_insn */
    case 125:  /* *arm_movsi_insn */
    case 124:  /* *thumb_movdi_insn */
    case 123:  /* *arm_movdi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 387:  /* cirrus_floatsidf2 */
    case 386:  /* cirrus_floatsisf2 */
    case 118:  /* *thumb_extendhisi2_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 199:  /* *thumb_jump */
    case 198:  /* *arm_jump */
    case 117:  /* *compareqi_eq0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 109:  /* *notsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 108:  /* *notsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 104:  /* *neg_abssi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 530:  /* iwmmxt_tbcstsi */
    case 529:  /* iwmmxt_tbcsthi */
    case 528:  /* iwmmxt_tbcstqi */
    case 393:  /* *cirrus_extendsfdf2 */
    case 392:  /* *cirrus_truncdfsf2 */
    case 389:  /* floatdidf2 */
    case 388:  /* floatdisf2 */
    case 385:  /* *cirrus_absdf2 */
    case 384:  /* *cirrus_abssf2 */
    case 383:  /* *cirrus_negdf2 */
    case 382:  /* *cirrus_negsf2 */
    case 380:  /* *cirrus_absdi2 */
    case 354:  /* *extendsfdf2_fpa */
    case 353:  /* *truncdfsf2_fpa */
    case 350:  /* *floatsidf2_fpa */
    case 349:  /* *floatsisf2_fpa */
    case 347:  /* *sqrtdf2_fpa */
    case 346:  /* *sqrtsf2_fpa */
    case 344:  /* *absdf2_fpa */
    case 343:  /* *abssf2_fpa */
    case 341:  /* *negdf2_fpa */
    case 340:  /* *negsf2_fpa */
    case 312:  /* clzsi2 */
    case 134:  /* rotated_loadsi */
    case 122:  /* *thumb_extendqisi2_insn */
    case 121:  /* *arm_extendqisi_insn */
    case 120:  /* *extendqihi_insn */
    case 119:  /* *arm_extendhisi_insn */
    case 116:  /* *arm_zero_extendqisi2 */
    case 115:  /* *thumb_zero_extendqisi2 */
    case 114:  /* *arm_zero_extendhisi2 */
    case 113:  /* *thumb_zero_extendhisi2 */
    case 112:  /* extendsidi2 */
    case 111:  /* zero_extendqidi2 */
    case 110:  /* zero_extendsidi2 */
    case 107:  /* *thumb_one_cmplsi2 */
    case 106:  /* *arm_one_cmplsi2 */
    case 105:  /* one_cmpldi2 */
    case 102:  /* *thumb_negsi2 */
    case 101:  /* *arm_negsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 381:  /* *cirrus_negdi2 */
    case 103:  /* *arm_abssi2 */
    case 100:  /* *thumb_negdi2 */
    case 99:  /* *arm_negdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 98:  /* *not_shiftsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 97:  /* *notsi_shiftsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 96:  /* *notsi_shiftsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 95:  /* *shiftsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 94:  /* *shiftsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 93:  /* *arm_shiftsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 88:  /* *minmax_arithsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 87:  /* *store_minmaxsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 82:  /* *andsi_iorsi3_notsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 74:  /* *iorsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 67:  /* *andsi_notsi_si_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 66:  /* *andsi_notsi_si_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 65:  /* andsi_not_shiftsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 62:  /* *anddi_notsesidi_di */
    case 61:  /* *anddi_notzesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 337:  /* *moddf_esfdf_df_fpa */
    case 332:  /* *divdf_esfdf_df_fpa */
    case 327:  /* *muldf_esfdf_df_fpa */
    case 322:  /* *subdf_esfdf_df_fpa */
    case 317:  /* *adddf_esfdf_df_fpa */
    case 64:  /* bicsi3 */
    case 60:  /* *anddi_notdi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 59:  /* *ne_zeroextractsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2));
      break;

    case 58:  /* *zeroextractsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 57:  /* *andsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 77:  /* *xordi_sesidi_di */
    case 76:  /* *xordi_zesidi_di */
    case 70:  /* *iordi_sesidi_di */
    case 69:  /* *iordi_zesidi_di */
    case 63:  /* andsi_notsi_si */
    case 53:  /* *anddi_sesdi_di */
    case 52:  /* *anddi_zesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 522:  /* iwmmxt_tmia */
    case 50:  /* *mulhidi3adddi */
    case 49:  /* *mulhisi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0));
      break;

    case 44:  /* umulsi3_highpart */
    case 43:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 483:  /* iwmmxt_wunpckilw */
    case 482:  /* iwmmxt_wunpckilh */
    case 481:  /* iwmmxt_wunpckilb */
    case 480:  /* iwmmxt_wunpckihw */
    case 479:  /* iwmmxt_wunpckihh */
    case 478:  /* iwmmxt_wunpckihb */
    case 477:  /* iwmmxt_wpackdus */
    case 476:  /* iwmmxt_wpackwus */
    case 475:  /* iwmmxt_wpackhus */
    case 474:  /* iwmmxt_wpackdss */
    case 473:  /* iwmmxt_wpackwss */
    case 472:  /* iwmmxt_wpackhss */
    case 339:  /* *moddf_esfdf_esfdf_fpa */
    case 334:  /* *divdf_esfdf_esfdf_fpa */
    case 329:  /* *muldf_esfdf_esfdf_fpa */
    case 324:  /* *subdf_esfdf_esfdf_fpa */
    case 319:  /* *adddf_esfdf_esfdf_fpa */
    case 48:  /* *mulhisi3tt */
    case 47:  /* *mulhisi3bt */
    case 46:  /* *mulhisi3tb */
    case 45:  /* mulhisi3 */
    case 41:  /* umulsidi3 */
    case 40:  /* mulsidi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 42:  /* *umulsidi3adddi */
    case 39:  /* *mulsidi3adddi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 38:  /* *mulsi3addsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 37:  /* *mulsi3addsi_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 3;
      break;

    case 36:  /* *mulsi3addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 35:  /* *mulsi_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 34:  /* *mulsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 374:  /* muldi3 */
    case 32:  /* *arm_mulsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 31:  /* decscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 27:  /* *subdi_zesidi_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 24:  /* *subdi_di_sesidi */
    case 23:  /* *subdi_di_zesidi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 229:  /* *ior_scc */
    case 20:  /* incscc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 19:  /* *addsi3_carryin_alt3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 18:  /* *addsi3_carryin_alt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 441:  /* iwmmxt_psadbw */
    case 440:  /* iwmmxt_uavgv4hi3 */
    case 439:  /* iwmmxt_uavgv8qi3 */
    case 17:  /* *addsi3_carryin_alt1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 16:  /* *addsi3_carryin_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 15:  /* *addsi3_carryin */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 14:  /* *compare_addsi2_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 13:  /* *compare_addsi2_op0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 12:  /* *addsi3_compare_op2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 11:  /* *addsi3_compare_op1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 10:  /* *cmpsi2_addneg */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 365:  /* *cmp_df_esfdf_trap_fpa */
    case 361:  /* *cmpdf_esfdf_fpa */
    case 9:  /* *addsi3_compare0_scratch_for_combiner */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 8:  /* *addsi3_compare0_for_combiner */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 81:  /* *xorsi3_compare0_scratch */
    case 7:  /* *addsi3_compare0_scratch */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 80:  /* *xorsi3_compare0 */
    case 73:  /* *iorsi3_compare0 */
    case 56:  /* *andsi3_compare0 */
    case 30:  /* *subsi3_compare0 */
    case 6:  /* *addsi3_compare0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 519:  /* ashldi3_di */
    case 518:  /* ashlv2si3_di */
    case 517:  /* ashlv4hi3_di */
    case 516:  /* lshrdi3_di */
    case 515:  /* lshrv2si3_di */
    case 514:  /* lshrv4hi3_di */
    case 513:  /* ashrdi3_di */
    case 512:  /* ashrv2si3_di */
    case 511:  /* ashrv4hi3_di */
    case 510:  /* rordi3_di */
    case 509:  /* rorv2si3_di */
    case 508:  /* rorv4hi3_di */
    case 507:  /* ashldi3_iwmmxt */
    case 506:  /* ashlv2si3 */
    case 505:  /* ashlv4hi3 */
    case 504:  /* lshrdi3 */
    case 503:  /* lshrv2si3 */
    case 502:  /* lshrv4hi3 */
    case 501:  /* ashrdi3 */
    case 500:  /* ashrv2si3 */
    case 499:  /* ashrv4hi3 */
    case 498:  /* rordi3 */
    case 497:  /* rorv2si3 */
    case 496:  /* rorv4hi3 */
    case 471:  /* uminv2si3 */
    case 470:  /* sminv2si3 */
    case 469:  /* uminv4hi3 */
    case 468:  /* sminv4hi3 */
    case 467:  /* uminv8qi3 */
    case 466:  /* sminv8qi3 */
    case 465:  /* umaxv2si3 */
    case 464:  /* smaxv2si3 */
    case 463:  /* umaxv4hi3 */
    case 462:  /* smaxv4hi3 */
    case 461:  /* umaxv8qi3 */
    case 460:  /* smaxv8qi3 */
    case 426:  /* mulv4hi3 */
    case 425:  /* ussubv2si3 */
    case 424:  /* ussubv4hi3 */
    case 423:  /* ussubv8qi3 */
    case 422:  /* sssubv2si3 */
    case 421:  /* sssubv4hi3 */
    case 420:  /* sssubv8qi3 */
    case 419:  /* subv2si3 */
    case 418:  /* subv4hi3 */
    case 417:  /* subv8qi3 */
    case 416:  /* usaddv2si3 */
    case 415:  /* usaddv4hi3 */
    case 414:  /* usaddv8qi3 */
    case 413:  /* ssaddv2si3 */
    case 412:  /* ssaddv4hi3 */
    case 411:  /* ssaddv8qi3 */
    case 410:  /* addv2si3 */
    case 409:  /* addv4hi3 */
    case 408:  /* addv8qi3 */
    case 399:  /* iwmmxt_anddi3 */
    case 398:  /* iwmmxt_xordi3 */
    case 397:  /* iwmmxt_iordi3 */
    case 379:  /* cirrus_ashiftrtdi_const */
    case 378:  /* cirrus_ashldi_const */
    case 377:  /* ashldi3_cirrus */
    case 376:  /* *cirrus_muldf3 */
    case 375:  /* *cirrus_mulsf3 */
    case 373:  /* *cirrus_subdf3 */
    case 372:  /* *cirrus_subsf3 */
    case 371:  /* cirrus_subdi3 */
    case 370:  /* *cirrus_adddf3 */
    case 369:  /* *cirrus_addsf3 */
    case 368:  /* cirrus_adddi3 */
    case 336:  /* *moddf3_fpa */
    case 335:  /* *modsf3_fpa */
    case 331:  /* *divdf3_fpa */
    case 330:  /* *divsf3_fpa */
    case 326:  /* *muldf3_fpa */
    case 325:  /* *mulsf3_fpa */
    case 321:  /* *subdf3_fpa */
    case 320:  /* *subsf3_fpa */
    case 316:  /* *adddf3_fpa */
    case 315:  /* *addsf3_fpa */
    case 92:  /* *thumb_rotrsi3 */
    case 91:  /* *thumb_lshrsi3 */
    case 90:  /* *thumb_ashrsi3 */
    case 89:  /* *thumb_ashlsi3 */
    case 79:  /* *thumb_xorsi3 */
    case 78:  /* *arm_xorsi3 */
    case 75:  /* xordi3 */
    case 72:  /* *thumb_iorsi3 */
    case 71:  /* *arm_iorsi3 */
    case 68:  /* iordi3 */
    case 55:  /* *thumb_andsi3_insn */
    case 54:  /* *arm_andsi3_insn */
    case 51:  /* anddi3 */
    case 33:  /* *thumb_mulsi3 */
    case 29:  /* *arm_subsi3_insn */
    case 28:  /* *thumb_subsi3_insn */
    case 5:  /* *thumb_addsi3 */
    case 4:  /* *arm_addsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 26:  /* *subdi_sesidi_di */
    case 25:  /* *subdi_zesidi_di */
    case 3:  /* *adddi_zesidi_di */
    case 2:  /* *adddi_sesidi_di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 86:  /* uminsi3 */
    case 85:  /* umaxsi3 */
    case 84:  /* sminsi3 */
    case 83:  /* smaxsi3 */
    case 22:  /* *thumb_subdi3 */
    case 21:  /* *arm_subdi3 */
    case 1:  /* *arm_adddi3 */
    case 0:  /* *thumb_adddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    default:
      abort ();
    }
}
