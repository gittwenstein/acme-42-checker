#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main(int count, char **args)
{
	assert(ft_recursive_factorial(-1) == 0);
	assert(ft_recursive_factorial(-1123) == 0);
	assert(ft_recursive_factorial(0) == 0);
	assert(ft_recursive_factorial(1) == 1);
	assert(ft_recursive_factorial(2) == 2);
	assert(ft_recursive_factorial(3) == 6);
	assert(ft_recursive_factorial(5) == 120);
	assert(ft_recursive_factorial(12) == 479001600);
}
