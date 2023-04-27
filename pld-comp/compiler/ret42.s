# fonction add
# expression avec a
# declaration de a
# declaration de b
# declaration de e
# appel de fonction add
# input parametre a
# expression avec a
# input parametre b
# expression avec b
# expression avec e
visite des fct
visite des arg
visite des arg
.globl  add
add:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# argument %edi
 movl	%edi, -4(%rbp)


# argument %esi
 movl	%esi, -8(%rbp)


# declaration de _tmp12 avec la valeur 2
 movl	$2, -12(%rbp)


# declaration de _tmp16 avec la valeur _arg4 + 
 movl	-4(%rbp), %eax
 addl	0(%rbp), %eax
 movl	%eax, -16(%rbp)


# retour de _tmp16
 movl	-16(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $16, %rsp

# declaration de _tmp24 avec la valeur 1
 movl	$1, -24(%rbp)


# declaration de a dans _tmp24
 movl	-24(%rbp), %eax
 movl	%eax, -20(%rbp)


# declaration de _tmp32 avec la valeur 2
 movl	$2, -32(%rbp)


# declaration de b dans _tmp32
 movl	-32(%rbp), %eax
 movl	%eax, -28(%rbp)


# appel de la fonction add
 movl	-20(%rbp), %edi
 movl	-28(%rbp), %esi
 call add
 movl	%eax, -40(%rbp)


# declaration de e dans _tmp40
 movl	-40(%rbp), %eax
 movl	%eax, -36(%rbp)


# retour de e
 movl	-36(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

