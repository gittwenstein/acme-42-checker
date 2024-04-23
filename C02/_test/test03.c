#include <assert.h>
#include <stdlib.h>

int ft_str_is_numeric(char *str);

int main(int count, char **args)
{
	int res = ft_str_is_numeric(args[1]);
	assert
	(
		res == atoi(args[2])
	);
}
