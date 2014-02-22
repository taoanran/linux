/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:837 */
rtx
gen_incscc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx (GET_CODE (operand2), SImode,
		operand3,
		const0_rtx),
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1075 */
rtx
gen_decscc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx (GET_CODE (operand2), SImode,
		operand3,
		const0_rtx)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1248 */
rtx
gen_mulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1259 */
rtx
gen_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1285 */
rtx
gen_smulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32L)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1300 */
rtx
gen_umulsi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32L)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1315 */
rtx
gen_mulhisi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1531 */
rtx
gen_anddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2032 */
rtx
gen_andsi_notsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand2),
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2041 */
rtx
gen_bicsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2050 */
rtx
gen_andsi_not_shiftsi_si (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx (GET_CODE (operand4), SImode,
		operand2,
		operand3)),
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2088 */
rtx
gen_iordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2210 */
rtx
gen_xordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2430 */
rtx
gen_smaxsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2444 */
rtx
gen_sminsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2458 */
rtx
gen_umaxsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2472 */
rtx
gen_uminsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2919 */
rtx
gen_one_cmpldi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3050 */
rtx
gen_zero_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3064 */
rtx
gen_zero_extendqidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3078 */
rtx
gen_extendsidi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4048 */
rtx
gen_pic_load_addr_arm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	3));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4058 */
rtx
gen_pic_load_addr_thumb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	3));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4100 */
rtx
gen_pic_add_dot_plus_four (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_CONST (VOIDmode,
	gen_rtx_PLUS (SImode,
	pc_rtx,
	GEN_INT (4L))))),
	4)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4115 */
rtx
gen_pic_add_dot_plus_eight (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_CONST (VOIDmode,
	gen_rtx_PLUS (SImode,
	pc_rtx,
	GEN_INT (8L))))),
	4)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4521 */
rtx
gen_rotated_loadsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	GEN_INT (16L)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4675 */
rtx
gen_thumb_movhi_clobber (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5315 */
rtx
gen_movmem12b (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (8,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	gen_rtx_MEM (SImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (4L))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (4L)))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (8L))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (8L)))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (12L))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (12L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5337 */
rtx
gen_movmem8b (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	gen_rtx_MEM (SImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (4L))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (4L)))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (8L))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (8L))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5429 */
rtx
gen_cbranchsi4_scratch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand4), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7395 */
rtx
gen_return (void)
{
  return gen_rtx_RETURN (VOIDmode);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7514 */
rtx
gen_blockage (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7552 */
rtx
gen_casesi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	operand0,
	operand1),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_MULT (SImode,
	operand0,
	GEN_INT (4L)),
	gen_rtx_LABEL_REF (VOIDmode,
	operand2))),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand2))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7612 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8228 */
rtx
gen_movcond (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand5), VOIDmode,
		operand3,
		operand4),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9553 */
rtx
gen_sibcall_epilogue (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		gen_rtx_REG (SImode,
	14)),
	6),
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_RETURN (VOIDmode)),
	1)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9820 */
rtx
gen_stack_tie (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)),
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (2,
		operand0,
		operand1),
	5));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9850 */
rtx
gen_align_4 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	2);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9859 */
rtx
gen_align_8 (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	10);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9868 */
rtx
gen_consttable_end (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	3);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9877 */
rtx
gen_consttable_1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	4);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9889 */
rtx
gen_consttable_2 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	5);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9901 */
rtx
gen_consttable_4 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	6);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9925 */
rtx
gen_consttable_8 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	7);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9978 */
rtx
gen_clzsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CLZ (SImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:10027 */
rtx
gen_prefetch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:10044 */
rtx
gen_prologue_use (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand0),
	6);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:33 */
rtx
gen_cirrus_adddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:73 */
rtx
gen_cirrus_subdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:123 */
rtx
gen_muldi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand2,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:205 */
rtx
gen_ashldi3_cirrus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:214 */
rtx
gen_cirrus_ashldi_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:223 */
rtx
gen_cirrus_ashiftrtdi_const (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:301 */
rtx
gen_cirrus_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:311 */
rtx
gen_cirrus_floatsidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:321 */
rtx
gen_floatdisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:328 */
rtx
gen_floatdidf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:335 */
rtx
gen_cirrus_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (SFmode,
	operand1))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/cirrus.md:345 */
rtx
gen_cirrus_truncdfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (DFmode,
	operand1))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:22 */
rtx
gen_iwmmxt_iordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:34 */
rtx
gen_iwmmxt_xordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:46 */
rtx
gen_iwmmxt_anddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:58 */
rtx
gen_iwmmxt_nanddi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	gen_rtx_NOT (DImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:156 */
rtx
gen_movv8qi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:176 */
rtx
gen_movv4hi_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:196 */
rtx
gen_movv2si_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:221 */
rtx
gen_movv2si_internal_2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:234 */
rtx
gen_addv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:242 */
rtx
gen_addv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:250 */
rtx
gen_addv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:258 */
rtx
gen_ssaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:266 */
rtx
gen_ssaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:274 */
rtx
gen_ssaddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:282 */
rtx
gen_usaddv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:290 */
rtx
gen_usaddv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:298 */
rtx
gen_usaddv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:306 */
rtx
gen_subv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:314 */
rtx
gen_subv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:322 */
rtx
gen_subv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:330 */
rtx
gen_sssubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:338 */
rtx
gen_sssubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:346 */
rtx
gen_sssubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:354 */
rtx
gen_ussubv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:362 */
rtx
gen_ussubv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:370 */
rtx
gen_ussubv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:378 */
rtx
gen_mulv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:386 */
rtx
gen_smulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16L))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:397 */
rtx
gen_umulv4hi3_highpart (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16L))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:408 */
rtx
gen_iwmmxt_wmacs (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	13));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:417 */
rtx
gen_iwmmxt_wmacsz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	15));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:425 */
rtx
gen_iwmmxt_wmacu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	14));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:434 */
rtx
gen_iwmmxt_wmacuz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (2,
		operand1,
		operand2),
	16));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:444 */
rtx
gen_iwmmxt_clrdi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	17));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:480 */
rtx
gen_iwmmxt_uavgrndv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8QImode,
	gen_rtx_PLUS (V8QImode,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:499 */
rtx
gen_iwmmxt_uavgrndv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:515 */
rtx
gen_iwmmxt_uavgv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8QImode,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:525 */
rtx
gen_iwmmxt_uavgv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:535 */
rtx
gen_iwmmxt_psadbw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V8QImode,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:546 */
rtx
gen_iwmmxt_tinsrb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V8QImode,
	gen_rtx_TRUNCATE (QImode,
	operand2)),
	operand3));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:556 */
rtx
gen_iwmmxt_tinsrh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	operand3));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:566 */
rtx
gen_iwmmxt_tinsrw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	operand2),
	operand3));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:576 */
rtx
gen_iwmmxt_textrmub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:585 */
rtx
gen_iwmmxt_textrmsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:594 */
rtx
gen_iwmmxt_textrmuh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:603 */
rtx
gen_iwmmxt_textrmsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:614 */
rtx
gen_iwmmxt_textrmw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:622 */
rtx
gen_iwmmxt_wshufh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	8));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:646 */
rtx
gen_eqv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	11);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:655 */
rtx
gen_eqv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	11);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:664 */
rtx
gen_eqv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (V2SImode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	11);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:673 */
rtx
gen_gtuv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	12);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:682 */
rtx
gen_gtuv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	12);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:691 */
rtx
gen_gtuv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	12);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:700 */
rtx
gen_gtv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:709 */
rtx
gen_gtv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:718 */
rtx
gen_gtv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2),
	13);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:729 */
rtx
gen_smaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:737 */
rtx
gen_umaxv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:745 */
rtx
gen_smaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:753 */
rtx
gen_umaxv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:761 */
rtx
gen_smaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:769 */
rtx
gen_umaxv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:777 */
rtx
gen_sminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:785 */
rtx
gen_uminv8qi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:793 */
rtx
gen_sminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:801 */
rtx
gen_uminv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:809 */
rtx
gen_sminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:817 */
rtx
gen_uminv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:827 */
rtx
gen_iwmmxt_wpackhss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:836 */
rtx
gen_iwmmxt_wpackwss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:845 */
rtx
gen_iwmmxt_wpackdss (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_SS_TRUNCATE (SImode,
	operand1),
	gen_rtx_SS_TRUNCATE (SImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:854 */
rtx
gen_iwmmxt_wpackhus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:863 */
rtx
gen_iwmmxt_wpackwus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_US_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_US_TRUNCATE (V2HImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:872 */
rtx
gen_iwmmxt_wpackdus (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_US_TRUNCATE (SImode,
	operand1),
	gen_rtx_US_TRUNCATE (SImode,
	operand2)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:882 */
rtx
gen_iwmmxt_wunpckihb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4L),
		const0_rtx,
		GEN_INT (5L),
		const1_rtx,
		GEN_INT (6L),
		GEN_INT (2L),
		GEN_INT (7L),
		GEN_INT (3L)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4L),
		const1_rtx,
		GEN_INT (5L),
		GEN_INT (2L),
		GEN_INT (6L),
		GEN_INT (3L),
		GEN_INT (7L)))),
	GEN_INT (85L)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:908 */
rtx
gen_iwmmxt_wunpckihh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2L),
		const1_rtx,
		GEN_INT (3L)))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2L),
		const0_rtx,
		GEN_INT (3L),
		const1_rtx))),
	GEN_INT (5L)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:926 */
rtx
gen_iwmmxt_wunpckihw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:940 */
rtx
gen_iwmmxt_wunpckilb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4L),
		const1_rtx,
		GEN_INT (5L),
		GEN_INT (2L),
		GEN_INT (6L),
		GEN_INT (3L),
		GEN_INT (7L)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4L),
		const0_rtx,
		GEN_INT (5L),
		const1_rtx,
		GEN_INT (6L),
		GEN_INT (2L),
		GEN_INT (7L),
		GEN_INT (3L)))),
	GEN_INT (85L)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:966 */
rtx
gen_iwmmxt_wunpckilh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2L),
		const0_rtx,
		GEN_INT (3L),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2L),
		const1_rtx,
		GEN_INT (3L)))),
	GEN_INT (5L)));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:984 */
