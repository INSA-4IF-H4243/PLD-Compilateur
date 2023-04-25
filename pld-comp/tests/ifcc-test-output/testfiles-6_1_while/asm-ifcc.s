# declaration de a
# expression avec a
# affectation de a
# expression avec a
# expression avec a

.globl	main
 main: 

# prologue
 pushq %rbp 		# save %rbp on the stack
 movq %rsp, %rbp 	# define %rbp for the current function

entry:

# declaration de _tmp8 avec la valeur 3
 movl	$3, -8(%rbp)


# declaration de a dans _tmp8
 movl	-8(%rbp),%eax
 movl	%eax, -4(%rbp)

jmp testWhile8
testWhile8:

# declaration de _tmp12 avec la valeur 7
 movl	$7, -12(%rbp)


# comparaison de _tmp16 avec la valeur a < _tmp12
 movl	-4(%rbp),%eax
 cmpl	-12(%rbp),%eax
 setl	%al
 movzbl	%al, %eax
 movl	%eax, -16(%rbp)

je afterWhile28
bodyWhile20:

# declaration de _tmp24 avec la valeur 1
 movl	$1, -24(%rbp)


# declaration de _tmp28 avec la valeur a + _tmp24
 movl	-4(%rbp),%eax
 addl	-24(%rbp),%eax
 movl	%eax, -28(%rbp)


# declaration de a dans _tmp28
 movl	-28(%rbp),%eax
 movl	%eax, -4(%rbp)

jmp testWhile8
afterWhile28:

# retour de a
 movl	-4(%rbp), %eax

# epilogue
 popq %rbp 			# restore %rbp from the stack
 	ret
