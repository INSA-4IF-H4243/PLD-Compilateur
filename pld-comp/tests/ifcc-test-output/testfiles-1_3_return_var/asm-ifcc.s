# declaration de x
# expression avec x

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, -8(%rbp)


# declaration de x(%rbp) dans _tmp8(%rbp)
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# retour de x
retour : 
movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