rtx
gen_iwmmxt_wunpckilw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	const1_rtx));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:998 */
rtx
gen_iwmmxt_wunpckehub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (4L),
		GEN_INT (5L),
		GEN_INT (6L),
		GEN_INT (7L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1008 */
rtx
gen_iwmmxt_wunpckehuh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		GEN_INT (2L),
		GEN_INT (3L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1017 */
rtx
gen_iwmmxt_wunpckehuw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1026 */
rtx
gen_iwmmxt_wunpckehsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (4L),
		GEN_INT (5L),
		GEN_INT (6L),
		GEN_INT (7L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1036 */
rtx
gen_iwmmxt_wunpckehsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		GEN_INT (2L),
		GEN_INT (3L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1045 */
rtx
gen_iwmmxt_wunpckehsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1054 */
rtx
gen_iwmmxt_wunpckelub (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		GEN_INT (2L),
		GEN_INT (3L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1064 */
rtx
gen_iwmmxt_wunpckeluh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1073 */
rtx
gen_iwmmxt_wunpckeluw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1082 */
rtx
gen_iwmmxt_wunpckelsb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V4HImode,
	gen_rtx_VEC_SELECT (V4QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		const1_rtx,
		GEN_INT (2L),
		GEN_INT (3L))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1092 */
rtx
gen_iwmmxt_wunpckelsh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1101 */
rtx
gen_iwmmxt_wunpckelsw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1112 */
rtx
gen_rorv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1120 */
rtx
gen_rorv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1128 */
rtx
gen_rordi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1136 */
rtx
gen_ashrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1144 */
rtx
gen_ashrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1152 */
rtx
gen_ashrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1160 */
rtx
gen_lshrv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1168 */
rtx
gen_lshrv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1176 */
rtx
gen_lshrdi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1184 */
rtx
gen_ashlv4hi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1192 */
rtx
gen_ashlv2si3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1200 */
rtx
gen_ashldi3_iwmmxt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1208 */
rtx
gen_rorv4hi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1216 */
rtx
gen_rorv2si3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1224 */
rtx
gen_rordi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1232 */
rtx
gen_ashrv4hi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1240 */
rtx
gen_ashrv2si3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1248 */
rtx
gen_ashrdi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1256 */
rtx
gen_lshrv4hi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1264 */
rtx
gen_lshrv2si3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1272 */
rtx
gen_lshrdi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1280 */
rtx
gen_ashlv4hi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1288 */
rtx
gen_ashlv2si3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1296 */
rtx
gen_ashldi3_di (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1304 */
rtx
gen_iwmmxt_wmadds (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	18));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1312 */
rtx
gen_iwmmxt_wmaddu (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	19));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1320 */
rtx
gen_iwmmxt_tmia (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand2),
	gen_rtx_SIGN_EXTEND (DImode,
	operand3))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1331 */
rtx
gen_iwmmxt_tmiaph (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand3))),
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (16L)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand3,
	GEN_INT (16L))))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1347 */
rtx
gen_iwmmxt_tmiabb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand3)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1358 */
rtx
gen_iwmmxt_tmiatb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (16L)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand3)))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1371 */
rtx
gen_iwmmxt_tmiabt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand3,
	GEN_INT (16L)))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1384 */
rtx
gen_iwmmxt_tmiatt (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (16L)))),
	gen_rtx_SIGN_EXTEND (DImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_ASHIFTRT (SImode,
	operand3,
	GEN_INT (16L)))))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1399 */
rtx
gen_iwmmxt_tbcstqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V8QImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1406 */
rtx
gen_iwmmxt_tbcsthi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1413 */
rtx
gen_iwmmxt_tbcstsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_DUPLICATE (V2SImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1420 */
rtx
gen_iwmmxt_tmovmskb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1427 */
rtx
gen_iwmmxt_tmovmskh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1434 */
rtx
gen_iwmmxt_tmovmskw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	10));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1441 */
rtx
gen_iwmmxt_waccb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	9));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1448 */
rtx
gen_iwmmxt_wacch (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	9));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1455 */
rtx
gen_iwmmxt_waccw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	9));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1462 */
rtx
gen_iwmmxt_walign (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SUBREG (V8QImode,
	gen_rtx_ASHIFTRT (TImode,
	gen_rtx_SUBREG (TImode,
	gen_rtx_VEC_CONCAT (V16QImode,
	operand1,
	operand2),
	0),
	gen_rtx_MULT (SImode,
	operand3,
	GEN_INT (8L))),
	0));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1477 */
rtx
gen_iwmmxt_tmrc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	8));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1485 */
rtx
gen_iwmmxt_tmcr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	9);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1493 */
rtx
gen_iwmmxt_wsadb (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1501 */
rtx
gen_iwmmxt_wsadh (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	11));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1509 */
rtx
gen_iwmmxt_wsadbz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	12));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/iwmmxt.md:1517 */
rtx
gen_iwmmxt_wsadhz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	12));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:392 */
rtx
gen_adddi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS)
    {
      if (!cirrus_fp_register (operands[0], DImode))
        operands[0] = force_reg (DImode, operands[0]);
      if (!cirrus_fp_register (operands[1], DImode))
        operands[1] = force_reg (DImode, operands[1]);
      emit_insn (gen_cirrus_adddi3 (operands[0], operands[1], operands[2]));
      DONE;
    }

  if (TARGET_THUMB)
    {
      if (GET_CODE (operands[1]) != REG)
        operands[1] = force_reg (SImode, operands[1]);
      if (GET_CODE (operands[2]) != REG)
        operands[2] = force_reg (SImode, operands[2]);
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:431 */
extern rtx gen_split_545 (rtx *);
rtx
gen_split_545 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[5] = gen_highpart (SImode, operands[2]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_Cmode,
	24),
	gen_rtx_COMPARE (CC_Cmode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_Cmode,
	24),
	const0_rtx),
	gen_rtx_PLUS (SImode,
	operand4,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:458 */
extern rtx gen_split_546 (rtx *);
rtx
gen_split_546 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_Cmode,
	24),
	gen_rtx_COMPARE (CC_Cmode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_Cmode,
	24),
	const0_rtx),
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (31L)),
	operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:487 */
extern rtx gen_split_547 (rtx *);
rtx
gen_split_547 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_Cmode,
	24),
	gen_rtx_COMPARE (CC_Cmode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	copy_rtx (operand1))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CC_Cmode,
	24),
	const0_rtx),
	gen_rtx_PLUS (SImode,
	operand4,
	const0_rtx))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:514 */
rtx
gen_addsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_ARM && GET_CODE (operands[2]) == CONST_INT)
    {
      arm_split_constant (PLUS, SImode, INTVAL (operands[2]), operands[0],
			  operands[1],
			  (no_new_pseudos ? 0 : preserve_subexpressions_p ()));
      DONE;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:532 */
extern rtx gen_peephole2_549 (rtx, rtx *);
rtx
gen_peephole2_549 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:546 */
extern rtx gen_split_550 (rtx *);
rtx
gen_split_550 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();

  arm_split_constant (PLUS, SImode, INTVAL (operands[2]), operands[0],
		      operands[1], 0);
  DONE;
  
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:600 */
extern rtx gen_peephole2_551 (rtx, rtx *);
rtx
gen_peephole2_551 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:696 */
extern rtx gen_peephole2_552 (rtx, rtx *);
rtx
gen_peephole2_552 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = gen_rtx_REG (CCmode, CC_REGNUM);
   operands[3] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				  ? GEU : LTU),
				 VOIDmode, 
				 operands[2], const0_rtx);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_COMPARE (CCmode,
	operand1,
	const1_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		const0_rtx),
	operand4,
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:851 */
extern rtx gen_split_553 (rtx *);
rtx
gen_split_553 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operands[1] = GEN_INT (~(INTVAL (operands[1]) - 1));

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand3),
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:864 */
rtx
gen_addsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS
      && !cirrus_fp_register (operands[2], SFmode))
    operands[2] = force_reg (SFmode, operands[2]);

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:875 */
rtx
gen_adddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS
      && !cirrus_fp_register (operands[2], DFmode))
    operands[2] = force_reg (DFmode, operands[2]);

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:886 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS
      && TARGET_ARM
      && cirrus_fp_register (operands[0], DImode)
      && cirrus_fp_register (operands[1], DImode))
    {
      emit_insn (gen_cirrus_subdi3 (operands[0], operands[1], operands[2]));
      DONE;
    }

  if (TARGET_THUMB)
    {
      if (GET_CODE (operands[1]) != REG)
        operands[1] = force_reg (SImode, operands[1]);
      if (GET_CODE (operands[2]) != REG)
        operands[2] = force_reg (SImode, operands[2]);
     }	
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:995 */
rtx
gen_subsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[1]) == CONST_INT)
    {
      if (TARGET_ARM)
        {
          arm_split_constant (MINUS, SImode, INTVAL (operands[1]), operands[0],
	  		      operands[2],
			      (no_new_pseudos ? 0
			       :  preserve_subexpressions_p ()));
          DONE;
	}
      else /* TARGET_THUMB */
        operands[1] = force_reg (SImode, operands[1]);
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1026 */
extern rtx gen_split_558 (rtx *);
rtx
gen_split_558 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();

  arm_split_constant (MINUS, SImode, INTVAL (operands[1]), operands[0],
		      operands[2], 0);
  DONE;
  
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1047 */
extern rtx gen_peephole2_559 (rtx, rtx *);
rtx
gen_peephole2_559 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand3),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1088 */
rtx
gen_subsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS)
    {
      if (!cirrus_fp_register (operands[1], SFmode))
        operands[1] = force_reg (SFmode, operands[1]);
      if (!cirrus_fp_register (operands[2], SFmode))
        operands[2] = force_reg (SFmode, operands[2]);
    }

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1103 */
rtx
gen_subdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS)
    {
       if (!cirrus_fp_register (operands[1], DFmode))
         operands[1] = force_reg (DFmode, operands[1]);
       if (!cirrus_fp_register (operands[2], DFmode))
         operands[2] = force_reg (DFmode, operands[2]);
    }

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1121 */
rtx
gen_mulsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand2,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1393 */
rtx
gen_mulsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS
      && !cirrus_fp_register (operands[2], SFmode))
    operands[2] = force_reg (SFmode, operands[2]);

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1404 */
rtx
gen_muldf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_CIRRUS
      && !cirrus_fp_register (operands[2], DFmode))
    operands[2] = force_reg (DFmode, operands[2]);

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1417 */
rtx
gen_divsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1424 */
rtx
gen_divdf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1433 */
rtx
gen_modsf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (SFmode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1440 */
rtx
gen_moddf3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MOD (DFmode,
	operand1,
	operand2));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1453 */
