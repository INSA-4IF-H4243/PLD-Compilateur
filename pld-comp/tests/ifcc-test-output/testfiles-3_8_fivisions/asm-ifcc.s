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

# declaration de _tmp8 avec la valeur 5
 movl	$5, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp16 avec la valeur 2
 movl	$2, -16(%rbp)


# declaration de b dans _tmp16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp24 avec la valeur a / b
 movl	-4(%rbp),%eax
 cltd
 idivl	-12(%rbp)
 movl	%eax, -24(%rbp)


# declaration de c dans _tmp24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# retour de c
retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
