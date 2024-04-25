#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str);

int main(int count, char **args)
{
	printf("%d", ft_atoi(args[1]));
}