extern rtx gen_split_569 (rtx *);
rtx
gen_split_569 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[5] = gen_highpart (SImode, operands[2]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand6), SImode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx (GET_CODE (operand6), SImode,
		operand4,
		operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1472 */
extern rtx gen_split_570 (rtx *);
rtx
gen_split_570 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[5] = gen_highpart (SImode, operands[2]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand6), SImode,
		operand1,
		operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx (GET_CODE (operand6), SImode,
		gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (31L)),
		operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1495 */
extern rtx gen_split_571 (rtx *);
rtx
gen_split_571 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1514 */
extern rtx gen_split_572 (rtx *);
rtx
gen_split_572 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1540 */
extern rtx gen_split_573 (rtx *);
rtx
gen_split_573 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1571 */
rtx
gen_andsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_ARM)
    {
      if (GET_CODE (operands[2]) == CONST_INT)
        {
          arm_split_constant (AND, SImode, INTVAL (operands[2]), operands[0],
			      operands[1],
			      (no_new_pseudos
			       ? 0 : preserve_subexpressions_p ()));
          DONE;
        }
    }
  else /* TARGET_THUMB */
    {
      if (GET_CODE (operands[2]) != CONST_INT)
        operands[2] = force_reg (SImode, operands[2]);
      else
        {
          int i;
	  
          if (((unsigned HOST_WIDE_INT) ~INTVAL (operands[2])) < 256)
  	    {
	      operands[2] = force_reg (SImode,
				       GEN_INT (~INTVAL (operands[2])));
	      
	      emit_insn (gen_bicsi3 (operands[0], operands[2], operands[1]));
	      
	      DONE;
	    }

          for (i = 9; i <= 31; i++)
	    {
	      if ((((HOST_WIDE_INT) 1) << i) - 1 == INTVAL (operands[2]))
	        {
	          emit_insn (gen_extzv (operands[0], operands[1], GEN_INT (i),
			 	        const0_rtx));
	          DONE;
	        }
	      else if ((((HOST_WIDE_INT) 1) << i) - 1
		       == ~INTVAL (operands[2]))
	        {
	          rtx shift = GEN_INT (i);
	          rtx reg = gen_reg_rtx (SImode);
		
	          emit_insn (gen_lshrsi3 (reg, operands[1], shift));
	          emit_insn (gen_ashlsi3 (operands[0], reg, shift));
		  
	          DONE;
	        }
	    }

          operands[2] = force_reg (SImode, operands[2]);
        }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1633 */
extern rtx gen_split_575 (rtx *);
rtx
gen_split_575 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();

  arm_split_constant  (AND, SImode, INTVAL (operands[2]), operands[0],
		       operands[1], 0);
  DONE;
  
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1738 */
extern rtx gen_split_576 (rtx *);
rtx
gen_split_576 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
     HOST_WIDE_INT temp = INTVAL (operands[2]);

     operands[2] = GEN_INT (32 - temp - INTVAL (operands[3]));
     operands[3] = GEN_INT (32 - temp);
   }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand4),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1755 */
extern rtx gen_split_577 (rtx *);
rtx
gen_split_577 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
{
     HOST_WIDE_INT temp = INTVAL (operands[3]);

     operands[3] = GEN_INT (32 - temp - INTVAL (operands[4]));
     operands[4] = GEN_INT (32 - temp);
   }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_ASHIFT (SImode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand6),
	operand4),
		operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1777 */
extern rtx gen_split_578 (rtx *);
rtx
gen_split_578 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
     HOST_WIDE_INT temp = INTVAL (operands[2]);

     operands[2] = GEN_INT (32 - temp - INTVAL (operands[3]));
     operands[3] = GEN_INT (32 - temp);
   }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand0),
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1793 */
extern rtx gen_split_579 (rtx *);
rtx
gen_split_579 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
{
     HOST_WIDE_INT temp = INTVAL (operands[3]);

     operands[3] = GEN_INT (32 - temp - INTVAL (operands[4]));
     operands[4] = GEN_INT (32 - temp);
   }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_ASHIFT (SImode,
	operand2,
	operand3)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand6),
	operand4),
		operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1824 */
rtx
gen_insv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    int start_bit = INTVAL (operands[2]);
    int width = INTVAL (operands[1]);
    HOST_WIDE_INT mask = (((HOST_WIDE_INT)1) << width) - 1;
    rtx target, subtarget;

    target = operands[0];
    /* Avoid using a subreg as a subtarget, and avoid writing a paradoxical 
       subreg as the final target.  */
    if (GET_CODE (target) == SUBREG)
      {
	subtarget = gen_reg_rtx (SImode);
	if (GET_MODE_SIZE (GET_MODE (SUBREG_REG (target)))
	    < GET_MODE_SIZE (SImode))
	  target = SUBREG_REG (target);
      }
    else
      subtarget = target;    

    if (GET_CODE (operands[3]) == CONST_INT)
      {
	/* Since we are inserting a known constant, we may be able to
	   reduce the number of bits that we have to clear so that
	   the mask becomes simple.  */
	/* ??? This code does not check to see if the new mask is actually
	   simpler.  It may not be.  */
	rtx op1 = gen_reg_rtx (SImode);
	/* ??? Truncate operand3 to fit in the bitfield.  See comment before
	   start of this pattern.  */
	HOST_WIDE_INT op3_value = mask & INTVAL (operands[3]);
	HOST_WIDE_INT mask2 = ((mask & ~op3_value) << start_bit);

	emit_insn (gen_andsi3 (op1, operands[0], GEN_INT (~mask2)));
	emit_insn (gen_iorsi3 (subtarget, op1,
			       GEN_INT (op3_value << start_bit)));
      }
    else if (start_bit == 0
	     && !(const_ok_for_arm (mask)
		  || const_ok_for_arm (~mask)))
      {
	/* A Trick, since we are setting the bottom bits in the word,
	   we can shift operand[3] up, operand[0] down, OR them together
	   and rotate the result back again.  This takes 3 insns, and
	   the third might be mergeable into another op.  */
	/* The shift up copes with the possibility that operand[3] is
           wider than the bitfield.  */
	rtx op0 = gen_reg_rtx (SImode);
	rtx op1 = gen_reg_rtx (SImode);

	emit_insn (gen_ashlsi3 (op0, operands[3], GEN_INT (32 - width)));
	emit_insn (gen_lshrsi3 (op1, operands[0], operands[1]));
	emit_insn (gen_iorsi3  (op1, op1, op0));
	emit_insn (gen_rotlsi3 (subtarget, op1, operands[1]));
      }
    else if ((width + start_bit == 32)
	     && !(const_ok_for_arm (mask)
		  || const_ok_for_arm (~mask)))
      {
	/* Similar trick, but slightly less efficient.  */

	rtx op0 = gen_reg_rtx (SImode);
	rtx op1 = gen_reg_rtx (SImode);

	emit_insn (gen_ashlsi3 (op0, operands[3], GEN_INT (32 - width)));
	emit_insn (gen_ashlsi3 (op1, operands[0], operands[1]));
	emit_insn (gen_lshrsi3 (op1, op1, operands[1]));
	emit_insn (gen_iorsi3 (subtarget, op1, op0));
      }
    else
      {
	rtx op0 = GEN_INT (mask);
	rtx op1 = gen_reg_rtx (SImode);
	rtx op2 = gen_reg_rtx (SImode);

	if (!(const_ok_for_arm (mask) || const_ok_for_arm (~mask)))
	  {
	    rtx tmp = gen_reg_rtx (SImode);

	    emit_insn (gen_movsi (tmp, op0));
	    op0 = tmp;
	  }

	/* Mask out any bits in operand[3] that are not needed.  */
	   emit_insn (gen_andsi3 (op1, operands[3], op0));

	if (GET_CODE (op0) == CONST_INT
	    && (const_ok_for_arm (mask << start_bit)
		|| const_ok_for_arm (~(mask << start_bit))))
	  {
	    op0 = GEN_INT (~(mask << start_bit));
	    emit_insn (gen_andsi3 (op2, operands[0], op0));
	  }
	else
	  {
	    if (GET_CODE (op0) == CONST_INT)
	      {
		rtx tmp = gen_reg_rtx (SImode);

		emit_insn (gen_movsi (tmp, op0));
		op0 = tmp;
	      }

	    if (start_bit != 0)
	      emit_insn (gen_ashlsi3 (op0, op0, operands[2]));
	    
	    emit_insn (gen_andsi_notsi_si (op2, operands[0], op0));
	  }

	if (start_bit != 0)
          emit_insn (gen_ashlsi3 (op1, op1, operands[2]));

	emit_insn (gen_iorsi3 (subtarget, op1, op2));
      }

    if (subtarget != target)
      {
	/* If TARGET is still a SUBREG, then it must be wider than a word,
	   so we must be careful only to set the subword we were asked to.  */
	if (GET_CODE (target) == SUBREG)
	  emit_move_insn (target, subtarget);
	else
	  emit_move_insn (target, gen_lowpart (GET_MODE (target), subtarget));
      }

    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1960 */
extern rtx gen_split_581 (rtx *);
rtx
gen_split_581 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[5] = gen_highpart (SImode, operands[2]);
    operands[2] = gen_lowpart (SImode, operands[2]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand4),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:1982 */
extern rtx gen_split_582 (rtx *);
rtx
gen_split_582 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand2),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2009 */
extern rtx gen_split_583 (rtx *);
rtx
gen_split_583 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  {
    operands[3] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[4] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand2),
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (31L))),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2122 */
rtx
gen_iorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[2]) == CONST_INT)
    {
      if (TARGET_ARM)
        {
          arm_split_constant (IOR, SImode, INTVAL (operands[2]), operands[0],
		 	      operands[1],
			      (no_new_pseudos
			      ? 0 : preserve_subexpressions_p ()));
          DONE;
	}
      else /* TARGET_THUMB */
	operands [2] = force_reg (SImode, operands [2]);
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2144 */
extern rtx gen_split_585 (rtx *);
rtx
gen_split_585 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();

  arm_split_constant (IOR, SImode, INTVAL (operands[2]), operands[0],
		      operands[1], 0);
  DONE;
  
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2174 */
extern rtx gen_peephole2_586 (rtx, rtx *);
rtx
gen_peephole2_586 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2244 */
rtx
gen_xorsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
if (TARGET_THUMB)
     if (GET_CODE (operands[2]) == CONST_INT)
       operands[2] = force_reg (SImode, operands[2]);
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2299 */
extern rtx gen_split_588 (rtx *);
rtx
gen_split_588 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_AND (SImode,
	gen_rtx_IOR (SImode,
	operand1,
	operand2),
	gen_rtx_NOT (SImode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	copy_rtx (operand4))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2323 */
extern rtx gen_split_589 (rtx *);
rtx
gen_split_589 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  operands[4] = GEN_INT (32 - (INTVAL (operands[3]) + INTVAL (operands[4])));

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFT (SImode,
	operand2,
	operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand8),
	operand6),
		operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2349 */
extern rtx gen_split_590 (rtx *);
rtx
gen_split_590 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  operands[4] = GEN_INT (32 - (INTVAL (operands[3]) + INTVAL (operands[4])));

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFT (SImode,
	operand2,
	operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand8),
	operand6),
		operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2375 */
extern rtx gen_split_591 (rtx *);
rtx
gen_split_591 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  operands[4] = GEN_INT (32 - (INTVAL (operands[3]) + INTVAL (operands[4])));

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFT (SImode,
	operand2,
	operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand8),
	operand6),
		operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2401 */
extern rtx gen_split_592 (rtx *);
rtx
gen_split_592 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  operands[4] = GEN_INT (32 - (INTVAL (operands[3]) + INTVAL (operands[4])));

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFT (SImode,
	operand2,
	operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand8),
	operand6),
		operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2540 */
