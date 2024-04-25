#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main(int count, char **args)
{
	ft_putnbr_base(atoi(args[1]), args[2]);
}