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

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, -8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp20(%rbp) avec la valeur 5
 movl	$5, -20(%rbp)


# declaration de b(%rbp) dans _tmp20(%rbp)
 movl	-20(%rbp),%eax
 movl	%eax, -16(%rbp)


# declaration de b(%rbp) dans a(%rbp)
 movl	-4(%rbp),%eax
 movl	%eax, -16(%rbp)


# retour de b
retour : 
movl	-16(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
