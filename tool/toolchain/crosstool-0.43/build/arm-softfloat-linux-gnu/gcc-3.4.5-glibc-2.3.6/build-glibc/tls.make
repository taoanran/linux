# Generated from tls.make.c by Makerules.
use-tls = no
use-thread = no
common-generated += tls.make
$(common-objpfx)tls.make: $(..)tls.make.c $(..)./include/libc-symbols.h \
  $(common-objpfx)config.h \
 $(..)sysdeps/wordsize-32/symbol-hacks.h $(..)include/tls.h $(..)sysdeps/generic/tls.h

$(..)./include/libc-symbols.h:

$(common-objpfx)config.h:

$(..)sysdeps/wordsize-32/symbol-hacks.h:

$(..)include/tls.h:

$(..)sysdeps/generic/tls.h:
