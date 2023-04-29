# fonction add
# expression avec a
# expression avec b
# declaration de a
# declaration de b
# declaration de c
# declaration de d
# declaration de e
# appel de fonction add
# input parametre a
# expression avec a
# input parametre b
# expression avec b
# expression avec e
.globl  add
add:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# argument %edi
 movl	%edi, -4(%rbp)


# argument %esi
 movl	%esi, -8(%rbp)


# declaration de _tmp12 avec la valeur a + b
 movl	-4(%rbp), %eax
 addl	-8(%rbp), %eax
 movl	%eax, -12(%rbp)


# declaration de _tmp16 avec la valeur 4
 movl	$4, -16(%rbp)


# declaration de _tmp20 avec la valeur _tmp12 + _tmp16
 movl	-12(%rbp), %eax
 addl	-16(%rbp), %eax
 movl	%eax, -20(%rbp)


# retour de _tmp20
 movl	-20(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $20, %rsp

# declaration de _tmp28 avec la valeur 1
 movl	$1, -28(%rbp)


# declaration de a avec _tmp28
 movl	-28(%rbp), %eax
 movl	%eax, -24(%rbp)


# declaration de _tmp36 avec la valeur 2
 movl	$2, -36(%rbp)


# declaration de b avec _tmp36
 movl	-36(%rbp), %eax
 movl	%eax, -32(%rbp)


# declaration de _tmp44 avec la valeur 3
 movl	$3, -44(%rbp)


# declaration de c avec _tmp44
 movl	-44(%rbp), %eax
 movl	%eax, -40(%rbp)


# declaration de _tmp52 avec la valeur 4
 movl	$4, -52(%rbp)


# declaration de d avec _tmp52
 movl	-52(%rbp), %eax
 movl	%eax, -48(%rbp)


# appel de la fonction add
 movl	-24(%rbp), %edi
 movl	-32(%rbp), %esi
 call add
 movl	%eax, -60(%rbp)


# declaration de e avec _tmp60
 movl	-60(%rbp), %eax
 movl	%eax, -56(%rbp)


# retour de e
 movl	-56(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

