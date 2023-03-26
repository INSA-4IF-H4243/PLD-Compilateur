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

# mise de $8 dans -8
 movl	$8, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $5 dans -20
 movl	$5, -20(%rbp)


# declaration de b dans -20
 movl	-20(%rbp),%eax
 movl	%eax, -16(%rbp)


# affectation de b à -4
 movl	-4(%rbp),%eax
 movl	%eax, -16(%rbp)

retour : 
movl	-16(%rbp), %eax
# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
