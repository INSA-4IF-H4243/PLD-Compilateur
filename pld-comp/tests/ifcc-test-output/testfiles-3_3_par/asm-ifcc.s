# declaration de a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $8 dans -8
 movl	$8, -8(%rbp)


# mise de $5 dans -12
 movl	$5, -12(%rbp)


# addition de -8 + -12 -> -16
 movl	-8(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -16(%rbp)


# declaration de a dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)

retour : 
movl	-4(%rbp), %eax
# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
