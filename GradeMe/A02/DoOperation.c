#include <stdlib.h>
#include <stdio.h>
int DoOperation(int Num1, char Op, int Num2)
{
    if (Op == '+')
        return (Num1 + Num2);
    else if (Op == '-')
        return (Num1 - Num2);
    else if (Op == '*')
        return (Num1 * Num2);
    else if (Op == '/')
    {
        if (Num2 == 0)
            return (0);
        return (Num1 / Num2);
    }
    else if (Op == '%')
    {
        if (Num2 == 0)
            return (0);
        return (Num2 % Num1);
    }
    return (0);
}
int main(int Ac, char **Av)
{
    if (Ac == 4)
    {
        printf("%d\n", DoOperation(atoi(Av[1]), Av[2][0], atoi(Av[3])));
    }
}