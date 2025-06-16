#include <stdlib.h>
int *ft_range(int start, int end)
{
    int len = 0;
    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    int *nums = malloc(sizeof(int) * len);
    int i = 0;
    if (end >= start)
    {
        while (i < len)
        {
            nums[i] = start;
            i++;
            start++;
        }
    }
    else
    {
        while (i < len)
        {
            nums[i] = end;
            i++;
            end--;
        }
    }
    return (nums);
}