#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str);

int main(int count, char **args)
{
	switch (atoi(args[1]))
	{
		case 0:	ft_putstr_non_printable("Coucou\ntu vas bien ?"); break;
		case 1: ft_putstr_non_printable("pokusko\n"); break;
		case 2: ft_putstr_non_printable("pok\tusko\n"); break;
		case 3: ft_putstr_non_printable("pok\tus\x7fko\n"); break;
		case 4: ft_putstr_non_printable("\x05pok\tus\x7fko\n"); break;
		case 5: ft_putstr_non_printable("pok\t\x17us\x7fko\n"); break;
		case 6: ft_putstr_non_printable("po\x1fk\t\x17us\x7fko\n"); break;
	}
}