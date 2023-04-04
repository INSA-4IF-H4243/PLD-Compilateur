# declaration de x
# expression avec x
test

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, _tmp8(%rbp)


# declaration de x(%rbp) dans _tmp8(%rbp)
 movl	x(%rbp),%eax
 movl	%eax, _tmp8(%rbp)


# declaration de retour(%rbp) dans x(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, x(%rbp)

