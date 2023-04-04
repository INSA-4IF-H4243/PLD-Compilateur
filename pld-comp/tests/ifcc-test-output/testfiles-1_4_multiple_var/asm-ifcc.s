# declaration de a
# declaration de b
# declaration de c
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


# declaration de _tmp16(%rbp) avec la valeur 5
 movl	$5, -16(%rbp)


# declaration de b(%rbp) dans _tmp16(%rbp)
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp24(%rbp) avec la valeur 10
 movl	$10, -24(%rbp)


# declaration de c(%rbp) dans _tmp24(%rbp)
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# retour de b
retour : 
movl	-12(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
