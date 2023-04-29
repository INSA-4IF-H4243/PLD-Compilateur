# fonction mul
# declaration de a
# declaration de b
# expression avec a
# expression avec a
# expression avec b
# affectation de a
# expression avec a
# expression avec b
# affectation de a
# expression avec a
# expression avec a
# declaration de e
# appel de fonction mul
# expression avec e
.globl  mul
mul:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# declaration de _tmp8 avec la valeur 36
 movl	$36, -8(%rbp)


# declaration de a avec _tmp8
 movl	-8(%rbp), %eax
 movl	%eax, -4(%rbp)


# declaration de _tmp16 avec la valeur 3
 movl	$3, -16(%rbp)


# declaration de b avec _tmp16
 movl	-16(%rbp), %eax
 movl	%eax, -12(%rbp)

testWhile16:

# declaration de _tmp20 avec la valeur 8
 movl	$8, -20(%rbp)


# comparaison de _tmp24 avec la valeur a > _tmp20
 movl	-4(%rbp),%eax
 cmpl	%eax, -20(%rbp)
 setl	%al
 movzbl	%al, %eax
 movl	%eax, -24(%rbp)


# declaration de _tmp_32 avec la valeur 0
 movl	$0, -32(%rbp)


# comparaison de _tmp28 avec la valeur _tmp24 == _tmp_32
 movl	-24(%rbp),%eax
 cmpl	-32(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -28(%rbp)


# saut si égal vers afterWhile16
 je afterWhile16


# saut inconditionnel vers bodyWhile16
 jmp bodyWhile16

bodyWhile16:

# comparaison de _tmp36 avec la valeur a <= b
 movl	-4(%rbp),%eax
 cmpl	-12(%rbp),%eax
 setle	%al
 movzbl	%al, %eax
 movl	%eax, -36(%rbp)


# declaration de _tmp_44 avec la valeur 0
 movl	$0, -44(%rbp)


# comparaison de _tmp40 avec la valeur _tmp36 == _tmp_44
 movl	-36(%rbp),%eax
 cmpl	-44(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -40(%rbp)


# saut si égal vers endIf32
 je endIf32

bodyIf32:

# declaration de _tmp48 avec la valeur a - b
 movl	-4(%rbp),%eax
 subl	-12(%rbp),%eax
 movl	%eax, -48(%rbp)


# declaration de a avec _tmp48
 movl	-48(%rbp), %eax
 movl	%eax, -4(%rbp)


# saut inconditionnel vers endIf32
 jmp endIf32

endIf32:

# declaration de _tmp52 avec la valeur 1
 movl	$1, -52(%rbp)


# declaration de _tmp56 avec la valeur a - _tmp52
 movl	-4(%rbp),%eax
 subl	-52(%rbp),%eax
 movl	%eax, -56(%rbp)


# declaration de a avec _tmp56
 movl	-56(%rbp), %eax
 movl	%eax, -4(%rbp)


# saut inconditionnel vers testWhile16
 jmp testWhile16

afterWhile16:

# retour de a
 movl	-4(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $56, %rsp

# appel de la fonction mul
 call mul
 movl	%eax, -64(%rbp)


# declaration de e avec _tmp64
 movl	-64(%rbp), %eax
 movl	%eax, -60(%rbp)


# declaration de _tmp68 avec la valeur 2
 movl	$2, -68(%rbp)


# declaration de _tmp72 avec la valeur e + _tmp68
 movl	-60(%rbp), %eax
 addl	-68(%rbp), %eax
 movl	%eax, -72(%rbp)


# retour de _tmp72
 movl	-72(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

