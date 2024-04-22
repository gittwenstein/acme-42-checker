#include <assert.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a = 26;
    int b = 6;
	ft_ultimate_div_mod(&a, &b);
	assert(a == 26 / 6);
	assert(b == 26 % 6);
}