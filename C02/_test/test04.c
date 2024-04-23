#include <assert.h>
#include <stdlib.h>

int ft_str_is_lowercase(char *str);

int main(int count, char **args)
{
	int res = ft_str_is_lowercase(args[1]);
	assert
	(
		res == atoi(args[2])
	);
}
