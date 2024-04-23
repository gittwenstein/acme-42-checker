#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int strlcpy(char *dst, const char *src, unsigned int n) {
	char *p = dst;

	if (n != 0) {
		for (; --n != 0; p++, src++) {
			if ((*p = *src) == '\0')
				return p - dst;
		}
		*p = '\0';
	}
	return (p - dst) + strlen(src);
}

int main(int count, char **args)
{
	char dest[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Pellentesque arcu.					";
	int len1 = ft_strlcpy(dest, args[1], atoi(args[2]));
	char test[] = "Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Pellentesque arcu.					";
	int len2 = strlcpy(test, args[1], atoi(args[2]));

	// printf("\nlen1 == %d", len1);
	// printf("\nlen2 == %d", len2);

	assert(len1 == len2);
	assert
	(
		strcmp(dest, test) == 0
	);
}