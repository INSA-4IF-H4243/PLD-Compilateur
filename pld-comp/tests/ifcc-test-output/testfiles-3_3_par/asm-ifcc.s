# declaration de a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, -8(%rbp)


# declaration de _tmp12(%rbp) avec la valeur 5
 movl	$5, -12(%rbp)


# declaration de _tmp16(%rbp) avec la valeur _tmp8(%rbp) + _tmp12(%rbp)
 movl	-8(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# retour de a
retour : 
movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
