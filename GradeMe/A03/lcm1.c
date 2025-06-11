#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int Lcm(int Num1, int Num2)
{
    if (!Num1 || !Num2)
        return (0);
    int LCM = 0;
    if (Num1 >= Num2)
        LCM = Num1;
    else
        LCM = Num2;

    while (1)
    {
        if (LCM % Num1 == 0 && LCM % Num2 == 0)
            return (LCM);
        LCM++;
    }
    return (0);
}

int main(int Ac, char **Av)
{
    if (Ac == 3)
        printf("%d", Lcm(atoi(Av[1]), atoi(Av[2])));
    printf("\n");
    return (0);
}