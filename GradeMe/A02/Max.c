int max(int *Tab, unsigned int Len)
{
    if (Len == 0)
        return (0);
    int i = 0;
    int Maximum = Tab[0];

    while (i < Len)
    {
        if (Tab[i] > Maximum)
            Maximum = Tab[i];
        i++;
    }
    return (Maximum);
}
#include <stdio.h>
int main()
{
    int Arr[5] = {1, 2, 3, 4, 5};
    printf("%d\n", max(Arr, 5));
}