# declaration de a
# declaration de b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $5 dans -8
 movl	$5, -8(%rbp)


# mise de $8 dans -12
 movl	$8, -12(%rbp)


# addiction de -8 * -12 -> -16
 movl	-8(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -16(%rbp)


# declaration de a dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $9 dans -24
 movl	$9, -24(%rbp)


# declaration de b dans -24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# addiction de -4 * -20 -> -28
 movl	-4(%rbp), %eax
 addl	-20(%rbp), %eax
 movl  %eax, -28(%rbp)

retour : 
movl	-28(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
