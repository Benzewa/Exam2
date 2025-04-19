// max.c
#include <stdio.h>

int max(int *tab, unsigned int len)
{
    if (len == 0 || tab == 0)
        return 0;

    int max_val = tab[0];
    for (unsigned int i = 1; i < len; i++)
    {
        if (tab[i] > max_val)
            max_val = tab[i];
    }
    return max_val;
}

int main(void)
{
    int numbers1[] = {5, 12, 3, 19, 7};
    unsigned int len1 = sizeof(numbers1) / sizeof(numbers1[0]);
    printf("Max value (Test 1): %d\n", max(numbers1, len1)); // Should print 19

    int numbers2[] = {-10, -20, -3, -4};
    unsigned int len2 = sizeof(numbers2) / sizeof(numbers2[0]);
    printf("Max value (Test 2): %d\n", max(numbers2, len2)); // Should print -3

    int empty[] = {};
    printf("Max value (Empty array): %d\n", max(empty, 0)); // Should print 0

    return 0;
}
