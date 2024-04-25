#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(int count, char **args)
{
	char s1[] = "Hello, world.";
	char s2[] = "Salve, mundi.";
	char s3[] = "hello";
	char s4[] = " hello ";
	char s5[] = "";

	assert(ft_strcmp(s1, s1) == strcmp(s1, s1));
	assert(ft_strcmp(s1, s2) == strcmp(s1, s2));
	assert(ft_strcmp(s1, s3) == strcmp(s1, s3));
	assert(ft_strcmp(s1, s4) == strcmp(s1, s4));
	assert(ft_strcmp(s1, s5) == strcmp(s1, s5));
	assert(ft_strcmp(s3, s4) == strcmp(s3, s4));
	assert(ft_strcmp(s5, s1) == strcmp(s5, s1));
}