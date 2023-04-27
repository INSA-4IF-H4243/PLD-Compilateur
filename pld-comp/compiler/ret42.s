# declaration de a
# declaration de b
# expression avec a
# affectation de b
# expression avec a
# affectation de a
# expression avec a
# affectation de a
# expression avec a
# expression avec a
.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# declaration de _tmp8 avec la valeur 2
 movl	$2, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp), %eax
 movl	%eax, -4(%rbp)


# declaration de _tmp16 avec la valeur 0
 movl	$0, -16(%rbp)


# declaration de b dans _tmp16
 movl	-16(%rbp), %eax
 movl	%eax, -12(%rbp)


# saut inconditionnel vers testWhile16
 jmp testWhile16

bodyWhile16:

# declaration de _tmp20 avec la valeur 2
 movl	$2, -20(%rbp)


# declaration de b dans _tmp20
 movl	-20(%rbp), %eax
 movl	%eax, -12(%rbp)


# declaration de _tmp24 avec la valeur 4
 movl	$4, -24(%rbp)


# comparaison de _tmp28 avec la valeur a == _tmp24
 movl	-4(%rbp),%eax
 cmpl	-24(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -28(%rbp)


# declaration de _tmp_36 avec la valeur 0
 movl	$0, -36(%rbp)


# comparaison de _tmp32 avec la valeur _tmp28 == _tmp_36
 movl	-28(%rbp),%eax
 cmpl	-36(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -32(%rbp)


# declaration de _tmp40 avec la valeur 1
 movl	$1, -40(%rbp)


# declaration de _tmp44 avec la valeur a + _tmp40
 movl	-4(%rbp), %eax
 addl	-40(%rbp), %eax
 movl	%eax, -44(%rbp)


# declaration de a dans _tmp44
 movl	-44(%rbp), %eax
 movl	%eax, -4(%rbp)


# saut inconditionnel vers endIf20
 jmp endIf20

bodyElse20:

# declaration de _tmp48 avec la valeur 2
 movl	$2, -48(%rbp)


# declaration de _tmp52 avec la valeur a + _tmp48
 movl	-4(%rbp), %eax
 addl	-48(%rbp), %eax
 movl	%eax, -52(%rbp)


# declaration de a dans _tmp52
 movl	-52(%rbp), %eax
 movl	%eax, -4(%rbp)

endIf20:

# saut inconditionnel vers testWhile16
 jmp testWhile16

testWhile16:

# declaration de _tmp56 avec la valeur 8
 movl	$8, -56(%rbp)


# comparaison de _tmp60 avec la valeur a < _tmp56
 movl	-4(%rbp),%eax
 cmpl	-56(%rbp),%eax
 setl	%al
 movzbl	%al, %eax
 movl	%eax, -60(%rbp)


# declaration de _tmp_68 avec la valeur 0
 movl	$0, -68(%rbp)


# comparaison de _tmp64 avec la valeur _tmp60 == _tmp_68
 movl	-60(%rbp),%eax
 cmpl	-68(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -64(%rbp)


# saut conditionnel vers afterWhile16
 jle afterWhile16


# saut inconditionnel vers bodyWhile16
 jmp bodyWhile16

afterWhile16:

# retour de a
 movl	-4(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

