	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_fn_c                   ## -- Begin function fn_c
	.p2align	4, 0x90
_fn_c:                                  ## @fn_c
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$3, -12(%rbp)
	movl	-4(%rbp), %edi
	movl	_x_global_init(%rip), %esi
	callq	_fn_a
	movq	_x_global_uninit@GOTPCREL(%rip), %rcx
	movl	%eax, (%rcx)
	movl	-4(%rbp), %edi
	movl	-12(%rbp), %esi
	callq	_fn_a
	movq	_z_global@GOTPCREL(%rip), %rcx
	movl	%eax, -8(%rbp)
	movl	(%rcx), %edi
	callq	_fn_b
	addl	-8(%rbp), %eax
	movl	%eax, -8(%rbp)
	movl	_y_global_uninit(%rip), %eax
	addl	-8(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.p2align	4, 0x90         ## -- Begin function fn_b
_fn_b:                                  ## @fn_b
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edi
	addl	$1, %edi
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__DATA,__data
	.globl	_x_global_init          ## @x_global_init
	.p2align	2
_x_global_init:
	.long	1                       ## 0x1

	.comm	_x_global_uninit,4,2    ## @x_global_uninit
.zerofill __DATA,__bss,_y_global_uninit,4,2 ## @y_global_uninit

.subsections_via_symbols
