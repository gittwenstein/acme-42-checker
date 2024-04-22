#include <assert.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int n;
    int *p = &n;
	int **q1 = &p;
    int ***q2 = &q1;
    int ****q3 = &q2;
    int *****q4 = &q3;
    int ******q5 = &q4;
    int *******q6 = &q5;
    int ********q7 = &q6;
    int *********q8 = &q7;
    ft_ultimate_ft(q8);
    assert(n == 42);
}