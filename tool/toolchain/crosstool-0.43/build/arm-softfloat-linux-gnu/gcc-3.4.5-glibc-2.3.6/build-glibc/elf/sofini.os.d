 \
 $(common-objpfx)elf/sofini.os \
  $(common-objpfx)elf/sofini.os:  \
 sofini.c ./../include/libc-symbols.h \
  $(common-objpfx)config.h \
  ../sysdeps/wordsize-32/symbol-hacks.h

./../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h: