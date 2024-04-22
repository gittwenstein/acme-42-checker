#include <assert.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int div, mod;
    int a = 26;
    int b = 6;
    ft_div_mod(a, b, &div, &mod);
    assert(div == 4);
	assert(mod == 2);
}