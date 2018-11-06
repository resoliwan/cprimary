	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
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
	movl	$0, -4(%rbp)
Ltmp0:
	callq	__Z5call1v
Ltmp1:
	jmp	LBB0_1
LBB0_1:
	jmp	LBB0_5
LBB0_2:
Ltmp2:
	movl	%edx, %ecx
	movq	%rax, -16(%rbp)
	movl	%ecx, -20(%rbp)
## BB#3:
	jmp	LBB0_4
LBB0_4:
	movq	-16(%rbp), %rdi
	callq	___cxa_begin_catch
	movq	%rax, -32(%rbp)
	movl	$1000, -8(%rbp)         ## imm = 0x3E8
	callq	___cxa_end_catch
LBB0_5:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table0:
Lexception0:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\242\200\200"          ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	26                      ## Call site table length
Lset0 = Ltmp0-Lfunc_begin0              ## >> Call Site 1 <<
	.long	Lset0
Lset1 = Ltmp1-Ltmp0                     ##   Call between Ltmp0 and Ltmp1
	.long	Lset1
Lset2 = Ltmp2-Lfunc_begin0              ##     jumps to Ltmp2
	.long	Lset2
	.byte	1                       ##   On action: 1
Lset3 = Ltmp1-Lfunc_begin0              ## >> Call Site 2 <<
	.long	Lset3
Lset4 = Lfunc_end0-Ltmp1                ##   Call between Ltmp1 and Lfunc_end0
	.long	Lset4
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	__ZTIPKc@GOTPCREL+4     ## TypeInfo 1
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__Z5call1v              ## -- Begin function _Z5call1v
	.p2align	4, 0x90
__Z5call1v:                             ## @_Z5call1v
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	cmpl	$0, _x_global(%rip)
	je	LBB1_3
## BB#1:
	movl	$8, %eax
	movl	%eax, %edi
	callq	___cxa_allocate_exception
	leaq	L_.str(%rip), %rdi
	movq	%rdi, (%rax)
Ltmp3:
	movq	__ZTIPKc@GOTPCREL(%rip), %rsi
	xorl	%ecx, %ecx
	movl	%ecx, %edx
	movq	%rax, %rdi
	callq	___cxa_throw
Ltmp4:
	jmp	LBB1_8
LBB1_2:
Ltmp5:
	movl	%edx, %ecx
	movq	%rax, -16(%rbp)
	movl	%ecx, -20(%rbp)
Ltmp6:
	leaq	-8(%rbp), %rdi
	callq	__ZN4DemoD1Ev
Ltmp7:
	jmp	LBB1_5
LBB1_3:
	movl	$10, _x_global(%rip)
## BB#4:
	leaq	-8(%rbp), %rdi
	callq	__ZN4DemoD1Ev
	addq	$32, %rsp
	popq	%rbp
	retq
LBB1_5:
	jmp	LBB1_6
LBB1_6:
	movq	-16(%rbp), %rdi
	callq	__Unwind_Resume
LBB1_7:
Ltmp8:
	movl	%edx, %ecx
	movq	%rax, %rdi
	movl	%ecx, -24(%rbp)         ## 4-byte Spill
	callq	___clang_call_terminate
LBB1_8:
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2
GCC_except_table1:
Lexception1:
	.byte	255                     ## @LPStart Encoding = omit
	.byte	155                     ## @TType Encoding = indirect pcrel sdata4
	.asciz	"\274"                  ## @TType base offset
	.byte	3                       ## Call site Encoding = udata4
	.byte	52                      ## Call site table length
Lset5 = Lfunc_begin1-Lfunc_begin1       ## >> Call Site 1 <<
	.long	Lset5
Lset6 = Ltmp3-Lfunc_begin1              ##   Call between Lfunc_begin1 and Ltmp3
	.long	Lset6
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
Lset7 = Ltmp3-Lfunc_begin1              ## >> Call Site 2 <<
	.long	Lset7
Lset8 = Ltmp4-Ltmp3                     ##   Call between Ltmp3 and Ltmp4
	.long	Lset8
Lset9 = Ltmp5-Lfunc_begin1              ##     jumps to Ltmp5
	.long	Lset9
	.byte	0                       ##   On action: cleanup
Lset10 = Ltmp6-Lfunc_begin1             ## >> Call Site 3 <<
	.long	Lset10
Lset11 = Ltmp7-Ltmp6                    ##   Call between Ltmp6 and Ltmp7
	.long	Lset11
Lset12 = Ltmp8-Lfunc_begin1             ##     jumps to Ltmp8
	.long	Lset12
	.byte	1                       ##   On action: 1
Lset13 = Ltmp7-Lfunc_begin1             ## >> Call Site 4 <<
	.long	Lset13
Lset14 = Lfunc_end1-Ltmp7               ##   Call between Ltmp7 and Lfunc_end1
	.long	Lset14
	.long	0                       ##     has no landing pad
	.byte	0                       ##   On action: cleanup
	.byte	1                       ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                       ##   No further actions
                                        ## >> Catch TypeInfos <<
	.long	0                       ## TypeInfo 1
	.p2align	2
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.globl	__ZN4DemoD1Ev           ## -- Begin function _ZN4DemoD1Ev
	.weak_def_can_be_hidden	__ZN4DemoD1Ev
	.p2align	4, 0x90
__ZN4DemoD1Ev:                          ## @_ZN4DemoD1Ev
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
	movq	-8(%rbp), %rdi
	callq	__ZN4DemoD2Ev
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	___clang_call_terminate ## -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_definition	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## BB#0:
	pushq	%rax
	callq	___cxa_begin_catch
	movq	%rax, (%rsp)            ## 8-byte Spill
	callq	__ZSt9terminatev
                                        ## -- End function
	.globl	__ZN4DemoD2Ev           ## -- Begin function _ZN4DemoD2Ev
	.weak_def_can_be_hidden	__ZN4DemoD2Ev
	.p2align	4, 0x90
__ZN4DemoD2Ev:                          ## @_ZN4DemoD2Ev
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
	movl	$777, _x_global(%rip)   ## imm = 0x309
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_x_global               ## @x_global
.zerofill __DATA,__common,_x_global,4,2
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Error statement"


.subsections_via_symbols
