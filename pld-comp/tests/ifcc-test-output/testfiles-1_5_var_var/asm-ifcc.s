#declaration de a
#declaration de b
#declaration de c
#expression avec a
#expression avec c
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
 movl	$8, -8(%rbp)
movl	-8(%rbp),%eax
movl	%eax, -4(%rbp)
 movl	$5, -16(%rbp)
movl	-16(%rbp),%eax
movl	%eax, -12(%rbp)
movl	-4(%rbp),%eax
movl	%eax, -20(%rbp)
movl	-20(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret
