# declaration de a
# declaration de b
# expression avec a
# expression avec b
test

# declaration de _tmp8(%rbp) avec la valeur 5
 movl	$5, _tmp8(%rbp)

test

# declaration de _tmp12(%rbp) avec la valeur 8
 movl	$8, _tmp12(%rbp)


# declaration de _tmp16(%rbp) avec la valeur _tmp8(%rbp) + _tmp12(%rbp)
 movl	_tmp8(%rbp),%eax
 addl	_tmp12(%rbp),%eax
 movl	%eax, _tmp16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp16(%rbp)

test

# declaration de _tmp24(%rbp) avec la valeur 9
 movl	$9, _tmp24(%rbp)


# declaration de b(%rbp) dans _tmp24(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de _tmp28(%rbp) avec la valeur a(%rbp) + b(%rbp)
 movl	a(%rbp),%eax
 addl	b(%rbp),%eax
 movl	%eax, _tmp28(%rbp)


# declaration de retour(%rbp) dans _tmp28(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, _tmp28(%rbp)

