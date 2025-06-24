#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void do_op(int Num1, char Op, char Num2)
{
    if (Op == '+')
        printf("%d", Num1 + Num2);
    else if (Op == '-')
        printf("%d", Num1 - Num2);
    else if (Op == '*')
        printf("%d", Num1 * Num2);
    else if (Op == '/')
        printf("%d", Num1 / Num2);
    else if (Op == '%')
        printf("%d", Num1 % Num2);
}
int main(int Ac, char **Av)
{
    if (Ac == 4)
        do_op(atoi(Av[1]), Av[2][0], atoi(Av[3]));
    printf("\n");
    return (0);
}
// Passed Myself