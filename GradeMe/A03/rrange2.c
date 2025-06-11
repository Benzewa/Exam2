#include <stdlib.h>
int *rrange(int start, int end)
{
    int len = 0;
    if (start <= end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;

    int *Ptr = malloc(len * sizeof(int));
    int i = 0;
    int value = end;
    if (start <= end)
    {
        while (i < len)
        {
            Ptr[i] = value;
            i++;
            value--;
        }
    }
    else
    {
        while (i < len)
        {
            Ptr[i] = value;
            i++;
            value++;
        }
    }
    return (Ptr);
}