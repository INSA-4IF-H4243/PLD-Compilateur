# declaration de a
# expression avec a
test

# declaration de _tmp8(%rbp) avec la valeur 4
 movl	$4, _tmp8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp8(%rbp)


# declaration de retour(%rbp) dans a(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, a(%rbp)

