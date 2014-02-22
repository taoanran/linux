# 1 "<stdin>"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "./include/libc-symbols.h" 1
# 56 "./include/libc-symbols.h"
# 1 "/home/taoanran/git/linux/crosstool-0.43/build/arm-softfloat-linux-gnu/gcc-3.4.5-glibc-2.3.6/build-glibc-headers/config.h" 1
# 57 "./include/libc-symbols.h" 2
# 819 "./include/libc-symbols.h"
# 1 "sysdeps/wordsize-32/symbol-hacks.h" 1
# 820 "./include/libc-symbols.h" 2
# 1 "<command line>" 2
# 1 "<stdin>"





s390x-.*-linux.* DEFAULT GLIBC_2.2
cris-.*-linux.* DEFAULT GLIBC_2.2
x86_64-.*-linux.* DEFAULT GLIBC_2.2.5
powerpc64-.*-linux.* DEFAULT GLIBC_2.3
.*-.*-gnu-gnu.* DEFAULT GLIBC_2.2.6


sparc64-.*-linux.* libm=6 GLIBC_2.2
alpha.*-.*-linux.* libm=6.1
mips.*-.*-linux.* libm=6 GLIBC_2.0 GLIBC_2.2
ia64-.*-linux.* libm=6.1 GLIBC_2.2
sh.*-.*-linux.* libm=6 GLIBC_2.2
hppa.*-.*-.* libm=6 GLIBC_2.2
.*-.*-linux.* libm=6
.*-.*-gnu-gnu.* libm=6

alpha.*-.*-linux.* libc=6.1
mips.*-.*-linux.* libc=6 GLIBC_2.0 GLIBC_2.2
ia64-.*-linux.* libc=6.1 GLIBC_2.2
sh.*-.*-linux.* libc=6 GLIBC_2.2
sparc64-.*-linux.* libc=6 GLIBC_2.2
hppa.*-.*-.* libc=6 GLIBC_2.2
.*-.*-linux.* libc=6

.*-.*-gnu-gnu.* libmachuser=1

.*-.*-gnu-gnu.* libhurduser=0.3

.*-.*-gnu-gnu.* libc=0.3

i.86-.*-linux.* ld=ld-linux.so.2
sparc64-.*-linux.* ld=ld-linux.so.2 GLIBC_2.2
sparc.*-.*-linux.* ld=ld-linux.so.2
alpha.*-.*-linux.* ld=ld-linux.so.2
arm.*-.*-linux.* ld=ld-linux.so.2
sh.*-.*-linux.* ld=ld-linux.so.2 GLIBC_2.2
ia64-.*-linux.* ld=ld-linux-ia64.so.2 GLIBC_2.2
mips.*-.*-linux.* ld=ld.so.1 GLIBC_2.0 GLIBC_2.2
hppa.*-.*-.* ld=ld.so.1 GLIBC_2.2
s390x-.*-linux.* ld=ld64.so.1 GLIBC_2.2
powerpc64.*-.*-linux.* ld=ld64.so.1 GLIBC_2.3
cris-.*-linux.* ld=ld.so.1 GLIBC_2.2
x86_64-.*-linux.* ld=ld-linux-x86-64.so.2 GLIBC_2.2.5
.*-.*-.* ld=ld.so.1

alpha.*-.*-linux.* libdl=2.1
mips.*-.*-linux.* libdl=2 GLIBC_2.0 GLIBC_2.2
.*-.*-.* libdl=2

alpha.*-.*-linux.* libutil=1.1
.*-.*-.* libutil=1

alpha.*-.*-linux.* libresolv=2.1
mips.*-.*-linux.* libresolv=2 GLIBC_2.0 GLIBC_2.2
.*-.*-.* libresolv=2

mips.*-.*-linux.* libnss_files=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_dns=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_compat=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_nis=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_nisplus=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_ldap=2 GLIBC_2.0 GLIBC_2.2
mips.*-.*-linux.* libnss_hesiod=2 GLIBC_2.0 GLIBC_2.2
.*-.*-.* libnss_files=2
.*-.*-.* libnss_dns=2
.*-.*-.* libnss_compat=2
.*-.*-.* libnss_nis=2
.*-.*-.* libnss_nisplus=2
.*-.*-.* libnss_ldap=2
.*-.*-.* libnss_hesiod=2

alpha.*-.*-linux.* libnsl=1.1
mips.*-.*-linux.* libnsl=1 GLIBC_2.0 GLIBC_2.2
.*-.*-.* libnsl=1

alpha.*-.*-linux.* libcrypt=1.1
.*-.*-.* libcrypt=1

alpha.*-.*-linux.* libBrokenLocale=1.1
ia64-.*-.* libBrokenLocale=1 GLIBC_2.2
sh.*-.*-.* libBrokenLocale=1 GLIBC_2.2
sparc64-.*-.* libBrokenLocale=1 GLIBC_2.2
hppa-.*-.* libBrokenLocale=1 GLIBC_2.2
.*-.*-.* libBrokenLocale=1

mips.*-.*-linux.* librt=1 GLIBC_2.0 GLIBC_2.2
.*-.*-.* librt=1

.*-.*-.* libanl=1