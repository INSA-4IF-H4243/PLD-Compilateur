# fonction add
# expression avec a
# expression avec b
# declaration de b
# declaration de c
# declaration de a
# appel de fonction add
# input parametre c
# expression avec c
# input parametre b
# expression avec b
# expression avec a
.globl  add
add:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# argument %edi
 movl	%edi, -4(%rbp)


# argument %esi
 movl	%esi, -8(%rbp)


# declaration de _tmp12 avec la valeur _arg4 + _arg8
 movl	-4(%rbp), %eax
 addl	-8(%rbp), %eax
 movl	%eax, -12(%rbp)


# retour de _tmp12
 movl	-12(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $12, %rsp

# declaration de _tmp20 avec la valeur 0
 movl	$0, -20(%rbp)


# declaration de b dans _tmp20
 movl	-20(%rbp), %eax
 movl	%eax, -16(%rbp)


# declaration de _tmp28 avec la valeur 5
 movl	$5, -28(%rbp)


# declaration de c dans _tmp28
 movl	-28(%rbp), %eax
 movl	%eax, -24(%rbp)


# appel de la fonction add
 movl	-24(%rbp), %edi
 movl	-16(%rbp), %esi
 call add
 movl	%eax, -36(%rbp)


# declaration de a dans _tmp36
 movl	-36(%rbp), %eax
 movl	%eax, -32(%rbp)


# retour de a
 movl	-32(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

