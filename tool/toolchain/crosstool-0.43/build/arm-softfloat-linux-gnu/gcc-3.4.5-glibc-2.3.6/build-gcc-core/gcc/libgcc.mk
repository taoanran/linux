srcdir = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc
VPATH = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc
EQ = =

force:

libgcc/./_udivsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_udivsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_udivsi3.o
libgcc/./_divsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_divsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_divsi3.o
libgcc/./_umodsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_umodsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_umodsi3.o
libgcc/./_modsi3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_modsi3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_modsi3.o
libgcc/./_dvmd_lnx.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_dvmd_lnx -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_dvmd_lnx.o
libgcc/./_negdf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negdf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_negdf2.o
libgcc/./_addsubdf3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addsubdf3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_addsubdf3.o
libgcc/./_muldivdf3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldivdf3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_muldivdf3.o
libgcc/./_cmpdf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpdf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_cmpdf2.o
libgcc/./_unorddf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_unorddf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_unorddf2.o
libgcc/./_fixdfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixdfsi -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_fixdfsi.o
libgcc/./_fixunsdfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunsdfsi -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_fixunsdfsi.o
libgcc/./_truncdfsf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_truncdfsf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_truncdfsf2.o
libgcc/./_negsf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_negsf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_negsf2.o
libgcc/./_addsubsf3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_addsubsf3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_addsubsf3.o
libgcc/./_muldivsf3.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_muldivsf3 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_muldivsf3.o
libgcc/./_cmpsf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_cmpsf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_cmpsf2.o
libgcc/./_unordsf2.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_unordsf2 -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_unordsf2.o
libgcc/./_fixsfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixsfsi -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_fixsfsi.o
libgcc/./_fixunssfsi.o: stmp-dirs $(srcdir)/config/$(LIB1ASMSRC)
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -DL_fixunssfsi -xassembler-with-cpp -c $(srcdir)/config/$(LIB1ASMSRC) -o libgcc/./_fixunssfsi.o
libgcc/./_muldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_muldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_muldi3.o
libgcc/./_negdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negdi2.o
libgcc/./_lshrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_lshrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_lshrdi3.o
libgcc/./_ashldi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashldi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashldi3.o
libgcc/./_ashrdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ashrdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_ashrdi3.o
libgcc/./_cmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_cmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_cmpdi2.o
libgcc/./_ucmpdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ucmpdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ucmpdi2.o
libgcc/./_floatdidf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdidf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdidf.o
libgcc/./_floatdisf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdisf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdisf.o
libgcc/./_fixunsdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsdfdi.o
libgcc/./_fixdfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixdfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixdfdi.o
libgcc/./_fixunssfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunssfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunssfdi.o
libgcc/./_fixsfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixsfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixsfdi.o
libgcc/./_fixxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixxfdi.o
libgcc/./_fixunsxfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfdi.o
libgcc/./_floatdixf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatdixf -c $(srcdir)/libgcc2.c -o libgcc/./_floatdixf.o
libgcc/./_fixunsxfsi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunsxfsi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunsxfsi.o
libgcc/./_fixtfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixtfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixtfdi.o
libgcc/./_fixunstfdi.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_fixunstfdi -c $(srcdir)/libgcc2.c -o libgcc/./_fixunstfdi.o
libgcc/./_floatditf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_floatditf -c $(srcdir)/libgcc2.c -o libgcc/./_floatditf.o
libgcc/./_clear_cache.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clear_cache -c $(srcdir)/libgcc2.c -o libgcc/./_clear_cache.o
libgcc/./_enable_execute_stack.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_enable_execute_stack -c $(srcdir)/libgcc2.c -o libgcc/./_enable_execute_stack.o
libgcc/./_trampoline.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_trampoline -c $(srcdir)/libgcc2.c -o libgcc/./_trampoline.o
libgcc/./__main.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__main -c $(srcdir)/libgcc2.c -o libgcc/./__main.o
libgcc/./_absvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvsi2.o
libgcc/./_absvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_absvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_absvdi2.o
libgcc/./_addvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvsi3.o
libgcc/./_addvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_addvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_addvdi3.o
libgcc/./_subvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvsi3.o
libgcc/./_subvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_subvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_subvdi3.o
libgcc/./_mulvsi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvsi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvsi3.o
libgcc/./_mulvdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_mulvdi3 -c $(srcdir)/libgcc2.c -o libgcc/./_mulvdi3.o
libgcc/./_negvsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvsi2.o
libgcc/./_negvdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_negvdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_negvdi2.o
libgcc/./_ctors.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctors -c $(srcdir)/libgcc2.c -o libgcc/./_ctors.o
libgcc/./_ffssi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffssi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffssi2.o
libgcc/./_ffsdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ffsdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ffsdi2.o
libgcc/./_clz.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clz -c $(srcdir)/libgcc2.c -o libgcc/./_clz.o
libgcc/./_clzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzsi2.o
libgcc/./_clzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_clzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_clzdi2.o
libgcc/./_ctzsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzsi2.o
libgcc/./_ctzdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_ctzdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_ctzdi2.o
libgcc/./_popcount_tab.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcount_tab -c $(srcdir)/libgcc2.c -o libgcc/./_popcount_tab.o
libgcc/./_popcountsi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountsi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountsi2.o
libgcc/./_popcountdi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_popcountdi2 -c $(srcdir)/libgcc2.c -o libgcc/./_popcountdi2.o
libgcc/./_paritysi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritysi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritysi2.o
libgcc/./_paritydi2.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_paritydi2 -c $(srcdir)/libgcc2.c -o libgcc/./_paritydi2.o
libgcc/./_eprintf.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_eprintf -c $(srcdir)/libgcc2.c -o libgcc/./_eprintf.o
libgcc/./__gcc_bcmp.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL__gcc_bcmp -c $(srcdir)/libgcc2.c -o libgcc/./__gcc_bcmp.o
libgcc/./_divdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_divdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_divdi3.o
libgcc/./_moddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_moddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_moddi3.o
libgcc/./_udivdi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivdi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivdi3.o
libgcc/./_umoddi3.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_umoddi3 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_umoddi3.o
libgcc/./_udiv_w_sdiv.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udiv_w_sdiv -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udiv_w_sdiv.o
libgcc/./_udivmoddi4.o: stmp-dirs $(srcdir)/libgcc2.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h unwind.inc unwind-dw2-fde.h unwind-dw2-fde.c gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_udivmoddi4 -c $(srcdir)/libgcc2.c -fexceptions -fnon-call-exceptions -o libgcc/./_udivmoddi4.o
libgcc/./unwind-dw2.o: stmp-dirs /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-dw2.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-dw2.c -o libgcc/./unwind-dw2.o
libgcc/./unwind-dw2-fde-glibc.o: stmp-dirs /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-dw2-fde-glibc.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-dw2-fde-glibc.c -o libgcc/./unwind-dw2-fde-glibc.o
libgcc/./unwind-sjlj.o: stmp-dirs /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-sjlj.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-sjlj.c -o libgcc/./unwind-sjlj.o
libgcc/./gthr-gnat.o: stmp-dirs /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/gthr-gnat.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/gthr-gnat.c -o libgcc/./gthr-gnat.o
libgcc/./unwind-c.o: stmp-dirs /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-c.c
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) -fexceptions -c /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/unwind-c.c -o libgcc/./unwind-c.o
libgcc/./_gcov.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov -c $(srcdir)/libgcov.c -o libgcc/./_gcov.o
libgcc/./_gcov_merge_add.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_add -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_add.o
libgcc/./_gcov_merge_single.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_single -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_single.o
libgcc/./_gcov_merge_delta.o: stmp-dirs $(srcdir)/libgcov.c $(CONFIG_H) coretypes.h $(TM_H) $(MACHMODE_H) longlong.h gbl-ctors.h config.status stmp-int-hdrs tsystem.h $(srcdir)/gcov-io.h $(srcdir)/gcov-io.c gcov-iov.h
	$(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES) $(MAYBE_USE_COLLECT2) -DL_gcov_merge_delta -c $(srcdir)/libgcov.c -o libgcc/./_gcov_merge_delta.o

