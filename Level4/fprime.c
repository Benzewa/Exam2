#include <stdlib.h>
#include <stdio.h>
void fprime(int Num)
{
    int i = 2;
    if (Num == 1)
        printf("1");
    while (Num > 1)
    {
        if (Num % i == 0)
        {
            printf("%d", i);
            Num = Num / i;
            if (Num > 1)
                printf("*");
        }
        else
            i++;
    }
}
int main(int Ac, char **Av)
{
    if (Ac == 2)
        fprime(atoi(Av[1]));
    printf("\n");
}
// Passed Myself