	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	printf_bin
	.type	printf_bin, @function
printf_bin:
.LFB6:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	$0, -48(%rbp)
	movq	$0, -40(%rbp)
	movq	$0, -32(%rbp)
	movq	$0, -24(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -4(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltd
	shrl	$31, %edx
	addl	%edx, %eax
	andl	$1, %eax
	subl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	cltq
	movl	-16(%rbp), %edx
	movl	%edx, -48(%rbp,%rax,4)
	addl	$1, -8(%rbp)
.L2:
	cmpl	$7, -8(%rbp)
	jle	.L3
	movl	$3, -12(%rbp)
	jmp	.L4
.L5:
	movl	-12(%rbp), %eax
	cltq
	movl	-48(%rbp,%rax,4), %eax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	subl	$1, -12(%rbp)
.L4:
	cmpl	$0, -12(%rbp)
	jns	.L5
	movl	$10, %edi
	call	putchar
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	printf_bin, .-printf_bin
	.section	.rodata
.LC1:
	.string	"%d "
	.text
	.globl	print_n
	.type	print_n, @function
print_n:
.LFB7:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	cmpl	$0, -4(%rbp)
	jle	.L8
	subl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	print_n
.L8:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	print_n, .-print_n
	.globl	grey
	.type	grey, @function
grey:
.LFB8:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movl	%edx, -8(%rbp)
	cmpl	$0, -4(%rbp)
	jle	.L11
	movl	-8(%rbp), %eax
	sarl	%eax
	xorl	-8(%rbp), %eax
	movl	%eax, %edx
	movq	-16(%rbp), %rax
	movl	%edx, (%rax)
	addq	$4, -16(%rbp)
	movl	-8(%rbp), %edx
	leal	1(%rdx), %eax
	movl	%eax, -8(%rbp)
	movl	-4(%rbp), %eax
	leal	-1(%rax), %ecx
	movl	%ecx, -4(%rbp)
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	grey
.L11:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	grey, .-grey
	.section	.rodata
.LC2:
	.string	"Podaj n: "
.LC3:
	.string	"Podaj k: "
.LC4:
	.string	"Kod Greya: "
	.text
	.globl	main
	.type	main, @function
main:
.LFB9:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$432, %rsp
	movl	$0, -20(%rbp)
	movl	$0, -24(%rbp)
	movl	$.LC2, %edi
	movl	$0, %eax
	call	printf
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	$.LC3, %edi
	movl	$0, %eax
	call	printf
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-432(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	-24(%rbp), %edx
	movl	-20(%rbp), %eax
	movq	-16(%rbp), %rcx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	grey
	movl	$.LC4, %edi
	call	puts
	movl	$0, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	cltq
	movl	-432(%rbp,%rax,4), %eax
	movl	%eax, %edi
	call	printf_bin
	addl	$1, -4(%rbp)
.L13:
	movl	-20(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jl	.L14
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	main, .-main
	.ident	"GCC: (GNU) 10.2.1 20201125 (Red Hat 10.2.1-9)"
	.section	.note.GNU-stack,"",@progbits
