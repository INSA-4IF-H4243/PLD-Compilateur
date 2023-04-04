# declaration de a
# declaration de b
# declaration de c
# affectation de c
# expression avec a
# expression avec b
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $7 dans -8
 movl	$7, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $9 dans -16
 movl	$9, -16(%rbp)


# declaration de b dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# mise de $11 dans -24
 movl	$11, -24(%rbp)


# declaration de c dans -24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# addiction de -4 * -12 -> -28
 movl	-4(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -28(%rbp)


# mise de $999 dans -32
 movl	$999, -32(%rbp)

# comparaison !=
 movl	-28(%rbp), %eax
 cmpl	-32(%rbp), %eax
 setne   %al
 movzbl  %al, %eax
 movl    %eax, -36(%rbp)


# affectation de c à -36
 movl	-36(%rbp),%eax
 movl	%eax, -20(%rbp)

retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