rtx
gen_ashlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[2]) == CONST_INT
      && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) > 31)
    {
      emit_insn (gen_movsi (operands[0], const0_rtx));
      DONE;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2564 */
rtx
gen_ashrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[2]) == CONST_INT
      && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) > 31)
    operands[2] = GEN_INT (31);
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2585 */
rtx
gen_lshrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[2]) == CONST_INT
      && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) > 31)
    {
      emit_insn (gen_movsi (operands[0], const0_rtx));
      DONE;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2609 */
rtx
gen_rotlsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (GET_CODE (operands[2]) == CONST_INT)
    operands[2] = GEN_INT ((32 - INTVAL (operands[2])) % 32);
  else
    {
      rtx reg = gen_reg_rtx (SImode);
      emit_insn (gen_subsi3 (reg, GEN_INT (32), operands[2]));
      operands[2] = reg;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2626 */
rtx
gen_rotrsi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_ARM)
    {
      if (GET_CODE (operands[2]) == CONST_INT
          && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) > 31)
        operands[2] = GEN_INT (INTVAL (operands[2]) % 32);
    }
  else /* TARGET_THUMB */
    {
      if (GET_CODE (operands [2]) == CONST_INT)
        operands [2] = force_reg (SImode, operands[2]);
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2655 */
rtx
gen_ashldi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (! s_register_operand (operands[1], DImode))
    operands[1] = copy_to_mode_reg (DImode, operands[1]);
  if (! s_register_operand (operands[2], SImode))
    operands[2] = copy_to_mode_reg (SImode, operands[2]);
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2753 */
rtx
gen_extzv (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    HOST_WIDE_INT lshift = 32 - INTVAL (operands[2]) - INTVAL (operands[3]);
    HOST_WIDE_INT rshift = 32 - INTVAL (operands[2]);
    
    operands[3] = GEN_INT (rshift);
    
    if (lshift == 0)
      {
        emit_insn (gen_lshrsi3 (operands[0], operands[1], operands[3]));
        DONE;
      }
      
    operands[2] = GEN_INT (lshift);
    operands[4] = gen_reg_rtx (SImode);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand4,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2782 */
rtx
gen_negdi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_THUMB)
    {
      if (GET_CODE (operands[1]) != REG)
        operands[1] = force_reg (SImode, operands[1]);
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2818 */
rtx
gen_negsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2841 */
rtx
gen_negsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2848 */
rtx
gen_negdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2859 */
rtx
gen_abssi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24))));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2895 */
rtx
gen_abssf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2901 */
rtx
gen_absdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2907 */
rtx
gen_sqrtsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2913 */
rtx
gen_sqrtdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2919 */
extern rtx gen_split_609 (rtx *);
rtx
gen_split_609 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  {
    operands[2] = gen_highpart (SImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[3] = gen_highpart (SImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_NOT (SImode,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2938 */
rtx
gen_one_cmplsi2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2984 */
rtx
gen_floatsisf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS)
    {
      emit_insn (gen_cirrus_floatsisf2 (operands[0], operands[1]));
      DONE;
    }

    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:2996 */
rtx
gen_floatsidf2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS)
    {
      emit_insn (gen_cirrus_floatsidf2 (operands[0], operands[1]));
      DONE;
    }

    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3008 */
rtx
gen_fix_truncsfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS)
    {
      if (!cirrus_fp_register (operands[0], SImode))
        operands[0] = force_reg (SImode, operands[0]);
      if (!cirrus_fp_register (operands[1], SFmode))
        operands[1] = force_reg (SFmode, operands[0]);
      emit_insn (gen_cirrus_truncsfsi2 (operands[0], operands[1]));
      DONE;
    }

    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (SFmode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3024 */
rtx
gen_fix_truncdfsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS)
    {
      if (!cirrus_fp_register (operands[1], DFmode))
        operands[1] = force_reg (DFmode, operands[0]);
      emit_insn (gen_cirrus_truncdfsi2 (operands[0], operands[1]));
      DONE;
    }

    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	gen_rtx_FIX (DFmode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3040 */
rtx
gen_truncdfsf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3093 */
rtx
gen_zero_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    if (TARGET_ARM)
      {
        if (arm_arch4 && GET_CODE (operands[1]) == MEM)
          {
           /* Note: We do not have to worry about TARGET_MMU_TRAPS
	      here because the insn below will generate an LDRH instruction
	      rather than an LDR instruction, so we cannot get an unaligned
	      word access.  */
            emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			            gen_rtx_ZERO_EXTEND (SImode,
							 operands[1])));
            DONE;
          }
        if (TARGET_MMU_TRAPS && GET_CODE (operands[1]) == MEM)
          {
            emit_insn (gen_movhi_bytes (operands[0], operands[1]));
            DONE;
          }
        if (!s_register_operand (operands[1], HImode))
          operands[1] = copy_to_mode_reg (HImode, operands[1]);
        operands[1] = gen_lowpart (SImode, operands[1]);
        operands[2] = gen_reg_rtx (SImode);
      }
    else /* TARGET_THUMB */
      {
        if (GET_CODE (operands[1]) == MEM)
	  {
	    rtx tmp;

	    tmp = gen_rtx_ZERO_EXTEND (SImode, operands[1]);
	    tmp = gen_rtx_SET (VOIDmode, operands[0], tmp);
	    emit_insn (tmp);
	  }
	else
	  {
	    rtx ops[3];
	    
	    if (!s_register_operand (operands[1], HImode))
	      operands[1] = copy_to_mode_reg (HImode, operands[1]);
	    operands[1] = gen_lowpart (SImode, operands[1]);
	    operands[2] = gen_reg_rtx (SImode);
	    
	    ops[0] = operands[2];
	    ops[1] = operands[1];
	    ops[2] = GEN_INT (16);
	    
	    emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				    gen_rtx_ASHIFT (SImode, ops[1], ops[2])));

	    ops[0] = operands[0];
	    ops[1] = operands[2];
	    ops[2] = GEN_INT (16);

	    emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				    gen_rtx_LSHIFTRT (SImode, ops[1],
						      ops[2])));
	  }
	DONE; 
      }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (16L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand2,
	GEN_INT (16L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3217 */
extern rtx gen_split_617 (rtx *);
rtx
gen_split_617 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  if ((operands[1] = arm_gen_rotated_half_load (operands[1])) == NULL)
    FAIL;
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (16L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3230 */
extern rtx gen_split_618 (rtx *);
rtx
gen_split_618 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  if ((operands[1] = arm_gen_rotated_half_load (operands[1])) == NULL)
    FAIL;
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		gen_rtx_LSHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (16L)),
		operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3247 */
rtx
gen_zero_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (GET_CODE (operands[1]) != MEM)
    {
      if (TARGET_ARM)
        {
          emit_insn (gen_andsi3 (operands[0],
				 gen_lowpart (SImode, operands[1]),
			         GEN_INT (255)));
        }
      else /* TARGET_THUMB */
        {
          rtx temp = gen_reg_rtx (SImode);
	  rtx ops[3];
	  
          operands[1] = copy_to_mode_reg (QImode, operands[1]);
          operands[1] = gen_lowpart (SImode, operands[1]);

	  ops[0] = temp;
	  ops[1] = operands[1];
	  ops[2] = GEN_INT (24);

	  emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				  gen_rtx_ASHIFT (SImode, ops[1], ops[2])));
	  
          ops[0] = operands[0];
	  ops[1] = temp;
	  ops[2] = GEN_INT (24);

	  emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				  gen_rtx_LSHIFTRT (SImode, ops[1], ops[2])));
	}
      DONE;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3308 */
