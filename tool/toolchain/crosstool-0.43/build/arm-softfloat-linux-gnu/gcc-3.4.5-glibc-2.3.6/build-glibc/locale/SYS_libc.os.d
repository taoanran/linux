 \
 $(common-objpfx)locale/SYS_libc.os \
  $(common-objpfx)locale/SYS_libc.os:  \
 SYS_libc.c ./../include/libc-symbols.h programs/config.h \
  programs/../../version.h \
  $(common-objpfx)config.h \
  ../sysdeps/wordsize-32/symbol-hacks.h

./../include/libc-symbols.h:

programs/config.h:

programs/../../version.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:
