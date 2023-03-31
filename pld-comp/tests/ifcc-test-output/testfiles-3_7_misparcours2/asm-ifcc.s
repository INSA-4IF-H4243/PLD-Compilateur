# declaration de b
# declaration de c
# declaration de a
# affectation de b
# expression avec a
# affectation de c
# expression avec a
# expression avec b
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


# declaration de a dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# mise de $42 dans -20
 movl	$42, -20(%rbp)


# addiction de -20 * -12 -> -24
 movl	-20(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -24(%rbp)


# affectation de b à -24
 movl	-24(%rbp),%eax
 movl	%eax, -4(%rbp)


# multiplication de -12 * -4 -> -28
 movl	-12(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -28(%rbp)


# multiplication de -4 * -4 -> -32
 movl	-4(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -32(%rbp)


# mise de $12 dans -36
 movl	$12, -36(%rbp)


# addiction de -32 * -36 -> -40
 movl	-32(%rbp), %eax
 addl	-36(%rbp), %eax
 movl  %eax, -40(%rbp)


# mise de $7 dans -44
 movl	$7, -44(%rbp)


# multiplication de -40 * -44 -> -48
 movl	-40(%rbp), %eax
 imull	-44(%rbp), %eax
 movl  %eax, -48(%rbp)


# affectation de c à -52
 movl	-52(%rbp),%eax
 movl	%eax, -8(%rbp)


# mise de $46 dans -56
 movl	$46, -56(%rbp)


# mise de $6 dans -60
 movl	$6, -60(%rbp)


# mise de $12 dans -64
 movl	$12, -64(%rbp)


# multiplication de -56 * -68 -> -72
 movl	-56(%rbp), %eax
 imull	-68(%rbp), %eax
 movl  %eax, -72(%rbp)


# addiction de -8 * -72 -> -76
 movl	-8(%rbp), %eax
 addl	-72(%rbp), %eax
 movl  %eax, -76(%rbp)

retour : 
movl	-76(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
