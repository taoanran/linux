	.file	"pt-initfini.c"
#APP
	
#include "defs.h"
	
/*@HEADER_ENDS*/
/*@_init_EPILOG_BEGINS*/
	.section .init
	ldr	pc, [sp], #4
#APP
	END_INIT
	
/*@_init_EPILOG_ENDS*/
/*@_fini_EPILOG_BEGINS*/
	.section .fini
	ldr	pc, [sp], #4
#APP
	END_FINI
	
/*@_fini_EPILOG_ENDS*/
/*@TRAILER_BEGINS*/
	.ident	"GCC: (GNU) 3.4.5"
