#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str);

int main(int count, char **args)
{
	char s1[] = "Hello, world.";
	char s2[] = "	Salve, mundi!	.	";
	char s3[] = "hello";
	char s4[] = " hello ";
	char s5[] = "";

	assert(ft_strlen(s1) == 13);
	assert(ft_strlen(s2) == 17);
	assert(ft_strlen(s3) == 5);
	assert(ft_strlen(s4) == 7);
	assert(ft_strlen(s5) == 0);
}
