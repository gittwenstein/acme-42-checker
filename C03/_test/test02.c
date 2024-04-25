#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

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

	assert(strcmp(ft_strcat(s1, s2), strcat(t1, t2)) == 0);
	assert(strcmp(ft_strcat(s3, s4), strcat(t3, t4)) == 0);
	assert(strcmp(ft_strcat(s4, s5), strcat(t4, s5)) == 0);
	assert(strcmp(ft_strcat(s5, s2), strcat(s5, t2)) == 0);
}