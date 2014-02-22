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

libgcc/./libgcc.map: /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/mkmap-symver.awk /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/libgcc-std.ver /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/libgcc-glibc.ver  libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o
	{ $(NM_FOR_TARGET) -pg  libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o; echo %%; \
	  cat /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/libgcc-std.ver /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/config/libgcc-glibc.ver \
	    | sed -e '/^[   ]*#/d' \
	          -e 's/^%\(if\|else\|elif\|endif\|define\)/#\1/' \
	    | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS) $(INCLUDES)  -E -xassembler-with-cpp -; \
	} | $(AWK) -f /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-3.4.5/gcc/mkmap-symver.awk  > libgcc/./tmp-libgcc.map
	mv 'libgcc/./tmp-libgcc.map' $@

libgcc/./stacknote.s: stmp-dirs
	@( echo | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -S -o - -xc - | grep .note.GNU-stack || : ) > $@.tmp
	@mv -f $@.tmp $@

libgcc/./_udivsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udivsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_udivsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udivsi3.o -xassembler -
libgcc/./_divsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_divsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_divsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_divsi3.o -xassembler -
libgcc/./_umodsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_umodsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_umodsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_umodsi3.o -xassembler -
libgcc/./_modsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_modsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_modsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_modsi3.o -xassembler -
libgcc/./_dvmd_lnx.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_dvmd_lnx.o
	( $(NM_FOR_TARGET) -pg libgcc/./_dvmd_lnx.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_dvmd_lnx.o -xassembler -
libgcc/./_negdf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negdf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_negdf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negdf2.o -xassembler -
libgcc/./_addsubdf3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addsubdf3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_addsubdf3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addsubdf3.o -xassembler -
libgcc/./_muldivdf3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_muldivdf3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_muldivdf3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_muldivdf3.o -xassembler -
libgcc/./_cmpdf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_cmpdf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_cmpdf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_cmpdf2.o -xassembler -
libgcc/./_unorddf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_unorddf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_unorddf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_unorddf2.o -xassembler -
libgcc/./_fixdfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixdfsi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixdfsi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixdfsi.o -xassembler -
libgcc/./_fixunsdfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsdfsi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunsdfsi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsdfsi.o -xassembler -
libgcc/./_truncdfsf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_truncdfsf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_truncdfsf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_truncdfsf2.o -xassembler -
libgcc/./_negsf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negsf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_negsf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negsf2.o -xassembler -
libgcc/./_addsubsf3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addsubsf3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_addsubsf3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addsubsf3.o -xassembler -
libgcc/./_muldivsf3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_muldivsf3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_muldivsf3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_muldivsf3.o -xassembler -
libgcc/./_cmpsf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_cmpsf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_cmpsf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_cmpsf2.o -xassembler -
libgcc/./_unordsf2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_unordsf2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_unordsf2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_unordsf2.o -xassembler -
libgcc/./_fixsfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixsfsi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixsfsi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixsfsi.o -xassembler -
libgcc/./_fixunssfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunssfsi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunssfsi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunssfsi.o -xassembler -
libgcc/./_muldi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_muldi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_muldi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_muldi3.o -xassembler -
libgcc/./_negdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_negdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negdi2.o -xassembler -
libgcc/./_lshrdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_lshrdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_lshrdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_lshrdi3.o -xassembler -
libgcc/./_ashldi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ashldi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ashldi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ashldi3.o -xassembler -
libgcc/./_ashrdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ashrdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ashrdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ashrdi3.o -xassembler -
libgcc/./_cmpdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_cmpdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_cmpdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_cmpdi2.o -xassembler -
libgcc/./_ucmpdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ucmpdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ucmpdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ucmpdi2.o -xassembler -
libgcc/./_floatdidf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdidf.o
	( $(NM_FOR_TARGET) -pg libgcc/./_floatdidf.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdidf.o -xassembler -
libgcc/./_floatdisf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdisf.o
	( $(NM_FOR_TARGET) -pg libgcc/./_floatdisf.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdisf.o -xassembler -
libgcc/./_fixunsdfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsdfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunsdfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsdfdi.o -xassembler -
libgcc/./_fixdfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixdfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixdfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixdfdi.o -xassembler -
libgcc/./_fixunssfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunssfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunssfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunssfdi.o -xassembler -
libgcc/./_fixsfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixsfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixsfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixsfdi.o -xassembler -
libgcc/./_fixxfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixxfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixxfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixxfdi.o -xassembler -
libgcc/./_fixunsxfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsxfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunsxfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsxfdi.o -xassembler -
libgcc/./_floatdixf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatdixf.o
	( $(NM_FOR_TARGET) -pg libgcc/./_floatdixf.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatdixf.o -xassembler -
libgcc/./_fixunsxfsi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunsxfsi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunsxfsi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunsxfsi.o -xassembler -
libgcc/./_fixtfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixtfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixtfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixtfdi.o -xassembler -
libgcc/./_fixunstfdi.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_fixunstfdi.o
	( $(NM_FOR_TARGET) -pg libgcc/./_fixunstfdi.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_fixunstfdi.o -xassembler -
libgcc/./_floatditf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_floatditf.o
	( $(NM_FOR_TARGET) -pg libgcc/./_floatditf.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_floatditf.o -xassembler -
libgcc/./_clear_cache.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clear_cache.o
	( $(NM_FOR_TARGET) -pg libgcc/./_clear_cache.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clear_cache.o -xassembler -
libgcc/./_enable_execute_stack.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_enable_execute_stack.o
	( $(NM_FOR_TARGET) -pg libgcc/./_enable_execute_stack.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_enable_execute_stack.o -xassembler -
libgcc/./_trampoline.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_trampoline.o
	( $(NM_FOR_TARGET) -pg libgcc/./_trampoline.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_trampoline.o -xassembler -
libgcc/./__main.oS: stmp-dirs libgcc/./stacknote.s libgcc/./__main.o
	( $(NM_FOR_TARGET) -pg libgcc/./__main.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./__main.o -xassembler -
libgcc/./_absvsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_absvsi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_absvsi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_absvsi2.o -xassembler -
libgcc/./_absvdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_absvdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_absvdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_absvdi2.o -xassembler -
libgcc/./_addvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addvsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_addvsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addvsi3.o -xassembler -
libgcc/./_addvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_addvdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_addvdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_addvdi3.o -xassembler -
libgcc/./_subvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_subvsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_subvsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_subvsi3.o -xassembler -
libgcc/./_subvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_subvdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_subvdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_subvdi3.o -xassembler -
libgcc/./_mulvsi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_mulvsi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_mulvsi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_mulvsi3.o -xassembler -
libgcc/./_mulvdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_mulvdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_mulvdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_mulvdi3.o -xassembler -
libgcc/./_negvsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negvsi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_negvsi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negvsi2.o -xassembler -
libgcc/./_negvdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_negvdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_negvdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_negvdi2.o -xassembler -
libgcc/./_ctors.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ctors.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ctors.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ctors.o -xassembler -
libgcc/./_ffssi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ffssi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ffssi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ffssi2.o -xassembler -
libgcc/./_ffsdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ffsdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ffsdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ffsdi2.o -xassembler -
libgcc/./_clz.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clz.o
	( $(NM_FOR_TARGET) -pg libgcc/./_clz.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clz.o -xassembler -
libgcc/./_clzsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clzsi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_clzsi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clzsi2.o -xassembler -
libgcc/./_clzdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_clzdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_clzdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_clzdi2.o -xassembler -
libgcc/./_ctzsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ctzsi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ctzsi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ctzsi2.o -xassembler -
libgcc/./_ctzdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_ctzdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_ctzdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_ctzdi2.o -xassembler -
libgcc/./_popcount_tab.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_popcount_tab.o
	( $(NM_FOR_TARGET) -pg libgcc/./_popcount_tab.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_popcount_tab.o -xassembler -
libgcc/./_popcountsi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_popcountsi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_popcountsi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_popcountsi2.o -xassembler -
libgcc/./_popcountdi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_popcountdi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_popcountdi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_popcountdi2.o -xassembler -
libgcc/./_paritysi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_paritysi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_paritysi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_paritysi2.o -xassembler -
libgcc/./_paritydi2.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_paritydi2.o
	( $(NM_FOR_TARGET) -pg libgcc/./_paritydi2.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_paritydi2.o -xassembler -
libgcc/./_divdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_divdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_divdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_divdi3.o -xassembler -
libgcc/./_moddi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_moddi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_moddi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_moddi3.o -xassembler -
libgcc/./_udivdi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udivdi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_udivdi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udivdi3.o -xassembler -
libgcc/./_umoddi3.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_umoddi3.o
	( $(NM_FOR_TARGET) -pg libgcc/./_umoddi3.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_umoddi3.o -xassembler -
libgcc/./_udiv_w_sdiv.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udiv_w_sdiv.o
	( $(NM_FOR_TARGET) -pg libgcc/./_udiv_w_sdiv.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udiv_w_sdiv.o -xassembler -
libgcc/./_udivmoddi4.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_udivmoddi4.o
	( $(NM_FOR_TARGET) -pg libgcc/./_udivmoddi4.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_udivmoddi4.o -xassembler -
libgcc/./_eprintf.oS: stmp-dirs libgcc/./stacknote.s libgcc/./_eprintf.o
	( $(NM_FOR_TARGET) -pg libgcc/./_eprintf.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./_eprintf.o -xassembler -
libgcc/./__gcc_bcmp.oS: stmp-dirs libgcc/./stacknote.s libgcc/./__gcc_bcmp.o
	( $(NM_FOR_TARGET) -pg libgcc/./__gcc_bcmp.o | $(AWK) 'NF == 3 && $$2 !~ /^[UN]$$/ { print "\t.hidden", $$3 }'; cat libgcc/${dir}/stacknote.s ) | $(GCC_FOR_TARGET) $(LIBGCC2_CFLAGS)  -r -nostdinc -nostdlib -o $@ libgcc/./__gcc_bcmp.o -xassembler -

./libgcc.a: stmp-dirs  libgcc/./_udivsi3.oS libgcc/./_divsi3.oS libgcc/./_umodsi3.oS libgcc/./_modsi3.oS libgcc/./_dvmd_lnx.oS libgcc/./_negdf2.oS libgcc/./_addsubdf3.oS libgcc/./_muldivdf3.oS libgcc/./_cmpdf2.oS libgcc/./_unorddf2.oS libgcc/./_fixdfsi.oS libgcc/./_fixunsdfsi.oS libgcc/./_truncdfsf2.oS libgcc/./_negsf2.oS libgcc/./_addsubsf3.oS libgcc/./_muldivsf3.oS libgcc/./_cmpsf2.oS libgcc/./_unordsf2.oS libgcc/./_fixsfsi.oS libgcc/./_fixunssfsi.oS libgcc/./_muldi3.oS libgcc/./_negdi2.oS libgcc/./_lshrdi3.oS libgcc/./_ashldi3.oS libgcc/./_ashrdi3.oS libgcc/./_cmpdi2.oS libgcc/./_ucmpdi2.oS libgcc/./_floatdidf.oS libgcc/./_floatdisf.oS libgcc/./_fixunsdfdi.oS libgcc/./_fixdfdi.oS libgcc/./_fixunssfdi.oS libgcc/./_fixsfdi.oS libgcc/./_fixxfdi.oS libgcc/./_fixunsxfdi.oS libgcc/./_floatdixf.oS libgcc/./_fixunsxfsi.oS libgcc/./_fixtfdi.oS libgcc/./_fixunstfdi.oS libgcc/./_floatditf.oS libgcc/./_clear_cache.oS libgcc/./_enable_execute_stack.oS libgcc/./_trampoline.oS libgcc/./__main.oS libgcc/./_absvsi2.oS libgcc/./_absvdi2.oS libgcc/./_addvsi3.oS libgcc/./_addvdi3.oS libgcc/./_subvsi3.oS libgcc/./_subvdi3.oS libgcc/./_mulvsi3.oS libgcc/./_mulvdi3.oS libgcc/./_negvsi2.oS libgcc/./_negvdi2.oS libgcc/./_ctors.oS libgcc/./_ffssi2.oS libgcc/./_ffsdi2.oS libgcc/./_clz.oS libgcc/./_clzsi2.oS libgcc/./_clzdi2.oS libgcc/./_ctzsi2.oS libgcc/./_ctzdi2.oS libgcc/./_popcount_tab.oS libgcc/./_popcountsi2.oS libgcc/./_popcountdi2.oS libgcc/./_paritysi2.oS libgcc/./_paritydi2.oS libgcc/./_divdi3.oS libgcc/./_moddi3.oS libgcc/./_udivdi3.oS libgcc/./_umoddi3.oS libgcc/./_udiv_w_sdiv.oS libgcc/./_udivmoddi4.oS libgcc/./_eprintf.oS libgcc/./__gcc_bcmp.oS
	-rm -rf ./libgcc.a
	$(AR_CREATE_FOR_TARGET) ./libgcc.a libgcc/./_udivsi3.oS libgcc/./_divsi3.oS libgcc/./_umodsi3.oS libgcc/./_modsi3.oS libgcc/./_dvmd_lnx.oS libgcc/./_negdf2.oS libgcc/./_addsubdf3.oS libgcc/./_muldivdf3.oS libgcc/./_cmpdf2.oS libgcc/./_unorddf2.oS libgcc/./_fixdfsi.oS libgcc/./_fixunsdfsi.oS libgcc/./_truncdfsf2.oS libgcc/./_negsf2.oS libgcc/./_addsubsf3.oS libgcc/./_muldivsf3.oS libgcc/./_cmpsf2.oS libgcc/./_unordsf2.oS libgcc/./_fixsfsi.oS libgcc/./_fixunssfsi.oS libgcc/./_muldi3.oS libgcc/./_negdi2.oS libgcc/./_lshrdi3.oS libgcc/./_ashldi3.oS libgcc/./_ashrdi3.oS libgcc/./_cmpdi2.oS libgcc/./_ucmpdi2.oS libgcc/./_floatdidf.oS libgcc/./_floatdisf.oS libgcc/./_fixunsdfdi.oS libgcc/./_fixdfdi.oS libgcc/./_fixunssfdi.oS libgcc/./_fixsfdi.oS libgcc/./_fixxfdi.oS libgcc/./_fixunsxfdi.oS libgcc/./_floatdixf.oS libgcc/./_fixunsxfsi.oS libgcc/./_fixtfdi.oS libgcc/./_fixunstfdi.oS libgcc/./_floatditf.oS libgcc/./_clear_cache.oS libgcc/./_enable_execute_stack.oS libgcc/./_trampoline.oS libgcc/./__main.oS libgcc/./_absvsi2.oS libgcc/./_absvdi2.oS libgcc/./_addvsi3.oS libgcc/./_addvdi3.oS libgcc/./_subvsi3.oS libgcc/./_subvdi3.oS libgcc/./_mulvsi3.oS libgcc/./_mulvdi3.oS libgcc/./_negvsi2.oS libgcc/./_negvdi2.oS libgcc/./_ctors.oS libgcc/./_ffssi2.oS libgcc/./_ffsdi2.oS libgcc/./_clz.oS libgcc/./_clzsi2.oS libgcc/./_clzdi2.oS libgcc/./_ctzsi2.oS libgcc/./_ctzdi2.oS libgcc/./_popcount_tab.oS libgcc/./_popcountsi2.oS libgcc/./_popcountdi2.oS libgcc/./_paritysi2.oS libgcc/./_paritydi2.oS libgcc/./_divdi3.oS libgcc/./_moddi3.oS libgcc/./_udivdi3.oS libgcc/./_umoddi3.oS libgcc/./_udiv_w_sdiv.oS libgcc/./_udivmoddi4.oS libgcc/./_eprintf.oS libgcc/./__gcc_bcmp.oS
	$(RANLIB_FOR_TARGET) ./libgcc.a

./libgcov.a: stmp-dirs  libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	-rm -rf ./libgcov.a
	$(AR_CREATE_FOR_TARGET) ./libgcov.a libgcc/./_gcov.o libgcc/./_gcov_merge_add.o libgcc/./_gcov_merge_single.o libgcc/./_gcov_merge_delta.o
	$(RANLIB_FOR_TARGET) ./libgcov.a

./libgcc_eh.a: stmp-dirs  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o
	-rm -rf ./libgcc_eh.a
	$(AR_CREATE_FOR_TARGET) ./libgcc_eh.a libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o
	$(RANLIB_FOR_TARGET) ./libgcc_eh.a

./libgcc_s.so:  libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o libgcc/./libgcc.map
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/build-gcc/gcc/xgcc -B/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/build-gcc/gcc/ -B/home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu/arm-softfloat-linux-gnu/bin/ -B/home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu/arm-softfloat-linux-gnu/lib/ -isystem /home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu/arm-softfloat-linux-gnu/include -isystem /home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu/arm-softfloat-linux-gnu/sys-include -O2  -DIN_GCC -DCROSS_COMPILE   -W -Wall -Wwrite-strings -Wstrict-prototypes -Wmissing-prototypes -Wold-style-definition  -isystem ./include  -fomit-frame-pointer -fPIC -g0 -DHAVE_GTHR_DEFAULT -DIN_LIBGCC2 -D__GCC_FLOAT_NOT_NEEDED  -shared -nodefaultlibs -Wl,--soname=libgcc_s.so.1 -Wl,--version-script=libgcc/./libgcc.map -o libgcc_s.so.1.tmp   libgcc/./_udivsi3.o libgcc/./_divsi3.o libgcc/./_umodsi3.o libgcc/./_modsi3.o libgcc/./_dvmd_lnx.o libgcc/./_negdf2.o libgcc/./_addsubdf3.o libgcc/./_muldivdf3.o libgcc/./_cmpdf2.o libgcc/./_unorddf2.o libgcc/./_fixdfsi.o libgcc/./_fixunsdfsi.o libgcc/./_truncdfsf2.o libgcc/./_negsf2.o libgcc/./_addsubsf3.o libgcc/./_muldivsf3.o libgcc/./_cmpsf2.o libgcc/./_unordsf2.o libgcc/./_fixsfsi.o libgcc/./_fixunssfsi.o libgcc/./_muldi3.o libgcc/./_negdi2.o libgcc/./_lshrdi3.o libgcc/./_ashldi3.o libgcc/./_ashrdi3.o libgcc/./_cmpdi2.o libgcc/./_ucmpdi2.o libgcc/./_floatdidf.o libgcc/./_floatdisf.o libgcc/./_fixunsdfdi.o libgcc/./_fixdfdi.o libgcc/./_fixunssfdi.o libgcc/./_fixsfdi.o libgcc/./_fixxfdi.o libgcc/./_fixunsxfdi.o libgcc/./_floatdixf.o libgcc/./_fixunsxfsi.o libgcc/./_fixtfdi.o libgcc/./_fixunstfdi.o libgcc/./_floatditf.o libgcc/./_clear_cache.o libgcc/./_enable_execute_stack.o libgcc/./_trampoline.o libgcc/./__main.o libgcc/./_absvsi2.o libgcc/./_absvdi2.o libgcc/./_addvsi3.o libgcc/./_addvdi3.o libgcc/./_subvsi3.o libgcc/./_subvdi3.o libgcc/./_mulvsi3.o libgcc/./_mulvdi3.o libgcc/./_negvsi2.o libgcc/./_negvdi2.o libgcc/./_ctors.o libgcc/./_ffssi2.o libgcc/./_ffsdi2.o libgcc/./_clz.o libgcc/./_clzsi2.o libgcc/./_clzdi2.o libgcc/./_ctzsi2.o libgcc/./_ctzdi2.o libgcc/./_popcount_tab.o libgcc/./_popcountsi2.o libgcc/./_popcountdi2.o libgcc/./_paritysi2.o libgcc/./_paritydi2.o libgcc/./_divdi3.o libgcc/./_moddi3.o libgcc/./_udivdi3.o libgcc/./_umoddi3.o libgcc/./_udiv_w_sdiv.o libgcc/./_udivmoddi4.o  libgcc/./unwind-dw2.o libgcc/./unwind-dw2-fde-glibc.o libgcc/./unwind-sjlj.o libgcc/./gthr-gnat.o libgcc/./unwind-c.o -lc && rm -f libgcc_s.so && if [ -f libgcc_s.so.1 ]; then mv -f libgcc_s.so.1 libgcc_s.so.1.backup; else true; fi && mv libgcc_s.so.1.tmp libgcc_s.so.1 && ln -s libgcc_s.so.1 libgcc_s.so

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

all: stmp-dirs ./libgcc.a ./libgcov.a ./libgcc_eh.a ./libgcc_s.so

install: stmp-dirs ./libgcc.a ./libgcov.a ./libgcc_eh.a ./libgcc_s.so
	$(INSTALL_DATA) ./libgcc.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc.a
	$(INSTALL_DATA) ./libgcov.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcov.a
	$(INSTALL_DATA) ./libgcc_eh.a $(DESTDIR)$(libsubdir)/
	$(RANLIB_FOR_TARGET) $(DESTDIR)$(libsubdir)/libgcc_eh.a
	$(SHELL) $(srcdir)/mkinstalldirs $(DESTDIR)$(slibdir); /usr/bin/install -c -m 644 libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so.1; rm -f $(DESTDIR)$(slibdir)/libgcc_s.so; ln -s libgcc_s.so.1 $(DESTDIR)$(slibdir)/libgcc_s.so
