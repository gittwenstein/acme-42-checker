#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ft_find_next_prime(int nb);

int main(int count, char **args)
{
	assert(ft_find_next_prime(-1) == 2);
	assert(ft_find_next_prime(0) == 2);
	assert(ft_find_next_prime(1) == 2);
	assert(ft_find_next_prime(2) == 2);
	assert(ft_find_next_prime(3) == 3);
	assert(ft_find_next_prime(4) == 5);
	assert(ft_find_next_prime(11) == 11);
	assert(ft_find_next_prime(22) == 23);
	assert(ft_find_next_prime(INT_MIN) == 2);
	assert(ft_find_next_prime(INT_MAX - 2) == INT_MAX);
}