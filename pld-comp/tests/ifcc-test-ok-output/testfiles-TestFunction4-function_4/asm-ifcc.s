# fonction add
# expression avec a
# expression avec b
# expression avec d
# expression avec c
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
# input parametre c
# expression avec c
# input parametre d
# expression avec d
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


# argument %edx
 movl	%edx, -12(%rbp)


# argument %ecx
 movl	%ecx, -16(%rbp)


# declaration de _tmp20 avec la valeur a + b
 movl	-4(%rbp), %eax
 addl	-8(%rbp), %eax
 movl	%eax, -20(%rbp)


# declaration de _tmp24 avec la valeur d * c
 movl	-16(%rbp),%eax
 imull	-12(%rbp),%eax
 movl	%eax, -24(%rbp)


# declaration de _tmp28 avec la valeur _tmp20 + _tmp24
 movl	-20(%rbp), %eax
 addl	-24(%rbp), %eax
 movl	%eax, -28(%rbp)


# declaration de _tmp32 avec la valeur 4
 movl	$4, -32(%rbp)


# declaration de _tmp36 avec la valeur _tmp28 - _tmp32
 movl	-28(%rbp),%eax
 subl	-32(%rbp),%eax
 movl	%eax, -36(%rbp)


# retour de _tmp36
 movl	-36(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $36, %rsp

# declaration de _tmp44 avec la valeur 1
 movl	$1, -44(%rbp)


# declaration de a avec _tmp44
 movl	-44(%rbp), %eax
 movl	%eax, -40(%rbp)


# declaration de _tmp52 avec la valeur 2
 movl	$2, -52(%rbp)


# declaration de b avec _tmp52
 movl	-52(%rbp), %eax
 movl	%eax, -48(%rbp)


# declaration de _tmp60 avec la valeur 3
 movl	$3, -60(%rbp)


# declaration de c avec _tmp60
 movl	-60(%rbp), %eax
 movl	%eax, -56(%rbp)


# declaration de _tmp68 avec la valeur 4
 movl	$4, -68(%rbp)


# declaration de d avec _tmp68
 movl	-68(%rbp), %eax
 movl	%eax, -64(%rbp)


# appel de la fonction add
 movl	-40(%rbp), %edi
 movl	-48(%rbp), %esi
 movl	-56(%rbp), %edx
 movl	-64(%rbp), %ecx
 call add
 movl	%eax, -76(%rbp)


# declaration de e avec _tmp76
 movl	-76(%rbp), %eax
 movl	%eax, -72(%rbp)


# retour de e
 movl	-72(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

