# fonction add
# expression avec a
# expression avec b
# expression avec d
# expression avec c
# fonction mul
# expression avec a
# expression avec b
# expression avec d
# expression avec c
# declaration de a
# declaration de b
# declaration de c
# declaration de d
# declaration de e
# appel de fonction mul
# input parametre a
# expression avec a
# input parametre b
# expression avec b
# input parametre c
# expression avec c
# input parametre d
# expression avec d
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

.globl  mul
mul:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $36, %rsp

# argument %edi
 movl	%edi, -40(%rbp)


# argument %esi
 movl	%esi, -44(%rbp)


# argument %edx
 movl	%edx, -48(%rbp)


# argument %ecx
 movl	%ecx, -52(%rbp)


# declaration de _tmp56 avec la valeur a * b
 movl	-40(%rbp),%eax
 imull	-44(%rbp),%eax
 movl	%eax, -56(%rbp)


# declaration de _tmp60 avec la valeur _tmp56 * d
 movl	-56(%rbp),%eax
 imull	-52(%rbp),%eax
 movl	%eax, -60(%rbp)


# declaration de _tmp64 avec la valeur _tmp60 * c
 movl	-60(%rbp),%eax
 imull	-48(%rbp),%eax
 movl	%eax, -64(%rbp)


# declaration de _tmp68 avec la valeur 4
 movl	$4, -68(%rbp)


# declaration de _tmp72 avec la valeur _tmp64 - _tmp68
 movl	-64(%rbp),%eax
 subl	-68(%rbp),%eax
 movl	%eax, -72(%rbp)


# retour de _tmp72
 movl	-72(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

.globl  main
main:

# prologue
 pushq	%rbp
 movq	%rsp, %rbp
 subq	  $72, %rsp

# declaration de _tmp80 avec la valeur 1
 movl	$1, -80(%rbp)


# declaration de a avec _tmp80
 movl	-80(%rbp), %eax
 movl	%eax, -76(%rbp)


# declaration de _tmp88 avec la valeur 2
 movl	$2, -88(%rbp)


# declaration de b avec _tmp88
 movl	-88(%rbp), %eax
 movl	%eax, -84(%rbp)


# declaration de _tmp96 avec la valeur 3
 movl	$3, -96(%rbp)


# declaration de c avec _tmp96
 movl	-96(%rbp), %eax
 movl	%eax, -92(%rbp)


# declaration de _tmp104 avec la valeur 4
 movl	$4, -104(%rbp)


# declaration de d avec _tmp104
 movl	-104(%rbp), %eax
 movl	%eax, -100(%rbp)


# appel de la fonction mul
 movl	-76(%rbp), %edi
 movl	-84(%rbp), %esi
 movl	-92(%rbp), %edx
 movl	-100(%rbp), %ecx
 call mul
 movl	%eax, -112(%rbp)


# appel de la fonction add
 movl	-76(%rbp), %edi
 movl	-84(%rbp), %esi
 movl	-92(%rbp), %edx
 movl	-100(%rbp), %ecx
 call add
 movl	%eax, -116(%rbp)


# declaration de _tmp120 avec la valeur _tmp112 + _tmp116
 movl	-112(%rbp), %eax
 addl	-116(%rbp), %eax
 movl	%eax, -120(%rbp)


# declaration de e avec _tmp120
 movl	-120(%rbp), %eax
 movl	%eax, -108(%rbp)


# retour de e
 movl	-108(%rbp), %eax


# epilogue
 movq	%rbp, %rsp
 popq  %rbp
 ret

