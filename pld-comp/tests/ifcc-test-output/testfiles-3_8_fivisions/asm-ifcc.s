# declaration de a
# declaration de b
# declaration de c
# expression avec a
# expression avec b
# expression avec c
test

# declaration de _tmp8(%rbp) avec la valeur 5
 movl	$5, _tmp8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp8(%rbp)

test

# declaration de _tmp16(%rbp) avec la valeur 2
 movl	$2, _tmp16(%rbp)


# declaration de b(%rbp) dans _tmp16(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp16(%rbp)


# declaration de _tmp24(%rbp) avec la valeur a(%rbp) / b(%rbp)
 movl	a(%rbp),%eax
 cltd
 idivl	b(%rbp)
 movl	%eax, _tmp24(%rbp)


# declaration de c(%rbp) dans _tmp24(%rbp)
 movl	c(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de retour(%rbp) dans c(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, c(%rbp)

