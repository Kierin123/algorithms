	.file	"main.c"
	.text
	.globl	avarage_f
	.type	avarage_f, @function
avarage_f:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -20(%rbp)
	movss	%xmm1, -24(%rbp)
	movss	%xmm2, -28(%rbp)
	movss	%xmm3, -32(%rbp)
	movss	%xmm4, -36(%rbp)
	movss	-20(%rbp), %xmm0
	addss	-24(%rbp), %xmm0
	addss	-28(%rbp), %xmm0
	addss	-32(%rbp), %xmm0
	movss	-36(%rbp), %xmm1
	addss	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	movss	.LC0(%rip), %xmm1
	divss	%xmm1, %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	avarage_f, .-avarage_f
	.globl	find_min
	.type	find_min, @function
find_min:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -20(%rbp)
	movss	%xmm1, -24(%rbp)
	movss	%xmm2, -28(%rbp)
	movss	%xmm3, -32(%rbp)
	movss	%xmm4, -36(%rbp)
	movss	-20(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-4(%rbp), %xmm0
	comiss	-24(%rbp), %xmm0
	jbe	.L4
	movss	-24(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L4:
	movss	-4(%rbp), %xmm0
	comiss	-28(%rbp), %xmm0
	jbe	.L6
	movss	-28(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L6:
	movss	-4(%rbp), %xmm0
	comiss	-32(%rbp), %xmm0
	jbe	.L8
	movss	-32(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L8:
	movss	-4(%rbp), %xmm0
	comiss	-36(%rbp), %xmm0
	jbe	.L10
	movss	-36(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L10:
	movss	-4(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	find_min, .-find_min
	.globl	find_nearest
	.type	find_nearest, @function
find_nearest:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movss	%xmm0, -20(%rbp)
	movss	%xmm1, -24(%rbp)
	movss	%xmm2, -28(%rbp)
	movss	%xmm3, -32(%rbp)
	movss	%xmm4, -36(%rbp)
	movss	%xmm5, -40(%rbp)
	movss	-24(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-24(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
	movss	-28(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	comiss	%xmm1, %xmm0
	jbe	.L18
	movss	-28(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-28(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
.L18:
	movss	-32(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	comiss	%xmm1, %xmm0
	jbe	.L20
	movss	-32(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-32(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
.L20:
	movss	-36(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	comiss	%xmm1, %xmm0
	jbe	.L22
	movss	-36(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-36(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
.L22:
	movss	-40(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm0, %xmm1
	movss	-4(%rbp), %xmm0
	comiss	%xmm1, %xmm0
	jbe	.L24
	movss	-40(%rbp), %xmm0
	subss	-20(%rbp), %xmm0
	movss	.LC1(%rip), %xmm1
	andps	%xmm1, %xmm0
	movss	%xmm0, -4(%rbp)
	movss	-40(%rbp), %xmm0
	movss	%xmm0, -8(%rbp)
.L24:
	movss	-8(%rbp), %xmm0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	find_nearest, .-find_nearest
	.section	.rodata
.LC2:
	.string	"Podaj 5 liczb: "
.LC3:
	.string	"%f"
	.align 8
.LC4:
	.string	"\305\232rednia z tych liczb wynosi: %f\n"
	.align 8
.LC5:
	.string	"Najbli\305\274sza liczba do \305\233redniej to: %f\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	$.LC2, %edi
	call	puts
	leaq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	leaq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC3, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movss	-24(%rbp), %xmm3
	movss	-20(%rbp), %xmm2
	movss	-16(%rbp), %xmm1
	movss	-12(%rbp), %xmm0
	movl	-8(%rbp), %eax
	movaps	%xmm3, %xmm4
	movaps	%xmm2, %xmm3
	movaps	%xmm1, %xmm2
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	avarage_f
	movd	%xmm0, %eax
	movl	%eax, -4(%rbp)
	pxor	%xmm6, %xmm6
	cvtss2sd	-4(%rbp), %xmm6
	movq	%xmm6, %rax
	movq	%rax, %xmm0
	movl	$.LC4, %edi
	movl	$1, %eax
	call	printf
	movss	-24(%rbp), %xmm4
	movss	-20(%rbp), %xmm3
	movss	-16(%rbp), %xmm2
	movss	-12(%rbp), %xmm1
	movss	-8(%rbp), %xmm0
	movl	-4(%rbp), %eax
	movaps	%xmm4, %xmm5
	movaps	%xmm3, %xmm4
	movaps	%xmm2, %xmm3
	movaps	%xmm1, %xmm2
	movaps	%xmm0, %xmm1
	movd	%eax, %xmm0
	call	find_nearest
	pxor	%xmm7, %xmm7
	cvtss2sd	%xmm0, %xmm7
	movq	%xmm7, %rax
	movq	%rax, %xmm0
	movl	$.LC5, %edi
	movl	$1, %eax
	call	printf
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.section	.rodata
	.align 4
.LC0:
	.long	1084227584
	.align 16
.LC1:
	.long	2147483647
	.long	0
	.long	0
	.long	0
	.ident	"GCC: (GNU) 10.2.1 20201125 (Red Hat 10.2.1-9)"
	.section	.note.GNU-stack,"",@progbits
