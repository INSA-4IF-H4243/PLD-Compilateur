#declaration de a
#declaration de b
#declaration de c
#affectation de a
#affectation de b
#affectation de c
#expression avec a
#expression avec a
#expression avec b
#expression avec b
#expression avec c
.globl	main
 main: 
# prologue
pushq %rbp 		# save %rbp on the stack
movq %rsp, %rbp 	# define %rbp for the current function
 movl	$17, -16(%rbp)
movl	-16(%rbp),%eax
movl	%eax, -4(%rbp)
 movl	$42, -20(%rbp)
movl	-20(%rbp),%eax
movl	%eax, -8(%rbp)
 movl	-4(%rbp), %eax
 imull	-4(%rbp), %eax
 movl  %eax, -24(%rbp)
 movl	-8(%rbp), %eax
 imull	-8(%rbp), %eax
 movl  %eax, -28(%rbp)
 movl	-24(%rbp), %eax
 addl	-28(%rbp), %eax
 movl  %eax, -32(%rbp)
 movl	$1, -36(%rbp)
 movl	-32(%rbp), %eax
 addl	-36(%rbp), %eax
 movl  %eax, -40(%rbp)
movl	-40(%rbp),%eax
movl	%eax, -12(%rbp)
movl	-12(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret
