# declaration de a
# declaration de b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $15 dans -8
 movl	$15, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $9 dans -16
 movl	$9, -16(%rbp)


# declaration de b dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# soustraction de -4 / -12 -> -20
 movl	-4(%rbp), %eax
 subl	-12(%rbp), %eax
 movl  %eax, -20(%rbp)

retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
