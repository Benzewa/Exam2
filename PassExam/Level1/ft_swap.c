void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
// #include <stdio.h>
// int main()
// {
//     int x = 50;
//     int y = 10;

//     int *ptrx = &x;
//     int *ptry = &y;

//     printf("%d ", x);
//     printf("%d\n", y);

//     ft_swap(ptrx, ptry);

//     printf("%d ", x);
//     printf("%d\n", y);
// }

// pass