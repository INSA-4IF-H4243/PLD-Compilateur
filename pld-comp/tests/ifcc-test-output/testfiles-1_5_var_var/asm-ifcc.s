#visitdeclaration 
#declaration de a
#visitExpr 
#visitdeclaration 
#declaration de b
#visitExpr 
#visitdeclaration 
#declaration de c
#visitExpr 
#expression avec a
#visitExpr 
#expression avec c
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
movl	$8, -4(%rbp)
movl	$5, -8(%rbp)
movl	-4(%rbp),%eax
movl	%eax, -12(%rbp)
movl	-12(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret