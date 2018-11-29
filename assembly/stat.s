	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	__Z5hellov              ## -- Begin function _Z5hellov
	.p2align	4, 0x90
__Z5hellov:                             ## @_Z5hellov
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
	subq	$64, %rsp
	leaq	-32(%rbp), %rax
	movq	___stack_chk_guard@GOTPCREL(%rip), %rcx
	movq	(%rcx), %rcx
	movq	%rcx, -8(%rbp)
	movq	%rax, %rcx
	addq	$16, %rcx
	movq	%rcx, -48(%rbp)         ## 8-byte Spill
	movq	%rax, -56(%rbp)         ## 8-byte Spill
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-56(%rbp), %rax         ## 8-byte Reload
	movq	%rax, %rdi
	movq	%rax, -64(%rbp)         ## 8-byte Spill
	callq	__ZN2HIC1Ev
	movq	-64(%rbp), %rax         ## 8-byte Reload
	addq	$8, %rax
	movq	-48(%rbp), %rdi         ## 8-byte Reload
	cmpq	%rdi, %rax
	movq	%rax, -56(%rbp)         ## 8-byte Spill
	jne	LBB0_1
## BB#2:
	leaq	-40(%rbp), %rdi
	movl	$3, %esi
	movl	$4, %edx
	callq	__ZN2HIC1Eii
	movq	-40(%rbp), %rdi
	movq	%rdi, -24(%rbp)
	movq	___stack_chk_guard@GOTPCREL(%rip), %rdi
	movq	(%rdi), %rdi
	movq	-8(%rbp), %rax
	cmpq	%rax, %rdi
	jne	LBB0_4
## BB#3:
	addq	$64, %rsp
	popq	%rbp
	retq
LBB0_4:
	callq	___stack_chk_fail
	.cfi_endproc
                                        ## -- End function
	.globl	__ZN2HIC1Ev             ## -- Begin function _ZN2HIC1Ev
	.weak_def_can_be_hidden	__ZN2HIC1Ev
	.p2align	4, 0x90
__ZN2HIC1Ev:                            ## @_ZN2HIC1Ev
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
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	callq	__ZN2HIC2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZN2HIC1Eii            ## -- Begin function _ZN2HIC1Eii
	.weak_def_can_be_hidden	__ZN2HIC1Eii
	.p2align	4, 0x90
__ZN2HIC1Eii:                           ## @_ZN2HIC1Eii
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %esi
	movl	-16(%rbp), %edx
	callq	__ZN2HIC2Eii
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZN2HIC2Ev             ## -- Begin function _ZN2HIC2Ev
	.weak_def_can_be_hidden	__ZN2HIC2Ev
	.p2align	4, 0x90
__ZN2HIC2Ev:                            ## @_ZN2HIC2Ev
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi9:
	.cfi_def_cfa_offset 16
Lcfi10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi11:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZN2HIC2Eii            ## -- Begin function _ZN2HIC2Eii
	.weak_def_can_be_hidden	__ZN2HIC2Eii
	.p2align	4, 0x90
__ZN2HIC2Eii:                           ## @_ZN2HIC2Eii
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi12:
	.cfi_def_cfa_offset 16
Lcfi13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi14:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movq	-8(%rbp), %rdi
	movl	-12(%rbp), %edx
	movl	%edx, (%rdi)
	movl	-16(%rbp), %edx
	movl	%edx, 4(%rdi)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
