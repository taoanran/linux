 \
 $(common-objpfx)linuxthreads/pt-machine.os \
  $(common-objpfx)linuxthreads/pt-machine.os:  \
 pt-machine.c ./../include/libc-symbols.h \
  $(common-objpfx)config.h \
  ../sysdeps/wordsize-32/symbol-hacks.h \
  ../linuxthreads/sysdeps/arm/pt-machine.h

./../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../linuxthreads/sysdeps/arm/pt-machine.h:
