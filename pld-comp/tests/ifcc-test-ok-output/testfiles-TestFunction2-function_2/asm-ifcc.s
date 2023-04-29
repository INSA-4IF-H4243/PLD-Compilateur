# fonction add
# expression avec a
# expression avec b
# declaration de a
# appel de fonction add
# input parametre 1
# input parametre 2
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


# declaration de _tmp12 avec la valeur a + b
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

# declaration de _tmp24 avec la valeur 1
 movl	$1, -24(%rbp)


# declaration de _tmp28 avec la valeur 2
 movl	$2, -28(%rbp)


# appel de la fonction add
 movl	$1, %edi
 movl	$2, %esi
 call add
 movl	%eax, -20(%rbp)


# declaration de a avec _tmp20
 movl	-20(%rbp), %eax
 movl	%eax, -16(%rbp)


# retour de a
 movl	-16(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

