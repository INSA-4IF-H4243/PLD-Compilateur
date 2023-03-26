# declaration de a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $4 dans -8
 movl	$4, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)

retour : 
movl	-4(%rbp), %eax
# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
