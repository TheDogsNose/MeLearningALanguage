	.file	"main.c"
	.text
	.globl	_doStuff
	.def	_doStuff;	.scl	2;	.type	32;	.endef
_doStuff:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	movl	$1, %eax
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%-d \12\0"
LC1:
	.ascii "hello\0"
LC2:
	.ascii "%d %s\0"
LC3:
	.ascii "%d, %s \12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	addl	$-128, %esp
	call	___main
	movl	$0, 116(%esp)
	movl	116(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$LC1, (%esp)
	call	_puts
	movl	$104, (%esp)
	call	_putchar
	movl	$10, (%esp)
	call	_putchar
	leal	52(%esp), %eax
	movl	%eax, 8(%esp)
	leal	116(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_scanf
	movl	116(%esp), %eax
	leal	2(%eax), %edx
	leal	52(%esp), %eax
	movl	%eax, 8(%esp)
	movl	%edx, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	call	_getchar
	movb	%al, 127(%esp)
	leal	52(%esp), %eax
	movl	%eax, (%esp)
	call	_gets
	movl	$543516788, 27(%esp)
	movl	$1668183398, 31(%esp)
	movl	$1852795252, 35(%esp)
	movl	$544434464, 39(%esp)
	movl	$1819042147, 43(%esp)
	movl	$25701, 47(%esp)
	movb	$0, 51(%esp)
	movl	$0, 120(%esp)
	movl	120(%esp), %eax
	movl	%eax, 4(%esp)
	leal	27(%esp), %eax
	movl	%eax, (%esp)
	call	_functionX
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.section .rdata,"dr"
LC4:
	.ascii "%s\0"
	.text
	.globl	_functionX
	.def	_functionX;	.scl	2;	.type	32;	.endef
_functionX:
LFB12:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE12:
	.globl	_conditions
	.def	_conditions;	.scl	2;	.type	32;	.endef
_conditions:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$5, -12(%ebp)
	movl	$LC1, (%esp)
	call	_printf
	call	_doStuff
	call	_doStuff
	movl	$2, -16(%ebp)
	movl	8(%ebp), %eax
	cmpl	$1, %eax
	je	L8
	cmpl	$1, %eax
	jg	L9
	testl	%eax, %eax
	je	L10
	jmp	L7
L9:
	cmpl	$2, %eax
	je	L11
	cmpl	$3, %eax
	je	L12
	jmp	L7
L10:
	call	_doStuff
	jmp	L13
L8:
	call	_doStuff
L11:
	call	_doStuff
	jmp	L13
L12:
	call	_doStuff
	jmp	L13
L7:
	call	_doStuff
	nop
L13:
	movl	$0, -20(%ebp)
	jmp	L14
L15:
	call	_doStuff
L14:
	cmpl	$10, -20(%ebp)
	jle	L15
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_getchar;	.scl	2;	.type	32;	.endef
	.def	_gets;	.scl	2;	.type	32;	.endef
