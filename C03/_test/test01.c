#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(int count, char **args)
{
	char s1[] = "Hello, world.";
	char s2[] = "Salve, mundi.";
	char s3[] = "hello";
	char s4[] = " hello ";
	char s5[] = "";

	assert(ft_strncmp(s1, s1, atoi(args[1])) == strncmp(s1, s1, atoi(args[1])));
	assert(ft_strncmp(s1, s2, atoi(args[1])) == strncmp(s1, s2, atoi(args[1])));
	assert(ft_strncmp(s1, s3, atoi(args[1])) == strncmp(s1, s3, atoi(args[1])));
	assert(ft_strncmp(s1, s4, atoi(args[1])) == strncmp(s1, s4, atoi(args[1])));
	assert(ft_strncmp(s1, s5, atoi(args[1])) == strncmp(s1, s5, atoi(args[1])));
	assert(ft_strncmp(s3, s4, atoi(args[1])) == strncmp(s3, s4, atoi(args[1])));
	assert(ft_strncmp(s5, s1, atoi(args[1])) == strncmp(s5, s1, atoi(args[1])));
}