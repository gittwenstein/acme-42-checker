#include <assert.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a = 2;
    int b = 3;
    ft_swap(&a, &b);
    assert(a == 3 && b == 2);
}