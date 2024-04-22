#include <assert.h>

void ft_sort_int_tab(int *tab, int size);

int compare_arrays(int *a1, int *a2, int size) {
    while (size--) {
        if (a1[size] != a2[size]) return 1;
    }
    return 0;
}

int main(void) {
    int nums_unsorted[] = {3, 42, -42, -1, 2, 10, 7, 13, 99, 1, -101};
    int nums_sorted[] = {-101, -42, -1, 1, 2, 3, 7, 10, 13, 42, 99};
    ft_sort_int_tab(nums_unsorted, sizeof(nums_unsorted) / sizeof(nums_unsorted[0]));
	assert(compare_arrays(nums_unsorted, nums_sorted, 11) == 0);
	
	int empty[] = {};
	int test_empty[] = {};
	ft_sort_int_tab(empty, sizeof(empty) / sizeof(empty[0]));
	assert(compare_arrays(empty, test_empty, 0) == 0);

	int single[] = {21};
	int test_single[] = {21};
	ft_sort_int_tab(single, sizeof(single) / sizeof(single[0]));
	assert(compare_arrays(single, test_single, 1) == 0);
}