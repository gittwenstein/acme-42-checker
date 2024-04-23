#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(int count, char **args)
{
	char dest[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Pellentesque arcu.                    ";
	ft_strncpy(dest, args[1], atoi(args[2]));
	char test[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Pellentesque arcu.                    ";
	strncpy(test, args[1], atoi(args[2]));
	assert
	(
		strcmp(dest, test) == 0
	);
}