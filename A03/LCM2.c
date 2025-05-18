#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

unsigned int Lcm(unsigned int A, unsigned int B)
{
    unsigned int Num;
    if (A == 0 || B == 0)
        return (0);
    if (A > B)
        Num = A;
    else
        Num = B;
    while (1)
    {
        Num++;
        if (Num % A == 0 && Num % B == 0)
            return (Num);
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 3)
        printf("%d", Lcm(atoi(Av[1]), atoi(Av[2])));
    printf("\n");
}
