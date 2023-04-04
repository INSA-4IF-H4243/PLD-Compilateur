# declaration de a
# declaration de b
# affectation de a
# affectation de b
# declaration de c
# expression avec a
# expression avec b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $4 dans -12
 movl	$4, -12(%rbp)


# affectation de a à -12
 movl	-12(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $2 dans -16
 movl	$2, -16(%rbp)


# affectation de b à -16
 movl	-16(%rbp),%eax
 movl	%eax, -8(%rbp)


# division de -4 / -8 -> -24
 movl	-4(%rbp), %eax
 idivl	-8(%rbp)
 movl  %eax, -24(%rbp)


# declaration de c dans -24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# division de -4 / -8 -> -28
 movl	-4(%rbp), %eax
 idivl	-8(%rbp)
 movl  %eax, -28(%rbp)

retour : 
movl	-28(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
