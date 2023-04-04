# declaration de b
# declaration de c
# declaration de a
# affectation de b
# expression avec a
# affectation de c
# expression avec a
# expression avec b
# expression avec a
# expression avec b
# expression avec b
# expression avec b
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# declaration de _tmp16 avec la valeur 17
 movl	$17, -16(%rbp)


# declaration de a dans _tmp16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp20 avec la valeur 42
 movl	$42, -20(%rbp)


# declaration de _tmp24 avec la valeur _tmp20 + a
 movl	-20(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -24(%rbp)


# declaration de b dans _tmp24
 movl	-24(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp28 avec la valeur a / b
 movl	-12(%rbp),%eax
 cltd
 idivl	-4(%rbp)
 movl	%eax, -28(%rbp)


# declaration de _tmp32 avec la valeur a * b
 movl	-12(%rbp),%eax
 imull	-4(%rbp),%eax
 movl	%eax, -32(%rbp)


# declaration de _tmp36 avec la valeur _tmp28 + _tmp32
 movl	-28(%rbp),%eax
 addl	-32(%rbp),%eax
 movl	%eax, -36(%rbp)


# declaration de _tmp40 avec la valeur b * b
 movl	-4(%rbp),%eax
 imull	-4(%rbp),%eax
 movl	%eax, -40(%rbp)


# declaration de _tmp44 avec la valeur 12
 movl	$12, -44(%rbp)


# declaration de _tmp48 avec la valeur _tmp40 + _tmp44
 movl	-40(%rbp),%eax
 addl	-44(%rbp),%eax
 movl	%eax, -48(%rbp)


# declaration de _tmp52 avec la valeur 7
 movl	$7, -52(%rbp)


# declaration de _tmp56 avec la valeur _tmp48 * _tmp52
 movl	-48(%rbp),%eax
 imull	-52(%rbp),%eax
 movl	%eax, -56(%rbp)


# declaration de _tmp60 avec la valeur _tmp36 - _tmp56
 movl	-36(%rbp),%eax
 subl	-56(%rbp),%eax
 movl	%eax, -60(%rbp)


# declaration de c dans _tmp60
 movl	-60(%rbp),%eax
 movl	%eax, -8(%rbp)


# declaration de _tmp64 avec la valeur 46
 movl	$46, -64(%rbp)


# declaration de _tmp68 avec la valeur 6
 movl	$6, -68(%rbp)


# declaration de _tmp72 avec la valeur 12
 movl	$12, -72(%rbp)


# declaration de _tmp76 avec la valeur _tmp68 - _tmp72
 movl	-68(%rbp),%eax
 subl	-72(%rbp),%eax
 movl	%eax, -76(%rbp)


# declaration de _tmp80 avec la valeur _tmp64 * _tmp76
 movl	-64(%rbp),%eax
 imull	-76(%rbp),%eax
 movl	%eax, -80(%rbp)


# declaration de _tmp84 avec la valeur c + _tmp80
 movl	-8(%rbp),%eax
 addl	-80(%rbp),%eax
 movl	%eax, -84(%rbp)


# retour de _tmp84
retour : 
movl	-84(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
