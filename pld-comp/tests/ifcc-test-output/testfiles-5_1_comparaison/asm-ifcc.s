# declaration de a
# declaration de b
# declaration de c
# affectation de c
# expression avec a
# expression avec b
# expression avec c
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

entry:

# declaration de _tmp8 avec la valeur 7
 movl	$7, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)


# declaration de _tmp16 avec la valeur 9
 movl	$9, -16(%rbp)


# declaration de b dans _tmp16
 movl	-16(%rbp),%eax
 movl	%eax, -12(%rbp)


# declaration de _tmp24 avec la valeur 11
 movl	$11, -24(%rbp)


# declaration de c dans _tmp24
 movl	-24(%rbp),%eax
 movl	%eax, -20(%rbp)


# declaration de _tmp28 avec la valeur a + b
 movl	-4(%rbp),%eax
 addl	-12(%rbp),%eax
 movl	%eax, -28(%rbp)


# comparaison de _tmp32 avec la valeur _tmp28 == c
 movl	-28(%rbp),%eax
 cmpl	-20(%rbp),%eax
 sete	%al
 movzbl	%al, %eax
 movl	%eax, -32(%rbp)


# declaration de c dans _tmp32
 movl	-32(%rbp),%eax
 movl	%eax, -20(%rbp)


# retour de c
 movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
