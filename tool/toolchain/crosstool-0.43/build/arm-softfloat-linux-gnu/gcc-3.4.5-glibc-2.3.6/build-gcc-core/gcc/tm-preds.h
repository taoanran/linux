/* Generated automatically by the program `genpreds'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef RTX_CODE

extern int s_register_operand (rtx, enum machine_mode);
extern int arm_hard_register_operand (rtx, enum machine_mode);
extern int f_register_operand (rtx, enum machine_mode);
extern int arm_add_operand (rtx, enum machine_mode);
extern int arm_addimm_operand (rtx, enum machine_mode);
extern int fpa_add_operand (rtx, enum machine_mode);
extern int fpa_rhs_operand (rtx, enum machine_mode);
extern int arm_rhs_operand (rtx, enum machine_mode);
extern int arm_not_operand (rtx, enum machine_mode);
extern int reg_or_int_operand (rtx, enum machine_mode);
extern int index_operand (rtx, enum machine_mode);
extern int thumb_cmp_operand (rtx, enum machine_mode);
extern int thumb_cmpneg_operand (rtx, enum machine_mode);
extern int thumb_cbrch_target_operand (rtx, enum machine_mode);
extern int offsettable_memory_operand (rtx, enum machine_mode);
extern int bad_signed_byte_operand (rtx, enum machine_mode);
extern int alignable_memory_operand (rtx, enum machine_mode);
extern int shiftable_operator (rtx, enum machine_mode);
extern int minmax_operator (rtx, enum machine_mode);
extern int shift_operator (rtx, enum machine_mode);
extern int di_operand (rtx, enum machine_mode);
extern int nonimmediate_di_operand (rtx, enum machine_mode);
extern int soft_df_operand (rtx, enum machine_mode);
extern int nonimmediate_soft_df_operand (rtx, enum machine_mode);
extern int load_multiple_operation (rtx, enum machine_mode);
extern int store_multiple_operation (rtx, enum machine_mode);
extern int equality_operator (rtx, enum machine_mode);
extern int arm_comparison_operator (rtx, enum machine_mode);
extern int arm_rhsm_operand (rtx, enum machine_mode);
extern int const_shift_operand (rtx, enum machine_mode);
extern int multi_register_push (rtx, enum machine_mode);
extern int cc_register (rtx, enum machine_mode);
extern int logical_binary_operator (rtx, enum machine_mode);
extern int cirrus_register_operand (rtx, enum machine_mode);
extern int cirrus_fp_register (rtx, enum machine_mode);
extern int cirrus_shift_const (rtx, enum machine_mode);
extern int dominant_cc_register (rtx, enum machine_mode);

#endif /* RTX_CODE */

#endif /* GCC_TM_PREDS_H */
