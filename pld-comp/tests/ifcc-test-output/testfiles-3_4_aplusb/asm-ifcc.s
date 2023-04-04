# declaration de a
# declaration de b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# declaration de _tmp8(%rbp) avec la valeur 5
 movl	$5, -8(%rbp)


# declaration de _tmp12(%rbp) avec la valeur 8
 movl	$8, -12(%rbp)


# declaration de _tmp16(%rbp) avec la valeur _tmp8(%rbp) + _tmp12(%rbp)
 movl	-8(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp24(%rbp) avec la valeur 9
 movl	$9, -24(%rbp)


# declaration de b(%rbp) dans _tmp24(%rbp)
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# declaration de _tmp28(%rbp) avec la valeur a(%rbp) + b(%rbp)
 movl	-4(%rbp),%eax
 addl	-20(%rbp),%eax
 movl	%eax, -28(%rbp)


# retour de _tmp28
retour : 
movl	-28(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
