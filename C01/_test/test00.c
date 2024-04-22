#include <assert.h>

void ft_ft(int *nbr);

int main(void)
{
	int n;
    int *p = &n;
    ft_ft(p);
    
	assert(n == 42);

	return 0;
}