./libgcc.a: stmp-dirs  libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o  libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	-rm -rf ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o libgcc/./_eprintf.o libgcc/./__gcc_bcmp.o
	$(RANLIB_FOR_TARGET) ./libgcc.a

./libgcov.a: stmp-dirs  libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	-rm -rf ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) ./libgcov.a

libgcc-stage-start:
	for dir in libgcc; do \
	  if [ -d $(stage)/$$dir ]; then true; else /bin/sh /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/mkinstalldirs $(stage)/$$dir; fi; \
	done
	-for dir in libgcc; do \
	  mv $$dir/*.o $(stage)/$$dir; \
	  mv $$dir/*.os $(stage)/$$dir || true; \
	  test ! -f $$dir/stacknote.s || mv $$dir/stacknote.s $(stage)/$$dir; \
	  test ! -f $$dir/libgcc.a || mv $$dir/lib* $(stage)/$$dir; \
	done

stmp-dirs: force
	for d in libgcc; do \
	  if [ -d $$d ]; then true; else /bin/sh /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/mkinstalldirs $$d; fi; \
	done
	if [ -f stmp-dirs ]; then true; else touch stmp-dirs; fi

all: stmp-dirs ./libgcc.a ./libgcov.a

install: stmp-dirs ./libgcc.a ./libgcov.a
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
