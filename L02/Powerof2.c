#include <stdio.h>

int is_power_of_2(unsigned int n)
{
    if (n == 0)
        return 0;
    return (n & (n - 1)) == 0;
}

int main()
{
    printf("%d\n", is_power_of_2(8));  // Should print 1 since 8 is a power of 2
    printf("%d\n", is_power_of_2(10)); // Should print 0 since 10 is not a power of 2
}
