# declaration de a
# declaration de b
# declaration de c
# affectation de c
# expression avec a
# expression avec c

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

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


# declaration de _tmp28 avec la valeur 8
 movl	$8, -28(%rbp)


# declaration de _tmp32 avec la valeur 3
 movl	$3, -32(%rbp)


# declaration de _tmp36 avec la valeur a * _tmp32
 movl	-4(%rbp),%eax
 imull	-32(%rbp),%eax
 movl	%eax, -36(%rbp)


# comparaison de _tmp40 avec la valeur _tmp28 < _tmp36
 movl	-28(%rbp),%eax
 cmpl	-36(%rbp),%eax
 setl	%al
 movzbl	%al, %eax
 movl	%eax, -40(%rbp)


# declaration de c dans _tmp40
 movl	-40(%rbp),%eax
 movl	%eax, -20(%rbp)


# retour de c
retour : 
movl	-20(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
