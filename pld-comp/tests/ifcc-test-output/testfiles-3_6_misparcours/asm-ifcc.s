# declaration de a
# declaration de b
# declaration de c
# affectation de a
# affectation de b
# affectation de c
# expression avec a
# expression avec a
# expression avec b
# expression avec b
# expression avec c
test

# declaration de _tmp16(%rbp) avec la valeur 17
 movl	$17, _tmp16(%rbp)


# declaration de a(%rbp) dans _tmp16(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp16(%rbp)

test

# declaration de _tmp20(%rbp) avec la valeur 42
 movl	$42, _tmp20(%rbp)


# declaration de b(%rbp) dans _tmp20(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp20(%rbp)


# declaration de _tmp24(%rbp) avec la valeur a(%rbp) * a(%rbp)
 movl	a(%rbp),%eax
 imull	a(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de _tmp28(%rbp) avec la valeur b(%rbp) * b(%rbp)
 movl	b(%rbp),%eax
 imull	b(%rbp),%eax
 movl	%eax, _tmp28(%rbp)


# declaration de _tmp32(%rbp) avec la valeur _tmp24(%rbp) + _tmp28(%rbp)
 movl	_tmp24(%rbp),%eax
 addl	_tmp28(%rbp),%eax
 movl	%eax, _tmp32(%rbp)

test

# declaration de _tmp36(%rbp) avec la valeur 1
 movl	$1, _tmp36(%rbp)


# declaration de _tmp40(%rbp) avec la valeur _tmp32(%rbp) + _tmp36(%rbp)
 movl	_tmp32(%rbp),%eax
 addl	_tmp36(%rbp),%eax
 movl	%eax, _tmp40(%rbp)


# declaration de c(%rbp) dans _tmp40(%rbp)
 movl	c(%rbp),%eax
 movl	%eax, _tmp40(%rbp)


# declaration de retour(%rbp) dans c(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, c(%rbp)

