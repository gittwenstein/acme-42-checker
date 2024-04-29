#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_sqrt(int nb);

int main(int count, char **args)
{
	assert(ft_sqrt(3 * 3) == 3);
	assert(ft_sqrt(3 * 3 + 1) == 0);
	assert(ft_sqrt(11 * 11) == 11);
	assert(ft_sqrt(11 * 11 + 1) == 0);
	assert(ft_sqrt(25 * 25) == 25);
	assert(ft_sqrt(25 * 25 + 1) == 0);
	assert(ft_sqrt(125 * 125) == 125);
	assert(ft_sqrt(125 * 125 + 1) == 0);
	assert(ft_sqrt(225 * 225) == 225);
	assert(ft_sqrt(225 * 225 + 1) == 0);
	assert(ft_sqrt(1525 * 1525) == 1525);
	assert(ft_sqrt(1525 * 1525 + 1) == 0);
}