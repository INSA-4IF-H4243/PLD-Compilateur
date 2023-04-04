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

# declaration de _tmp16(%rbp) avec la valeur 17
 movl	$17, -16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp20(%rbp) avec la valeur 42
 movl	$42, -20(%rbp)


# declaration de _tmp24(%rbp) avec la valeur _tmp20(%rbp) + a(%rbp)
 movl	-20(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -24(%rbp)


# declaration de b(%rbp) dans _tmp24(%rbp)
 movl	-24(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp28(%rbp) avec la valeur a(%rbp) / b(%rbp)
 movl	-12(%rbp),%eax
 cltd
 idivl	-4(%rbp)
 movl	%eax, -28(%rbp)


# declaration de _tmp32(%rbp) avec la valeur a(%rbp) * b(%rbp)
 movl	-12(%rbp),%eax
 imull	-4(%rbp),%eax
 movl	%eax, -32(%rbp)


# declaration de _tmp36(%rbp) avec la valeur _tmp28(%rbp) + _tmp32(%rbp)
 movl	-28(%rbp),%eax
 addl	-32(%rbp),%eax
 movl	%eax, -36(%rbp)


# declaration de _tmp40(%rbp) avec la valeur b(%rbp) * b(%rbp)
 movl	-4(%rbp),%eax
 imull	-4(%rbp),%eax
 movl	%eax, -40(%rbp)


# declaration de _tmp44(%rbp) avec la valeur 12
 movl	$12, -44(%rbp)


# declaration de _tmp48(%rbp) avec la valeur _tmp40(%rbp) + _tmp44(%rbp)
 movl	-40(%rbp),%eax
 addl	-44(%rbp),%eax
 movl	%eax, -48(%rbp)


# declaration de _tmp52(%rbp) avec la valeur 7
 movl	$7, -52(%rbp)


# declaration de _tmp56(%rbp) avec la valeur _tmp48(%rbp) * _tmp52(%rbp)
 movl	-48(%rbp),%eax
 imull	-52(%rbp),%eax
 movl	%eax, -56(%rbp)


# declaration de _tmp60(%rbp) avec la valeur _tmp36(%rbp) - _tmp56(%rbp)
 movl	-36(%rbp),%eax
 subl	-56(%rbp),%eax
 movl	%eax, -60(%rbp)


# declaration de c(%rbp) dans _tmp60(%rbp)
 movl	-60(%rbp),%eax
 movl	%eax, -8(%rbp)


# declaration de _tmp64(%rbp) avec la valeur 46
 movl	$46, -64(%rbp)


# declaration de _tmp68(%rbp) avec la valeur 6
 movl	$6, -68(%rbp)


# declaration de _tmp72(%rbp) avec la valeur 12
 movl	$12, -72(%rbp)


# declaration de _tmp76(%rbp) avec la valeur _tmp68(%rbp) - _tmp72(%rbp)
 movl	-68(%rbp),%eax
 subl	-72(%rbp),%eax
 movl	%eax, -76(%rbp)


# declaration de _tmp80(%rbp) avec la valeur _tmp64(%rbp) * _tmp76(%rbp)
 movl	-64(%rbp),%eax
 imull	-76(%rbp),%eax
 movl	%eax, -80(%rbp)


# declaration de _tmp84(%rbp) avec la valeur c(%rbp) + _tmp80(%rbp)
 movl	-8(%rbp),%eax
 addl	-80(%rbp),%eax
 movl	%eax, -84(%rbp)


# retour de _tmp84
retour : 
movl	-84(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
