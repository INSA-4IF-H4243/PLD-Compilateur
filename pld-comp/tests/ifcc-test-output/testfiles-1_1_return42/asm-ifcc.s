# declaration de c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $5 dans -8
 movl	$5, -8(%rbp)


# mise de $6 dans -12
 movl	$6, -12(%rbp)

 movl	-8(%rbp), %eax
 cmpl	-12(%rbp), %eax
 setg    %al
 movzbl  %al, %eax
 movl    %eax, -16(%rbp)


# declaration de c dans -16
 movl	-16(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $42 dans -20
 movl	$42, -20(%rbp)

retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
