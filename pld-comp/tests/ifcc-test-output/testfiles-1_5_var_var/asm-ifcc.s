# declaration de a
# declaration de b
# declaration de c
# expression avec a
# expression avec c

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


# mise de $5 dans -16
 movl	$5, -16(%rbp)


# declaration de b dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de c dans -20
 movl	-4(%rbp),%eax
 movl	%eax, -20(%rbp)

retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
