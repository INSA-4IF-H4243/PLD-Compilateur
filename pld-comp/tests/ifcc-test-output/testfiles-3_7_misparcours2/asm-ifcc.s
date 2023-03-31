# declaration de b
# declaration de c
# declaration de a
# affectation de b
# expression avec a
# affectation de c
# expression avec a
# expression avec b
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


# addition de -20 + -12 -> -24
 movl	-20(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -24(%rbp)


# affectation de b à -24
 movl	-24(%rbp),%eax
 movl	%eax, -4(%rbp)


# division de -12 / -4 -> -28
 movl	-12(%rbp), %eax
 cltd
 idivl	-4(%rbp)
 movl  %eax, -28(%rbp)


# multiplication de -12 * -4 -> -32
 movl	-12(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -32(%rbp)


# addition de -28 + -32 -> -36
 movl	-28(%rbp), %eax
 addl	-32(%rbp), %eax
 movl  %eax, -36(%rbp)


# multiplication de -4 * -4 -> -40
 movl	-4(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -40(%rbp)


# mise de $12 dans -44
 movl	$12, -44(%rbp)


# addition de -40 + -44 -> -48
 movl	-40(%rbp), %eax
 addl	-44(%rbp), %eax
 movl  %eax, -48(%rbp)


# mise de $7 dans -52
 movl	$7, -52(%rbp)


# multiplication de -48 * -52 -> -56
 movl	-48(%rbp), %eax
 imull	-52(%rbp), %eax
 movl  %eax, -56(%rbp)


# soustraction de -36 - -56 -> -60
 movl	-36(%rbp), %eax
 subl	-56(%rbp), %eax
 movl  %eax, -60(%rbp)


# affectation de c à -60
 movl	-60(%rbp),%eax
 movl	%eax, -8(%rbp)


# mise de $46 dans -64
 movl	$46, -64(%rbp)


# mise de $6 dans -68
 movl	$6, -68(%rbp)


# mise de $12 dans -72
 movl	$12, -72(%rbp)


# soustraction de -68 - -72 -> -76
 movl	-68(%rbp), %eax
 subl	-72(%rbp), %eax
 movl  %eax, -76(%rbp)


# multiplication de -64 * -76 -> -80
 movl	-64(%rbp), %eax
 imull	-76(%rbp), %eax
 movl  %eax, -80(%rbp)


# addition de -8 + -80 -> -84
 movl	-8(%rbp), %eax
 addl	-80(%rbp), %eax
 movl  %eax, -84(%rbp)

retour : 
movl	-84(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
