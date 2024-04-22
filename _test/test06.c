#include <assert.h>

int ft_strlen(char *str);

int main(void)
{
	char *test = (char *)"Salve, mundi!\n";
    assert(ft_strlen(test) == 14);
}