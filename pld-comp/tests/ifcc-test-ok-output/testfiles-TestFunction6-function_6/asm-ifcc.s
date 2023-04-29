# fonction boucle
# declaration de z
# affectation de a
# affectation de a
# expression avec a
# declaration de a
# declaration de b
# declaration de c
# declaration de d
# declaration de e
# appel de fonction boucle
# input parametre a
# expression avec a
# input parametre b
# expression avec b
# input parametre c
# expression avec c
# input parametre d
# expression avec d
# expression avec e
.globl  boucle
boucle:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# argument %edi
 movl	%edi, -4(%rbp)


# argument %esi
 movl	%esi, -8(%rbp)


# argument %edx
 movl	%edx, -12(%rbp)


# argument %ecx
 movl	%ecx, -16(%rbp)


# declaration de _tmp24 avec la valeur 1
 movl	$1, -24(%rbp)


# declaration de _tmp28 avec la valeur 1
 movl	$1, -28(%rbp)


# declaration de _tmp32 avec la valeur _tmp24 + _tmp28
 movl	-24(%rbp), %eax
 addl	-28(%rbp), %eax
 movl	%eax, -32(%rbp)


# declaration de _tmp36 avec la valeur 2
 movl	$2, -36(%rbp)


# comparaison de _tmp40 avec la valeur _tmp32 <= _tmp36
 movl	-32(%rbp),%eax
 cmpl	-36(%rbp),%eax
 setle	%al
 movzbl	%al, %eax
 movl	%eax, -40(%rbp)


# declaration de _tmp_48 avec la valeur 0
 movl	$0, -48(%rbp)


# comparaison de _tmp44 avec la valeur _tmp40 == _tmp_48
 movl	-40(%rbp),%eax
 cmpl	-48(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -44(%rbp)


# saut si égal vers bodyElse20
 je bodyElse20

bodyIf20:

# declaration de _tmp52 avec la valeur 1
 movl	$1, -52(%rbp)


# declaration de a avec _tmp52
 movl	-52(%rbp), %eax
 movl	%eax, -4(%rbp)


# saut inconditionnel vers endIf20
 jmp endIf20

bodyElse20:

# declaration de _tmp56 avec la valeur 2
 movl	$2, -56(%rbp)


# declaration de a avec _tmp56
 movl	-56(%rbp), %eax
 movl	%eax, -4(%rbp)

endIf20:

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

# declaration de _tmp64 avec la valeur 300
 movl	$300, -64(%rbp)


# declaration de a avec _tmp64
 movl	-64(%rbp), %eax
 movl	%eax, -60(%rbp)


# declaration de _tmp72 avec la valeur 2
 movl	$2, -72(%rbp)


# declaration de b avec _tmp72
 movl	-72(%rbp), %eax
 movl	%eax, -68(%rbp)


# declaration de _tmp80 avec la valeur 3
 movl	$3, -80(%rbp)


# declaration de c avec _tmp80
 movl	-80(%rbp), %eax
 movl	%eax, -76(%rbp)


# declaration de _tmp88 avec la valeur 4
 movl	$4, -88(%rbp)


# declaration de d avec _tmp88
 movl	-88(%rbp), %eax
 movl	%eax, -84(%rbp)


# appel de la fonction boucle
 movl	-60(%rbp), %edi
 movl	-68(%rbp), %esi
 movl	-76(%rbp), %edx
 movl	-84(%rbp), %ecx
 call boucle
 movl	%eax, -96(%rbp)


# declaration de e avec _tmp96
 movl	-96(%rbp), %eax
 movl	%eax, -92(%rbp)


# retour de e
 movl	-92(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

