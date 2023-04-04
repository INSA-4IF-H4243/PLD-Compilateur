# declaration de b
# declaration de c
# declaration de a
# affectation de b
# expression avec a
# affectation de c
# expression avec a
# expression avec b
# expression avec a
# expression avec b
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


# declaration de _tmp24(%rbp) avec la valeur _tmp20(%rbp) + a(%rbp)
 movl	_tmp20(%rbp),%eax
 addl	a(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de b(%rbp) dans _tmp24(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de _tmp28(%rbp) avec la valeur a(%rbp) / b(%rbp)
 movl	a(%rbp),%eax
 cltd
 idivl	b(%rbp)
 movl	%eax, _tmp28(%rbp)


# declaration de _tmp32(%rbp) avec la valeur a(%rbp) * b(%rbp)
 movl	a(%rbp),%eax
 imull	b(%rbp),%eax
 movl	%eax, _tmp32(%rbp)


# declaration de _tmp36(%rbp) avec la valeur _tmp28(%rbp) + _tmp32(%rbp)
 movl	_tmp28(%rbp),%eax
 addl	_tmp32(%rbp),%eax
 movl	%eax, _tmp36(%rbp)


# declaration de _tmp40(%rbp) avec la valeur b(%rbp) * b(%rbp)
 movl	b(%rbp),%eax
 imull	b(%rbp),%eax
 movl	%eax, _tmp40(%rbp)

test

# declaration de _tmp44(%rbp) avec la valeur 12
 movl	$12, _tmp44(%rbp)


# declaration de _tmp48(%rbp) avec la valeur _tmp40(%rbp) + _tmp44(%rbp)
 movl	_tmp40(%rbp),%eax
 addl	_tmp44(%rbp),%eax
 movl	%eax, _tmp48(%rbp)

test

# declaration de _tmp52(%rbp) avec la valeur 7
 movl	$7, _tmp52(%rbp)


# declaration de _tmp56(%rbp) avec la valeur _tmp48(%rbp) * _tmp52(%rbp)
 movl	_tmp48(%rbp),%eax
 imull	_tmp52(%rbp),%eax
 movl	%eax, _tmp56(%rbp)


# declaration de _tmp60(%rbp) avec la valeur _tmp36(%rbp) - _tmp56(%rbp)
 movl	_tmp36(%rbp),%eax
 subl	_tmp56(%rbp),%eax
 movl	%eax, _tmp60(%rbp)


# declaration de c(%rbp) dans _tmp60(%rbp)
 movl	c(%rbp),%eax
 movl	%eax, _tmp60(%rbp)

test

# declaration de _tmp64(%rbp) avec la valeur 46
 movl	$46, _tmp64(%rbp)

test

# declaration de _tmp68(%rbp) avec la valeur 6
 movl	$6, _tmp68(%rbp)

test

# declaration de _tmp72(%rbp) avec la valeur 12
 movl	$12, _tmp72(%rbp)


# declaration de _tmp76(%rbp) avec la valeur _tmp68(%rbp) - _tmp72(%rbp)
 movl	_tmp68(%rbp),%eax
 subl	_tmp72(%rbp),%eax
 movl	%eax, _tmp76(%rbp)


# declaration de _tmp80(%rbp) avec la valeur _tmp64(%rbp) * _tmp76(%rbp)
 movl	_tmp64(%rbp),%eax
 imull	_tmp76(%rbp),%eax
 movl	%eax, _tmp80(%rbp)


# declaration de _tmp84(%rbp) avec la valeur c(%rbp) + _tmp80(%rbp)
 movl	c(%rbp),%eax
 addl	_tmp80(%rbp),%eax
 movl	%eax, _tmp84(%rbp)


# declaration de retour(%rbp) dans _tmp84(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, _tmp84(%rbp)

