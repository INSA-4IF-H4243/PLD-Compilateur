# declaration de a
# declaration de b
# declaration de c
# expression avec a
# expression avec b
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $5 dans -8
 movl	$5, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $2 dans -16
 movl	$2, -16(%rbp)


# declaration de b dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# division de -4 / -12 -> -24
 movl	-4(%rbp), %eax
 cltd
 idivl	-12(%rbp)
 movl  %eax, -24(%rbp)


# declaration de c dans -24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)

retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
