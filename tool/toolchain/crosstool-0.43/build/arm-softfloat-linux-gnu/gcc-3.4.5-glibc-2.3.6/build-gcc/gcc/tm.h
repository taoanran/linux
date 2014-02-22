#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (TARGET_CPU_generic)
#ifdef IN_GCC
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/linux.h"
# include "config/arm/elf.h"
# include "config/arm/linux-gas.h"
# include "config/arm/linux-elf.h"
# include "config/arm/aout.h"
# include "config/arm/arm.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */
