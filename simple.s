	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	__Z6squardl             ## -- Begin function _Z6squardl
	.p2align	4, 0x90
__Z6squardl:                            ## @_Z6squardl
## BB#0:
	pushq	%rbp
	movq	%rsp, %rbp
	movq	%rdi, -8(%rbp)
	imulq	$10, -8(%rbp), %rax
	popq	%rbp
	retq
                                        ## -- End function

.subsections_via_symbols
