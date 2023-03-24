#declaration de a
#declaration de b
#expression avec a
#expression avec b
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
 movl	$5, -8(%rbp)
 movl	$8, -12(%rbp)
 movl	-8(%rbp), %eax
 addl	-12(%rbp), %eax
 movl  %eax, -16(%rbp)
movl	-16(%rbp),%eax
movl	%eax, -4(%rbp)
 movl	$9, -24(%rbp)
movl	-24(%rbp),%eax
movl	%eax, -20(%rbp)
 movl	-4(%rbp), %eax
 addl	-20(%rbp), %eax
 movl  %eax, -28(%rbp)
movl	-28(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret
