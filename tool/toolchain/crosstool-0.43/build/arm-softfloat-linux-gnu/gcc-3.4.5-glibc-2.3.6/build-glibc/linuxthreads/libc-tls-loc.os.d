 \
 $(common-objpfx)linuxthreads/libc-tls-loc.os \
  $(common-objpfx)linuxthreads/libc-tls-loc.os:  \
 libc-tls-loc.c ./../include/libc-symbols.h \
  $(common-objpfx)config.h \
  ../sysdeps/wordsize-32/symbol-hacks.h ../include/tls.h \
  ../sysdeps/generic/tls.h

./../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/wordsize-32/symbol-hacks.h:

../include/tls.h:

../sysdeps/generic/tls.h:
