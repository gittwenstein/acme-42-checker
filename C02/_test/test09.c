#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(int count, char **args)
{
	// printf("\n%s\n", args[2]);
	// printf("%s\n", ft_strcapitalize(args[1]));
	assert
	(
		strcmp(ft_strcapitalize(args[1]), args[2]) == 0
	);
}