extern rtx gen_split_620 (rtx *);
rtx
gen_split_620 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	GEN_INT (255L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3327 */
rtx
gen_extendhisi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    if (TARGET_ARM && arm_arch4 && GET_CODE (operands[1]) == MEM)
      {
       /* Note: We do not have to worry about TARGET_MMU_TRAPS
	  here because the insn below will generate an LDRH instruction
	  rather than an LDR instruction, so we cannot get an unaligned
	  word access.  */
        emit_insn (gen_rtx_SET (VOIDmode, operands[0],
		   gen_rtx_SIGN_EXTEND (SImode, operands[1])));
        DONE;
      }

    if (TARGET_ARM && TARGET_MMU_TRAPS && GET_CODE (operands[1]) == MEM)
      {
        emit_insn (gen_extendhisi2_mem (operands[0], operands[1]));
        DONE;
      }
    if (!s_register_operand (operands[1], HImode))
      operands[1] = copy_to_mode_reg (HImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = gen_reg_rtx (SImode);

    if (TARGET_THUMB)
      {
	rtx ops[3];
	
	ops[0] = operands[2];
	ops[1] = operands[1];
	ops[2] = GEN_INT (16);
	
        emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				gen_rtx_ASHIFT (SImode, ops[1], ops[2])));
	    
	ops[0] = operands[0];
	ops[1] = operands[2];
	ops[2] = GEN_INT (16);
	
        emit_insn (gen_rtx_SET (VOIDmode, ops[0],
				gen_rtx_ASHIFTRT (SImode, ops[1], ops[2])));
	
	DONE;
      }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (16L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (16L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3439 */
rtx
gen_extendhisi2_mem (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[8];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx mem1, mem2;
    rtx addr = copy_to_mode_reg (SImode, XEXP (operands[1], 0));

    mem1 = gen_rtx_MEM (QImode, addr);
    MEM_COPY_ATTRIBUTES (mem1, operands[1]);
    mem2 = gen_rtx_MEM (QImode, plus_constant (addr, 1));
    MEM_COPY_ATTRIBUTES (mem2, operands[1]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = mem1;
    operands[2] = gen_reg_rtx (SImode);
    operands[3] = gen_reg_rtx (SImode);
    operands[6] = gen_reg_rtx (SImode);
    operands[7] = mem2;

    if (BYTES_BIG_ENDIAN)
      {
	operands[4] = operands[2];
	operands[5] = operands[3];
      }
    else
      {
	operands[4] = operands[3];
	operands[5] = operands[2];
      }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
    operand7 = operands[7];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	gen_rtx_ASHIFT (SImode,
	operand4,
	GEN_INT (24L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand6,
	GEN_INT (16L)),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3487 */
extern rtx gen_split_623 (rtx *);
rtx
gen_split_623 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  if ((operands[1] = arm_gen_rotated_half_load (operands[1])) == NULL)
    FAIL;
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (16L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3500 */
extern rtx gen_split_624 (rtx *);
rtx
gen_split_624 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
if ((operands[1] = arm_gen_rotated_half_load (operands[1])) == NULL)
     FAIL;
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand2),
	GEN_INT (16L)),
		operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3516 */
rtx
gen_extendqihi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    if (arm_arch4 && GET_CODE (operands[1]) == MEM)
      {
	emit_insn (gen_rtx_SET (VOIDmode,
				operands[0],
				gen_rtx_SIGN_EXTEND (HImode, operands[1])));
	DONE;
      }
    if (!s_register_operand (operands[1], QImode))
      operands[1] = copy_to_mode_reg (QImode, operands[1]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = gen_reg_rtx (SImode);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (24L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (24L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3560 */
extern rtx gen_split_626 (rtx *);
rtx
gen_split_626 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  {
    HOST_WIDE_INT offset;

    operands[3] = gen_rtx_REG (SImode, REGNO (operands[0]));
    operands[2] = gen_rtx_MEM (QImode, operands[3]);
    MEM_COPY_ATTRIBUTES (operands[2], operands[1]);
    operands[1] = XEXP (operands[1], 0);
    if (GET_CODE (operands[1]) == PLUS
	&& GET_CODE (XEXP (operands[1], 1)) == CONST_INT
	&& !(const_ok_for_arm (offset = INTVAL (XEXP (operands[1], 1)))
	     || const_ok_for_arm (-offset)))
      {
	HOST_WIDE_INT low = (offset > 0
			     ? (offset & 0xff) : -((-offset) & 0xff));
	XEXP (operands[2], 0) = plus_constant (operands[3], low);
	operands[1] = plus_constant (XEXP (operands[1], 0), offset - low);
      }
    /* Ensure the sum is in correct canonical form.  */
    else if (GET_CODE (operands[1]) == PLUS
	     && GET_CODE (XEXP (operands[1], 1)) != CONST_INT
	     && !s_register_operand (XEXP (operands[1], 1), VOIDmode))
      operands[1] = gen_rtx_PLUS (GET_MODE (operands[1]),
					   XEXP (operands[1], 1),
					   XEXP (operands[1], 0));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3594 */
rtx
gen_extendqisi2 (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    if (TARGET_ARM && arm_arch4 && GET_CODE (operands[1]) == MEM)
      {
        emit_insn (gen_rtx_SET (VOIDmode,
			        operands[0],
			        gen_rtx_SIGN_EXTEND (SImode, operands[1])));
        DONE;
      }
    if (!s_register_operand (operands[1], QImode))
      operands[1] = copy_to_mode_reg (QImode, operands[1]);
    operands[1] = gen_lowpart (SImode, operands[1]);
    operands[2] = gen_reg_rtx (SImode);
    
    if (TARGET_THUMB)
      {
	rtx ops[3];
	
	ops[0] = operands[2];
	ops[1] = operands[1];
	ops[2] = GEN_INT (24);
	
        emit_insn (gen_rtx_SET (VOIDmode, ops[0],
		   gen_rtx_ASHIFT (SImode, ops[1], ops[2])));

	ops[0] = operands[0];
	ops[1] = operands[2];
	ops[2] = GEN_INT (24);
	
        emit_insn (gen_rtx_SET (VOIDmode, ops[0],
		   gen_rtx_ASHIFTRT (SImode, ops[1], ops[2])));
	
	DONE;
      }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFT (SImode,
	operand1,
	GEN_INT (24L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (24L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3658 */
extern rtx gen_split_628 (rtx *);
rtx
gen_split_628 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  {
    HOST_WIDE_INT offset;

    operands[2] = gen_rtx_MEM (QImode, operands[0]);
    MEM_COPY_ATTRIBUTES (operands[2], operands[1]);
    operands[1] = XEXP (operands[1], 0);
    if (GET_CODE (operands[1]) == PLUS
	&& GET_CODE (XEXP (operands[1], 1)) == CONST_INT
	&& !(const_ok_for_arm (offset = INTVAL (XEXP (operands[1], 1)))
	     || const_ok_for_arm (-offset)))
      {
	HOST_WIDE_INT low = (offset > 0
			     ? (offset & 0xff) : -((-offset) & 0xff));
	XEXP (operands[2], 0) = plus_constant (operands[0], low);
	operands[1] = plus_constant (XEXP (operands[1], 0), offset - low);
      }
    /* Ensure the sum is in correct canonical form.  */
    else if (GET_CODE (operands[1]) == PLUS
	     && GET_CODE (XEXP (operands[1], 1)) != CONST_INT
	     && !s_register_operand (XEXP (operands[1], 1), VOIDmode))
      operands[1] = gen_rtx_PLUS (GET_MODE (operands[1]),
					   XEXP (operands[1], 1),
					   XEXP (operands[1], 0));
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3770 */
rtx
gen_extendsfdf2 (rtx operand0,
	rtx operand1)
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3838 */
rtx
gen_movdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_THUMB)
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) != REG)
	    operands[1] = force_reg (DImode, operands[1]);
        }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3914 */
rtx
gen_movsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_ARM)
    {
      /* Everything except mem = const or mem = mem can be done easily.  */
      if (GET_CODE (operands[0]) == MEM)
        operands[1] = force_reg (SImode, operands[1]);
      if (GET_CODE (operands[1]) == CONST_INT
          && !(const_ok_for_arm (INTVAL (operands[1]))
               || const_ok_for_arm (~INTVAL (operands[1]))))
        {
           arm_split_constant (SET, SImode, INTVAL (operands[1]), operands[0],
		    	      NULL_RTX,
			      (no_new_pseudos ? 0
			       : preserve_subexpressions_p ()));
          DONE;
        }
    }
  else /* TARGET_THUMB....  */
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) != REG)
	    operands[1] = force_reg (SImode, operands[1]);
        }
    }
    
  if (flag_pic
      && (CONSTANT_P (operands[1])
	 || symbol_mentioned_p (operands[1])
	 || label_mentioned_p (operands[1])))
    operands[1] = legitimize_pic_address (operands[1], SImode,
					  (no_new_pseudos ? operands[0] : 0));
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:3970 */
extern rtx gen_split_632 (rtx *);
rtx
gen_split_632 (rtx *operands ATTRIBUTE_UNUSED)
{
  rtx _val = 0;
  start_sequence ();

  arm_split_constant (SET, SImode, INTVAL (operands[1]), operands[0],
		      NULL_RTX, 0);
  DONE;
  
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4005 */
extern rtx gen_split_633 (rtx *);
rtx
gen_split_633 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (- INTVAL (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NEG (SImode,
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4014 */
extern rtx gen_split_634 (rtx *);
rtx
gen_split_634 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  {
    unsigned HOST_WIDE_INT val = INTVAL (operands[1]);
    unsigned HOST_WIDE_INT mask = 0xff;
    int i;
    
    for (i = 0; i < 25; i++)
      if ((val & (mask << i)) == val)
        break;

    /* Shouldn't happen, but we don't want to split if the shift is zero.  */
    if (i == 0)
      FAIL;

    operands[1] = GEN_INT (val >> i);
    operands[2] = GEN_INT (i);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4069 */
rtx
gen_pic_load_addr_based (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = pic_offset_table_rtx;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4130 */
rtx
gen_builtin_setjmp_receiver (rtx operand0)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;

{
  arm_finalize_pic (0);
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4164 */
rtx
gen_storehi (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx op1 = operands[1];
    rtx addr = XEXP (op1, 0);
    enum rtx_code code = GET_CODE (addr);

    if ((code == PLUS && GET_CODE (XEXP (addr, 1)) != CONST_INT)
	|| code == MINUS)
      op1 = replace_equiv_address (operands[1], force_reg (SImode, addr));

    operands[4] = adjust_address (op1, QImode, 1);
    operands[1] = adjust_address (operands[1], QImode, 0);
    operands[3] = gen_lowpart (QImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[2] = gen_reg_rtx (SImode);
    operands[5] = gen_lowpart (QImode, operands[2]);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	GEN_INT (8L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4192 */
rtx
gen_storehi_bigend (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[6];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx op1 = operands[1];
    rtx addr = XEXP (op1, 0);
    enum rtx_code code = GET_CODE (addr);

    if ((code == PLUS && GET_CODE (XEXP (addr, 1)) != CONST_INT)
	|| code == MINUS)
      op1 = replace_equiv_address (op1, force_reg (SImode, addr));

    operands[4] = adjust_address (op1, QImode, 1);
    operands[1] = adjust_address (operands[1], QImode, 0);
    operands[3] = gen_lowpart (QImode, operands[0]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[2] = gen_reg_rtx (SImode);
    operands[5] = gen_lowpart (QImode, operands[2]);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	GEN_INT (8L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	operand5));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4218 */
rtx
gen_storeinthi (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    HOST_WIDE_INT value = INTVAL (operands[1]);
    rtx addr = XEXP (operands[0], 0);
    rtx op0 = operands[0];
    enum rtx_code code = GET_CODE (addr);

    if ((code == PLUS && GET_CODE (XEXP (addr, 1)) != CONST_INT)
	|| code == MINUS)
      op0 = replace_equiv_address (op0, force_reg (SImode, addr));

    operands[1] = gen_reg_rtx (SImode);
    if (BYTES_BIG_ENDIAN)
      {
	emit_insn (gen_movsi (operands[1], GEN_INT ((value >> 8) & 255)));
	if ((value & 255) == ((value >> 8) & 255))
	  operands[2] = operands[1];
	else
	  {
	    operands[2] = gen_reg_rtx (SImode);
	    emit_insn (gen_movsi (operands[2], GEN_INT (value & 255)));
	  }
      }
    else
      {
	emit_insn (gen_movsi (operands[1], GEN_INT (value & 255)));
	if ((value & 255) == ((value >> 8) & 255))
	  operands[2] = operands[1];
	else
	  {
	    operands[2] = gen_reg_rtx (SImode);
	    emit_insn (gen_movsi (operands[2], GEN_INT ((value >> 8) & 255)));
	  }
      }

    operands[3] = adjust_address (op0, QImode, 1);
    operands[0] = adjust_address (operands[0], QImode, 0);
    operands[2] = gen_lowpart (QImode, operands[2]);
    operands[1] = gen_lowpart (QImode, operands[1]);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4265 */
rtx
gen_storehi_single_op (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (!s_register_operand (operands[1], HImode))
    operands[1] = copy_to_mode_reg (HImode, operands[1]);
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4275 */
rtx
gen_movhi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_ARM)
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) == MEM)
	    {
	      if (arm_arch4)
	        {
	          emit_insn (gen_storehi_single_op (operands[0], operands[1]));
	          DONE;
	        }
	      if (GET_CODE (operands[1]) == CONST_INT)
	        emit_insn (gen_storeinthi (operands[0], operands[1]));
	      else
	        {
	          if (GET_CODE (operands[1]) == MEM)
		    operands[1] = force_reg (HImode, operands[1]);
	          if (BYTES_BIG_ENDIAN)
		    emit_insn (gen_storehi_bigend (operands[1], operands[0]));
	          else
		   emit_insn (gen_storehi (operands[1], operands[0]));
	        }
	      DONE;
	    }
          /* Sign extend a constant, and keep it in an SImode reg.  */
          else if (GET_CODE (operands[1]) == CONST_INT)
	    {
	      rtx reg = gen_reg_rtx (SImode);
	      HOST_WIDE_INT val = INTVAL (operands[1]) & 0xffff;

	      /* If the constant is already valid, leave it alone.  */
	      if (!const_ok_for_arm (val))
	        {
	          /* If setting all the top bits will make the constant 
		     loadable in a single instruction, then set them.  
		     Otherwise, sign extend the number.  */

	          if (const_ok_for_arm (~(val | ~0xffff)))
		    val |= ~0xffff;
	          else if (val & 0x8000)
		    val |= ~0xffff;
	        }

	      emit_insn (gen_movsi (reg, GEN_INT (val)));
	      operands[1] = gen_lowpart (HImode, reg);
	    }
	  else if (arm_arch4 && !no_new_pseudos && optimize > 0
		   && GET_CODE (operands[1]) == MEM)
	    {
	      rtx reg = gen_reg_rtx (SImode);

	      emit_insn (gen_zero_extendhisi2 (reg, operands[1]));
	      operands[1] = gen_lowpart (HImode, reg);
	    }
          else if (!arm_arch4)
	    {
	     /* Note: We do not have to worry about TARGET_MMU_TRAPS
	        for v4 and up architectures because LDRH instructions will
	        be used to access the HI values, and these cannot generate
	        unaligned word access faults in the MMU.  */
	      if (GET_CODE (operands[1]) == MEM)
	        {
	          if (TARGET_MMU_TRAPS)
		    {
		      rtx base;
		      rtx offset = const0_rtx;
		      rtx reg = gen_reg_rtx (SImode);

		      if ((GET_CODE (base = XEXP (operands[1], 0)) == REG
		           || (GET_CODE (base) == PLUS
			       && (GET_CODE (offset = XEXP (base, 1))
				   == CONST_INT)
                               && ((INTVAL(offset) & 1) != 1)
			       && GET_CODE (base = XEXP (base, 0)) == REG))
		          && REGNO_POINTER_ALIGN (REGNO (base)) >= 32)
		        {
		          HOST_WIDE_INT new_offset = INTVAL (offset) & ~3;
		          rtx new;

		          new = gen_rtx_MEM (SImode,
				   	     plus_constant (base, new_offset));
	                  MEM_COPY_ATTRIBUTES (new, operands[1]);
		          emit_insn (gen_movsi (reg, new));
		          if (((INTVAL (offset) & 2) != 0)
			      ^ (BYTES_BIG_ENDIAN ? 1 : 0))
			    {
			      rtx reg2 = gen_reg_rtx (SImode);

			      emit_insn (gen_lshrsi3 (reg2, reg,
					 GEN_INT (16)));
			      reg = reg2;
			    }
		        }
		      else
		        emit_insn (gen_movhi_bytes (reg, operands[1]));

		      operands[1] = gen_lowpart (HImode, reg);
		    }
	          else if (BYTES_BIG_ENDIAN)
		    {
		      rtx base;
		      rtx offset = const0_rtx;

		      if ((GET_CODE (base = XEXP (operands[1], 0)) == REG
		           || (GET_CODE (base) == PLUS
			      && (GET_CODE (offset = XEXP (base, 1))
				  == CONST_INT)
			      && GET_CODE (base = XEXP (base, 0)) == REG))
		          && REGNO_POINTER_ALIGN (REGNO (base)) >= 32)
		        {
		          rtx reg = gen_reg_rtx (SImode);
		          rtx new;

		          if ((INTVAL (offset) & 2) == 2)
			    {
			      HOST_WIDE_INT new_offset = INTVAL (offset) ^ 2;
			      new = gen_rtx_MEM (SImode,
				  	         plus_constant (base,
								new_offset));
                              MEM_COPY_ATTRIBUTES (new, operands[1]);
			      emit_insn (gen_movsi (reg, new));
			    }
		          else
			    {
			      new = gen_rtx_MEM (SImode,
						 XEXP (operands[1], 0));
	                      MEM_COPY_ATTRIBUTES (new, operands[1]);
			      emit_insn (gen_rotated_loadsi (reg, new));
			    }

		          operands[1] = gen_lowpart (HImode, reg);
		        }
		      else
		        {
		          emit_insn (gen_movhi_bigend (operands[0],
						       operands[1]));
		          DONE;
		        }
		    }
	       }
	   }
        }
      /* Handle loading a large integer during reload.  */
      else if (GET_CODE (operands[1]) == CONST_INT
	       && !const_ok_for_arm (INTVAL (operands[1]))
	       && !const_ok_for_arm (~INTVAL (operands[1])))
        {
          /* Writing a constant to memory needs a scratch, which should
	     be handled with SECONDARY_RELOADs.  */
          if (GET_CODE (operands[0]) != REG)
	    abort ();

          operands[0] = gen_rtx_SUBREG (SImode, operands[0], 0);
          emit_insn (gen_movsi (operands[0], operands[1]));
          DONE;
       }
    }
  else /* TARGET_THUMB */
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) != REG)
	    operands[1] = force_reg (HImode, operands[1]);

          /* ??? We shouldn't really get invalid addresses here, but this can
	     happen if we are passed a SP (never OK for HImode/QImode) or 
	     virtual register (rejected by GO_IF_LEGITIMATE_ADDRESS for 
	     HImode/QImode) relative address.  */
          /* ??? This should perhaps be fixed elsewhere, for instance, in
	     fixup_stack_1, by checking for other kinds of invalid addresses,
	     e.g. a bare reference to a virtual register.  This may confuse the
	     alpha though, which must handle this case differently.  */
          if (GET_CODE (operands[0]) == MEM
	      && !memory_address_p (GET_MODE (operands[0]),
				    XEXP (operands[0], 0)))
	    operands[0]
	      = replace_equiv_address (operands[0],
				       copy_to_reg (XEXP (operands[0], 0)));
   
          if (GET_CODE (operands[1]) == MEM
	      && !memory_address_p (GET_MODE (operands[1]),
				    XEXP (operands[1], 0)))
	    operands[1]
	      = replace_equiv_address (operands[1],
				       copy_to_reg (XEXP (operands[1], 0)));
        }
      /* Handle loading a large integer during reload.  */
      else if (GET_CODE (operands[1]) == CONST_INT
	        && !CONST_OK_FOR_THUMB_LETTER (INTVAL (operands[1]), 'I'))
        {
          /* Writing a constant to memory needs a scratch, which should
	     be handled with SECONDARY_RELOADs.  */
          if (GET_CODE (operands[0]) != REG)
	    abort ();

          operands[0] = gen_rtx (SUBREG, SImode, operands[0], 0);
          emit_insn (gen_movsi (operands[0], operands[1]));
          DONE;
        }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4539 */
rtx
gen_movhi_bytes (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx mem1, mem2;
    rtx addr = copy_to_mode_reg (SImode, XEXP (operands[1], 0));

    mem1 = gen_rtx_MEM (QImode, addr);
    MEM_COPY_ATTRIBUTES (mem1, operands[1]);
    mem2 = gen_rtx_MEM (QImode, plus_constant (addr, 1));
    MEM_COPY_ATTRIBUTES (mem2, operands[1]);
    operands[0] = gen_lowpart (SImode, operands[0]);
    operands[1] = mem1;
    operands[2] = gen_reg_rtx (SImode);
    operands[3] = gen_reg_rtx (SImode);
    operands[6] = mem2;

    if (BYTES_BIG_ENDIAN)
      {
	operands[4] = operands[2];
	operands[5] = operands[3];
      }
    else
      {
	operands[4] = operands[3];
	operands[5] = operands[2];
      }
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
    operand5 = operands[5];
    operand6 = operands[6];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ZERO_EXTEND (SImode,
	operand6)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand4,
	GEN_INT (8L)),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4574 */
rtx
gen_movhi_bigend (rtx operand0,
	rtx operand1)
{
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;

  operands[2] = gen_reg_rtx (SImode);
  operands[3] = gen_reg_rtx (SImode);
  operands[4] = gen_lowpart (HImode, operands[3]);
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ROTATE (SImode,
	gen_rtx_SUBREG (SImode,
	operand1,
	0),
	GEN_INT (16L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand2,
	GEN_INT (16L))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4687 */
rtx
gen_reload_outhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
if (TARGET_ARM)
     arm_reload_out_hi (operands);
   else
     thumb_reload_out_hi (operands);
  DONE;
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4700 */
rtx
gen_reload_inhi (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  if (TARGET_ARM)
    arm_reload_in_hi (operands);
  else
    thumb_reload_out_hi (operands);
  DONE;

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4713 */
rtx
gen_movqi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_ARM)
    {
      /* Everything except mem = const or mem = mem can be done easily */

      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[1]) == CONST_INT)
	    {
	      rtx reg = gen_reg_rtx (SImode);

	      emit_insn (gen_movsi (reg, operands[1]));
	      operands[1] = gen_lowpart (QImode, reg);
	    }
	  if (GET_CODE (operands[1]) == MEM && optimize > 0)
	    {
	      rtx reg = gen_reg_rtx (SImode);

	      emit_insn (gen_zero_extendqisi2 (reg, operands[1]));
	      operands[1] = gen_lowpart (QImode, reg);
	    }
          if (GET_CODE (operands[0]) == MEM)
	    operands[1] = force_reg (QImode, operands[1]);
        }
    }
  else /* TARGET_THUMB */
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) != REG)
	    operands[1] = force_reg (QImode, operands[1]);

          /* ??? We shouldn't really get invalid addresses here, but this can
	     happen if we are passed a SP (never OK for HImode/QImode) or
	     virtual register (rejected by GO_IF_LEGITIMATE_ADDRESS for
	     HImode/QImode) relative address.  */
          /* ??? This should perhaps be fixed elsewhere, for instance, in
	     fixup_stack_1, by checking for other kinds of invalid addresses,
	     e.g. a bare reference to a virtual register.  This may confuse the
	     alpha though, which must handle this case differently.  */
          if (GET_CODE (operands[0]) == MEM
	      && !memory_address_p (GET_MODE (operands[0]),
		  		     XEXP (operands[0], 0)))
	    operands[0]
	      = replace_equiv_address (operands[0],
				       copy_to_reg (XEXP (operands[0], 0)));
          if (GET_CODE (operands[1]) == MEM
	      && !memory_address_p (GET_MODE (operands[1]),
				    XEXP (operands[1], 0)))
	     operands[1]
	       = replace_equiv_address (operands[1],
					copy_to_reg (XEXP (operands[1], 0)));
        }
      /* Handle loading a large integer during reload.  */
      else if (GET_CODE (operands[1]) == CONST_INT
	       && !CONST_OK_FOR_LETTER_P (INTVAL (operands[1]), 'I'))
        {
          /* Writing a constant to memory needs a scratch, which should
	     be handled with SECONDARY_RELOADs.  */
          if (GET_CODE (operands[0]) != REG)
	    abort ();

          operands[0] = gen_rtx_SUBREG (SImode, operands[0], 0);
          emit_insn (gen_movsi (operands[0], operands[1]));
          DONE;
       }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4821 */
rtx
gen_movsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_ARM)
    {
      if (GET_CODE (operands[0]) == MEM)
        operands[1] = force_reg (SFmode, operands[1]);
    }
  else /* TARGET_THUMB */
    {
      if (!no_new_pseudos)
        {
           if (GET_CODE (operands[0]) != REG)
	     operands[1] = force_reg (SFmode, operands[1]);
        }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4842 */
extern rtx gen_split_648 (rtx *);
rtx
gen_split_648 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operands[2] = gen_lowpart (SImode, operands[0]);
  operands[3] = gen_lowpart (SImode, operands[1]);
  if (operands[2] == 0 || operands[3] == 0)
    FAIL;
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4897 */
rtx
gen_movdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_ARM)
    {
      if (GET_CODE (operands[0]) == MEM)
        operands[1] = force_reg (DFmode, operands[1]);
    }
  else /* TARGET_THUMB */
    {
      if (!no_new_pseudos)
        {
          if (GET_CODE (operands[0]) != REG)
	    operands[1] = force_reg (DFmode, operands[1]);
        }
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:4920 */
rtx
gen_reload_outdf (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  {
    enum rtx_code code = GET_CODE (XEXP (operands[0], 0));

    if (code == REG)
      operands[2] = XEXP (operands[0], 0);
    else if (code == POST_INC || code == PRE_DEC)
      {
	operands[0] = gen_rtx_SUBREG (DImode, operands[0], 0);
	operands[1] = gen_rtx_SUBREG (DImode, operands[1], 0);
	emit_insn (gen_movdi (operands[0], operands[1]));
	DONE;
      }
    else if (code == PRE_INC)
      {
	rtx reg = XEXP (XEXP (operands[0], 0), 0);

	emit_insn (gen_addsi3 (reg, reg, GEN_INT (8)));
	operands[2] = reg;
      }
    else if (code == POST_DEC)
      operands[2] = XEXP (XEXP (operands[0], 0), 0);
    else
      emit_insn (gen_addsi3 (operands[2], XEXP (XEXP (operands[0], 0), 0),
			     XEXP (XEXP (operands[0], 0), 1)));

    emit_insn (gen_rtx_SET (VOIDmode, gen_rtx_MEM (DFmode, operands[2]),
			    operands[1]));

    if (code == POST_DEC)
      emit_insn (gen_addsi3 (operands[2], operands[2], GEN_INT (-8)));

    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5015 */
rtx
gen_movv2si (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5022 */
rtx
gen_movv4hi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5029 */
rtx
gen_movv8qi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5041 */
rtx
gen_load_multiple (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  HOST_WIDE_INT offset = 0;
  
  /* Support only fixed point registers.  */
  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) > 14
      || INTVAL (operands[2]) < 2
      || GET_CODE (operands[1]) != MEM
      || GET_CODE (operands[0]) != REG
      || REGNO (operands[0]) > (LAST_ARM_REGNUM - 1)
      || REGNO (operands[0]) + INTVAL (operands[2]) > LAST_ARM_REGNUM)
    FAIL;

  operands[3]
    = arm_gen_load_multiple (REGNO (operands[0]), INTVAL (operands[2]),
			     force_reg (SImode, XEXP (operands[1], 0)),
			     TRUE, FALSE, operands[1], &offset);

}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5163 */
rtx
gen_store_multiple (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  HOST_WIDE_INT offset = 0;

  /* Support only fixed point registers.  */
  if (GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) > 14
      || INTVAL (operands[2]) < 2
      || GET_CODE (operands[1]) != REG
      || GET_CODE (operands[0]) != MEM
      || REGNO (operands[1]) > (LAST_ARM_REGNUM - 1)
      || REGNO (operands[1]) + INTVAL (operands[2]) > LAST_ARM_REGNUM)
    FAIL;

  operands[3]
    = arm_gen_store_multiple (REGNO (operands[1]), INTVAL (operands[2]),
			      force_reg (SImode, XEXP (operands[0], 0)),
			      TRUE, FALSE, operands[0], &offset);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5288 */
rtx
gen_movstrqi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  if (TARGET_ARM)
    {
      if (arm_gen_movstrqi (operands))
        DONE;
      FAIL;
    }
  else /* TARGET_THUMB */
    {
      if (   INTVAL (operands[3]) != 4
          || INTVAL (operands[2]) > 48)
        FAIL;

      thumb_expand_movstrqi (operands);
      DONE;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:5375 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  if (thumb_cmpneg_operand (operands[2], SImode))
    {
      emit_jump_insn (gen_cbranchsi4_scratch (NULL, operands[1], operands[2],
					      operands[3], operands[0]));
      DONE;
    }
  if (!thumb_cmp_operand (operands[2], SImode))
    operands[2] = force_reg (SImode, operands[2]);
  
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6397 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
    arm_compare_op0 = operands[0];
    arm_compare_op1 = operands[1];
    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6408 */
rtx
gen_cmpsf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS && !cirrus_fp_register (operands[1], SFmode))
    operands[1] = force_reg (SFmode, operands[1]);

  arm_compare_op0 = operands[0];
  arm_compare_op1 = operands[1];
  DONE;
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6422 */
rtx
gen_cmpdf (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (TARGET_CIRRUS && !cirrus_fp_register (operands[1], DFmode))
    operands[1] = force_reg (DFmode, operands[1]);

  arm_compare_op0 = operands[0];
  arm_compare_op1 = operands[1];
  DONE;
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6509 */
rtx
gen_cmpdi (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
     arm_compare_op0 = operands[0];
     arm_compare_op1 = operands[1];
     DONE;
   }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (operand0);
  emit (operand1);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6546 */
rtx
gen_beq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (EQ, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6555 */
rtx
gen_bne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (NE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6564 */
rtx
gen_bgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6573 */
rtx
gen_ble (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6582 */
rtx
gen_bge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6591 */
rtx
gen_blt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6600 */
rtx
gen_bgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GTU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6609 */
rtx
gen_bleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LEU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6618 */
rtx
gen_bgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GEU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6627 */
rtx
gen_bltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LTU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6636 */
rtx
gen_bunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNORDERED, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNORDERED (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6646 */
rtx
gen_bordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (ORDERED, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_ORDERED (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6656 */
rtx
gen_bungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNGT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6665 */
rtx
gen_bunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNLT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6674 */
rtx
gen_bunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNGE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNGE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6683 */
rtx
gen_bunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNLE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNLE (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6694 */
rtx
gen_buneq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNEQ, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_UNEQ (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6703 */
rtx
gen_bltgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LTGT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTGT (VOIDmode,
	operand1,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6824 */
rtx
gen_seq (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (EQ, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6831 */
rtx
gen_sne (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (NE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6838 */
rtx
gen_sgt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6845 */
rtx
gen_sle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6852 */
rtx
gen_sge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GE, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6859 */
rtx
gen_slt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LT, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6866 */
rtx
gen_sgtu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GTU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6873 */
rtx
gen_sleu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LEU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6880 */
rtx
gen_sgeu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (GEU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6887 */
rtx
gen_sltu (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (LTU, arm_compare_op0, arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6894 */
rtx
gen_sunordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNORDERED, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6902 */
rtx
gen_sordered (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (ORDERED, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6910 */
rtx
gen_sungt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNGT, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6918 */
rtx
gen_sunge (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNGE, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6926 */
rtx
gen_sunlt (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNLT, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6934 */
rtx
gen_sunle (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
operands[1] = arm_gen_compare_reg (UNLE, arm_compare_op0,
				      arm_compare_op1);
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (SImode,
	operand1,
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:6992 */
rtx
gen_movsicc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    enum rtx_code code = GET_CODE (operands[1]);
    rtx ccreg;

    if (code == UNEQ || code == LTGT)
      FAIL;

    ccreg = arm_gen_compare_reg (code, arm_compare_op0, arm_compare_op1);
    operands[1] = gen_rtx (code, VOIDmode, ccreg, const0_rtx);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7011 */
rtx
gen_movsfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    enum rtx_code code = GET_CODE (operands[1]);
    rtx ccreg;

    if (code == UNEQ || code == LTGT)
      FAIL;

    /* When compiling for SOFT_FLOAT, ensure both arms are in registers. 
       Otherwise, ensure it is a valid FP add operand.  */
    if ((!TARGET_HARD_FLOAT)
        || (!fpa_add_operand (operands[3], SFmode)))
      operands[3] = force_reg (SFmode, operands[3]);

    ccreg = arm_gen_compare_reg (code, arm_compare_op0, arm_compare_op1);
    operands[1] = gen_rtx (code, VOIDmode, ccreg, const0_rtx);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7036 */
rtx
gen_movdfcc (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    enum rtx_code code = GET_CODE (operands[1]);
    rtx ccreg;

    if (code == UNEQ || code == LTGT)
      FAIL;

    ccreg = arm_gen_compare_reg (code, arm_compare_op0, arm_compare_op1);
    operands[1] = gen_rtx (code, VOIDmode, ccreg, const0_rtx);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7092 */
rtx
gen_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7138 */
rtx
gen_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  {
    rtx callee;
    
    /* In an untyped call, we can get NULL for operand 2.  */
    if (operands[2] == NULL_RTX)
      operands[2] = const0_rtx;
      
    /* This is to decide if we should generate indirect calls by loading the
       32 bit address of the callee into a register before performing the
       branch and link.  operand[2] encodes the long_call/short_call
       attribute of the function being called.  This attribute is set whenever
       __attribute__((long_call/short_call)) or #pragma long_call/no_long_call
       is used, and the short_call attribute can also be set if function is
       declared as static or if it has already been defined in the current
       compilation unit.  See arm.c and arm.h for info about this.  The third
       parameter to arm_is_longcall_p is used to tell it which pattern
       invoked it.  */
    callee  = XEXP (operands[0], 0);
    
    if (GET_CODE (callee) != REG
       && arm_is_longcall_p (operands[0], INTVAL (operands[2]), 0))
      XEXP (operands[0], 0) = force_reg (Pmode, callee);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	14)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7230 */
rtx
gen_call_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    rtx callee = XEXP (operands[1], 0);
    
    /* In an untyped call, we can get NULL for operand 2.  */
    if (operands[3] == 0)
      operands[3] = const0_rtx;
      
    /* See the comment in define_expand "call".  */
    if (GET_CODE (callee) != REG
	&& arm_is_longcall_p (operands[1], INTVAL (operands[3]), 0))
      XEXP (operands[1], 0) = force_reg (Pmode, callee);
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	14)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7342 */
rtx
gen_sibcall (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  {
    if (operands[2] == NULL_RTX)
      operands[2] = const0_rtx;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7355 */
rtx
gen_sibcall_value (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;

  {
    if (operands[3] == NULL_RTX)
      operands[3] = const0_rtx;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7457 */
rtx
gen_return_addr_mask (rtx operand0)
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;

  operands[1] = gen_rtx_REG (CC_NOOVmode, CC_REGNUM);
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_UNSPEC (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	7),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_EQ (VOIDmode,
	operand1,
	const0_rtx),
	constm1_rtx,
	GEN_INT (67108860L))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7482 */
rtx
gen_untyped_call (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  {
    int i;

    emit_call_insn (GEN_CALL (operands[0], const0_rtx, NULL, const0_rtx));

    for (i = 0; i < XVECLEN (operands[2], 0); i++)
      {
	rtx set = XVECEXP (operands[2], 0, i);

	emit_move_insn (SET_DEST (set), SET_SRC (set));
      }

    /* The optimizer does not know that the call sets the function value
       registers we stored in the result block.  We avoid problems by
       claiming that all hard registers are used and clobbered at this
       point.  */
    emit_insn (gen_blockage ());

    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7522 */
rtx
gen_casesi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;

  {
    rtx reg;
    if (operands[1] != const0_rtx)
      {
	reg = gen_reg_rtx (SImode);

	emit_insn (gen_addsi3 (reg, operands[0],
			       GEN_INT (-INTVAL (operands[1]))));
	operands[0] = reg;
      }

    if (!const_ok_for_arm (INTVAL (operands[2])))
      operands[2] = force_reg (SImode, operands[2]);

    emit_jump_insn (gen_casesi_internal (operands[0], operands[2], operands[3],
					 operands[4]));
    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  emit (operand4);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7572 */
rtx
gen_indirect_jump (rtx operand0)
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:7643 */
extern rtx gen_split_708 (rtx *);
rtx
gen_split_708 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand8,
	gen_rtx (GET_CODE (operand2), GET_MODE (operand2),
		gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand4,
		operand5),
		operand6)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand8),
		operand7)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8017 */
extern rtx gen_split_709 (rtx *);
rtx
gen_split_709 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
operands[7]
     = gen_rtx_REG (arm_select_dominance_cc_mode (operands[3], operands[6],
						  DOM_CC_X_OR_Y),
		    CC_REGNUM);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_IOR (SImode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2),
	gen_rtx (GET_CODE (operand6), GET_MODE (operand6),
		operand4,
		operand5)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	copy_rtx (operand7),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8047 */
extern rtx gen_split_710 (rtx *);
rtx
gen_split_710 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_IOR (SImode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2),
	gen_rtx (GET_CODE (operand6), GET_MODE (operand6),
		operand4,
		operand5)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_NE (SImode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8073 */
extern rtx gen_split_711 (rtx *);
rtx
gen_split_711 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
operands[7]
     = gen_rtx_REG (arm_select_dominance_cc_mode (operands[3], operands[6],
						  DOM_CC_X_AND_Y),
		    CC_REGNUM);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2),
	gen_rtx (GET_CODE (operand6), GET_MODE (operand6),
		operand4,
		operand5)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (SImode,
	copy_rtx (operand7),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8105 */
extern rtx gen_split_712 (rtx *);
rtx
gen_split_712 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2),
	gen_rtx (GET_CODE (operand6), GET_MODE (operand6),
		operand4,
		operand5)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx_NE (SImode,
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8135 */
extern rtx gen_split_713 (rtx *);
rtx
gen_split_713 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
operands[7] = gen_rtx_REG (SELECT_CC_MODE (GET_CODE (operands[6]),
					      operands[4], operands[5]),
			      CC_REGNUM);
   operands[8] = gen_rtx_COMPARE (GET_MODE (operands[7]), operands[4],
				  operands[5]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand7,
	gen_rtx (GET_CODE (operand8), GET_MODE (operand8),
		operand4,
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand6), GET_MODE (operand6),
		copy_rtx (operand7),
		const0_rtx),
	copy_rtx (operand0),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8165 */
extern rtx gen_split_714 (rtx *);
rtx
gen_split_714 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_IOR (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		operand3),
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	24),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_AND (SImode,
	copy_rtx (operand4),
	const1_rtx),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:8184 */
extern rtx gen_split_715 (rtx *);
rtx
gen_split_715 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_IOR (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		operand2,
		operand3),
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CC_NOOVmode,
	24),
	gen_rtx_COMPARE (CC_NOOVmode,
	gen_rtx_AND (SImode,
	copy_rtx (operand4),
	const1_rtx),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9386 */
extern rtx gen_peephole2_723 (rtx, rtx *);
rtx
gen_peephole2_723 (rtx curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	24),
	gen_rtx_COMPARE (CCmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9482 */
extern rtx gen_split_730 (rtx *);
rtx
gen_split_730 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	GEN_INT (31L)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx (GET_CODE (operand2), GET_MODE (operand2),
		operand3,
		operand4),
	copy_rtx (operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9501 */
extern rtx gen_split_731 (rtx *);
rtx
gen_split_731 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operands[1] = GEN_INT (((unsigned long) INTVAL (operands[1])) >> 24);
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	24),
	gen_rtx_COMPARE (CCmode,
	copy_rtx (operand2),
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9518 */
rtx
gen_prologue (void)
{
  rtx _val = 0;
  start_sequence ();
  {
if (TARGET_ARM)
     arm_expand_prologue ();
   else
     thumb_expand_prologue ();
  DONE;
  
  }
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	const0_rtx));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9529 */
rtx
gen_epilogue (void)
{
  rtx _val = 0;
  start_sequence ();
  {

  if (TARGET_THUMB)
    thumb_expand_epilogue ();
  else if (USE_RETURN_INSN (FALSE))
    {
      emit_jump_insn (gen_return ());
      DONE;
    }
  emit_jump_insn (gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_RETURN (VOIDmode)),
	VUNSPEC_EPILOGUE));
  DONE;
  
  }
  emit_insn (gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		gen_rtx_RETURN (VOIDmode)),
	1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9589 */
rtx
gen_eh_epilogue (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;

  {
    cfun->machine->eh_epilogue_sp_ofs = operands[1];
    if (GET_CODE (operands[2]) != REG || REGNO (operands[2]) != 2)
      {
	rtx ra = gen_rtx_REG (Pmode, 2);

	emit_move_insn (ra, operands[2]);
	operands[2] = ra;
      }
    /* This is a hack -- we may have crystalized the function type too
       early.  */
    cfun->machine->func_type = 0;
  }
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9617 */
extern rtx gen_split_735 (rtx *);
rtx
gen_split_735 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();

  {
    enum machine_mode mode = SELECT_CC_MODE (GET_CODE (operands[1]),
					     operands[2], operands[3]);
    enum rtx_code rc = GET_CODE (operands[1]);

    operands[5] = gen_rtx_REG (mode, CC_REGNUM);
    operands[6] = gen_rtx_COMPARE (mode, operands[2], operands[3]);
    if (mode == CCFPmode || mode == CCFPEmode)
      rc = reverse_condition_maybe_unordered (rc);
    else
      rc = reverse_condition (rc);

    operands[7] = gen_rtx_fmt_ee (rc, VOIDmode, operands[5], const0_rtx);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	operand6));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	operand7,
	gen_rtx_SET (VOIDmode,
	operand0,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9645 */
extern rtx gen_split_736 (rtx *);
rtx
gen_split_736 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();

  {
    enum machine_mode mode = SELECT_CC_MODE (GET_CODE (operands[1]),
					     operands[2], operands[3]);

    operands[5] = gen_rtx_REG (mode, CC_REGNUM);
    operands[6] = gen_rtx_COMPARE (mode, operands[2], operands[3]);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand5,
	operand6));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand5),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9666 */
extern rtx gen_split_737 (rtx *);
rtx
gen_split_737 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  {
    enum machine_mode mode = SELECT_CC_MODE (GET_CODE (operands[1]),
					     operands[2], operands[3]);
    enum rtx_code rc = GET_CODE (operands[1]);

    operands[6] = gen_rtx_REG (mode, CC_REGNUM);
    operands[7] = gen_rtx_COMPARE (mode, operands[2], operands[3]);
    if (mode == CCFPmode || mode == CCFPEmode)
      rc = reverse_condition_maybe_unordered (rc);
    else
      rc = reverse_condition (rc);

    operands[8] = gen_rtx_fmt_ee (rc, VOIDmode, operands[6], const0_rtx);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	operand4)));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	operand8,
	gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	operand5)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9696 */
extern rtx gen_split_738 (rtx *);
rtx
gen_split_738 (rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();

  {
    enum machine_mode mode = SELECT_CC_MODE (GET_CODE (operands[1]),
					     operands[2], operands[3]);
    enum rtx_code rc = GET_CODE (operands[1]);

    operands[6] = gen_rtx_REG (mode, CC_REGNUM);
    operands[7] = gen_rtx (COMPARE, mode, operands[2], operands[3]);
    if (mode == CCFPmode || mode == CCFPEmode)
      rc = reverse_condition_maybe_unordered (rc);
    else
      rc = reverse_condition (rc);

    operands[8] = gen_rtx_fmt_ee (rc, VOIDmode, operands[6], const0_rtx);
  }
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand6,
	operand7));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand6),
		const0_rtx),
	gen_rtx_SET (VOIDmode,
	operand0,
	operand4)));
  emit_insn (gen_rtx_COND_EXEC (VOIDmode,
	operand8,
	gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_NOT (SImode,
	operand5))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9951 */
rtx
gen_tablejump (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  if (flag_pic)
    {
      /* Hopefully, CSE will eliminate this copy.  */
      rtx reg1 = copy_addr_to_reg (gen_rtx_LABEL_REF (Pmode, operands[1]));
      rtx reg2 = gen_reg_rtx (SImode);

      emit_insn (gen_addsi3 (reg2, operands[0], reg1));
      operands[0] = reg2;
    }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:9985 */
rtx
gen_ffssi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx t1, t2, t3;

    t1 = gen_reg_rtx (SImode);
    t2 = gen_reg_rtx (SImode);
    t3 = gen_reg_rtx (SImode);

    emit_insn (gen_negsi2 (t1, operands[1]));
    emit_insn (gen_andsi3 (t2, operands[1], t1));
    emit_insn (gen_clzsi2 (t3, t2));
    emit_insn (gen_subsi3 (operands[0], GEN_INT (32), t3));
    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/arm/arm.md:10005 */
rtx
gen_ctzsi2 (rtx operand0,
	rtx operand1)
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;

  {
    rtx t1, t2, t3;

    t1 = gen_reg_rtx (SImode);
    t2 = gen_reg_rtx (SImode);
    t3 = gen_reg_rtx (SImode);

    emit_insn (gen_negsi2 (t1, operands[1]));
    emit_insn (gen_andsi3 (t2, operands[1], t1));
    emit_insn (gen_clzsi2 (t3, t2));
    emit_insn (gen_subsi3 (operands[0], GEN_INT (31), t3));
    DONE;
  }
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CTZ (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 391:
    case 390:
    case 387:
    case 386:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

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
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (SImode,
	14));
      break;

    case 177:
    case 175:
    case 174:
    case 173:
    case 171:
    case 169:
    case 167:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 160:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 159:
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 6) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 273:
    case 227:
    case 224:
    case 176:
    case 172:
    case 170:
    case 168:
    case 165:
    case 162:
    case 118:
    case 109:
    case 98:
    case 95:
    case 74:
    case 67:
    case 57:
    case 44:
    case 43:
    case 38:
    case 35:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 381:
    case 300:
    case 299:
    case 271:
    case 269:
    case 267:
    case 265:
    case 263:
    case 261:
    case 259:
    case 257:
    case 255:
    case 253:
    case 251:
    case 249:
    case 247:
    case 245:
    case 244:
    case 243:
    case 242:
    case 240:
    case 238:
    case 233:
    case 232:
    case 230:
    case 104:
    case 103:
    case 100:
    case 99:
    case 88:
    case 87:
    case 86:
    case 85:
    case 84:
    case 83:
    case 59:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 3:
    case 2:
    case 1:
    case 0:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	24));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 391:
    case 390:
    case 387:
    case 386:
    case 177:
    case 175:
    case 174:
    case 173:
    case 171:
    case 169:
    case 167:
    case 160:
    case 159:
    case 273:
    case 227:
    case 224:
    case 176:
    case 172:
    case 170:
    case 168:
    case 165:
    case 162:
    case 118:
    case 109:
    case 98:
    case 95:
    case 74:
    case 67:
    case 57:
    case 44:
    case 43:
    case 38:
    case 35:
      return 0;

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
    case 381:
    case 300:
    case 299:
    case 271:
    case 269:
    case 267:
    case 265:
    case 263:
    case 261:
    case 259:
    case 257:
    case 255:
    case 253:
    case 251:
    case 249:
    case 247:
    case 245:
    case 244:
    case 243:
    case 242:
    case 240:
    case 238:
    case 233:
    case 232:
    case 230:
    case 104:
    case 103:
    case 100:
    case 99:
    case 88:
    case 87:
    case 86:
    case 85:
    case 84:
    case 83:
    case 59:
    case 27:
    case 26:
    case 25:
    case 24:
    case 23:
    case 22:
    case 21:
    case 3:
    case 2:
    case 1:
    case 0:
      return 1;

    default:
      abort ();
    }
}
