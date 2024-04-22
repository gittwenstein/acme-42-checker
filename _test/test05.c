#include <assert.h>

void ft_putstr(char *str);

int main(void)
{
	char *test = (char *)"\"This sentence has five words.\"\t";
    ft_putstr(test);
}