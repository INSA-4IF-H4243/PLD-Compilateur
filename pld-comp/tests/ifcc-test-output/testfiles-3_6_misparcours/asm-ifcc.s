# declaration de a
# declaration de b
# declaration de c
# affectation de a
# affectation de b
# affectation de c
# expression avec a
# expression avec a
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
 movl	%eax, -4(%rbp)


# declaration de _tmp20 avec la valeur 42
 movl	$42, -20(%rbp)


# declaration de b dans _tmp20
 movl	-20(%rbp),%eax
 movl	%eax, -8(%rbp)


# declaration de _tmp24 avec la valeur a * a
 movl	-4(%rbp),%eax
 imull	-4(%rbp),%eax
 movl	%eax, -24(%rbp)


# declaration de _tmp28 avec la valeur b * b
 movl	-8(%rbp),%eax
 imull	-8(%rbp),%eax
 movl	%eax, -28(%rbp)


# declaration de _tmp32 avec la valeur _tmp24 + _tmp28
 movl	-24(%rbp),%eax
 addl	-28(%rbp),%eax
 movl	%eax, -32(%rbp)


# declaration de _tmp36 avec la valeur 1
 movl	$1, -36(%rbp)


# declaration de _tmp40 avec la valeur _tmp32 + _tmp36
 movl	-32(%rbp),%eax
 addl	-36(%rbp),%eax
 movl	%eax, -40(%rbp)


# declaration de c dans _tmp40
 movl	-40(%rbp),%eax
 movl	%eax, -12(%rbp)


# retour de c
retour : 
movl	-12(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
