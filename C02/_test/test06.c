#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int main(int count, char **args)
{
	int res = ft_str_is_printable("\x01\x05\x0a\x15");
	assert(res == 0);
	res = ft_str_is_printable("Hello,\tthere!");
	assert(res == 0);
	res = ft_str_is_printable("Hello\x7fthere!");
	assert(res == 0);
	res = ft_str_is_printable("Hello\x1fthere!");
	assert(res == 0);
	res = ft_str_is_printable("Hello, there!\n");
	assert(res == 0);
	
	res = ft_str_is_printable("");
	assert(res == 1);
	res = ft_str_is_printable("Hello, there!");
	assert(res == 1);
	res = ft_str_is_printable("**42**?\\!");
	assert(res == 1);
	res = ft_str_is_printable("");
	assert(res == 1);
}
