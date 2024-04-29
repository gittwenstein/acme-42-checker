#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power);

int main(int count, char **args)
{
	assert(ft_iterative_power(-1, 3) == -1);
	assert(ft_iterative_power(-1, 4) == 1);
	assert(ft_iterative_power(-1123, 2) == -1123 * -1123);
	assert(ft_iterative_power(-1123, 3) == -1123 * -1123 * -1123);
	assert(ft_iterative_power(0, 0) == 1);
	assert(ft_iterative_power(123, 0) == 1);
	assert(ft_iterative_power(-123, 0) == 1);
	assert(ft_iterative_power(0, -1) == 0);
	assert(ft_iterative_power(123, -8) == 0);
	assert(ft_iterative_power(-123, -4) == 0);
	assert(ft_iterative_power(1, 2) == 1);
	assert(ft_iterative_power(1, 19) == 1);
	assert(ft_iterative_power(2, 1) == 2);
	assert(ft_iterative_power(2, 2) == 4);
	assert(ft_iterative_power(2, 4) == 16);
	assert(ft_iterative_power(2, 5) == 32);
	assert(ft_iterative_power(3, 2) == 9);
	assert(ft_iterative_power(3, 3) == 27);
	assert(ft_iterative_power(5, 3) == 125);
	assert(ft_iterative_power(12, 2) == 144);
}
