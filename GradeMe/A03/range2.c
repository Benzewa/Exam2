int *ft_range(int start, int end)
{
    int len;
    if (start <= end)
        len = end - start + 1;
    else
        len = start - end + 1;

    int *arrPtr = malloc(len * sizeof(int));
    int i = 0;
    int value = start;

    if (start <= end)
    {
        while (i < len)
        {
            arrPtr[i] = value;
            i++;
            value++;
        }
    }
    else
    {
        while (i < len)
        {
            arrPtr[i] = value;
            i++;
            value--;
        }
    }
    return (arrPtr);
}