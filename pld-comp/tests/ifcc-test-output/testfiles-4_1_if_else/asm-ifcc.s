# declaration de a
# expression avec a
# affectation de a
# affectation de a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# declaration de _tmp8 avec la valeur 7
 movl	$7, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp12 avec la valeur 9
 movl	$9, -12(%rbp)


# declaration de _tmp16 avec la valeur 1
 movl	$1, -16(%rbp)


# declaration de a dans _tmp16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp20 avec la valeur 0
 movl	$0, -20(%rbp)


# declaration de a dans _tmp20
 movl	-20(%rbp),%eax
 movl	%eax, -4(%rbp)


# retour de a
retour : 
movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
