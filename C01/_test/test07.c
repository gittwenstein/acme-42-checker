#include <assert.h>

void ft_rev_int_tab(int *tab, int size);

int compare_arrays(int *a1, int *a2, int size) {
    while (size--) {
        if (a1[size] != a2[size]) return 1;
    }
    return 0;
}

int main(void) {
    int nums_even_count[] = {1, 2, 3, 4};
    int nums_odd_count[]  = {1, 2, 3, 4, 5};
    int test_rev_even[]   = {5, 4, 3, 2, 1};
    int test_rev_odd[] 	  = {4, 3, 2, 1};
    ft_rev_int_tab(nums_even_count, 4);
    ft_rev_int_tab(nums_odd_count, 5);
    assert(compare_arrays(nums_even_count, test_rev_even, 4));
    assert(compare_arrays(nums_odd_count, test_rev_odd, 5));
}