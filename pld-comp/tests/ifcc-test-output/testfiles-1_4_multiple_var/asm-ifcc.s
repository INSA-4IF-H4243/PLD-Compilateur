# declaration de a
# declaration de b
# declaration de c
# expression avec b
test

# declaration de _tmp8(%rbp) avec la valeur 8
 movl	$8, _tmp8(%rbp)


# declaration de a(%rbp) dans _tmp8(%rbp)
 movl	a(%rbp),%eax
 movl	%eax, _tmp8(%rbp)

test

# declaration de _tmp16(%rbp) avec la valeur 5
 movl	$5, _tmp16(%rbp)


# declaration de b(%rbp) dans _tmp16(%rbp)
 movl	b(%rbp),%eax
 movl	%eax, _tmp16(%rbp)

test

# declaration de _tmp24(%rbp) avec la valeur 10
 movl	$10, _tmp24(%rbp)


# declaration de c(%rbp) dans _tmp24(%rbp)
 movl	c(%rbp),%eax
 movl	%eax, _tmp24(%rbp)


# declaration de retour(%rbp) dans b(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, b(%rbp)

