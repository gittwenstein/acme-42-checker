#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(int count, char **args)
{
	char s1[100] = "Hello, world.";
	char s2[100] = "Salve, mundi.";
	char t1[100] = "Hello, world.";
	char t2[100] = "Salve, mundi.";
	
	char s3[100] = "hello";
	char s4[100] = ", world";
	char t3[100] = "hello";
	char t4[100] = ", world";
	
	char s5[100] = "";

	assert(strcmp(ft_strncat(s1, s2, atoi(args[1])), strncat(t1, t2, atoi(args[1]))) == 0);
	assert(strcmp(ft_strncat(s3, s4, atoi(args[1])), strncat(t3, t4, atoi(args[1]))) == 0);
	assert(strcmp(ft_strncat(s4, s5, atoi(args[1])), strncat(t4, s5, atoi(args[1]))) == 0);
	assert(strcmp(ft_strncat(s5, s2, atoi(args[1])), strncat(s5, t2, atoi(args[1]))) == 0);
}