/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "flags.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "optabs.h"
#include "reload.h"

void
init_all_optabs (void)
{
#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  int i, j;
#endif

  if (HAVE_mulsidi3)
    smul_widen_optab->handlers[DImode].insn_code = CODE_FOR_mulsidi3;
  if (HAVE_umulsidi3)
    umul_widen_optab->handlers[DImode].insn_code = CODE_FOR_umulsidi3;
  if (HAVE_smulsi3_highpart)
    smul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_smulsi3_highpart;
  if (HAVE_umulsi3_highpart)
    umul_highpart_optab->handlers[SImode].insn_code = CODE_FOR_umulsi3_highpart;
  if (HAVE_mulhisi3)
    smul_widen_optab->handlers[SImode].insn_code = CODE_FOR_mulhisi3;
  if (HAVE_anddi3)
    and_optab->handlers[DImode].insn_code = CODE_FOR_anddi3;
  if (HAVE_iordi3)
    ior_optab->handlers[DImode].insn_code = CODE_FOR_iordi3;
  if (HAVE_xordi3)
    xor_optab->handlers[DImode].insn_code = CODE_FOR_xordi3;
  if (HAVE_smaxsi3)
    smax_optab->handlers[SImode].insn_code = CODE_FOR_smaxsi3;
  if (HAVE_sminsi3)
    smin_optab->handlers[SImode].insn_code = CODE_FOR_sminsi3;
  if (HAVE_umaxsi3)
    umax_optab->handlers[SImode].insn_code = CODE_FOR_umaxsi3;
  if (HAVE_uminsi3)
    umin_optab->handlers[SImode].insn_code = CODE_FOR_uminsi3;
  if (HAVE_one_cmpldi2)
    one_cmpl_optab->handlers[DImode].insn_code = CODE_FOR_one_cmpldi2;
  if (HAVE_zero_extendsidi2)
    zext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_zero_extendsidi2;
  if (HAVE_zero_extendqidi2)
    zext_optab->handlers[DImode][QImode].insn_code = CODE_FOR_zero_extendqidi2;
  if (HAVE_extendsidi2)
    sext_optab->handlers[DImode][SImode].insn_code = CODE_FOR_extendsidi2;
  if (HAVE_clzsi2)
    clz_optab->handlers[SImode].insn_code = CODE_FOR_clzsi2;
  if (HAVE_muldi3)
    smul_optab->handlers[DImode].insn_code = CODE_FOR_muldi3;
  if (HAVE_floatdisf2)
    sfloat_optab->handlers[SFmode][DImode].insn_code = CODE_FOR_floatdisf2;
  if (HAVE_floatdidf2)
    sfloat_optab->handlers[DFmode][DImode].insn_code = CODE_FOR_floatdidf2;
  if (HAVE_addv8qi3)
    add_optab->handlers[V8QImode].insn_code = CODE_FOR_addv8qi3;
  if (HAVE_addv4hi3)
    add_optab->handlers[V4HImode].insn_code = CODE_FOR_addv4hi3;
  if (HAVE_addv2si3)
    add_optab->handlers[V2SImode].insn_code = CODE_FOR_addv2si3;
  if (HAVE_subv8qi3)
    sub_optab->handlers[V8QImode].insn_code = CODE_FOR_subv8qi3;
  if (HAVE_subv4hi3)
    sub_optab->handlers[V4HImode].insn_code = CODE_FOR_subv4hi3;
  if (HAVE_subv2si3)
    sub_optab->handlers[V2SImode].insn_code = CODE_FOR_subv2si3;
  if (HAVE_mulv4hi3)
    smul_optab->handlers[V4HImode].insn_code = CODE_FOR_mulv4hi3;
  if (HAVE_smulv4hi3_highpart)
    smul_highpart_optab->handlers[V4HImode].insn_code = CODE_FOR_smulv4hi3_highpart;
  if (HAVE_umulv4hi3_highpart)
    umul_highpart_optab->handlers[V4HImode].insn_code = CODE_FOR_umulv4hi3_highpart;
  if (HAVE_smaxv8qi3)
    smax_optab->handlers[V8QImode].insn_code = CODE_FOR_smaxv8qi3;
  if (HAVE_umaxv8qi3)
    umax_optab->handlers[V8QImode].insn_code = CODE_FOR_umaxv8qi3;
  if (HAVE_smaxv4hi3)
    smax_optab->handlers[V4HImode].insn_code = CODE_FOR_smaxv4hi3;
  if (HAVE_umaxv4hi3)
    umax_optab->handlers[V4HImode].insn_code = CODE_FOR_umaxv4hi3;
  if (HAVE_smaxv2si3)
    smax_optab->handlers[V2SImode].insn_code = CODE_FOR_smaxv2si3;
  if (HAVE_umaxv2si3)
    umax_optab->handlers[V2SImode].insn_code = CODE_FOR_umaxv2si3;
  if (HAVE_sminv8qi3)
    smin_optab->handlers[V8QImode].insn_code = CODE_FOR_sminv8qi3;
  if (HAVE_uminv8qi3)
    umin_optab->handlers[V8QImode].insn_code = CODE_FOR_uminv8qi3;
  if (HAVE_sminv4hi3)
    smin_optab->handlers[V4HImode].insn_code = CODE_FOR_sminv4hi3;
  if (HAVE_uminv4hi3)
    umin_optab->handlers[V4HImode].insn_code = CODE_FOR_uminv4hi3;
  if (HAVE_sminv2si3)
    smin_optab->handlers[V2SImode].insn_code = CODE_FOR_sminv2si3;
  if (HAVE_uminv2si3)
    umin_optab->handlers[V2SImode].insn_code = CODE_FOR_uminv2si3;
  if (HAVE_ashrv4hi3)
    ashr_optab->handlers[V4HImode].insn_code = CODE_FOR_ashrv4hi3;
  if (HAVE_ashrv2si3)
    ashr_optab->handlers[V2SImode].insn_code = CODE_FOR_ashrv2si3;
  if (HAVE_ashrdi3)
    ashr_optab->handlers[DImode].insn_code = CODE_FOR_ashrdi3;
  if (HAVE_lshrv4hi3)
    lshr_optab->handlers[V4HImode].insn_code = CODE_FOR_lshrv4hi3;
  if (HAVE_lshrv2si3)
    lshr_optab->handlers[V2SImode].insn_code = CODE_FOR_lshrv2si3;
  if (HAVE_lshrdi3)
    lshr_optab->handlers[DImode].insn_code = CODE_FOR_lshrdi3;
  if (HAVE_ashlv4hi3)
    ashl_optab->handlers[V4HImode].insn_code = CODE_FOR_ashlv4hi3;
  if (HAVE_ashlv2si3)
    ashl_optab->handlers[V2SImode].insn_code = CODE_FOR_ashlv2si3;
  if (HAVE_adddi3)
    add_optab->handlers[DImode].insn_code = CODE_FOR_adddi3;
  if (HAVE_addsi3)
    add_optab->handlers[SImode].insn_code = CODE_FOR_addsi3;
  if (HAVE_addsf3)
    addv_optab->handlers[SFmode].insn_code =
    add_optab->handlers[SFmode].insn_code = CODE_FOR_addsf3;
  if (HAVE_adddf3)
    addv_optab->handlers[DFmode].insn_code =
    add_optab->handlers[DFmode].insn_code = CODE_FOR_adddf3;
  if (HAVE_subdi3)
    sub_optab->handlers[DImode].insn_code = CODE_FOR_subdi3;
  if (HAVE_subsi3)
    sub_optab->handlers[SImode].insn_code = CODE_FOR_subsi3;
  if (HAVE_subsf3)
    subv_optab->handlers[SFmode].insn_code =
    sub_optab->handlers[SFmode].insn_code = CODE_FOR_subsf3;
  if (HAVE_subdf3)
    subv_optab->handlers[DFmode].insn_code =
    sub_optab->handlers[DFmode].insn_code = CODE_FOR_subdf3;
  if (HAVE_mulsi3)
    smul_optab->handlers[SImode].insn_code = CODE_FOR_mulsi3;
  if (HAVE_mulsf3)
    smulv_optab->handlers[SFmode].insn_code =
    smul_optab->handlers[SFmode].insn_code = CODE_FOR_mulsf3;
  if (HAVE_muldf3)
    smulv_optab->handlers[DFmode].insn_code =
    smul_optab->handlers[DFmode].insn_code = CODE_FOR_muldf3;
  if (HAVE_divsf3)
    sdiv_optab->handlers[SFmode].insn_code = CODE_FOR_divsf3;
  if (HAVE_divdf3)
    sdiv_optab->handlers[DFmode].insn_code = CODE_FOR_divdf3;
  if (HAVE_modsf3)
    smod_optab->handlers[SFmode].insn_code = CODE_FOR_modsf3;
  if (HAVE_moddf3)
    smod_optab->handlers[DFmode].insn_code = CODE_FOR_moddf3;
  if (HAVE_andsi3)
    and_optab->handlers[SImode].insn_code = CODE_FOR_andsi3;
  if (HAVE_iorsi3)
    ior_optab->handlers[SImode].insn_code = CODE_FOR_iorsi3;
  if (HAVE_xorsi3)
    xor_optab->handlers[SImode].insn_code = CODE_FOR_xorsi3;
  if (HAVE_ashlsi3)
    ashl_optab->handlers[SImode].insn_code = CODE_FOR_ashlsi3;
  if (HAVE_ashrsi3)
    ashr_optab->handlers[SImode].insn_code = CODE_FOR_ashrsi3;
  if (HAVE_lshrsi3)
    lshr_optab->handlers[SImode].insn_code = CODE_FOR_lshrsi3;
  if (HAVE_rotlsi3)
    rotl_optab->handlers[SImode].insn_code = CODE_FOR_rotlsi3;
  if (HAVE_rotrsi3)
    rotr_optab->handlers[SImode].insn_code = CODE_FOR_rotrsi3;
  if (HAVE_ashldi3)
    ashl_optab->handlers[DImode].insn_code = CODE_FOR_ashldi3;
  if (HAVE_negdi2)
    neg_optab->handlers[DImode].insn_code = CODE_FOR_negdi2;
  if (HAVE_negsi2)
    neg_optab->handlers[SImode].insn_code = CODE_FOR_negsi2;
  if (HAVE_negsf2)
    negv_optab->handlers[SFmode].insn_code =
    neg_optab->handlers[SFmode].insn_code = CODE_FOR_negsf2;
  if (HAVE_negdf2)
    negv_optab->handlers[DFmode].insn_code =
    neg_optab->handlers[DFmode].insn_code = CODE_FOR_negdf2;
  if (HAVE_abssi2)
    abs_optab->handlers[SImode].insn_code = CODE_FOR_abssi2;
  if (HAVE_abssf2)
    absv_optab->handlers[SFmode].insn_code =
    abs_optab->handlers[SFmode].insn_code = CODE_FOR_abssf2;
  if (HAVE_absdf2)
    absv_optab->handlers[DFmode].insn_code =
    abs_optab->handlers[DFmode].insn_code = CODE_FOR_absdf2;
  if (HAVE_sqrtsf2)
    sqrt_optab->handlers[SFmode].insn_code = CODE_FOR_sqrtsf2;
  if (HAVE_sqrtdf2)
    sqrt_optab->handlers[DFmode].insn_code = CODE_FOR_sqrtdf2;
  if (HAVE_one_cmplsi2)
    one_cmpl_optab->handlers[SImode].insn_code = CODE_FOR_one_cmplsi2;
  if (HAVE_floatsisf2)
    sfloat_optab->handlers[SFmode][SImode].insn_code = CODE_FOR_floatsisf2;
  if (HAVE_floatsidf2)
    sfloat_optab->handlers[DFmode][SImode].insn_code = CODE_FOR_floatsidf2;
  if (HAVE_fix_truncsfsi2)
    sfixtrunc_optab->handlers[SImode][SFmode].insn_code = CODE_FOR_fix_truncsfsi2;
  if (HAVE_fix_truncdfsi2)
    sfixtrunc_optab->handlers[SImode][DFmode].insn_code = CODE_FOR_fix_truncdfsi2;
  if (HAVE_truncdfsf2)
    trunc_optab->handlers[SFmode][DFmode].insn_code = CODE_FOR_truncdfsf2;
  if (HAVE_zero_extendhisi2)
    zext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_zero_extendhisi2;
  if (HAVE_zero_extendqisi2)
    zext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_zero_extendqisi2;
  if (HAVE_extendhisi2)
    sext_optab->handlers[SImode][HImode].insn_code = CODE_FOR_extendhisi2;
  if (HAVE_extendqihi2)
    sext_optab->handlers[HImode][QImode].insn_code = CODE_FOR_extendqihi2;
  if (HAVE_extendqisi2)
    sext_optab->handlers[SImode][QImode].insn_code = CODE_FOR_extendqisi2;
  if (HAVE_extendsfdf2)
    sext_optab->handlers[DFmode][SFmode].insn_code = CODE_FOR_extendsfdf2;
  if (HAVE_movdi)
    mov_optab->handlers[DImode].insn_code = CODE_FOR_movdi;
  if (HAVE_movsi)
    mov_optab->handlers[SImode].insn_code = CODE_FOR_movsi;
  if (HAVE_movhi)
    mov_optab->handlers[HImode].insn_code = CODE_FOR_movhi;
  if (HAVE_reload_outhi)
    reload_out_optab[HImode] = CODE_FOR_reload_outhi;
  if (HAVE_reload_inhi)
    reload_in_optab[HImode] = CODE_FOR_reload_inhi;
  if (HAVE_movqi)
    mov_optab->handlers[QImode].insn_code = CODE_FOR_movqi;
  if (HAVE_movsf)
    mov_optab->handlers[SFmode].insn_code = CODE_FOR_movsf;
  if (HAVE_movdf)
    mov_optab->handlers[DFmode].insn_code = CODE_FOR_movdf;
  if (HAVE_reload_outdf)
    reload_out_optab[DFmode] = CODE_FOR_reload_outdf;
  if (HAVE_movv2si)
    mov_optab->handlers[V2SImode].insn_code = CODE_FOR_movv2si;
  if (HAVE_movv4hi)
    mov_optab->handlers[V4HImode].insn_code = CODE_FOR_movv4hi;
  if (HAVE_movv8qi)
    mov_optab->handlers[V8QImode].insn_code = CODE_FOR_movv8qi;
  if (HAVE_movstrqi)
    movstr_optab[QImode] = CODE_FOR_movstrqi;
  if (HAVE_cbranchsi4)
    cbranch_optab->handlers[SImode].insn_code = CODE_FOR_cbranchsi4;
  if (HAVE_cmpsi)
    cmp_optab->handlers[SImode].insn_code = CODE_FOR_cmpsi;
  if (HAVE_cmpsf)
    cmp_optab->handlers[SFmode].insn_code = CODE_FOR_cmpsf;
  if (HAVE_cmpdf)
    cmp_optab->handlers[DFmode].insn_code = CODE_FOR_cmpdf;
  if (HAVE_cmpdi)
    cmp_optab->handlers[DImode].insn_code = CODE_FOR_cmpdi;
  if (HAVE_beq)
    bcc_gen_fctn[EQ] = gen_beq;
  if (HAVE_bne)
    bcc_gen_fctn[NE] = gen_bne;
  if (HAVE_bgt)
    bcc_gen_fctn[GT] = gen_bgt;
  if (HAVE_ble)
    bcc_gen_fctn[LE] = gen_ble;
  if (HAVE_bge)
    bcc_gen_fctn[GE] = gen_bge;
  if (HAVE_blt)
    bcc_gen_fctn[LT] = gen_blt;
  if (HAVE_bgtu)
    bcc_gen_fctn[GTU] = gen_bgtu;
  if (HAVE_bleu)
    bcc_gen_fctn[LEU] = gen_bleu;
  if (HAVE_bgeu)
    bcc_gen_fctn[GEU] = gen_bgeu;
  if (HAVE_bltu)
    bcc_gen_fctn[LTU] = gen_bltu;
  if (HAVE_bunordered)
    bcc_gen_fctn[UNORDERED] = gen_bunordered;
  if (HAVE_bordered)
    bcc_gen_fctn[ORDERED] = gen_bordered;
  if (HAVE_bungt)
    bcc_gen_fctn[UNGT] = gen_bungt;
  if (HAVE_bunlt)
    bcc_gen_fctn[UNLT] = gen_bunlt;
  if (HAVE_bunge)
    bcc_gen_fctn[UNGE] = gen_bunge;
  if (HAVE_bunle)
    bcc_gen_fctn[UNLE] = gen_bunle;
  if (HAVE_buneq)
    bcc_gen_fctn[UNEQ] = gen_buneq;
  if (HAVE_bltgt)
    bcc_gen_fctn[LTGT] = gen_bltgt;
  if (HAVE_seq)
    setcc_gen_code[EQ] = CODE_FOR_seq;
  if (HAVE_sne)
    setcc_gen_code[NE] = CODE_FOR_sne;
  if (HAVE_sgt)
    setcc_gen_code[GT] = CODE_FOR_sgt;
  if (HAVE_sle)
    setcc_gen_code[LE] = CODE_FOR_sle;
  if (HAVE_sge)
    setcc_gen_code[GE] = CODE_FOR_sge;
  if (HAVE_slt)
    setcc_gen_code[LT] = CODE_FOR_slt;
  if (HAVE_sgtu)
    setcc_gen_code[GTU] = CODE_FOR_sgtu;
  if (HAVE_sleu)
    setcc_gen_code[LEU] = CODE_FOR_sleu;
  if (HAVE_sgeu)
    setcc_gen_code[GEU] = CODE_FOR_sgeu;
  if (HAVE_sltu)
    setcc_gen_code[LTU] = CODE_FOR_sltu;
  if (HAVE_sunordered)
    setcc_gen_code[UNORDERED] = CODE_FOR_sunordered;
  if (HAVE_sordered)
    setcc_gen_code[ORDERED] = CODE_FOR_sordered;
  if (HAVE_sungt)
    setcc_gen_code[UNGT] = CODE_FOR_sungt;
  if (HAVE_sunge)
    setcc_gen_code[UNGE] = CODE_FOR_sunge;
  if (HAVE_sunlt)
    setcc_gen_code[UNLT] = CODE_FOR_sunlt;
  if (HAVE_sunle)
    setcc_gen_code[UNLE] = CODE_FOR_sunle;
  if (HAVE_movsicc)
    movcc_gen_code[SImode] = CODE_FOR_movsicc;
  if (HAVE_movsfcc)
    movcc_gen_code[SFmode] = CODE_FOR_movsfcc;
  if (HAVE_movdfcc)
    movcc_gen_code[DFmode] = CODE_FOR_movdfcc;
  if (HAVE_ffssi2)
    ffs_optab->handlers[SImode].insn_code = CODE_FOR_ffssi2;
  if (HAVE_ctzsi2)
    ctz_optab->handlers[SImode].insn_code = CODE_FOR_ctzsi2;

#ifdef FIXUNS_TRUNC_LIKE_FIX_TRUNC
  /* This flag says the same insns that convert to a signed fixnum
     also convert validly to an unsigned one.  */
  for (i = 0; i < NUM_MACHINE_MODES; i++)
    for (j = 0; j < NUM_MACHINE_MODES; j++)
      ufixtrunc_optab->handlers[i][j].insn_code
      = sfixtrunc_optab->handlers[i][j].insn_code;
#endif
}
