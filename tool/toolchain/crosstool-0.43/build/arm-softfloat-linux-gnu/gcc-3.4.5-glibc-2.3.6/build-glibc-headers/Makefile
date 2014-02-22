# Generated from $Id: Makefile.in,v 1.7 2000/11/15 23:03:08 drepper Exp $.

srcdir = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/glibc-2.3.6

# Uncomment the line below if you want to do parallel build.
# PARALLELMFLAGS = -j 4

# This option is for those who modify the sources and keep them in a
# CVS repository.  Sometimes it is necessary to pass options to the cvs
# program (not the command), like -z9 or -x.
# CVSOPTS = -z9

all .DEFAULT:
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" CVSOPTS="$(CVSOPTS)" -C $(srcdir) objdir=`pwd` $@

install:
	LANGUAGE=C LC_ALL=C; export LANGUAGE LC_ALL; \
	$(MAKE) -r PARALLELMFLAGS="$(PARALLELMFLAGS)" CVSOPTS="$(CVSOPTS)" -C $(srcdir) objdir=`pwd` $@
