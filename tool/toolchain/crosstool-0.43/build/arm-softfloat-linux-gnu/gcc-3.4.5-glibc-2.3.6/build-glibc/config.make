# config.make.  Generated from config.make.in by configure.
# From $Id: config.make.in,v 1.106.4.1 2005/07/18 01:38:54 roland Exp $.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.3.6
release = stable

# Installation prefixes.
install_root =
prefix = /usr
exec_prefix = ${prefix}
datadir = ${prefix}/share
libdir = ${exec_prefix}/lib
slibdir = /lib
localedir = 
sysconfdir = /etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = /sbin
infodir = ${prefix}/info
includedir = ${prefix}/include

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = arm
base-machine = arm
config-vendor = softfloat
config-os = linux-gnu
config-sysdirs =  sysdeps/arm/elf linuxthreads/sysdeps/unix/sysv/linux/arm linuxthreads/sysdeps/unix/sysv/linux linuxthreads/sysdeps/pthread sysdeps/pthread linuxthreads/sysdeps/unix/sysv linuxthreads/sysdeps/unix linuxthreads/sysdeps/arm sysdeps/unix/sysv/linux/arm sysdeps/unix/sysv/linux sysdeps/gnu sysdeps/unix/common sysdeps/unix/mman sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/arm sysdeps/unix sysdeps/posix sysdeps/arm sysdeps/wordsize-32 sysdeps/ieee754/flt-32 sysdeps/ieee754/dbl-64 sysdeps/ieee754 sysdeps/generic/elf sysdeps/generic

defines =  -D_LIBC_REENTRANT
sysincludes = -nostdinc -isystem /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-core-prefix/lib/gcc/arm-softfloat-linux-gnu/3.4.5/include -isystem /home/taoanran/git/linux/crosstool/gcc-3.4.5-glibc-2.3.6/arm-softfloat-linux-gnu/arm-softfloat-linux-gnu/include
all-warnings = 

elf = yes
have-protected = yes
have-z-nodelete = yes
have-z-nodlopen = yes
have-z-initfirst = yes
have-z-combreloc = yes
have-z-execstack = yes
have-initfini = 
have-z-relro = no
have-Bgroup = yes
have-as-needed = no
libgcc_s_suffix = 
need-nopic-initfini = 
with-fp = no
with-cvs = no
old-glibc-headers = no
unwind-find-fde = yes
have-initfini-array = yes
have-cpp-asm-debuginfo = yes
enable-check-abi = no
have-forced-unwind = yes
have-fpie = no
have-selinux = no
have-libaudit = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-unit-at-a-time
bind-now = no

static-libgcc = -static-libgcc

versioning = yes
oldest-abi = default
no-whole-archive = -Wl,--no-whole-archive
exceptions = -fexceptions
have_doors = no

mach-interface-list = 

have-bash2 = yes
have-ksh = yes

sizeof-long-double = 8

# Configuration options.
gnu-as = yes
gnu-ld = yes
build-static = yes
build-shared = yes
build-pic-default= no
build-profile = no
build-omitfp = no
build-bounded = no
build-static-nss = no
add-ons = linuxthreads
cross-compiling = yes
force-install = yes

# Build tools.
CC = arm-softfloat-linux-gnu-gcc 
CXX = g++
BUILD_CC = gcc
CFLAGS = -O 
ASFLAGS-config = 
AR = /home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/gcc-core-prefix/lib/gcc/arm-softfloat-linux-gnu/3.4.5/../../../../arm-softfloat-linux-gnu/bin/ar
RANLIB = :
MAKEINFO = :
AS = $(CC) -c
MIG = 
PWD_P = /bin/pwd
BISON = /usr/bin/bison
AUTOCONF = no
OBJDUMP = objdump

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/sbin/install-info
LN_S = ln -s
MSGFMT = :

# Script execution tools.
BASH = /bin/sh
KSH = /bin/sh
AWK = gawk
PERL = /usr/bin/perl

# Additional libraries.
LIBGD = no

# More variables may be inserted below by configure.

override stddef.h = # The installed <stddef.h> seems to be libc-friendly.
