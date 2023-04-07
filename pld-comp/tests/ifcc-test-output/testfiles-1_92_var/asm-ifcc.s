# declaration de a
# declaration de g
# declaration de b
# affectation de b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

entry:

# declaration de _tmp8 avec la valeur 8
 movl	$8, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp20 avec la valeur 5
 movl	$5, -20(%rbp)


# declaration de b dans _tmp20
 movl	-20(%rbp),%eax
 movl	%eax, -16(%rbp)


# declaration de b dans a
 movl	-4(%rbp),%eax
 movl	%eax, -16(%rbp)


# retour de b
 movl	-16(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
