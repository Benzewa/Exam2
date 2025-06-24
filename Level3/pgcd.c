#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void pgcd(int Num1, int Num2)
{
    int Gcd = 0;
    int i = 1;
    while (i <= Num1 && i <= Num2)
    {
        if (Num1 % i == 0 && Num2 % i == 0)
            Gcd = i;
        i++;
    }
    printf("%d", Gcd);
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        pgcd(atoi(Av[1]), atoi(Av[2]));
    printf("\n");
}
// passed Myself