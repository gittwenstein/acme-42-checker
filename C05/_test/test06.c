#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ft_is_prime(int nb);

int main(int count, char **args)
{
	assert(ft_is_prime(-11234) == 0);
	assert(ft_is_prime(-1) == 0);
	assert(ft_is_prime(0) == 0);
	assert(ft_is_prime(1) == 0);
	assert(ft_is_prime(2) == 1);
	assert(ft_is_prime(3) == 1);
	assert(ft_is_prime(4456212) == 0);
	assert(ft_is_prime(11) == 1);
	assert(ft_is_prime(997) == 1);
	assert(ft_is_prime(101771) == 1);
	assert(ft_is_prime(INT_MAX) == 1);
	assert(ft_is_prime(INT_MAX - 1) == 0);
	assert(ft_is_prime(INT_MIN) == 0);
}