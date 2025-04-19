#include <stdio.h>
#include <stdlib.h>

void DoOp(int a, char c, int b)
{
    if (c == '+')
        printf("%d\n", a + b);
    else if (c == '-')
        printf("%d\n", a - b);
    else if (c == '*')
        printf("%d\n", a * b);
    else if (c == '/')
    {
        if (b != 0)
            printf("%d\n", a / b);
        else
            printf("cannot Divide By zero");
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
        DoOp(atoi(av[1]), av[2][0], atoi(av[3]));
    // Or DoOp(atoi(av[1]), *av[2], atoi(av[3]));
    else
        printf("\n");
    return (0);
}