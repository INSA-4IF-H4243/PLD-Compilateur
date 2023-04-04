test

# declaration de _tmp4(%rbp) avec la valeur 42
 movl	$42, _tmp4(%rbp)


# declaration de retour(%rbp) dans _tmp4(%rbp)
 movl	retour(%rbp),%eax
 movl	%eax, _tmp4(%rbp)

