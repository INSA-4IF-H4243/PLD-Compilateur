# declaration de a
# declaration de g
# declaration de b
# affectation de b
# expression avec a
# expression avec b
test

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, _tmp8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp8(%rbp)

test

# declaration de _tmp20(%rbp) avec la valeur 5
 movl	$5, _tmp20(%rbp)


# declaration de b(%rbp) dans _tmp20(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp20(%rbp)


# declaration de b(%rbp) dans a(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, a(%rbp)


# declaration de retour(%rbp) dans b(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, b(%rbp)

