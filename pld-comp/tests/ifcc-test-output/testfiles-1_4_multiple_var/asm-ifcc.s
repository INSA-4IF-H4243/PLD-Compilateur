#visitdeclaration 
#declaration de a
#visitExpr 
#visitdeclaration 
#declaration de b
#visitExpr 
#visitdeclaration 
#declaration de c
#visitExpr 
#visitExpr 
#expression avec b
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
movl	$8, -4(%rbp)
movl	$5, -8(%rbp)
movl	$10, -12(%rbp)
movl	-8(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret