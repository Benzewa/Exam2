void ft_swap(int *a, int *b)
{
    int Temp = 0;
    Temp = *a;
    *a = *b;
    *b = Temp;
}

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 5;

    int *ptrx = &x;
    int *ptry = &y;

    printf("%d ", x);
    printf("%d ", y);

    ft_swap(ptrx, ptry);

    printf("%d ", x);
    printf("%d ", y);
}
