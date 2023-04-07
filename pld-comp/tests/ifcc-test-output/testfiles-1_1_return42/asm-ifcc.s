
.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

entry:

# declaration de _tmp4 avec la valeur 42
 movl	$42, -4(%rbp)


# retour de _tmp4
 movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
