 \
 $(common-objpfx)elf/interp.os \
  $(common-objpfx)elf/interp.os:  \
 interp.c ./../include/libc-symbols.h \
  $(common-objpfx)config.h \
  ../sysdeps/wordsize-32/symbol-hacks.h

./../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h: