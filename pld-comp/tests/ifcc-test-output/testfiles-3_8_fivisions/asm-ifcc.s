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

# declaration de _tmp8(%rbp) avec la valeur 5
 movl	$5, -8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp16(%rbp) avec la valeur 2
 movl	$2, -16(%rbp)


# declaration de b(%rbp) dans _tmp16(%rbp)
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp24(%rbp) avec la valeur a(%rbp) / b(%rbp)
 movl	-4(%rbp),%eax
 cltd
 idivl	-12(%rbp)
 movl	%eax, -24(%rbp)


# declaration de c(%rbp) dans _tmp24(%rbp)
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# retour de c
retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
