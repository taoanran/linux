/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_incscc (TARGET_ARM)
#define HAVE_decscc (TARGET_ARM)
#define HAVE_mulsidi3 (TARGET_ARM && arm_fast_multiply)
#define HAVE_umulsidi3 (TARGET_ARM && arm_fast_multiply)
#define HAVE_smulsi3_highpart (TARGET_ARM && arm_fast_multiply)
#define HAVE_umulsi3_highpart (TARGET_ARM && arm_fast_multiply)
#define HAVE_mulhisi3 (TARGET_ARM && arm_arch5e)
#define HAVE_anddi3 (TARGET_ARM && ! TARGET_IWMMXT)
#define HAVE_andsi_notsi_si (TARGET_ARM)
#define HAVE_bicsi3 (TARGET_THUMB)
#define HAVE_andsi_not_shiftsi_si (TARGET_ARM)
#define HAVE_iordi3 (TARGET_ARM && ! TARGET_IWMMXT)
#define HAVE_xordi3 (TARGET_ARM && !TARGET_IWMMXT)
#define HAVE_smaxsi3 (TARGET_ARM)
#define HAVE_sminsi3 (TARGET_ARM)
#define HAVE_umaxsi3 (TARGET_ARM)
#define HAVE_uminsi3 (TARGET_ARM)
#define HAVE_one_cmpldi2 (TARGET_ARM)
#define HAVE_zero_extendsidi2 (TARGET_ARM)
#define HAVE_zero_extendqidi2 (TARGET_ARM)
#define HAVE_extendsidi2 (TARGET_ARM)
#define HAVE_pic_load_addr_arm (TARGET_ARM && flag_pic)
#define HAVE_pic_load_addr_thumb (TARGET_THUMB && flag_pic)
#define HAVE_pic_add_dot_plus_four (TARGET_THUMB && flag_pic)
#define HAVE_pic_add_dot_plus_eight (TARGET_ARM && flag_pic)
#define HAVE_rotated_loadsi (TARGET_ARM && (!TARGET_MMU_TRAPS))
#define HAVE_thumb_movhi_clobber (TARGET_THUMB)
#define HAVE_movmem12b (TARGET_THUMB)
#define HAVE_movmem8b (TARGET_THUMB)
#define HAVE_cbranchsi4_scratch (TARGET_THUMB)
#define HAVE_return (TARGET_ARM && USE_RETURN_INSN (FALSE))
#define HAVE_blockage 1
#define HAVE_casesi_internal (TARGET_ARM)
#define HAVE_nop 1
#define HAVE_movcond (TARGET_ARM)
#define HAVE_sibcall_epilogue (TARGET_ARM)
#define HAVE_stack_tie 1
#define HAVE_align_4 1
#define HAVE_align_8 (TARGET_REALLY_IWMMXT)
#define HAVE_consttable_end 1
#define HAVE_consttable_1 (TARGET_THUMB)
#define HAVE_consttable_2 (TARGET_THUMB)
#define HAVE_consttable_4 1
#define HAVE_consttable_8 1
#define HAVE_clzsi2 (TARGET_ARM && arm_arch5)
#define HAVE_prefetch (TARGET_ARM && arm_arch5e)
#define HAVE_prologue_use 1
#define HAVE_cirrus_adddi3 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_subdi3 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_muldi3 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_ashldi3_cirrus (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_ashldi_const (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_ashiftrtdi_const (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_floatsisf2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_floatsidf2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_floatdisf2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_floatdidf2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_truncsfsi2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_cirrus_truncdfsi2 (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_iwmmxt_iordi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_xordi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_anddi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_nanddi3 (TARGET_REALLY_IWMMXT)
#define HAVE_movv8qi_internal (TARGET_REALLY_IWMMXT)
#define HAVE_movv4hi_internal (TARGET_REALLY_IWMMXT)
#define HAVE_movv2si_internal (TARGET_REALLY_IWMMXT)
#define HAVE_movv2si_internal_2 (TARGET_REALLY_IWMMXT)
#define HAVE_addv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_addv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_addv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_ssaddv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ssaddv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ssaddv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_usaddv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_usaddv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_usaddv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_subv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_subv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_subv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_sssubv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_sssubv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_sssubv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_ussubv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ussubv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ussubv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_mulv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_smulv4hi3_highpart (TARGET_REALLY_IWMMXT)
#define HAVE_umulv4hi3_highpart (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmacs (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmacsz (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmacu (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmacuz (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_clrdi (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_uavgrndv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_uavgrndv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_uavgv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_uavgv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_psadbw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tinsrb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tinsrh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tinsrw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_textrmub (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_textrmsb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_textrmuh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_textrmsh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_textrmw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wshufh (TARGET_REALLY_IWMMXT)
#define HAVE_eqv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_eqv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_eqv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtuv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtuv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtuv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_gtv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_smaxv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_umaxv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_smaxv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_umaxv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_smaxv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_umaxv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_sminv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_uminv8qi3 (TARGET_REALLY_IWMMXT)
#define HAVE_sminv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_uminv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_sminv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_uminv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackhss (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackwss (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackdss (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackhus (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackwus (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wpackdus (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckihb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckihh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckihw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckilb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckilh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckilw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehub (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehuh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehuw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehsb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehsh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckehsw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckelub (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckeluh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckeluw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckelsb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckelsh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wunpckelsw (TARGET_REALLY_IWMMXT)
#define HAVE_rorv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_rorv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_rordi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashrv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashrv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashrdi3 (TARGET_REALLY_IWMMXT)
#define HAVE_lshrv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_lshrv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_lshrdi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashlv4hi3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashlv2si3 (TARGET_REALLY_IWMMXT)
#define HAVE_ashldi3_iwmmxt (TARGET_REALLY_IWMMXT)
#define HAVE_rorv4hi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_rorv2si3_di (TARGET_REALLY_IWMMXT)
#define HAVE_rordi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashrv4hi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashrv2si3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashrdi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_lshrv4hi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_lshrv2si3_di (TARGET_REALLY_IWMMXT)
#define HAVE_lshrdi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashlv4hi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashlv2si3_di (TARGET_REALLY_IWMMXT)
#define HAVE_ashldi3_di (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmadds (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wmaddu (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmia (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmiaph (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmiabb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmiatb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmiabt (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmiatt (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tbcstqi (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tbcsthi (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tbcstsi (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmovmskb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmovmskh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmovmskw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_waccb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wacch (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_waccw (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_walign (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmrc (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_tmcr (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wsadb (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wsadh (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wsadbz (TARGET_REALLY_IWMMXT)
#define HAVE_iwmmxt_wsadhz (TARGET_REALLY_IWMMXT)
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_addsf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_adddf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_subsf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_subdf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_mulsi3 1
#define HAVE_mulsf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_muldf3 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_divsf3 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_divdf3 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_modsf3 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_moddf3 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_andsi3 1
#define HAVE_insv (TARGET_ARM)
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_rotlsi3 (TARGET_ARM)
#define HAVE_rotrsi3 1
#define HAVE_ashldi3 (TARGET_ARM && (TARGET_IWMMXT || TARGET_CIRRUS))
#define HAVE_extzv (TARGET_THUMB)
#define HAVE_negdi2 1
#define HAVE_negsi2 1
#define HAVE_negsf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_negdf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_abssi2 (TARGET_ARM)
#define HAVE_abssf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_absdf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_sqrtsf2 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sqrtdf2 (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_one_cmplsi2 1
#define HAVE_floatsisf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_floatsidf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_fix_truncsfsi2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_fix_truncdfsi2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_truncdfsf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendhisi2_mem (TARGET_ARM)
#define HAVE_extendqihi2 (TARGET_ARM)
#define HAVE_extendqisi2 1
#define HAVE_extendsfdf2 (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_pic_load_addr_based (TARGET_ARM && flag_pic)
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_storehi (TARGET_ARM)
#define HAVE_storehi_bigend (TARGET_ARM)
#define HAVE_storeinthi (TARGET_ARM)
#define HAVE_storehi_single_op (TARGET_ARM && arm_arch4)
#define HAVE_movhi 1
#define HAVE_movhi_bytes (TARGET_ARM)
#define HAVE_movhi_bigend (TARGET_ARM)
#define HAVE_reload_outhi 1
#define HAVE_reload_inhi (TARGET_THUMB || (TARGET_ARM && TARGET_MMU_TRAPS))
#define HAVE_movqi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_reload_outdf (TARGET_ARM)
#define HAVE_movv2si (TARGET_REALLY_IWMMXT)
#define HAVE_movv4hi (TARGET_REALLY_IWMMXT)
#define HAVE_movv8qi (TARGET_REALLY_IWMMXT)
#define HAVE_load_multiple (TARGET_ARM)
#define HAVE_store_multiple (TARGET_ARM)
#define HAVE_movstrqi 1
#define HAVE_cbranchsi4 (TARGET_THUMB)
#define HAVE_cmpsi (TARGET_ARM)
#define HAVE_cmpsf (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_cmpdf (TARGET_ARM && TARGET_ANY_HARD_FLOAT)
#define HAVE_cmpdi (TARGET_ARM && TARGET_CIRRUS)
#define HAVE_beq (TARGET_ARM)
#define HAVE_bne (TARGET_ARM)
#define HAVE_bgt (TARGET_ARM)
#define HAVE_ble (TARGET_ARM)
#define HAVE_bge (TARGET_ARM)
#define HAVE_blt (TARGET_ARM)
#define HAVE_bgtu (TARGET_ARM)
#define HAVE_bleu (TARGET_ARM)
#define HAVE_bgeu (TARGET_ARM)
#define HAVE_bltu (TARGET_ARM)
#define HAVE_bunordered (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bordered (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bungt (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bunlt (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bunge (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bunle (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_buneq (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_bltgt (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_seq (TARGET_ARM)
#define HAVE_sne (TARGET_ARM)
#define HAVE_sgt (TARGET_ARM)
#define HAVE_sle (TARGET_ARM)
#define HAVE_sge (TARGET_ARM)
#define HAVE_slt (TARGET_ARM)
#define HAVE_sgtu (TARGET_ARM)
#define HAVE_sleu (TARGET_ARM)
#define HAVE_sgeu (TARGET_ARM)
#define HAVE_sltu (TARGET_ARM)
#define HAVE_sunordered (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sordered (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sungt (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sunge (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sunlt (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_sunle (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_movsicc (TARGET_ARM)
#define HAVE_movsfcc (TARGET_ARM)
#define HAVE_movdfcc (TARGET_ARM && TARGET_HARD_FLOAT)
#define HAVE_jump 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_sibcall (TARGET_ARM)
#define HAVE_sibcall_value (TARGET_ARM)
#define HAVE_return_addr_mask (TARGET_ARM)
#define HAVE_untyped_call (TARGET_ARM)
#define HAVE_casesi (TARGET_ARM)
#define HAVE_indirect_jump 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_eh_epilogue 1
#define HAVE_tablejump (TARGET_THUMB)
#define HAVE_ffssi2 (TARGET_ARM && arm_arch5)
#define HAVE_ctzsi2 (TARGET_ARM && arm_arch5)
extern rtx        gen_incscc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_decscc                  (rtx, rtx, rtx, rtx);
extern rtx        gen_mulsidi3                (rtx, rtx, rtx);
extern rtx        gen_umulsidi3               (rtx, rtx, rtx);
extern rtx        gen_smulsi3_highpart        (rtx, rtx, rtx);
extern rtx        gen_umulsi3_highpart        (rtx, rtx, rtx);
extern rtx        gen_mulhisi3                (rtx, rtx, rtx);
extern rtx        gen_anddi3                  (rtx, rtx, rtx);
extern rtx        gen_andsi_notsi_si          (rtx, rtx, rtx);
extern rtx        gen_bicsi3                  (rtx, rtx, rtx);
extern rtx        gen_andsi_not_shiftsi_si    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_iordi3                  (rtx, rtx, rtx);
extern rtx        gen_xordi3                  (rtx, rtx, rtx);
extern rtx        gen_smaxsi3                 (rtx, rtx, rtx);
extern rtx        gen_sminsi3                 (rtx, rtx, rtx);
extern rtx        gen_umaxsi3                 (rtx, rtx, rtx);
extern rtx        gen_uminsi3                 (rtx, rtx, rtx);
extern rtx        gen_one_cmpldi2             (rtx, rtx);
extern rtx        gen_zero_extendsidi2        (rtx, rtx);
extern rtx        gen_zero_extendqidi2        (rtx, rtx);
extern rtx        gen_extendsidi2             (rtx, rtx);
extern rtx        gen_pic_load_addr_arm       (rtx, rtx);
extern rtx        gen_pic_load_addr_thumb     (rtx, rtx);
extern rtx        gen_pic_add_dot_plus_four   (rtx, rtx);
extern rtx        gen_pic_add_dot_plus_eight  (rtx, rtx);
extern rtx        gen_rotated_loadsi          (rtx, rtx);
extern rtx        gen_thumb_movhi_clobber     (rtx, rtx, rtx);
extern rtx        gen_movmem12b               (rtx, rtx, rtx, rtx);
extern rtx        gen_movmem8b                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4_scratch      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_return                  (void);
extern rtx        gen_blockage                (void);
extern rtx        gen_casesi_internal         (rtx, rtx, rtx, rtx);
extern rtx        gen_nop                     (void);
extern rtx        gen_movcond                 (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_sibcall_epilogue        (void);
extern rtx        gen_stack_tie               (rtx, rtx);
extern rtx        gen_align_4                 (void);
extern rtx        gen_align_8                 (void);
extern rtx        gen_consttable_end          (void);
extern rtx        gen_consttable_1            (rtx);
extern rtx        gen_consttable_2            (rtx);
extern rtx        gen_consttable_4            (rtx);
extern rtx        gen_consttable_8            (rtx);
extern rtx        gen_clzsi2                  (rtx, rtx);
extern rtx        gen_prefetch                (rtx, rtx, rtx);
extern rtx        gen_prologue_use            (rtx);
extern rtx        gen_cirrus_adddi3           (rtx, rtx, rtx);
extern rtx        gen_cirrus_subdi3           (rtx, rtx, rtx);
extern rtx        gen_muldi3                  (rtx, rtx, rtx);
static inline rtx gen_cirrus_ashl_const       (rtx, rtx, rtx);
static inline rtx
gen_cirrus_ashl_const(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_cirrus_ashiftrt_const   (rtx, rtx, rtx);
static inline rtx
gen_cirrus_ashiftrt_const(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
static inline rtx gen_cirrus_ashlsi3          (rtx, rtx, rtx);
static inline rtx
gen_cirrus_ashlsi3(rtx a ATTRIBUTE_UNUSED, rtx b ATTRIBUTE_UNUSED, rtx c ATTRIBUTE_UNUSED)
{
  return 0;
}
extern rtx        gen_ashldi3_cirrus          (rtx, rtx, rtx);
extern rtx        gen_cirrus_ashldi_const     (rtx, rtx, rtx);
extern rtx        gen_cirrus_ashiftrtdi_const (rtx, rtx, rtx);
extern rtx        gen_cirrus_floatsisf2       (rtx, rtx);
extern rtx        gen_cirrus_floatsidf2       (rtx, rtx);
extern rtx        gen_floatdisf2              (rtx, rtx);
extern rtx        gen_floatdidf2              (rtx, rtx);
extern rtx        gen_cirrus_truncsfsi2       (rtx, rtx);
extern rtx        gen_cirrus_truncdfsi2       (rtx, rtx);
extern rtx        gen_iwmmxt_iordi3           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_xordi3           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_anddi3           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_nanddi3          (rtx, rtx, rtx);
extern rtx        gen_movv8qi_internal        (rtx, rtx);
extern rtx        gen_movv4hi_internal        (rtx, rtx);
extern rtx        gen_movv2si_internal        (rtx, rtx);
extern rtx        gen_movv2si_internal_2      (rtx, rtx);
extern rtx        gen_addv8qi3                (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                (rtx, rtx, rtx);
extern rtx        gen_addv2si3                (rtx, rtx, rtx);
extern rtx        gen_ssaddv8qi3              (rtx, rtx, rtx);
extern rtx        gen_ssaddv4hi3              (rtx, rtx, rtx);
extern rtx        gen_ssaddv2si3              (rtx, rtx, rtx);
extern rtx        gen_usaddv8qi3              (rtx, rtx, rtx);
extern rtx        gen_usaddv4hi3              (rtx, rtx, rtx);
extern rtx        gen_usaddv2si3              (rtx, rtx, rtx);
extern rtx        gen_subv8qi3                (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                (rtx, rtx, rtx);
extern rtx        gen_subv2si3                (rtx, rtx, rtx);
extern rtx        gen_sssubv8qi3              (rtx, rtx, rtx);
extern rtx        gen_sssubv4hi3              (rtx, rtx, rtx);
extern rtx        gen_sssubv2si3              (rtx, rtx, rtx);
extern rtx        gen_ussubv8qi3              (rtx, rtx, rtx);
extern rtx        gen_ussubv4hi3              (rtx, rtx, rtx);
extern rtx        gen_ussubv2si3              (rtx, rtx, rtx);
extern rtx        gen_mulv4hi3                (rtx, rtx, rtx);
extern rtx        gen_smulv4hi3_highpart      (rtx, rtx, rtx);
extern rtx        gen_umulv4hi3_highpart      (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmacs            (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmacsz           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmacu            (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmacuz           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_clrdi            (rtx);
extern rtx        gen_iwmmxt_uavgrndv8qi3     (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_uavgrndv4hi3     (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_uavgv8qi3        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_uavgv4hi3        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_psadbw           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tinsrb           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tinsrh           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tinsrw           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_textrmub         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_textrmsb         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_textrmuh         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_textrmsh         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_textrmw          (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wshufh           (rtx, rtx, rtx);
extern rtx        gen_eqv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_eqv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_eqv2si3                 (rtx, rtx, rtx);
extern rtx        gen_gtuv8qi3                (rtx, rtx, rtx);
extern rtx        gen_gtuv4hi3                (rtx, rtx, rtx);
extern rtx        gen_gtuv2si3                (rtx, rtx, rtx);
extern rtx        gen_gtv8qi3                 (rtx, rtx, rtx);
extern rtx        gen_gtv4hi3                 (rtx, rtx, rtx);
extern rtx        gen_gtv2si3                 (rtx, rtx, rtx);
extern rtx        gen_smaxv8qi3               (rtx, rtx, rtx);
extern rtx        gen_umaxv8qi3               (rtx, rtx, rtx);
extern rtx        gen_smaxv4hi3               (rtx, rtx, rtx);
extern rtx        gen_umaxv4hi3               (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3               (rtx, rtx, rtx);
extern rtx        gen_umaxv2si3               (rtx, rtx, rtx);
extern rtx        gen_sminv8qi3               (rtx, rtx, rtx);
extern rtx        gen_uminv8qi3               (rtx, rtx, rtx);
extern rtx        gen_sminv4hi3               (rtx, rtx, rtx);
extern rtx        gen_uminv4hi3               (rtx, rtx, rtx);
extern rtx        gen_sminv2si3               (rtx, rtx, rtx);
extern rtx        gen_uminv2si3               (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackhss         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackwss         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackdss         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackhus         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackwus         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wpackdus         (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckihb        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckihh        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckihw        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckilb        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckilh        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckilw        (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehub       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehuh       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehuw       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehsb       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehsh       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckehsw       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckelub       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckeluh       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckeluw       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckelsb       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckelsh       (rtx, rtx);
extern rtx        gen_iwmmxt_wunpckelsw       (rtx, rtx);
extern rtx        gen_rorv4hi3                (rtx, rtx, rtx);
extern rtx        gen_rorv2si3                (rtx, rtx, rtx);
extern rtx        gen_rordi3                  (rtx, rtx, rtx);
extern rtx        gen_ashrv4hi3               (rtx, rtx, rtx);
extern rtx        gen_ashrv2si3               (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrv4hi3               (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3               (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                 (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3               (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3               (rtx, rtx, rtx);
extern rtx        gen_ashldi3_iwmmxt          (rtx, rtx, rtx);
extern rtx        gen_rorv4hi3_di             (rtx, rtx, rtx);
extern rtx        gen_rorv2si3_di             (rtx, rtx, rtx);
extern rtx        gen_rordi3_di               (rtx, rtx, rtx);
extern rtx        gen_ashrv4hi3_di            (rtx, rtx, rtx);
extern rtx        gen_ashrv2si3_di            (rtx, rtx, rtx);
extern rtx        gen_ashrdi3_di              (rtx, rtx, rtx);
extern rtx        gen_lshrv4hi3_di            (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3_di            (rtx, rtx, rtx);
extern rtx        gen_lshrdi3_di              (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3_di            (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3_di            (rtx, rtx, rtx);
extern rtx        gen_ashldi3_di              (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmadds           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wmaddu           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmia             (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmiaph           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmiabb           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmiatb           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmiabt           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmiatt           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tbcstqi          (rtx, rtx);
extern rtx        gen_iwmmxt_tbcsthi          (rtx, rtx);
extern rtx        gen_iwmmxt_tbcstsi          (rtx, rtx);
extern rtx        gen_iwmmxt_tmovmskb         (rtx, rtx);
extern rtx        gen_iwmmxt_tmovmskh         (rtx, rtx);
extern rtx        gen_iwmmxt_tmovmskw         (rtx, rtx);
extern rtx        gen_iwmmxt_waccb            (rtx, rtx);
extern rtx        gen_iwmmxt_wacch            (rtx, rtx);
extern rtx        gen_iwmmxt_waccw            (rtx, rtx);
extern rtx        gen_iwmmxt_walign           (rtx, rtx, rtx, rtx);
extern rtx        gen_iwmmxt_tmrc             (rtx, rtx);
extern rtx        gen_iwmmxt_tmcr             (rtx, rtx);
extern rtx        gen_iwmmxt_wsadb            (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wsadh            (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wsadbz           (rtx, rtx, rtx);
extern rtx        gen_iwmmxt_wsadhz           (rtx, rtx, rtx);
extern rtx        gen_adddi3                  (rtx, rtx, rtx);
extern rtx        gen_addsi3                  (rtx, rtx, rtx);
extern rtx        gen_addsf3                  (rtx, rtx, rtx);
extern rtx        gen_adddf3                  (rtx, rtx, rtx);
extern rtx        gen_subdi3                  (rtx, rtx, rtx);
extern rtx        gen_subsi3                  (rtx, rtx, rtx);
extern rtx        gen_subsf3                  (rtx, rtx, rtx);
extern rtx        gen_subdf3                  (rtx, rtx, rtx);
extern rtx        gen_mulsi3                  (rtx, rtx, rtx);
extern rtx        gen_mulsf3                  (rtx, rtx, rtx);
extern rtx        gen_muldf3                  (rtx, rtx, rtx);
extern rtx        gen_divsf3                  (rtx, rtx, rtx);
extern rtx        gen_divdf3                  (rtx, rtx, rtx);
extern rtx        gen_modsf3                  (rtx, rtx, rtx);
extern rtx        gen_moddf3                  (rtx, rtx, rtx);
extern rtx        gen_andsi3                  (rtx, rtx, rtx);
extern rtx        gen_insv                    (rtx, rtx, rtx, rtx);
extern rtx        gen_iorsi3                  (rtx, rtx, rtx);
extern rtx        gen_xorsi3                  (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                 (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                 (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                 (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                 (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                 (rtx, rtx, rtx);
extern rtx        gen_ashldi3                 (rtx, rtx, rtx);
extern rtx        gen_extzv                   (rtx, rtx, rtx, rtx);
extern rtx        gen_negdi2                  (rtx, rtx);
extern rtx        gen_negsi2                  (rtx, rtx);
extern rtx        gen_negsf2                  (rtx, rtx);
extern rtx        gen_negdf2                  (rtx, rtx);
extern rtx        gen_abssi2                  (rtx, rtx);
extern rtx        gen_abssf2                  (rtx, rtx);
extern rtx        gen_absdf2                  (rtx, rtx);
extern rtx        gen_sqrtsf2                 (rtx, rtx);
extern rtx        gen_sqrtdf2                 (rtx, rtx);
extern rtx        gen_one_cmplsi2             (rtx, rtx);
extern rtx        gen_floatsisf2              (rtx, rtx);
extern rtx        gen_floatsidf2              (rtx, rtx);
extern rtx        gen_fix_truncsfsi2          (rtx, rtx);
extern rtx        gen_fix_truncdfsi2          (rtx, rtx);
extern rtx        gen_truncdfsf2              (rtx, rtx);
extern rtx        gen_zero_extendhisi2        (rtx, rtx);
extern rtx        gen_zero_extendqisi2        (rtx, rtx);
extern rtx        gen_extendhisi2             (rtx, rtx);
extern rtx        gen_extendhisi2_mem         (rtx, rtx);
extern rtx        gen_extendqihi2             (rtx, rtx);
extern rtx        gen_extendqisi2             (rtx, rtx);
extern rtx        gen_extendsfdf2             (rtx, rtx);
extern rtx        gen_movdi                   (rtx, rtx);
extern rtx        gen_movsi                   (rtx, rtx);
extern rtx        gen_pic_load_addr_based     (rtx, rtx);
extern rtx        gen_builtin_setjmp_receiver (rtx);
extern rtx        gen_storehi                 (rtx, rtx);
extern rtx        gen_storehi_bigend          (rtx, rtx);
extern rtx        gen_storeinthi              (rtx, rtx);
extern rtx        gen_storehi_single_op       (rtx, rtx);
extern rtx        gen_movhi                   (rtx, rtx);
extern rtx        gen_movhi_bytes             (rtx, rtx);
extern rtx        gen_movhi_bigend            (rtx, rtx);
extern rtx        gen_reload_outhi            (rtx, rtx, rtx);
extern rtx        gen_reload_inhi             (rtx, rtx, rtx);
extern rtx        gen_movqi                   (rtx, rtx);
extern rtx        gen_movsf                   (rtx, rtx);
extern rtx        gen_movdf                   (rtx, rtx);
extern rtx        gen_reload_outdf            (rtx, rtx, rtx);
extern rtx        gen_movv2si                 (rtx, rtx);
extern rtx        gen_movv4hi                 (rtx, rtx);
extern rtx        gen_movv8qi                 (rtx, rtx);
extern rtx        gen_load_multiple           (rtx, rtx, rtx);
extern rtx        gen_store_multiple          (rtx, rtx, rtx);
extern rtx        gen_movstrqi                (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4              (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpsi                   (rtx, rtx);
extern rtx        gen_cmpsf                   (rtx, rtx);
extern rtx        gen_cmpdf                   (rtx, rtx);
extern rtx        gen_cmpdi                   (rtx, rtx);
extern rtx        gen_beq                     (rtx);
extern rtx        gen_bne                     (rtx);
extern rtx        gen_bgt                     (rtx);
extern rtx        gen_ble                     (rtx);
extern rtx        gen_bge                     (rtx);
extern rtx        gen_blt                     (rtx);
extern rtx        gen_bgtu                    (rtx);
extern rtx        gen_bleu                    (rtx);
extern rtx        gen_bgeu                    (rtx);
extern rtx        gen_bltu                    (rtx);
extern rtx        gen_bunordered              (rtx);
extern rtx        gen_bordered                (rtx);
extern rtx        gen_bungt                   (rtx);
extern rtx        gen_bunlt                   (rtx);
extern rtx        gen_bunge                   (rtx);
extern rtx        gen_bunle                   (rtx);
extern rtx        gen_buneq                   (rtx);
extern rtx        gen_bltgt                   (rtx);
extern rtx        gen_seq                     (rtx);
extern rtx        gen_sne                     (rtx);
extern rtx        gen_sgt                     (rtx);
extern rtx        gen_sle                     (rtx);
extern rtx        gen_sge                     (rtx);
extern rtx        gen_slt                     (rtx);
extern rtx        gen_sgtu                    (rtx);
extern rtx        gen_sleu                    (rtx);
extern rtx        gen_sgeu                    (rtx);
extern rtx        gen_sltu                    (rtx);
extern rtx        gen_sunordered              (rtx);
extern rtx        gen_sordered                (rtx);
extern rtx        gen_sungt                   (rtx);
extern rtx        gen_sunge                   (rtx);
extern rtx        gen_sunlt                   (rtx);
extern rtx        gen_sunle                   (rtx);
extern rtx        gen_movsicc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfcc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfcc                 (rtx, rtx, rtx, rtx);
extern rtx        gen_jump                    (rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern rtx        gen_call                    (rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value              (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C))
extern rtx        gen_sibcall                 (rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value           (rtx, rtx, rtx, rtx);
extern rtx        gen_return_addr_mask        (rtx);
extern rtx        gen_untyped_call            (rtx, rtx, rtx);
extern rtx        gen_casesi                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_indirect_jump           (rtx);
extern rtx        gen_prologue                (void);
extern rtx        gen_epilogue                (void);
extern rtx        gen_eh_epilogue             (rtx, rtx, rtx);
extern rtx        gen_tablejump               (rtx, rtx);
extern rtx        gen_ffssi2                  (rtx, rtx);
extern rtx        gen_ctzsi2                  (rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
