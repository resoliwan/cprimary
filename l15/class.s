	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
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
	subq	$32, %rsp
	leaq	-8(%rbp), %rdi
	movl	$0, -4(%rbp)
	movl	$1000, -8(%rbp)         ## imm = 0x3E8
	callq	__ZN3Cls5helloEv
	leaq	-16(%rbp), %rdi
	movl	$2, -16(%rbp)
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	callq	__ZN3Cls5helloEv
	leaq	-8(%rbp), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	__ZN3Cls5helloEv
	leaq	-16(%rbp), %rdi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	callq	__ZN3Cls5helloEv
	xorl	%ecx, %ecx
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movl	%ecx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	__ZN3Cls5helloEv        ## -- Begin function _ZN3Cls5helloEv
	.weak_definition	__ZN3Cls5helloEv
	.p2align	4, 0x90
__ZN3Cls5helloEv:                       ## @_ZN3Cls5helloEv
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
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdi
	movl	(%rdi), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
