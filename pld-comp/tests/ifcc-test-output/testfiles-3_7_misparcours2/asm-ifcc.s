#declaration de a
#declaration de b
#declaration de c
#affectation de a
#affectation de b
#expression avec a
#affectation de c
#expression avec a
#expression avec b
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
 movl	-20(%rbp), %eax
 addl	-4(%rbp), %eax
 movl  %eax, -24(%rbp)
movl	-24(%rbp),%eax
movl	%eax, -8(%rbp)
 movl	-4(%rbp), %eax
 imull	-8(%rbp), %eax
 movl  %eax, -28(%rbp)
 movl	-8(%rbp), %eax
 imull	-8(%rbp), %eax
 movl  %eax, -32(%rbp)
 movl	$12, -36(%rbp)
 movl	-32(%rbp), %eax
 addl	-36(%rbp), %eax
 movl  %eax, -40(%rbp)
 movl	$7, -44(%rbp)
 movl	-40(%rbp), %eax
 imull	-44(%rbp), %eax
 movl  %eax, -48(%rbp)
 movl	-28(%rbp), %eax
 subl	-48(%rbp), %eax
 movl  %eax, -52(%rbp)
movl	-52(%rbp),%eax
movl	%eax, -12(%rbp)
 movl	$46, -56(%rbp)
 movl	$6, -60(%rbp)
 movl	$12, -64(%rbp)
 movl	-60(%rbp), %eax
 subl	-64(%rbp), %eax
 movl  %eax, -68(%rbp)
 movl	-56(%rbp), %eax
 imull	-68(%rbp), %eax
 movl  %eax, -72(%rbp)
 movl	-12(%rbp), %eax
 addl	-72(%rbp), %eax
 movl  %eax, -76(%rbp)
movl	-76(%rbp), %eax
# epilogue
popq %rbp 			# restore %rbp from the stack
 	ret
