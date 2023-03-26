# declaration de a
# declaration de b
# declaration de c
# affectation de a
# affectation de b
# affectation de c
# expression avec a
# expression avec a
# expression avec b
# expression avec b
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $17 dans -16
 movl	$17, -16(%rbp)


# affectation de a à -16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $42 dans -20
 movl	$42, -20(%rbp)


# affectation de b à -20
 movl	-20(%rbp),%eax
 movl	%eax, -8(%rbp)


# multiplication de -4 * -4 -> -24
 movl	-4(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -24(%rbp)


# multiplication de -8 * -8 -> -28
 movl	-8(%rbp), %eax
 imull	-8(%rbp), %eax
 movl  %eax, -28(%rbp)


# addition de -24 + -28 -> -32
 movl	-24(%rbp), %eax
 addl	-28(%rbp), %eax
 movl  %eax, -32(%rbp)


# mise de $1 dans -36
 movl	$1, -36(%rbp)


# addition de -32 + -36 -> -40
 movl	-32(%rbp), %eax
 addl	-36(%rbp), %eax
 movl  %eax, -40(%rbp)


# affectation de c à -40
 movl	-40(%rbp),%eax
 movl	%eax, -12(%rbp)

retour : 
movl	-12(%rbp), %eax
# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
