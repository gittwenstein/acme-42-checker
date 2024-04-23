#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(int count, char **args)
{
	char dest[1000];
	char test[1000];
	ft_strcpy(dest, args[1]);
	strcpy(test, args[1]);
	assert
	(
		strcmp(dest, test) == 0
	);
}