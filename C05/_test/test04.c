#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int ft_fibonacci(int index);

int main(int count, char **args)
{
	assert(ft_fibonacci(-1) == -1);
	assert(ft_fibonacci(-123) == -1);
	assert(ft_fibonacci(INT_MIN) == -1);
	assert(ft_fibonacci(0) == 0);
	assert(ft_fibonacci(1) == 1);
	assert(ft_fibonacci(2) == 1);
	assert(ft_fibonacci(3) == 2);
	assert(ft_fibonacci(4) == 3);
	assert(ft_fibonacci(5) == 5);
	assert(ft_fibonacci(6) == 8);
	assert(ft_fibonacci(21) == 10946);
	assert(ft_fibonacci(42) == 267914296);
	assert(ft_fibonacci(45) == 1134903170);
}
