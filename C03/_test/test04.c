#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(int count, char **args)
{
	char h1[] = "Hello, world. == Salve, mundi.";
	char n1[] = "needle";
	char n2[] = "hell";
	char n3[] = "Hell";
	char n4[] = " mund";
	char n5[] = "mund";
	
	// printf("\nog: %s\nft: %s\n", strstr(h1, n1), ft_strstr(h1, n1));

	assert(ft_strstr(h1, n1) == strstr(h1, n1));
	assert(ft_strstr(h1, n2) == strstr(h1, n2));
	assert(strcmp(ft_strstr(h1, n3), strstr(h1, n3)) == 0);
	assert(strcmp(ft_strstr(h1, n4), strstr(h1, n4)) == 0);
	assert(ft_strstr(h1, n5) == strstr(h1, n5));
}