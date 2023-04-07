# declaration de a
# declaration de b
# expression avec a
# expression avec b

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

entry:

# declaration de _tmp8 avec la valeur 5
 movl	$5, -8(%rbp)


# declaration de _tmp12 avec la valeur 8
 movl	$8, -12(%rbp)


# declaration de _tmp16 avec la valeur _tmp8 + _tmp12
 movl	-8(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -16(%rbp)


# declaration de a dans _tmp16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp24 avec la valeur 9
 movl	$9, -24(%rbp)


# declaration de b dans _tmp24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# declaration de _tmp28 avec la valeur a + b
 movl	-4(%rbp),%eax
 addl	-20(%rbp),%eax
 movl	%eax, -28(%rbp)


# retour de _tmp28
 movl	-28(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
