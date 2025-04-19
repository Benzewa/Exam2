#include <stdlib.h>
#include <stdio.h>
int ft_abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}
int *ft_range(int start, int end)
{
    int i = 0;
    int l = ft_abs(end - start) + 1;
    int *p = malloc(l * sizeof(*p));
    if (!p)
    {
        return NULL;
    }
    while (l > i)
    {
        p[i] = start;
        if (end > start)
            start++;
        else
            start--;
        i++;
    }
    return (p);
}
int main()
{
    int s = -4;
    int e = 3;
    int *r = ft_range(s, e);

    int *current = r;
    while (1)
    {
        printf("%d\n", *current);
        if (*current == e) // Stop when the current value equals 'end'
            break;
        current++;
    }
}