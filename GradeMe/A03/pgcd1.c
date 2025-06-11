#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int Pgcd(int Num1, int Num2)
{
    int i = 1;
    int Gcd = 0;
    if (Num1 >= Num2)
    {
        while (i <= Num2)
        {
            if (Num1 % i == 0 && Num2 % i == 0)
                Gcd = i;
            i++;
        }
    }
    else
    {
        while (i <= Num1)
        {
            if (Num1 % i == 0 && Num2 % i == 0)
                Gcd = i;
            i++;
        }
    }
    return (Gcd);
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        printf("%d", Pgcd(atoi(Av[1]), atoi(Av[2])));
    printf("\n");
    return (0);
}
