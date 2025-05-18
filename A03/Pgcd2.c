#include <stdio.h>
#include <stdlib.h>
// calculate the Greatest common divisor

void Pgcd(int A, int B)
{
    if (A > 0 && B > 0)
    {
        while (A != B)
        {
            if (A > B)
                A = A - B;
            else
                B = B - A;
        }
        printf("%d", A);
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        Pgcd(atoi(Av[1]), atoi(Av[2]));
    printf("\n");
    return (0);
}