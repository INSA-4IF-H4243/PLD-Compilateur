# declaration de a
# expression avec a
# affectation de a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $7 dans -8
 movl	$7, -8(%rbp)


# declaration de a dans -8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# mise de $8888 dans -12
 movl	$8888, -12(%rbp)

# comparaison !=
 movl	-4(%rbp), %eax
 cmpl	-12(%rbp), %eax
 setne   %al
 movzbl  %al, %eax
 movl    %eax, -16(%rbp)

 cmpl $0, -16(%rbp)
 je .L1

# mise de $1 dans -20
 movl	$1, -20(%rbp)


# affectation de a à -20
 movl	-20(%rbp),%eax
 movl	%eax, -4(%rbp)

 .L1:
retour : 
movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
