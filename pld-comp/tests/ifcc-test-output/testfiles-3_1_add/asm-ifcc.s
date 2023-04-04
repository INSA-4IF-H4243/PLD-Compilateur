# declaration de a
# expression avec a
test

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, _tmp8(%rbp)

test

# declaration de _tmp12(%rbp) avec la valeur 5
 movl	$5, _tmp12(%rbp)


# declaration de _tmp16(%rbp) avec la valeur _tmp8(%rbp) + _tmp12(%rbp)
 movl	_tmp8(%rbp),%eax
 addl	_tmp12(%rbp),%eax
 movl	%eax, _tmp16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp16(%rbp)


# declaration de retour(%rbp) dans a(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, a(%rbp)

