	.file	"initfini.c"
#APP
	
#include "defs.h"
	
/*@HEADER_ENDS*/
/*@_init_PROLOG_BEGINS*/
	.align	2
	.type	call_gmon_start, %function
call_gmon_start:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	stmfd	sp!, {sl, lr}
	ldr	sl, .L6
.L5:
	add	sl, pc, sl
	ldr	r3, .L6+4
	ldr	r3, [sl, r3]
	cmp	r3, #0
	ldmeqfd	sp!, {sl, pc}
	mov	lr, pc
	mov	pc, r3
	ldmfd	sp!, {sl, pc}
.L7:
	.align	2
.L6:
	.word	_GLOBAL_OFFSET_TABLE_-(.L5+8)
	.word	__gmon_start__(GOT)
#APP
	.section .init
	.align	2
	.global	_init
	.type	_init, %function
_init:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	str	lr, [sp, #-4]!
	bl	call_gmon_start(PLT)
#APP
	ALIGN
	END_INIT
	
/*@_init_PROLOG_ENDS*/
/*@_fini_PROLOG_BEGINS*/
	.section .fini
	.align	2
	.global	_fini
	.type	_fini, %function
_fini:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 0, uses_anonymous_args = 0
	str	lr, [sp, #-4]!
#APP
	ALIGN
	END_FINI
	
/*@_fini_PROLOG_ENDS*/
/*@TRAILER_BEGINS*/
	.weak	__gmon_start__
	.ident	"GCC: (GNU) 3.4.5"
