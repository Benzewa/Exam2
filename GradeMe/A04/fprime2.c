#include <stdio.h>
#include <stdlib.h>

void fprime(int Num)
{
    int i = 1;
    if (Num == 1)
        printf("1");
    while (Num >= ++i)
    {
        if (Num % i == 0)
        {
            printf("%d", i);
            if (Num == i)
                break;
            printf("*");
            Num = Num / i;
            i = 1;
        }
    }
}

int main(int Ac, char **Av)
{
    if (Ac == 2)
        fprime(atoi(Av[1]));
    printf("\n");
    return (0);
}