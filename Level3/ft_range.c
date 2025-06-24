#include <stdlib.h>
int *ft_range(int start, int end)
{
    int Len = 0;
    if (end >= start)
        Len = end - start + 1;
    else
        Len = start - end + 1;
    int i = 0;
    int *ptr = malloc(sizeof(int) * Len);
    if (end >= start)
    {
        while (i < Len)
        {
            ptr[i] = start;
            start = start + 1;
            i++;
        }
    }
    else
    {
        while (i < Len)
        {
            ptr[i] = start;
            start = start - 1;
            i++;
        }
    }
    return (ptr);
}
// pass myself