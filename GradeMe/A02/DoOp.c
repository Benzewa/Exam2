#include <unistd.h>
#include <stdlib.h> //atoi
#include <stdio.h>

int main(int Ac, char **Av)
{
    char Operator = Av[2][0];
    if (Ac == 4)
    {
        if (Operator == '+')
            printf("%d\n", (atoi(Av[1]) + atoi(Av[3])));
        else if (Operator == '-')
            printf("%d\n", (atoi(Av[1]) - atoi(Av[3])));
        else if (Operator == '*')
            printf("%d\n", (atoi(Av[1]) * atoi(Av[3])));
        else if (Operator == '/')
        {
            if (atoi(Av[3]) != '0')
                printf("%d\n", (atoi(Av[1]) / atoi(Av[3])));
        }
    }
    else
        printf("\n");
    return (0);
}