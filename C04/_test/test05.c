#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int main(int count, char **args)
{
	assert(ft_atoi_base("ff", "0123456789abcdef") == 255);
	assert(ft_atoi_base("-42", " ") == 0);
	assert(ft_atoi_base("ff", "") == 0);
	assert(ft_atoi_base("-42", "0123456789") == -42);
	assert(ft_atoi_base("1001", "11") == 0);
	assert(ft_atoi_base("", "01") == 0);
	assert(ft_atoi_base("1001", "01") == 9);
}