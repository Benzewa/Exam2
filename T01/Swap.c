void ft_swap(int *a, int *b);
#include <stdio.h>
int main()
{
    int x = 10, y = 50;
    int *Ptrx = &x;
    int *Ptry = &y;
    printf("%d \t %d \n", x, y);
    ft_swap(Ptrx, Ptry);
    printf("%d \t %d \n", x, y);
}
void ft_swap(int *a, int *b)
{
    int Temp;
    Temp = *a;
    *a = *b;
    *b = Temp;
}