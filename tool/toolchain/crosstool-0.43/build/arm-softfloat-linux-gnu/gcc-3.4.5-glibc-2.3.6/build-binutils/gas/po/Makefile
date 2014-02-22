# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
#
# This file file be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.15

SHELL = /bin/sh


srcdir = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/po
top_srcdir = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas
VPATH = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/po

prefix = /home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = $(srcdir)/../../mkinstalldirs

CC = gcc
GENCAT = @GENCAT@
GMSGFMT = PATH=../src:$$PATH 
MSGFMT = 
XGETTEXT = PATH=../src:$$PATH 
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  fr.po tr.po es.po
GMOFILES =  fr.gmo tr.gmo es.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/app.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/app.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/as.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/as.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/as.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/asintl.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/atof-generic.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/atof-generic.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/bignum-copy.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/bignum-copy.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/bignum.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/bit_fix.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/cgen.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/cond.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/cond.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-crisaout.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-criself.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-i386aout.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-i386coff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-i386elf.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-mipsecoff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/e-mipself.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-aout.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-aout.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-bout.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-bout.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-coff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-coff.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-ecoff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-ecoff.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-elf.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-elf.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-evax.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-evax.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-hp300.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-hp300.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-ieee.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-ieee.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-som.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-som.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-vms.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/obj-vms.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-a29k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-a29k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-alpha.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-alpha.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-arc.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-arc.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-arm.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-arm.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-avr.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-avr.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-cris.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-cris.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-d10v.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-d10v.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-d30v.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-d30v.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-dlx.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-dlx.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-fr30.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-fr30.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-frv.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-frv.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-h8300.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-h8300.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-h8500.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-h8500.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-hppa.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-hppa.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i370.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i370.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i386.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i386.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i860.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i860.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i960.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-i960.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ia64.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ia64.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ip2k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ip2k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m32r.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m32r.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m68hc11.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m68hc11.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m68k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m68k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m88k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-m88k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mcore.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mcore.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mips.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mips.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mmix.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mmix.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mn10200.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mn10200.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mn10300.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-mn10300.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-msp430.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-msp430.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ns32k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ns32k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-openrisc.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-openrisc.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-or32.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-or32.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-pdp11.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-pdp11.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-pj.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-pj.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ppc.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-ppc.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-s390.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-s390.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sh64.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sh64.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sh.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sh.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sparc.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-sparc.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tahoe.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tahoe.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic30.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic30.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic54x.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic54x.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic80.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-tic80.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-v850.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-v850.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-vax.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-vax.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-w65.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-w65.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-xstormy16.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-xstormy16.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-xtensa.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-xtensa.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-z8k.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/config/tc-z8k.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/depend.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/depend.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dw2gencfi.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dw2gencfi.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dw2gencfi.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dwarf2dbg.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dwarf2dbg.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/dwarf2dbg.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/ecoff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/ecoff.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/ecoff.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/ehopt.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/ehopt.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/emul.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/emul-target.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/expr.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/expr.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/expr.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-copy.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-copy.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-konst.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-konst.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-mult.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/flonum-mult.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/frags.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/frags.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/frags.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/hash.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/hash.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/hash.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/input-file.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/input-file.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/input-file.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/input-scrub.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/input-scrub.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/itbl-ops.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/itbl-ops.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/listing.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/listing.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/listing.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/literal.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/literal.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/macro.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/macro.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/macro.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/messages.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/messages.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/obj.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/output-file.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/output-file.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/output-file.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/read.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/read.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/read.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/sb.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/sb.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/sb.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/stabs.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/stabs.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/struc-symbol.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/subsegs.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/subsegs.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/subsegs.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/symbols.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/symbols.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/symbols.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/tc.h \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/write.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/write.c \
	/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/binutils-2.15/gas/write.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

dvi info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
