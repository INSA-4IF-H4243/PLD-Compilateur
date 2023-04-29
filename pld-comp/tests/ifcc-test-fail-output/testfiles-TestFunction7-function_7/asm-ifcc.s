# fonction add
# fonction mul
# declaration de e
# appel de fonction mul
# declaration de z
# appel de fonction add
# expression avec e
# expression avec z
.globl  add
add:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp

# declaration de _tmp4 avec la valeur 1
 movl	$1, -4(%rbp)


# retour de _tmp4
 movl	-4(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  mul
mul:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $4, %rsp

# declaration de _tmp8 avec la valeur 2
 movl	$2, -8(%rbp)


# retour de _tmp8
 movl	-8(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $8, %rsp

# appel de la fonction mul
 call mul
 movl	%eax, -16(%rbp)


# declaration de e avec _tmp16
 movl	-16(%rbp), %eax
 movl	%eax, -12(%rbp)


# appel de la fonction add
 call add
 movl	%eax, -24(%rbp)


# declaration de z avec _tmp24
 movl	-24(%rbp), %eax
 movl	%eax, -20(%rbp)


# declaration de _tmp28 avec la valeur e + z
 movl	-12(%rbp), %eax
 addl	-20(%rbp), %eax
 movl	%eax, -28(%rbp)


# retour de _tmp28
 movl	-28(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

