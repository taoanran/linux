/* Generated automatically by the program `gencodes'
   from the machine description file `md'.  */

#ifndef GCC_INSN_CODES_H
#define GCC_INSN_CODES_H

enum insn_code {
  CODE_FOR_incscc = 20,
  CODE_FOR_decscc = 31,
  CODE_FOR_mulsidi3 = 40,
  CODE_FOR_umulsidi3 = 41,
  CODE_FOR_smulsi3_highpart = 43,
  CODE_FOR_umulsi3_highpart = 44,
  CODE_FOR_mulhisi3 = 45,
  CODE_FOR_anddi3 = 51,
  CODE_FOR_andsi_notsi_si = 63,
  CODE_FOR_bicsi3 = 64,
  CODE_FOR_andsi_not_shiftsi_si = 65,
  CODE_FOR_iordi3 = 68,
  CODE_FOR_xordi3 = 75,
  CODE_FOR_smaxsi3 = 83,
  CODE_FOR_sminsi3 = 84,
  CODE_FOR_umaxsi3 = 85,
  CODE_FOR_uminsi3 = 86,
  CODE_FOR_one_cmpldi2 = 105,
  CODE_FOR_zero_extendsidi2 = 110,
  CODE_FOR_zero_extendqidi2 = 111,
  CODE_FOR_extendsidi2 = 112,
  CODE_FOR_pic_load_addr_arm = 127,
  CODE_FOR_pic_load_addr_thumb = 128,
  CODE_FOR_pic_add_dot_plus_four = 130,
  CODE_FOR_pic_add_dot_plus_eight = 131,
  CODE_FOR_rotated_loadsi = 134,
  CODE_FOR_thumb_movhi_clobber = 140,
  CODE_FOR_movmem12b = 159,
  CODE_FOR_movmem8b = 160,
  CODE_FOR_cbranchsi4_scratch = 162,
  CODE_FOR_return = 212,
  CODE_FOR_blockage = 216,
  CODE_FOR_casesi_internal = 217,
  CODE_FOR_nop = 221,
  CODE_FOR_movcond = 244,
  CODE_FOR_sibcall_epilogue = 296,
  CODE_FOR_stack_tie = 302,
  CODE_FOR_align_4 = 304,
  CODE_FOR_align_8 = 305,
  CODE_FOR_consttable_end = 306,
  CODE_FOR_consttable_1 = 307,
  CODE_FOR_consttable_2 = 308,
  CODE_FOR_consttable_4 = 309,
  CODE_FOR_consttable_8 = 310,
  CODE_FOR_clzsi2 = 312,
  CODE_FOR_prefetch = 313,
  CODE_FOR_prologue_use = 314,
  CODE_FOR_cirrus_adddi3 = 368,
  CODE_FOR_cirrus_subdi3 = 371,
  CODE_FOR_muldi3 = 374,
#define CODE_FOR_cirrus_ashl_const CODE_FOR_nothing
#define CODE_FOR_cirrus_ashiftrt_const CODE_FOR_nothing
#define CODE_FOR_cirrus_ashlsi3 CODE_FOR_nothing
  CODE_FOR_ashldi3_cirrus = 377,
  CODE_FOR_cirrus_ashldi_const = 378,
  CODE_FOR_cirrus_ashiftrtdi_const = 379,
  CODE_FOR_cirrus_floatsisf2 = 386,
  CODE_FOR_cirrus_floatsidf2 = 387,
  CODE_FOR_floatdisf2 = 388,
  CODE_FOR_floatdidf2 = 389,
  CODE_FOR_cirrus_truncsfsi2 = 390,
  CODE_FOR_cirrus_truncdfsi2 = 391,
  CODE_FOR_iwmmxt_iordi3 = 397,
  CODE_FOR_iwmmxt_xordi3 = 398,
  CODE_FOR_iwmmxt_anddi3 = 399,
  CODE_FOR_iwmmxt_nanddi3 = 400,
  CODE_FOR_movv8qi_internal = 404,
  CODE_FOR_movv4hi_internal = 405,
  CODE_FOR_movv2si_internal = 406,
  CODE_FOR_movv2si_internal_2 = 407,
  CODE_FOR_addv8qi3 = 408,
  CODE_FOR_addv4hi3 = 409,
  CODE_FOR_addv2si3 = 410,
  CODE_FOR_ssaddv8qi3 = 411,
  CODE_FOR_ssaddv4hi3 = 412,
  CODE_FOR_ssaddv2si3 = 413,
  CODE_FOR_usaddv8qi3 = 414,
  CODE_FOR_usaddv4hi3 = 415,
  CODE_FOR_usaddv2si3 = 416,
  CODE_FOR_subv8qi3 = 417,
  CODE_FOR_subv4hi3 = 418,
  CODE_FOR_subv2si3 = 419,
  CODE_FOR_sssubv8qi3 = 420,
  CODE_FOR_sssubv4hi3 = 421,
  CODE_FOR_sssubv2si3 = 422,
  CODE_FOR_ussubv8qi3 = 423,
  CODE_FOR_ussubv4hi3 = 424,
  CODE_FOR_ussubv2si3 = 425,
  CODE_FOR_mulv4hi3 = 426,
  CODE_FOR_smulv4hi3_highpart = 427,
  CODE_FOR_umulv4hi3_highpart = 428,
  CODE_FOR_iwmmxt_wmacs = 429,
  CODE_FOR_iwmmxt_wmacsz = 430,
  CODE_FOR_iwmmxt_wmacu = 431,
  CODE_FOR_iwmmxt_wmacuz = 432,
  CODE_FOR_iwmmxt_clrdi = 433,
  CODE_FOR_iwmmxt_uavgrndv8qi3 = 437,
  CODE_FOR_iwmmxt_uavgrndv4hi3 = 438,
  CODE_FOR_iwmmxt_uavgv8qi3 = 439,
  CODE_FOR_iwmmxt_uavgv4hi3 = 440,
  CODE_FOR_iwmmxt_psadbw = 441,
  CODE_FOR_iwmmxt_tinsrb = 442,
  CODE_FOR_iwmmxt_tinsrh = 443,
  CODE_FOR_iwmmxt_tinsrw = 444,
  CODE_FOR_iwmmxt_textrmub = 445,
  CODE_FOR_iwmmxt_textrmsb = 446,
  CODE_FOR_iwmmxt_textrmuh = 447,
  CODE_FOR_iwmmxt_textrmsh = 448,
  CODE_FOR_iwmmxt_textrmw = 449,
  CODE_FOR_iwmmxt_wshufh = 450,
  CODE_FOR_eqv8qi3 = 451,
  CODE_FOR_eqv4hi3 = 452,
  CODE_FOR_eqv2si3 = 453,
  CODE_FOR_gtuv8qi3 = 454,
  CODE_FOR_gtuv4hi3 = 455,
  CODE_FOR_gtuv2si3 = 456,
  CODE_FOR_gtv8qi3 = 457,
  CODE_FOR_gtv4hi3 = 458,
  CODE_FOR_gtv2si3 = 459,
  CODE_FOR_smaxv8qi3 = 460,
  CODE_FOR_umaxv8qi3 = 461,
  CODE_FOR_smaxv4hi3 = 462,
  CODE_FOR_umaxv4hi3 = 463,
  CODE_FOR_smaxv2si3 = 464,
  CODE_FOR_umaxv2si3 = 465,
  CODE_FOR_sminv8qi3 = 466,
  CODE_FOR_uminv8qi3 = 467,
  CODE_FOR_sminv4hi3 = 468,
  CODE_FOR_uminv4hi3 = 469,
  CODE_FOR_sminv2si3 = 470,
  CODE_FOR_uminv2si3 = 471,
  CODE_FOR_iwmmxt_wpackhss = 472,
  CODE_FOR_iwmmxt_wpackwss = 473,
  CODE_FOR_iwmmxt_wpackdss = 474,
  CODE_FOR_iwmmxt_wpackhus = 475,
  CODE_FOR_iwmmxt_wpackwus = 476,
  CODE_FOR_iwmmxt_wpackdus = 477,
  CODE_FOR_iwmmxt_wunpckihb = 478,
  CODE_FOR_iwmmxt_wunpckihh = 479,
  CODE_FOR_iwmmxt_wunpckihw = 480,
  CODE_FOR_iwmmxt_wunpckilb = 481,
  CODE_FOR_iwmmxt_wunpckilh = 482,
  CODE_FOR_iwmmxt_wunpckilw = 483,
  CODE_FOR_iwmmxt_wunpckehub = 484,
  CODE_FOR_iwmmxt_wunpckehuh = 485,
  CODE_FOR_iwmmxt_wunpckehuw = 486,
  CODE_FOR_iwmmxt_wunpckehsb = 487,
  CODE_FOR_iwmmxt_wunpckehsh = 488,
  CODE_FOR_iwmmxt_wunpckehsw = 489,
  CODE_FOR_iwmmxt_wunpckelub = 490,
  CODE_FOR_iwmmxt_wunpckeluh = 491,
  CODE_FOR_iwmmxt_wunpckeluw = 492,
  CODE_FOR_iwmmxt_wunpckelsb = 493,
  CODE_FOR_iwmmxt_wunpckelsh = 494,
  CODE_FOR_iwmmxt_wunpckelsw = 495,
  CODE_FOR_rorv4hi3 = 496,
  CODE_FOR_rorv2si3 = 497,
  CODE_FOR_rordi3 = 498,
  CODE_FOR_ashrv4hi3 = 499,
  CODE_FOR_ashrv2si3 = 500,
  CODE_FOR_ashrdi3 = 501,
  CODE_FOR_lshrv4hi3 = 502,
  CODE_FOR_lshrv2si3 = 503,
  CODE_FOR_lshrdi3 = 504,
  CODE_FOR_ashlv4hi3 = 505,
  CODE_FOR_ashlv2si3 = 506,
  CODE_FOR_ashldi3_iwmmxt = 507,
  CODE_FOR_rorv4hi3_di = 508,
  CODE_FOR_rorv2si3_di = 509,
  CODE_FOR_rordi3_di = 510,
  CODE_FOR_ashrv4hi3_di = 511,
  CODE_FOR_ashrv2si3_di = 512,
  CODE_FOR_ashrdi3_di = 513,
  CODE_FOR_lshrv4hi3_di = 514,
  CODE_FOR_lshrv2si3_di = 515,
  CODE_FOR_lshrdi3_di = 516,
  CODE_FOR_ashlv4hi3_di = 517,
  CODE_FOR_ashlv2si3_di = 518,
  CODE_FOR_ashldi3_di = 519,
  CODE_FOR_iwmmxt_wmadds = 520,
  CODE_FOR_iwmmxt_wmaddu = 521,
  CODE_FOR_iwmmxt_tmia = 522,
  CODE_FOR_iwmmxt_tmiaph = 523,
  CODE_FOR_iwmmxt_tmiabb = 524,
  CODE_FOR_iwmmxt_tmiatb = 525,
  CODE_FOR_iwmmxt_tmiabt = 526,
  CODE_FOR_iwmmxt_tmiatt = 527,
  CODE_FOR_iwmmxt_tbcstqi = 528,
  CODE_FOR_iwmmxt_tbcsthi = 529,
  CODE_FOR_iwmmxt_tbcstsi = 530,
  CODE_FOR_iwmmxt_tmovmskb = 531,
  CODE_FOR_iwmmxt_tmovmskh = 532,
  CODE_FOR_iwmmxt_tmovmskw = 533,
  CODE_FOR_iwmmxt_waccb = 534,
  CODE_FOR_iwmmxt_wacch = 535,
  CODE_FOR_iwmmxt_waccw = 536,
  CODE_FOR_iwmmxt_walign = 537,
  CODE_FOR_iwmmxt_tmrc = 538,
  CODE_FOR_iwmmxt_tmcr = 539,
  CODE_FOR_iwmmxt_wsadb = 540,
  CODE_FOR_iwmmxt_wsadh = 541,
  CODE_FOR_iwmmxt_wsadbz = 542,
  CODE_FOR_iwmmxt_wsadhz = 543,
  CODE_FOR_adddi3 = 544,
  CODE_FOR_addsi3 = 548,
  CODE_FOR_addsf3 = 554,
  CODE_FOR_adddf3 = 555,
  CODE_FOR_subdi3 = 556,
  CODE_FOR_subsi3 = 557,
  CODE_FOR_subsf3 = 560,
  CODE_FOR_subdf3 = 561,
  CODE_FOR_mulsi3 = 562,
  CODE_FOR_mulsf3 = 563,
  CODE_FOR_muldf3 = 564,
  CODE_FOR_divsf3 = 565,
  CODE_FOR_divdf3 = 566,
  CODE_FOR_modsf3 = 567,
  CODE_FOR_moddf3 = 568,
  CODE_FOR_andsi3 = 574,
  CODE_FOR_insv = 580,
  CODE_FOR_iorsi3 = 584,
  CODE_FOR_xorsi3 = 587,
  CODE_FOR_ashlsi3 = 593,
  CODE_FOR_ashrsi3 = 594,
  CODE_FOR_lshrsi3 = 595,
  CODE_FOR_rotlsi3 = 596,
  CODE_FOR_rotrsi3 = 597,
  CODE_FOR_ashldi3 = 598,
  CODE_FOR_extzv = 599,
  CODE_FOR_negdi2 = 600,
  CODE_FOR_negsi2 = 601,
  CODE_FOR_negsf2 = 602,
  CODE_FOR_negdf2 = 603,
  CODE_FOR_abssi2 = 604,
  CODE_FOR_abssf2 = 605,
  CODE_FOR_absdf2 = 606,
  CODE_FOR_sqrtsf2 = 607,
  CODE_FOR_sqrtdf2 = 608,
  CODE_FOR_one_cmplsi2 = 610,
  CODE_FOR_floatsisf2 = 611,
  CODE_FOR_floatsidf2 = 612,
  CODE_FOR_fix_truncsfsi2 = 613,
  CODE_FOR_fix_truncdfsi2 = 614,
  CODE_FOR_truncdfsf2 = 615,
  CODE_FOR_zero_extendhisi2 = 616,
  CODE_FOR_zero_extendqisi2 = 619,
  CODE_FOR_extendhisi2 = 621,
  CODE_FOR_extendhisi2_mem = 622,
  CODE_FOR_extendqihi2 = 625,
  CODE_FOR_extendqisi2 = 627,
  CODE_FOR_extendsfdf2 = 629,
  CODE_FOR_movdi = 630,
  CODE_FOR_movsi = 631,
  CODE_FOR_pic_load_addr_based = 635,
  CODE_FOR_builtin_setjmp_receiver = 636,
  CODE_FOR_storehi = 637,
  CODE_FOR_storehi_bigend = 638,
  CODE_FOR_storeinthi = 639,
  CODE_FOR_storehi_single_op = 640,
  CODE_FOR_movhi = 641,
  CODE_FOR_movhi_bytes = 642,
  CODE_FOR_movhi_bigend = 643,
  CODE_FOR_reload_outhi = 644,
  CODE_FOR_reload_inhi = 645,
  CODE_FOR_movqi = 646,
  CODE_FOR_movsf = 647,
  CODE_FOR_movdf = 649,
  CODE_FOR_reload_outdf = 650,
  CODE_FOR_movv2si = 651,
  CODE_FOR_movv4hi = 652,
  CODE_FOR_movv8qi = 653,
  CODE_FOR_load_multiple = 654,
  CODE_FOR_store_multiple = 655,
  CODE_FOR_movstrqi = 656,
  CODE_FOR_cbranchsi4 = 657,
  CODE_FOR_cmpsi = 658,
  CODE_FOR_cmpsf = 659,
  CODE_FOR_cmpdf = 660,
  CODE_FOR_cmpdi = 661,
  CODE_FOR_beq = 662,
  CODE_FOR_bne = 663,
  CODE_FOR_bgt = 664,
  CODE_FOR_ble = 665,
  CODE_FOR_bge = 666,
  CODE_FOR_blt = 667,
  CODE_FOR_bgtu = 668,
  CODE_FOR_bleu = 669,
  CODE_FOR_bgeu = 670,
  CODE_FOR_bltu = 671,
  CODE_FOR_bunordered = 672,
  CODE_FOR_bordered = 673,
  CODE_FOR_bungt = 674,
  CODE_FOR_bunlt = 675,
  CODE_FOR_bunge = 676,
  CODE_FOR_bunle = 677,
  CODE_FOR_buneq = 678,
  CODE_FOR_bltgt = 679,
  CODE_FOR_seq = 680,
  CODE_FOR_sne = 681,
  CODE_FOR_sgt = 682,
  CODE_FOR_sle = 683,
  CODE_FOR_sge = 684,
  CODE_FOR_slt = 685,
  CODE_FOR_sgtu = 686,
  CODE_FOR_sleu = 687,
  CODE_FOR_sgeu = 688,
  CODE_FOR_sltu = 689,
  CODE_FOR_sunordered = 690,
  CODE_FOR_sordered = 691,
  CODE_FOR_sungt = 692,
  CODE_FOR_sunge = 693,
  CODE_FOR_sunlt = 694,
  CODE_FOR_sunle = 695,
  CODE_FOR_movsicc = 696,
  CODE_FOR_movsfcc = 697,
  CODE_FOR_movdfcc = 698,
  CODE_FOR_jump = 699,
  CODE_FOR_call = 700,
  CODE_FOR_call_value = 701,
  CODE_FOR_sibcall = 702,
  CODE_FOR_sibcall_value = 703,
  CODE_FOR_return_addr_mask = 704,
  CODE_FOR_untyped_call = 705,
  CODE_FOR_casesi = 706,
  CODE_FOR_indirect_jump = 707,
  CODE_FOR_prologue = 732,
  CODE_FOR_epilogue = 733,
  CODE_FOR_eh_epilogue = 734,
  CODE_FOR_tablejump = 739,
  CODE_FOR_ffssi2 = 740,
  CODE_FOR_ctzsi2 = 741,
  CODE_FOR_nothing
};

#endif /* GCC_INSN_CODES_H */