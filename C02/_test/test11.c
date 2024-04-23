#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(int count, char **args)
{
	char input[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(input);
}