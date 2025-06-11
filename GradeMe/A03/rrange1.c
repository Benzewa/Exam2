#include <stdlib.h>
int *rrange(int start, int end)
{
    int Len;
    if (start <= end)
        Len = (end - start) + 1;
    else
        Len = (start - end) + 1;

    int *Ptr = malloc(Len * sizeof(int));
    int i = 0;
    int value = end;

    if (start <= end)
    {
        while (i < Len)
        {
            Ptr[i] = value;
            i++;
            value--;
        }
    }
    else
    {
        while (i < Len)
        {
            Ptr[i] = value;
            i++;
            value++;
        }
    }
    return (Ptr);
}