#declaration de a
#declaration de b
#affectation de b
#expression avec a
#expression avec b
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
movl	$8, -4(%rbp)
movl	$5, -8(%rbp)
movl	-4(%rbp),%eax
movl	%eax, -8(%rbp)
movl	-8(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret
