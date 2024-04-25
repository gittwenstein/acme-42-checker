#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

size_t strlcat(char *dst, const char *src, size_t siz)
{
	char *d = dst;
	const char *s = src;
	size_t n = siz;
	size_t dlen;

	/* Find the end of dst and adjust bytes left but don't go past end */
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = siz - dlen;

	if (n == 0)
		return(dlen + strlen(s));
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return(dlen + (s - src));	/* count does not include NUL */
}

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

	assert(ft_strlcat(s1, s2, atoi(args[1])) == strlcat(t1, t2, atoi(args[1])));
	assert(ft_strlcat(s3, s4, atoi(args[1])) == strlcat(t3, t4, atoi(args[1])));
	assert(ft_strlcat(s4, s5, atoi(args[1])) == strlcat(t4, s5, atoi(args[1])));
	assert(ft_strlcat(s2, s5, atoi(args[1])) == strlcat(t2, s5, atoi(args[1])));
}