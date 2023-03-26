
.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

# mise de $42 dans -4
 movl	$42, -4(%rbp)

retour : 
movl	-4(%rbp), %eax
# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
